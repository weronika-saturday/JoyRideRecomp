#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8257661C"))) PPC_WEAK_FUNC(sub_8257661C);
PPC_FUNC_IMPL(__imp__sub_8257661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576620"))) PPC_WEAK_FUNC(sub_82576620);
PPC_FUNC_IMPL(__imp__sub_82576620) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82576670
	if (cr6.eq) goto loc_82576670;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82576670:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82576684"))) PPC_WEAK_FUNC(sub_82576684);
PPC_FUNC_IMPL(__imp__sub_82576684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576688"))) PPC_WEAK_FUNC(sub_82576688);
PPC_FUNC_IMPL(__imp__sub_82576688) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825766c8
	if (!cr6.eq) goto loc_825766C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825766C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825766D8"))) PPC_WEAK_FUNC(sub_825766D8);
PPC_FUNC_IMPL(__imp__sub_825766D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825766DC"))) PPC_WEAK_FUNC(sub_825766DC);
PPC_FUNC_IMPL(__imp__sub_825766DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825766E0"))) PPC_WEAK_FUNC(sub_825766E0);
PPC_FUNC_IMPL(__imp__sub_825766E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82576778
	if (cr6.lt) goto loc_82576778;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82576778
	if (!cr6.lt) goto loc_82576778;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576778
	if (cr6.eq) goto loc_82576778;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8257677c
	if (!cr6.eq) goto loc_8257677C;
loc_82576778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257677C:
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

__attribute__((alias("__imp__sub_82576790"))) PPC_WEAK_FUNC(sub_82576790);
PPC_FUNC_IMPL(__imp__sub_82576790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576794"))) PPC_WEAK_FUNC(sub_82576794);
PPC_FUNC_IMPL(__imp__sub_82576794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576798"))) PPC_WEAK_FUNC(sub_82576798);
PPC_FUNC_IMPL(__imp__sub_82576798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82576878
	if (cr6.eq) goto loc_82576878;
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// divw r11,r3,r28
	r11.s32 = ctx.r3.s32 / r28.s32;
	// li r30,0
	r30.s64 = 0;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf. r28,r10,r3
	r28.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x82576810
	if (!cr0.gt) goto loc_82576810;
loc_825767F0:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x825768b8
	if (cr6.eq) goto loc_825768B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x82578798
	sub_82578798(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x825767f0
	if (cr6.lt) goto loc_825767F0;
loc_82576810:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x825768b8
	if (cr6.eq) goto loc_825768B8;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// bl 0x82574ca0
	sub_82574CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82575cf8
	sub_82575CF8(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r5,r5,-20288
	ctx.r5.s64 = ctx.r5.s64 + -20288;
	// addi r4,r4,-20292
	ctx.r4.s64 = ctx.r4.s64 + -20292;
	// addi r3,r3,16564
	ctx.r3.s64 = ctx.r3.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,155(r31)
	PPC_STORE_U8(r31.u32 + 155, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82576878:
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x825768b0
	if (cr6.eq) goto loc_825768B0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-20288
	ctx.r5.s64 = r11.s64 + -20288;
	// addi r4,r10,-20292
	ctx.r4.s64 = ctx.r10.s64 + -20292;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,155(r31)
	PPC_STORE_U8(r31.u32 + 155, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_825768B0:
	// li r11,1
	r11.s64 = 1;
	// stb r11,155(r31)
	PPC_STORE_U8(r31.u32 + 155, r11.u8);
loc_825768B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825768BC"))) PPC_WEAK_FUNC(sub_825768BC);
PPC_FUNC_IMPL(__imp__sub_825768BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825768C0"))) PPC_WEAK_FUNC(sub_825768C0);
PPC_FUNC_IMPL(__imp__sub_825768C0) {
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
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82576908
	if (cr6.eq) goto loc_82576908;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x8257690c
	goto loc_8257690C;
loc_82576908:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_8257690C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r8,r11,13435
	ctx.r8.s64 = r11.s64 + 13435;
	// addi r5,r9,-19960
	ctx.r5.s64 = ctx.r9.s64 + -19960;
	// addi r4,r4,-19924
	ctx.r4.s64 = ctx.r4.s64 + -19924;
	// addi r3,r3,16564
	ctx.r3.s64 = ctx.r3.s64 + 16564;
	// bne cr6,0x82576944
	if (!cr6.eq) goto loc_82576944;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r10,-19932
	ctx.r7.s64 = ctx.r10.s64 + -19932;
	// b 0x8257694c
	goto loc_8257694C;
loc_82576944:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r10,-19832
	ctx.r7.s64 = ctx.r10.s64 + -19832;
loc_8257694C:
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
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

__attribute__((alias("__imp__sub_82576964"))) PPC_WEAK_FUNC(sub_82576964);
PPC_FUNC_IMPL(__imp__sub_82576964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576968"))) PPC_WEAK_FUNC(sub_82576968);
PPC_FUNC_IMPL(__imp__sub_82576968) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82572a60
	sub_82572A60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825769b8
	if (cr6.eq) goto loc_825769B8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,154(r11)
	PPC_STORE_U8(r11.u32 + 154, ctx.r10.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x825731b8
	sub_825731B8(ctx, base);
	// b 0x82576a00
	goto loc_82576A00;
loc_825769B8:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576a00
	if (cr6.eq) goto loc_82576A00;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825769f8
	if (cr6.eq) goto loc_825769F8;
	// bl 0x82574ca0
	sub_82574CA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82575bc8
	sub_82575BC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r11,155(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 155);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576a00
	if (cr6.eq) goto loc_82576A00;
	// bl 0x82576798
	sub_82576798(ctx, base);
	// b 0x82576a00
	goto loc_82576A00;
loc_825769F8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, r11.u8);
loc_82576A00:
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

__attribute__((alias("__imp__sub_82576A14"))) PPC_WEAK_FUNC(sub_82576A14);
PPC_FUNC_IMPL(__imp__sub_82576A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576A18"))) PPC_WEAK_FUNC(sub_82576A18);
PPC_FUNC_IMPL(__imp__sub_82576A18) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82576aec
	if (cr6.lt) goto loc_82576AEC;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,-1
	r28.s64 = -1;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825766e0
	sub_825766E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576a7c
	if (cr6.eq) goto loc_82576A7C;
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,52(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r29,56(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r28,60(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_82576A7C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r11,16
	r11.s64 = 16;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmpldi cr6,r25,0
	cr6.compare<uint64_t>(r25.u64, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82576ad4
	if (cr6.eq) goto loc_82576AD4;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e945c
	return;
loc_82576AD4:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82576AEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82576AF0"))) PPC_WEAK_FUNC(sub_82576AF0);
PPC_FUNC_IMPL(__imp__sub_82576AF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82576AF4"))) PPC_WEAK_FUNC(sub_82576AF4);
PPC_FUNC_IMPL(__imp__sub_82576AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576AF8"))) PPC_WEAK_FUNC(sub_82576AF8);
PPC_FUNC_IMPL(__imp__sub_82576AF8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825740a8
	sub_825740A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576b58
	if (cr6.eq) goto loc_82576B58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82575c88
	sub_82575C88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576b58
	if (cr6.eq) goto loc_82576B58;
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82574128
	sub_82574128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a18
	sub_82576A18(ctx, base);
loc_82576B58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82576B5C"))) PPC_WEAK_FUNC(sub_82576B5C);
PPC_FUNC_IMPL(__imp__sub_82576B5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82576B60"))) PPC_WEAK_FUNC(sub_82576B60);
PPC_FUNC_IMPL(__imp__sub_82576B60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825740a8
	sub_825740A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576bc0
	if (cr6.eq) goto loc_82576BC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82575c88
	sub_82575C88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576bc0
	if (cr6.eq) goto loc_82576BC0;
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82574128
	sub_82574128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a18
	sub_82576A18(ctx, base);
loc_82576BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82576BC4"))) PPC_WEAK_FUNC(sub_82576BC4);
PPC_FUNC_IMPL(__imp__sub_82576BC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82576BC8"))) PPC_WEAK_FUNC(sub_82576BC8);
PPC_FUNC_IMPL(__imp__sub_82576BC8) {
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
	// bl 0x82575c88
	sub_82575C88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576c14
	if (cr6.eq) goto loc_82576C14;
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82574128
	sub_82574128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a18
	sub_82576A18(ctx, base);
loc_82576C14:
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

__attribute__((alias("__imp__sub_82576C28"))) PPC_WEAK_FUNC(sub_82576C28);
PPC_FUNC_IMPL(__imp__sub_82576C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576C2C"))) PPC_WEAK_FUNC(sub_82576C2C);
PPC_FUNC_IMPL(__imp__sub_82576C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576C30"))) PPC_WEAK_FUNC(sub_82576C30);
PPC_FUNC_IMPL(__imp__sub_82576C30) {
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
	// bl 0x82575c88
	sub_82575C88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576c7c
	if (cr6.eq) goto loc_82576C7C;
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82574128
	sub_82574128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a18
	sub_82576A18(ctx, base);
loc_82576C7C:
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

__attribute__((alias("__imp__sub_82576C90"))) PPC_WEAK_FUNC(sub_82576C90);
PPC_FUNC_IMPL(__imp__sub_82576C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576C94"))) PPC_WEAK_FUNC(sub_82576C94);
PPC_FUNC_IMPL(__imp__sub_82576C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576C98"))) PPC_WEAK_FUNC(sub_82576C98);
PPC_FUNC_IMPL(__imp__sub_82576C98) {
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
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82576ce4
	if (cr6.eq) goto loc_82576CE4;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x82576ce8
	goto loc_82576CE8;
loc_82576CE4:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82576CE8:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82576d00
	if (cr6.eq) goto loc_82576D00;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r8,r11,25852
	ctx.r8.s64 = r11.s64 + 25852;
	// b 0x82576d08
	goto loc_82576D08;
loc_82576D00:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r8,r11,-12536
	ctx.r8.s64 = r11.s64 + -12536;
loc_82576D08:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r7,r11,-19824
	ctx.r7.s64 = r11.s64 + -19824;
	// addi r5,r10,-19960
	ctx.r5.s64 = ctx.r10.s64 + -19960;
	// addi r4,r9,-19924
	ctx.r4.s64 = ctx.r9.s64 + -19924;
	// addi r3,r3,16564
	ctx.r3.s64 = ctx.r3.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825756e0
	sub_825756E0(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82576d64
	if (cr6.eq) goto loc_82576D64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825793f0
	sub_825793F0(ctx, base);
loc_82576D64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82576D68"))) PPC_WEAK_FUNC(sub_82576D68);
PPC_FUNC_IMPL(__imp__sub_82576D68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82576D6C"))) PPC_WEAK_FUNC(sub_82576D6C);
PPC_FUNC_IMPL(__imp__sub_82576D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576D70"))) PPC_WEAK_FUNC(sub_82576D70);
PPC_FUNC_IMPL(__imp__sub_82576D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82576c98
	sub_82576C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576D78"))) PPC_WEAK_FUNC(sub_82576D78);
PPC_FUNC_IMPL(__imp__sub_82576D78) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825797d8
	sub_825797D8(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82576DCC"))) PPC_WEAK_FUNC(sub_82576DCC);
PPC_FUNC_IMPL(__imp__sub_82576DCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576DD0"))) PPC_WEAK_FUNC(sub_82576DD0);
PPC_FUNC_IMPL(__imp__sub_82576DD0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82576e08
	if (cr6.eq) goto loc_82576E08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82576e0c
	if (!cr6.eq) goto loc_82576E0C;
loc_82576E08:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82576E0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// bl 0x825705f8
	sub_825705F8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825797d8
	sub_825797D8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r29.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82576E8C"))) PPC_WEAK_FUNC(sub_82576E8C);
PPC_FUNC_IMPL(__imp__sub_82576E8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82576E90"))) PPC_WEAK_FUNC(sub_82576E90);
PPC_FUNC_IMPL(__imp__sub_82576E90) {
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
	// li r11,24
	r11.s64 = 24;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82576ec8
	if (cr6.gt) goto loc_82576EC8;
	// addi r28,r1,84
	r28.s64 = ctx.r1.s64 + 84;
loc_82576EC8:
	// li r11,16
	r11.s64 = 16;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82576fcc
	if (cr6.eq) goto loc_82576FCC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82576fcc
	if (cr6.eq) goto loc_82576FCC;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(r31.u32, 24, xer);
	// bne cr6,0x82576fcc
	if (!cr6.eq) goto loc_82576FCC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x82576fcc
	if (!cr6.eq) goto loc_82576FCC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82576688
	sub_82576688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82576fd8
	if (cr6.eq) goto loc_82576FD8;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r10,-19916
	ctx.r7.s64 = ctx.r10.s64 + -19916;
	// addi r5,r9,-19960
	ctx.r5.s64 = ctx.r9.s64 + -19960;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r8,18944
	ctx.r4.s64 = ctx.r8.s64 + 18944;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r3,r3,16564
	ctx.r3.s64 = ctx.r3.s64 + 16564;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82576fd8
	if (!cr6.eq) goto loc_82576FD8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9464
	return;
loc_82576FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82576FD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82576FDC"))) PPC_WEAK_FUNC(sub_82576FDC);
PPC_FUNC_IMPL(__imp__sub_82576FDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82576FE0"))) PPC_WEAK_FUNC(sub_82576FE0);
PPC_FUNC_IMPL(__imp__sub_82576FE0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578f70
	sub_82578F70(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257715c
	if (!cr6.eq) goto loc_8257715C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82578ee0
	sub_82578EE0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825770d4
	if (cr6.eq) goto loc_825770D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82577098:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82577098
	if (!cr6.eq) goto loc_82577098;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825770D4:
	// std r29,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r29.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825790d0
	sub_825790D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82578928
	sub_82578928(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r28,13
	ctx.r3.s64 = r28.s64 + 13;
	// bl 0x825799e8
	sub_825799E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82579858
	sub_82579858(ctx, base);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82577128
	if (cr6.lt) goto loc_82577128;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82577128:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r28.u32);
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, r30.u8);
	// blt cr6,0x82577150
	if (cr6.lt) goto loc_82577150;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82577150:
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r30.u8);
loc_8257715C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82577190
	if (!cr6.eq) goto loc_82577190;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x825771ac
	goto loc_825771AC;
loc_82577190:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825771AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576a18
	sub_82576A18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825753f8
	sub_825753F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82577200
	if (cr6.eq) goto loc_82577200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574ca0
	sub_82574CA0(ctx, base);
loc_82577200:
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8257720C"))) PPC_WEAK_FUNC(sub_8257720C);
PPC_FUNC_IMPL(__imp__sub_8257720C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82577210"))) PPC_WEAK_FUNC(sub_82577210);
PPC_FUNC_IMPL(__imp__sub_82577210) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82576fe0
	sub_82576FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577218"))) PPC_WEAK_FUNC(sub_82577218);
PPC_FUNC_IMPL(__imp__sub_82577218) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82576dd0
	sub_82576DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577224"))) PPC_WEAK_FUNC(sub_82577224);
PPC_FUNC_IMPL(__imp__sub_82577224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577228"))) PPC_WEAK_FUNC(sub_82577228);
PPC_FUNC_IMPL(__imp__sub_82577228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,154(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82577264
	if (cr6.eq) goto loc_82577264;
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, r11.u8);
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82577264:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82577278:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574a98
	sub_82574A98(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82577278
	if (!cr6.eq) goto loc_82577278;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825772b8
	if (cr6.eq) goto loc_825772B8;
	// rotlwi r30,r10,0
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_825772A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578798
	sub_82578798(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x825772a4
	if (!cr6.eq) goto loc_825772A4;
loc_825772B8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82571b88
	sub_82571B88(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825772f0
	if (!cr6.gt) goto loc_825772F0;
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x825772f0
	if (cr6.gt) goto loc_825772F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82573cb8
	sub_82573CB8(ctx, base);
loc_825772F0:
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82577320
	if (cr6.eq) goto loc_82577320;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82577320
	if (cr6.eq) goto loc_82577320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82575db8
	sub_82575DB8(ctx, base);
loc_82577320:
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

__attribute__((alias("__imp__sub_82577338"))) PPC_WEAK_FUNC(sub_82577338);
PPC_FUNC_IMPL(__imp__sub_82577338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257733C"))) PPC_WEAK_FUNC(sub_8257733C);
PPC_FUNC_IMPL(__imp__sub_8257733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577340"))) PPC_WEAK_FUNC(sub_82577340);
PPC_FUNC_IMPL(__imp__sub_82577340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
}

__attribute__((alias("__imp__sub_82577350"))) PPC_WEAK_FUNC(sub_82577350);
PPC_FUNC_IMPL(__imp__sub_82577350) {
	PPC_FUNC_PROLOGUE();
	// b 0x82576dd0
	sub_82576DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577354"))) PPC_WEAK_FUNC(sub_82577354);
PPC_FUNC_IMPL(__imp__sub_82577354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577358"))) PPC_WEAK_FUNC(sub_82577358);
PPC_FUNC_IMPL(__imp__sub_82577358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82577388
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82577388;
	// bdzf 4*cr6+eq,0x82577390
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82577390;
	// bdzf 4*cr6+eq,0x82577398
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82577398;
	// bne cr6,0x8257739c
	if (!cr6.eq) goto loc_8257739C;
	// b 0x82576e90
	sub_82576E90(ctx, base);
	return;
loc_82577388:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82572d28
	sub_82572D28(ctx, base);
	return;
loc_82577390:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8256f3a0
	sub_8256F3A0(ctx, base);
	return;
loc_82577398:
	// b 0x825765a0
	sub_825765A0(ctx, base);
	return;
loc_8257739C:
	// b 0x82575348
	sub_82575348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825773A0"))) PPC_WEAK_FUNC(sub_825773A0);
PPC_FUNC_IMPL(__imp__sub_825773A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825773A4"))) PPC_WEAK_FUNC(sub_825773A4);
PPC_FUNC_IMPL(__imp__sub_825773A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825773A8"))) PPC_WEAK_FUNC(sub_825773A8);
PPC_FUNC_IMPL(__imp__sub_825773A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// bgt cr6,0x825774d8
	if (cr6.gt) goto loc_825774D8;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r27,-31934
	r27.s64 = -2092826624;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r28,22264(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 22264);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r8,r24,24
	ctx.r8.u64 = r24.u32 & 0xFF;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// bl 0x82570f08
	sub_82570F08(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82577578
	if (!cr6.eq) goto loc_82577578;
loc_8257744C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82605c60
	sub_82605C60(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82574a98
	sub_82574A98(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r28,22264(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 22264);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r8,r24,24
	ctx.r8.u64 = r24.u32 & 0xFF;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// bl 0x82570f08
	sub_82570F08(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8257744c
	if (cr6.eq) goto loc_8257744C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_825774D8:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82577578
	if (cr6.gt) goto loc_82577578;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82577518
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82577518;
	// bdzf 4*cr6+eq,0x82577534
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82577534;
	// bdzf 4*cr6+eq,0x82577550
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82577550;
	// bne cr6,0x82577568
	if (!cr6.eq) goto loc_82577568;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82576e90
	sub_82576E90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_82577518:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82572d28
	sub_82572D28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_82577534:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8256f3a0
	sub_8256F3A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_82577550:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825765a0
	sub_825765A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_82577568:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82575348
	sub_82575348(ctx, base);
loc_82577578:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8257757C"))) PPC_WEAK_FUNC(sub_8257757C);
PPC_FUNC_IMPL(__imp__sub_8257757C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82577580"))) PPC_WEAK_FUNC(sub_82577580);
PPC_FUNC_IMPL(__imp__sub_82577580) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825775ac
	if (!cr6.eq) goto loc_825775AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_825775AC:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825775c4
	if (cr6.eq) goto loc_825775C4;
	// bl 0x82574600
	sub_82574600(ctx, base);
	// b 0x825775c8
	goto loc_825775C8;
loc_825775C4:
	// bl 0x82574598
	sub_82574598(ctx, base);
loc_825775C8:
	// li r30,0
	r30.s64 = 0;
	// li r11,3
	r11.s64 = 3;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r30.u8);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stb r28,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r28.u8);
	// li r29,1
	r29.s64 = 1;
	// ori r8,r9,12
	ctx.r8.u64 = ctx.r9.u64 | 12;
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r29.u8);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// beq cr6,0x82577630
	if (cr6.eq) goto loc_82577630;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82577634
	if (!cr6.eq) goto loc_82577634;
loc_82577630:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82577634:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250e2a0
	sub_8250E2A0(ctx, base);
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82577668
	if (cr6.lt) goto loc_82577668;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82577668
	if (!cr6.lt) goto loc_82577668;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r10,r29,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r4.u8 & 0x3F));
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | r11.u64;
	// b 0x8257766c
	goto loc_8257766C;
loc_82577668:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8257766C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825776A8"))) PPC_WEAK_FUNC(sub_825776A8);
PPC_FUNC_IMPL(__imp__sub_825776A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825776AC"))) PPC_WEAK_FUNC(sub_825776AC);
PPC_FUNC_IMPL(__imp__sub_825776AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825776B0"))) PPC_WEAK_FUNC(sub_825776B0);
PPC_FUNC_IMPL(__imp__sub_825776B0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// bne cr6,0x825776f8
	if (!cr6.eq) goto loc_825776F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_825776F8:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82577710
	if (cr6.eq) goto loc_82577710;
	// bl 0x82574600
	sub_82574600(ctx, base);
	// b 0x82577714
	goto loc_82577714;
loc_82577710:
	// bl 0x82574598
	sub_82574598(ctx, base);
loc_82577714:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r31,-1
	r31.s64 = -1;
	// li r30,-1
	r30.s64 = -1;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82577748
	if (cr6.eq) goto loc_82577748;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257774c
	if (!cr6.eq) goto loc_8257774C;
loc_82577748:
	// li r11,0
	r11.s64 = 0;
loc_8257774C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-19736
	ctx.r5.s64 = ctx.r9.s64 + -19736;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825777e4
	if (!cr6.eq) goto loc_825777E4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-19760
	ctx.r5.s64 = r11.s64 + -19760;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r10,-19784
	ctx.r5.s64 = ctx.r10.s64 + -19784;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_825777E4:
	// li r11,3
	r11.s64 = 3;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82577810
	if (!cr6.gt) goto loc_82577810;
	// li r31,-1
	r31.s64 = -1;
loc_82577810:
	// lis r11,4096
	r11.s64 = 268435456;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// stb r28,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r28.u8);
	// ori r10,r11,12
	ctx.r10.u64 = r11.u64 | 12;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// beq cr6,0x8257783c
	if (cr6.eq) goto loc_8257783C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82577840
	if (!cr6.eq) goto loc_82577840;
loc_8257783C:
	// li r11,0
	r11.s64 = 0;
loc_82577840:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250e2a0
	sub_8250E2A0(ctx, base);
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82577878
	if (cr6.lt) goto loc_82577878;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82577878
	if (!cr6.lt) goto loc_82577878;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// slw r10,r28,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r4.u8 & 0x3F));
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | r11.u64;
	// b 0x8257787c
	goto loc_8257787C;
loc_82577878:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8257787C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,-19808
	ctx.r4.s64 = ctx.r9.s64 + -19808;
	// lwz r3,21892(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r8,16564
	r11.s64 = ctx.r8.s64 + 16564;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,-20176
	ctx.r5.s64 = ctx.r7.s64 + -20176;
	// addi r4,r4,17908
	ctx.r4.s64 = ctx.r4.s64 + 17908;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_8257790C"))) PPC_WEAK_FUNC(sub_8257790C);
PPC_FUNC_IMPL(__imp__sub_8257790C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82577910"))) PPC_WEAK_FUNC(sub_82577910);
PPC_FUNC_IMPL(__imp__sub_82577910) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8257793c
	if (!cr6.eq) goto loc_8257793C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_8257793C:
	// li r30,0
	r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r30.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r29,1
	r29.s64 = 1;
	// ori r5,r6,12
	ctx.r5.u64 = ctx.r6.u64 | 12;
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r29.u8);
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825779d4
	if (cr6.eq) goto loc_825779D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825779d8
	if (!cr6.eq) goto loc_825779D8;
loc_825779D4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825779D8:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250e2a0
	sub_8250E2A0(ctx, base);
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82577a0c
	if (cr6.lt) goto loc_82577A0C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82577a0c
	if (!cr6.lt) goto loc_82577A0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r10,r29,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r4.u8 & 0x3F));
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82577a10
	goto loc_82577A10;
loc_82577A0C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82577A10:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82577A4C"))) PPC_WEAK_FUNC(sub_82577A4C);
PPC_FUNC_IMPL(__imp__sub_82577A4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82577A50"))) PPC_WEAK_FUNC(sub_82577A50);
PPC_FUNC_IMPL(__imp__sub_82577A50) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r29,1
	r29.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82577a7c
	if (!cr6.eq) goto loc_82577A7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82577A7C:
	// li r30,0
	r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82577b04
	if (cr6.lt) goto loc_82577B04;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82577b04
	if (!cr6.lt) goto loc_82577B04;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r10,r29,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r4.u8 & 0x3F));
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82577b08
	goto loc_82577B08;
loc_82577B04:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82577B08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82577B20"))) PPC_WEAK_FUNC(sub_82577B20);
PPC_FUNC_IMPL(__imp__sub_82577B20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82577B24"))) PPC_WEAK_FUNC(sub_82577B24);
PPC_FUNC_IMPL(__imp__sub_82577B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577B28"))) PPC_WEAK_FUNC(sub_82577B28);
PPC_FUNC_IMPL(__imp__sub_82577B28) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82577b50
	if (!cr6.eq) goto loc_82577B50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82577B50:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82577b74
	if (cr6.eq) goto loc_82577B74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82577b78
	if (!cr6.eq) goto loc_82577B78;
loc_82577B74:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82577B78:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// bl 0x8256ff60
	sub_8256FF60(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r31.u8);
	// addi r11,r30,68
	r11.s64 = r30.s64 + 68;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r4,r7,-19532
	ctx.r4.s64 = ctx.r7.s64 + -19532;
	// lwz r3,21892(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r11,r6,16564
	r11.s64 = ctx.r6.s64 + 16564;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,-20176
	ctx.r5.s64 = ctx.r5.s64 + -20176;
	// addi r4,r4,17908
	ctx.r4.s64 = ctx.r4.s64 + 17908;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82577C0C"))) PPC_WEAK_FUNC(sub_82577C0C);
PPC_FUNC_IMPL(__imp__sub_82577C0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82577C10"))) PPC_WEAK_FUNC(sub_82577C10);
PPC_FUNC_IMPL(__imp__sub_82577C10) {
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
	// li r29,-1
	r29.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x825789c0
	sub_825789C0(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r4,r6,-20148
	ctx.r4.s64 = ctx.r6.s64 + -20148;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r3,r5,-20236
	ctx.r3.s64 = ctx.r5.s64 + -20236;
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r7.u32);
	// addi r27,r31,164
	r27.s64 = r31.s64 + 164;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stb r30,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r30.u8);
	// stb r30,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r30.u8);
	// stb r30,155(r31)
	PPC_STORE_U8(r31.u32 + 155, r30.u8);
	// stb r30,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r30.u8);
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// stw r31,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r31.u32);
	// stw r3,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// stw r31,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r31.u32);
	// bl 0x82740e50
	sub_82740E50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r28,28
	r28.s64 = 28;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r29,r11,-19504
	r29.s64 = r11.s64 + -19504;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r8,143
	ctx.r8.s64 = 143;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r3,1840
	ctx.r3.s64 = 1840;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82577d34
	if (cr6.eq) goto loc_82577D34;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82572a80
	sub_82572A80(ctx, base);
	// b 0x82577d38
	goto loc_82577D38;
loc_82577D34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82577D38:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,144
	ctx.r8.s64 = 144;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82577d7c
	if (cr6.eq) goto loc_82577D7C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8256f020
	sub_8256F020(ctx, base);
	// b 0x82577d80
	goto loc_82577D80;
loc_82577D7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82577D80:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r8,145
	ctx.r8.s64 = 145;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// li r3,352
	ctx.r3.s64 = 352;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82577dc4
	if (cr6.eq) goto loc_82577DC4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825721a0
	sub_825721A0(ctx, base);
	// b 0x82577dc8
	goto loc_82577DC8;
loc_82577DC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82577DC8:
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82577E0C"))) PPC_WEAK_FUNC(sub_82577E0C);
PPC_FUNC_IMPL(__imp__sub_82577E0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82577E10"))) PPC_WEAK_FUNC(sub_82577E10);
PPC_FUNC_IMPL(__imp__sub_82577E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r30,36(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82577e44
	if (cr6.eq) goto loc_82577E44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82571e30
	sub_82571E30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_82577E44:
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82577e64
	if (cr6.eq) goto loc_82577E64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256eec8
	sub_8256EEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_82577E64:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82577e84
	if (cr6.eq) goto loc_82577E84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82572ac8
	sub_82572AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_82577E84:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82740e00
	sub_82740E00(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82579ac0
	sub_82579AC0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82577EAC"))) PPC_WEAK_FUNC(sub_82577EAC);
PPC_FUNC_IMPL(__imp__sub_82577EAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82577EB0"))) PPC_WEAK_FUNC(sub_82577EB0);
PPC_FUNC_IMPL(__imp__sub_82577EB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82577ee8
	if (cr6.eq) goto loc_82577EE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82577eec
	if (!cr6.eq) goto loc_82577EEC;
loc_82577EE8:
	// li r11,0
	r11.s64 = 0;
loc_82577EEC:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x8251a840
	sub_8251A840(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825776b0
	sub_825776B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82577F1C"))) PPC_WEAK_FUNC(sub_82577F1C);
PPC_FUNC_IMPL(__imp__sub_82577F1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82577F20"))) PPC_WEAK_FUNC(sub_82577F20);
PPC_FUNC_IMPL(__imp__sub_82577F20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82577f54
	if (cr6.eq) goto loc_82577F54;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82577f58
	if (!cr6.eq) goto loc_82577F58;
loc_82577F54:
	// li r11,0
	r11.s64 = 0;
loc_82577F58:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x8251a840
	sub_8251A840(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82577f8c
	if (cr6.lt) goto loc_82577F8C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82577f8c
	if (!cr6.lt) goto loc_82577F8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// slw r8,r10,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x82577f90
	goto loc_82577F90;
loc_82577F8C:
	// li r11,0
	r11.s64 = 0;
loc_82577F90:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82577fa4
	if (!cr6.eq) goto loc_82577FA4;
	// li r31,1
	r31.s64 = 1;
loc_82577FA4:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82577fb4
	if (!cr6.eq) goto loc_82577FB4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82577FB4:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82577fc4
	if (!cr6.eq) goto loc_82577FC4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82577FC4:
	// rlwinm r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82577fd4
	if (!cr6.eq) goto loc_82577FD4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82577FD4:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r6,r31,r29
	ctx.r6.s64 = r29.s64 - r31.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825776b0
	sub_825776B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82577FF8"))) PPC_WEAK_FUNC(sub_82577FF8);
PPC_FUNC_IMPL(__imp__sub_82577FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82577FFC"))) PPC_WEAK_FUNC(sub_82577FFC);
PPC_FUNC_IMPL(__imp__sub_82577FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578000"))) PPC_WEAK_FUNC(sub_82578000);
PPC_FUNC_IMPL(__imp__sub_82578000) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82578144
	if (!cr6.eq) goto loc_82578144;
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82578044
	if (!cr6.gt) goto loc_82578044;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82578048
	if (cr6.lt) goto loc_82578048;
loc_82578044:
	// li r11,0
	r11.s64 = 0;
loc_82578048:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257808c
	if (cr6.eq) goto loc_8257808C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_8257808C:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r30.u8);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// beq cr6,0x825780c4
	if (cr6.eq) goto loc_825780C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825780c8
	if (!cr6.eq) goto loc_825780C8;
loc_825780C4:
	// li r11,0
	r11.s64 = 0;
loc_825780C8:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250e2a0
	sub_8250E2A0(ctx, base);
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825780fc
	if (cr6.lt) goto loc_825780FC;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x825780fc
	if (!cr6.lt) goto loc_825780FC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r10,r30,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r4.u8 & 0x3F));
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82578100
	goto loc_82578100;
loc_825780FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82578100:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lbz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_82578144:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82578164
	if (!cr6.eq) goto loc_82578164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82577eb0
	sub_82577EB0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_82578164:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-19444
	ctx.r5.s64 = r11.s64 + -19444;
	// addi r4,r10,15972
	ctx.r4.s64 = ctx.r10.s64 + 15972;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82578184"))) PPC_WEAK_FUNC(sub_82578184);
PPC_FUNC_IMPL(__imp__sub_82578184) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82578188"))) PPC_WEAK_FUNC(sub_82578188);
PPC_FUNC_IMPL(__imp__sub_82578188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x825781e0
	if (!cr6.gt) goto loc_825781E0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825781c0
	if (cr6.lt) goto loc_825781C0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x825781c0
	if (!cr6.lt) goto loc_825781C0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// slw r7,r9,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x825781c4
	goto loc_825781C4;
loc_825781C0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825781C4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_825781E0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82578000
	sub_82578000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825781EC"))) PPC_WEAK_FUNC(sub_825781EC);
PPC_FUNC_IMPL(__imp__sub_825781EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825781F0"))) PPC_WEAK_FUNC(sub_825781F0);
PPC_FUNC_IMPL(__imp__sub_825781F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82578000
	sub_82578000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825781F8"))) PPC_WEAK_FUNC(sub_825781F8);
PPC_FUNC_IMPL(__imp__sub_825781F8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// beq cr6,0x82578250
	if (cr6.eq) goto loc_82578250;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578254
	if (!cr6.eq) goto loc_82578254;
loc_82578250:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82578254:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r29,180(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r27.u8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ble cr6,0x825782b4
	if (!cr6.gt) goto loc_825782B4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// subf r9,r9,r25
	ctx.r9.s64 = r25.s64 - ctx.r9.s64;
loc_8257828C:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x8257828c
	if (cr6.lt) goto loc_8257828C;
loc_825782B4:
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256fa78
	sub_8256FA78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825783b4
	if (!cr6.gt) goto loc_825783B4;
loc_825782D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256ff80
	sub_8256FF80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82578394
	if (cr6.eq) goto loc_82578394;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256ffd0
	sub_8256FFD0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82578394
	if (cr6.eq) goto loc_82578394;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256fdb0
	sub_8256FDB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82578394
	if (!cr6.eq) goto loc_82578394;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256ff60
	sub_8256FF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574528
	sub_82574528(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82578394
	if (!cr6.eq) goto loc_82578394;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825700e8
	sub_825700E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82574d68
	sub_82574D68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82578394
	if (cr6.eq) goto loc_82578394;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256ff60
	sub_8256FF60(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
loc_82578394:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x825783b4
	if (!cr6.lt) goto loc_825783B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x8256fa78
	sub_8256FA78(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x825782d4
	if (cr6.lt) goto loc_825782D4;
loc_825783B4:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825783f8
	if (!cr6.gt) goto loc_825783F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9454
	return;
loc_825783F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82578000
	sub_82578000(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82578410"))) PPC_WEAK_FUNC(sub_82578410);
PPC_FUNC_IMPL(__imp__sub_82578410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82578414"))) PPC_WEAK_FUNC(sub_82578414);
PPC_FUNC_IMPL(__imp__sub_82578414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578418"))) PPC_WEAK_FUNC(sub_82578418);
PPC_FUNC_IMPL(__imp__sub_82578418) {
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
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82578444
	if (!cr6.eq) goto loc_82578444;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82578444:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,-21980(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -21980);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x825781f8
	sub_825781F8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,-19424
	ctx.r4.s64 = ctx.r9.s64 + -19424;
	// lwz r3,21892(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r8,16564
	r11.s64 = ctx.r8.s64 + 16564;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,-20176
	ctx.r5.s64 = ctx.r7.s64 + -20176;
	// addi r4,r4,17908
	ctx.r4.s64 = ctx.r4.s64 + 17908;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825784B0"))) PPC_WEAK_FUNC(sub_825784B0);
PPC_FUNC_IMPL(__imp__sub_825784B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825784B4"))) PPC_WEAK_FUNC(sub_825784B4);
PPC_FUNC_IMPL(__imp__sub_825784B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825784B8"))) PPC_WEAK_FUNC(sub_825784B8);
PPC_FUNC_IMPL(__imp__sub_825784B8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r29,3
	r29.s64 = 3;
	// li r30,0
	r30.s64 = 0;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82578510
	if (cr6.eq) goto loc_82578510;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578514
	if (!cr6.eq) goto loc_82578514;
loc_82578510:
	// li r11,0
	r11.s64 = 0;
loc_82578514:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,18824
	ctx.r5.s64 = ctx.r9.s64 + 18824;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8257858c
	if (!cr6.eq) goto loc_8257858C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,18740
	ctx.r5.s64 = r11.s64 + 18740;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	r30.s64 = 1;
	// li r29,5
	r29.s64 = 5;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_8257858C:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stw r27,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825785a8
	if (!cr6.eq) goto loc_825785A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_825785A8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,-21980(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -21980);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825781f8
	sub_825781F8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,-19424
	ctx.r4.s64 = ctx.r9.s64 + -19424;
	// lwz r3,21892(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r8,16564
	r11.s64 = ctx.r8.s64 + 16564;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,-20176
	ctx.r5.s64 = ctx.r7.s64 + -20176;
	// addi r4,r4,17908
	ctx.r4.s64 = ctx.r4.s64 + 17908;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_82578620"))) PPC_WEAK_FUNC(sub_82578620);
PPC_FUNC_IMPL(__imp__sub_82578620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82578624"))) PPC_WEAK_FUNC(sub_82578624);
PPC_FUNC_IMPL(__imp__sub_82578624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578628"))) PPC_WEAK_FUNC(sub_82578628);
PPC_FUNC_IMPL(__imp__sub_82578628) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,3
	r29.s64 = 3;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82578680
	if (cr6.eq) goto loc_82578680;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578684
	if (!cr6.eq) goto loc_82578684;
loc_82578680:
	// li r11,0
	r11.s64 = 0;
loc_82578684:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-19400
	ctx.r5.s64 = ctx.r9.s64 + -19400;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825786fc
	if (!cr6.eq) goto loc_825786FC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r29,4
	r29.s64 = 4;
	// addi r5,r11,18740
	ctx.r5.s64 = r11.s64 + 18740;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	r30.s64 = 1;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_825786FC:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stw r27,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82578718
	if (!cr6.eq) goto loc_82578718;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82578718:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,-21980(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -21980);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825781f8
	sub_825781F8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,-19424
	ctx.r4.s64 = ctx.r9.s64 + -19424;
	// lwz r3,21892(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r8,16564
	r11.s64 = ctx.r8.s64 + 16564;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,-20176
	ctx.r5.s64 = ctx.r7.s64 + -20176;
	// addi r4,r4,17908
	ctx.r4.s64 = ctx.r4.s64 + 17908;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_82578790"))) PPC_WEAK_FUNC(sub_82578790);
PPC_FUNC_IMPL(__imp__sub_82578790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82578794"))) PPC_WEAK_FUNC(sub_82578794);
PPC_FUNC_IMPL(__imp__sub_82578794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578798"))) PPC_WEAK_FUNC(sub_82578798);
PPC_FUNC_IMPL(__imp__sub_82578798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825787e4
	if (!cr6.eq) goto loc_825787E4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,97(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825787dc
	if (!cr6.eq) goto loc_825787DC;
loc_825787C8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,97(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825787c8
	if (cr6.eq) goto loc_825787C8;
loc_825787DC:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825787E4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257881c
	if (!cr6.eq) goto loc_8257881C;
loc_825787F4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257881c
	if (!cr6.eq) goto loc_8257881C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825787f4
	if (cr6.eq) goto loc_825787F4;
loc_8257881C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_82578820"))) PPC_WEAK_FUNC(sub_82578820);
PPC_FUNC_IMPL(__imp__sub_82578820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578824"))) PPC_WEAK_FUNC(sub_82578824);
PPC_FUNC_IMPL(__imp__sub_82578824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578828"))) PPC_WEAK_FUNC(sub_82578828);
PPC_FUNC_IMPL(__imp__sub_82578828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82578844
	if (cr6.eq) goto loc_82578844;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_82578844:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578880
	if (!cr6.eq) goto loc_82578880;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,97(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578878
	if (!cr6.eq) goto loc_82578878;
loc_82578864:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,97(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578864
	if (cr6.eq) goto loc_82578864;
loc_82578878:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82578880:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825788b8
	if (!cr6.eq) goto loc_825788B8;
loc_82578890:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825788b8
	if (!cr6.eq) goto loc_825788B8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82578890
	if (cr6.eq) goto loc_82578890;
loc_825788B8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825788CC"))) PPC_WEAK_FUNC(sub_825788CC);
PPC_FUNC_IMPL(__imp__sub_825788CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825788D0"))) PPC_WEAK_FUNC(sub_825788D0);
PPC_FUNC_IMPL(__imp__sub_825788D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
loc_825788E8:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x825788fc
	if (cr6.lt) goto loc_825788FC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825788FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82578910
	if (cr6.eq) goto loc_82578910;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82578918
	goto loc_82578918;
loc_82578910:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82578918:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825788e8
	if (cr6.eq) goto loc_825788E8;
}

__attribute__((alias("__imp__sub_82578924"))) PPC_WEAK_FUNC(sub_82578924);
PPC_FUNC_IMPL(__imp__sub_82578924) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578928"))) PPC_WEAK_FUNC(sub_82578928);
PPC_FUNC_IMPL(__imp__sub_82578928) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r6,r9,4776
	ctx.r6.s64 = ctx.r9.s64 + 4776;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stb r31,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, r31.u8);
	// stb r31,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, r31.u8);
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

__attribute__((alias("__imp__sub_825789BC"))) PPC_WEAK_FUNC(sub_825789BC);
PPC_FUNC_IMPL(__imp__sub_825789BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825789C0"))) PPC_WEAK_FUNC(sub_825789C0);
PPC_FUNC_IMPL(__imp__sub_825789C0) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r6,r7,4776
	ctx.r6.s64 = ctx.r7.s64 + 4776;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,96(r4)
	PPC_STORE_U8(ctx.r4.u32 + 96, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,97(r10)
	PPC_STORE_U8(ctx.r10.u32 + 97, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82578A60"))) PPC_WEAK_FUNC(sub_82578A60);
PPC_FUNC_IMPL(__imp__sub_82578A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578A64"))) PPC_WEAK_FUNC(sub_82578A64);
PPC_FUNC_IMPL(__imp__sub_82578A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578A68"))) PPC_WEAK_FUNC(sub_82578A68);
PPC_FUNC_IMPL(__imp__sub_82578A68) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// lwz r10,19384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19384);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stb r6,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r6.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82578A9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82578a9c
	if (!cr6.eq) goto loc_82578A9C;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
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

__attribute__((alias("__imp__sub_82578ADC"))) PPC_WEAK_FUNC(sub_82578ADC);
PPC_FUNC_IMPL(__imp__sub_82578ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578AE0"))) PPC_WEAK_FUNC(sub_82578AE0);
PPC_FUNC_IMPL(__imp__sub_82578AE0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r10,19380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19380);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stb r5,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r5.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82578B0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82578b0c
	if (!cr6.eq) goto loc_82578B0C;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
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

__attribute__((alias("__imp__sub_82578B4C"))) PPC_WEAK_FUNC(sub_82578B4C);
PPC_FUNC_IMPL(__imp__sub_82578B4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578B50"))) PPC_WEAK_FUNC(sub_82578B50);
PPC_FUNC_IMPL(__imp__sub_82578B50) {
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
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578bf8
	if (cr6.eq) goto loc_82578BF8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// addi r8,r10,-20040
	ctx.r8.s64 = ctx.r10.s64 + -20040;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// std r7,40(r11)
	PPC_STORE_U64(r11.u32 + 40, ctx.r7.u64);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r6,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r6.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r5,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r5.u32);
	// lbz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// stb r4,56(r11)
	PPC_STORE_U8(r11.u32 + 56, ctx.r4.u8);
	// stw r9,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r9.u32);
	// stw r9,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82578BF8:
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

__attribute__((alias("__imp__sub_82578C0C"))) PPC_WEAK_FUNC(sub_82578C0C);
PPC_FUNC_IMPL(__imp__sub_82578C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578C10"))) PPC_WEAK_FUNC(sub_82578C10);
PPC_FUNC_IMPL(__imp__sub_82578C10) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578ca8
	if (cr6.eq) goto loc_82578CA8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-20028
	ctx.r8.s64 = ctx.r10.s64 + -20028;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r7,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r7.u32);
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// stb r6,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r6.u8);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82578CA8:
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

__attribute__((alias("__imp__sub_82578CBC"))) PPC_WEAK_FUNC(sub_82578CBC);
PPC_FUNC_IMPL(__imp__sub_82578CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578CC0"))) PPC_WEAK_FUNC(sub_82578CC0);
PPC_FUNC_IMPL(__imp__sub_82578CC0) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578d58
	if (cr6.eq) goto loc_82578D58;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-20016
	ctx.r8.s64 = ctx.r10.s64 + -20016;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r7,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r7.u32);
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// stb r6,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r6.u8);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82578D58:
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

__attribute__((alias("__imp__sub_82578D6C"))) PPC_WEAK_FUNC(sub_82578D6C);
PPC_FUNC_IMPL(__imp__sub_82578D6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578D70"))) PPC_WEAK_FUNC(sub_82578D70);
PPC_FUNC_IMPL(__imp__sub_82578D70) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578dd4
	if (cr6.eq) goto loc_82578DD4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-20004
	ctx.r8.s64 = ctx.r9.s64 + -20004;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// stb r6,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r6.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82578DD4:
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

__attribute__((alias("__imp__sub_82578DE8"))) PPC_WEAK_FUNC(sub_82578DE8);
PPC_FUNC_IMPL(__imp__sub_82578DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578DEC"))) PPC_WEAK_FUNC(sub_82578DEC);
PPC_FUNC_IMPL(__imp__sub_82578DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578DF0"))) PPC_WEAK_FUNC(sub_82578DF0);
PPC_FUNC_IMPL(__imp__sub_82578DF0) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578e4c
	if (cr6.eq) goto loc_82578E4C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-19992
	ctx.r8.s64 = ctx.r9.s64 + -19992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82578E4C:
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

__attribute__((alias("__imp__sub_82578E60"))) PPC_WEAK_FUNC(sub_82578E60);
PPC_FUNC_IMPL(__imp__sub_82578E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578E64"))) PPC_WEAK_FUNC(sub_82578E64);
PPC_FUNC_IMPL(__imp__sub_82578E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578E68"))) PPC_WEAK_FUNC(sub_82578E68);
PPC_FUNC_IMPL(__imp__sub_82578E68) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578ec4
	if (cr6.eq) goto loc_82578EC4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-19980
	ctx.r8.s64 = ctx.r9.s64 + -19980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82578EC4:
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

__attribute__((alias("__imp__sub_82578ED8"))) PPC_WEAK_FUNC(sub_82578ED8);
PPC_FUNC_IMPL(__imp__sub_82578ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578EDC"))) PPC_WEAK_FUNC(sub_82578EDC);
PPC_FUNC_IMPL(__imp__sub_82578EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578EE0"))) PPC_WEAK_FUNC(sub_82578EE0);
PPC_FUNC_IMPL(__imp__sub_82578EE0) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,15
	r11.s64 = 15;
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r31.u64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r31.u8);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r9.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r31,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r31.u8);
	// stb r31,65(r30)
	PPC_STORE_U8(r30.u32 + 65, r31.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r7.u32);
	// stw r8,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82578F68"))) PPC_WEAK_FUNC(sub_82578F68);
PPC_FUNC_IMPL(__imp__sub_82578F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578F6C"))) PPC_WEAK_FUNC(sub_82578F6C);
PPC_FUNC_IMPL(__imp__sub_82578F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578F70"))) PPC_WEAK_FUNC(sub_82578F70);
PPC_FUNC_IMPL(__imp__sub_82578F70) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x825788d0
	sub_825788D0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82578fe0
	if (cr6.eq) goto loc_82578FE0;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82578fbc
	if (cr6.lt) goto loc_82578FBC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82578FBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82578fe0
	if (!cr6.eq) goto loc_82578FE0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82578FE0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82578FF8"))) PPC_WEAK_FUNC(sub_82578FF8);
PPC_FUNC_IMPL(__imp__sub_82578FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82578FFC"))) PPC_WEAK_FUNC(sub_82578FFC);
PPC_FUNC_IMPL(__imp__sub_82578FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579000"))) PPC_WEAK_FUNC(sub_82579000);
PPC_FUNC_IMPL(__imp__sub_82579000) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82579030
	if (cr6.eq) goto loc_82579030;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82579034
	if (!cr6.eq) goto loc_82579034;
loc_82579030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82579034:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82579050
	if (cr6.eq) goto loc_82579050;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_82579050:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82579060"))) PPC_WEAK_FUNC(sub_82579060);
PPC_FUNC_IMPL(__imp__sub_82579060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579064"))) PPC_WEAK_FUNC(sub_82579064);
PPC_FUNC_IMPL(__imp__sub_82579064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579068"))) PPC_WEAK_FUNC(sub_82579068);
PPC_FUNC_IMPL(__imp__sub_82579068) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82579098
	if (cr6.eq) goto loc_82579098;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257909c
	if (!cr6.eq) goto loc_8257909C;
loc_82579098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257909C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825790b8
	if (cr6.eq) goto loc_825790B8;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_825790B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825790C8"))) PPC_WEAK_FUNC(sub_825790C8);
PPC_FUNC_IMPL(__imp__sub_825790C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825790CC"))) PPC_WEAK_FUNC(sub_825790CC);
PPC_FUNC_IMPL(__imp__sub_825790CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825790D0"))) PPC_WEAK_FUNC(sub_825790D0);
PPC_FUNC_IMPL(__imp__sub_825790D0) {
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
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r6,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// lbz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 64);
	// stb r5,64(r31)
	PPC_STORE_U8(r31.u32 + 64, ctx.r5.u8);
	// lbz r4,65(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 65);
	// stb r4,65(r31)
	PPC_STORE_U8(r31.u32 + 65, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_8257917C"))) PPC_WEAK_FUNC(sub_8257917C);
PPC_FUNC_IMPL(__imp__sub_8257917C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579180"))) PPC_WEAK_FUNC(sub_82579180);
PPC_FUNC_IMPL(__imp__sub_82579180) {
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
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r31,r4,28
	r31.s64 = ctx.r4.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825791a8
	if (cr6.lt) goto loc_825791A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825791A8:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825791CC"))) PPC_WEAK_FUNC(sub_825791CC);
PPC_FUNC_IMPL(__imp__sub_825791CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825791D0"))) PPC_WEAK_FUNC(sub_825791D0);
PPC_FUNC_IMPL(__imp__sub_825791D0) {
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
	// lis r10,819
	ctx.r10.s64 = 53673984;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r9,r10,13106
	ctx.r9.u64 = ctx.r10.u64 | 13106;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8257923c
	if (cr6.lt) goto loc_8257923C;
	// lwz r11,64(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// addi r31,r7,44
	r31.s64 = ctx.r7.s64 + 44;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82579214
	if (cr6.lt) goto loc_82579214;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82579214:
	// li r28,0
	r28.s64 = 0;
	// li r11,15
	r11.s64 = 15;
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,5516
	ctx.r3.s64 = ctx.r10.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8257923C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8257926c
	if (!cr6.eq) goto loc_8257926C;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// b 0x825792ac
	goto loc_825792AC;
loc_8257926C:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579294
	if (cr6.eq) goto loc_82579294;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825792ac
	if (!cr6.eq) goto loc_825792AC;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// b 0x825792ac
	goto loc_825792AC;
loc_82579294:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825792ac
	if (!cr6.eq) goto loc_825792AC;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
loc_825792AC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825793d0
	if (!cr6.eq) goto loc_825793D0;
	// li r28,0
	r28.s64 = 0;
loc_825792C8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82579350
	if (!cr6.eq) goto loc_82579350;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82579310
	if (!cr6.eq) goto loc_82579310;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, r29.u8);
	// stb r29,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,96(r8)
	PPC_STORE_U8(ctx.r8.u32 + 96, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825793c0
	goto loc_825793C0;
loc_82579310:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82579328
	if (!cr6.eq) goto loc_82579328;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8237d2b0
	sub_8237D2B0(ctx, base);
loc_82579328:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8237cfd8
	sub_8237CFD8(ctx, base);
	// b 0x825793c0
	goto loc_825793C0;
loc_82579350:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82579384
	if (!cr6.eq) goto loc_82579384;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, r29.u8);
	// stb r29,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,96(r8)
	PPC_STORE_U8(ctx.r8.u32 + 96, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825793c0
	goto loc_825793C0;
loc_82579384:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8257939c
	if (!cr6.eq) goto loc_8257939C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8237cfd8
	sub_8237CFD8(ctx, base);
loc_8257939C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8237d2b0
	sub_8237D2B0(ctx, base);
loc_825793C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825792c8
	if (cr6.eq) goto loc_825792C8;
loc_825793D0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825793E8"))) PPC_WEAK_FUNC(sub_825793E8);
PPC_FUNC_IMPL(__imp__sub_825793E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825793EC"))) PPC_WEAK_FUNC(sub_825793EC);
PPC_FUNC_IMPL(__imp__sub_825793EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825793F0"))) PPC_WEAK_FUNC(sub_825793F0);
PPC_FUNC_IMPL(__imp__sub_825793F0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,97(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 97);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579420
	if (cr6.eq) goto loc_82579420;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5488
	ctx.r3.s64 = r11.s64 + 5488;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
loc_82579420:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82578798
	sub_82578798(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82579448
	if (cr6.eq) goto loc_82579448;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8257946c
	goto loc_8257946C;
loc_82579448:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82579460
	if (cr6.eq) goto loc_82579460;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x8257946c
	goto loc_8257946C;
loc_82579460:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x82579558
	if (!cr6.eq) goto loc_82579558;
loc_8257946C:
	// lbz r11,97(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 97);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82579480
	if (!cr6.eq) goto loc_82579480;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82579480:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82579498
	if (!cr6.eq) goto loc_82579498;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x825794b0
	goto loc_825794B0;
loc_82579498:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825794ac
	if (!cr6.eq) goto loc_825794AC;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x825794b0
	goto loc_825794B0;
loc_825794AC:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_825794B0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82579500
	if (!cr6.eq) goto loc_82579500;
	// lbz r11,97(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825794d4
	if (cr6.eq) goto loc_825794D4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x825794fc
	goto loc_825794FC;
loc_825794D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825794fc
	if (!cr6.eq) goto loc_825794FC;
loc_825794E8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825794e8
	if (cr6.eq) goto loc_825794E8;
loc_825794FC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82579500:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825795ec
	if (!cr6.eq) goto loc_825795EC;
	// lbz r11,97(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579528
	if (cr6.eq) goto loc_82579528;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// b 0x825795ec
	goto loc_825795EC;
loc_82579528:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82579550
	if (!cr6.eq) goto loc_82579550;
loc_8257953C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257953c
	if (cr6.eq) goto loc_8257953C;
loc_82579550:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825795ec
	goto loc_825795EC;
loc_82579558:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82579578
	if (!cr6.eq) goto loc_82579578;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x825795a0
	goto loc_825795A0;
loc_82579578:
	// lbz r11,97(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 97);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8257958c
	if (!cr6.eq) goto loc_8257958C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_8257958C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r25.u32);
loc_825795A0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825795b8
	if (!cr6.eq) goto loc_825795B8;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x825795d4
	goto loc_825795D4;
loc_825795B8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825795d0
	if (!cr6.eq) goto loc_825795D0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x825795d4
	goto loc_825795D4;
loc_825795D0:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_825795D4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r9,96(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 96);
	// lbz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 96);
	// stb r9,96(r25)
	PPC_STORE_U8(r25.u32 + 96, ctx.r9.u8);
	// stb r10,96(r26)
	PPC_STORE_U8(r26.u32 + 96, ctx.r10.u8);
loc_825795EC:
	// lbz r11,96(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82579784
	if (!cr6.eq) goto loc_82579784;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82579780
	if (cr6.eq) goto loc_82579780;
loc_82579610:
	// lbz r11,96(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82579780
	if (!cr6.eq) goto loc_82579780;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x825796c8
	if (!cr6.eq) goto loc_825796C8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82579650
	if (!cr6.eq) goto loc_82579650;
	// stb r29,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8237d2b0
	sub_8237D2B0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82579650:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257971c
	if (!cr6.eq) goto loc_8257971C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8257967c
	if (!cr6.eq) goto loc_8257967C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82579718
	if (cr6.eq) goto loc_82579718;
loc_8257967C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825796a4
	if (!cr6.eq) goto loc_825796A4;
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8237cfd8
	sub_8237CFD8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825796A4:
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,96(r11)
	PPC_STORE_U8(r11.u32 + 96, ctx.r10.u8);
	// stb r29,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, r29.u8);
	// bl 0x8237d2b0
	sub_8237D2B0(ctx, base);
	// b 0x82579780
	goto loc_82579780;
loc_825796C8:
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825796ec
	if (!cr6.eq) goto loc_825796EC;
	// stb r29,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8237cfd8
	sub_8237CFD8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825796EC:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257971c
	if (!cr6.eq) goto loc_8257971C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82579738
	if (!cr6.eq) goto loc_82579738;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82579738
	if (!cr6.eq) goto loc_82579738;
loc_82579718:
	// stb r30,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r30.u8);
loc_8257971C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82579610
	if (!cr6.eq) goto loc_82579610;
	// b 0x82579780
	goto loc_82579780;
loc_82579738:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82579760
	if (!cr6.eq) goto loc_82579760;
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,96(r11)
	PPC_STORE_U8(r11.u32 + 96, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8237d2b0
	sub_8237D2B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82579760:
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,96(r11)
	PPC_STORE_U8(r11.u32 + 96, ctx.r10.u8);
	// stb r29,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, r29.u8);
	// bl 0x8237cfd8
	sub_8237CFD8(ctx, base);
loc_82579780:
	// stb r29,96(r28)
	PPC_STORE_U8(r28.u32 + 96, r29.u8);
loc_82579784:
	// lwz r11,64(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// addi r31,r26,44
	r31.s64 = r26.s64 + 44;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257979c
	if (cr6.lt) goto loc_8257979C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257979C:
	// li r11,15
	r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825797c8
	if (cr6.eq) goto loc_825797C8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_825797C8:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825797D4"))) PPC_WEAK_FUNC(sub_825797D4);
PPC_FUNC_IMPL(__imp__sub_825797D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825797D8"))) PPC_WEAK_FUNC(sub_825797D8);
PPC_FUNC_IMPL(__imp__sub_825797D8) {
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
	// lbz r11,97(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82579850
	if (!cr6.eq) goto loc_82579850;
	// li r27,15
	r27.s64 = 15;
	// li r28,0
	r28.s64 = 0;
loc_82579804:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x825797d8
	sub_825797D8(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// addi r31,r29,44
	r31.s64 = r29.s64 + 44;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// blt cr6,0x8257982c
	if (cr6.lt) goto loc_8257982C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257982C:
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,97(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579804
	if (cr6.eq) goto loc_82579804;
loc_82579850:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82579854"))) PPC_WEAK_FUNC(sub_82579854);
PPC_FUNC_IMPL(__imp__sub_82579854) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82579858"))) PPC_WEAK_FUNC(sub_82579858);
PPC_FUNC_IMPL(__imp__sub_82579858) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r25,r5,16
	r25.s64 = ctx.r5.s64 + 16;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r31,r24
	r31.u64 = r24.u64;
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82579900
	if (!cr6.eq) goto loc_82579900;
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_82579898:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825798c8
	if (cr6.eq) goto loc_825798C8;
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// blt cr6,0x825798b8
	if (cr6.lt) goto loc_825798B8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825798B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r7,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x825798dc
	goto loc_825798DC;
loc_825798C8:
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// blt cr6,0x825798d8
	if (cr6.lt) goto loc_825798D8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825798D8:
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
loc_825798DC:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825798f0
	if (cr6.eq) goto loc_825798F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825798f4
	goto loc_825798F4;
loc_825798F0:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_825798F4:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82579898
	if (cr6.eq) goto loc_82579898;
loc_82579900:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579960
	if (cr6.eq) goto loc_82579960;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82579958
	if (!cr6.eq) goto loc_82579958;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825791d0
	sub_825791D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r24,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r24.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_82579958:
	// bl 0x82578828
	sub_82578828(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82579960:
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// mr r11,r24
	r11.u64 = r24.u64;
	// blt cr6,0x82579978
	if (cr6.lt) goto loc_82579978;
	// li r11,0
	r11.s64 = 0;
loc_82579978:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825799b8
	if (cr6.eq) goto loc_825799B8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825791d0
	sub_825791D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r24,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r24.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_825799B8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = r27.s64 + 13;
	// bl 0x82579180
	sub_82579180(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825799E0"))) PPC_WEAK_FUNC(sub_825799E0);
PPC_FUNC_IMPL(__imp__sub_825799E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825799E4"))) PPC_WEAK_FUNC(sub_825799E4);
PPC_FUNC_IMPL(__imp__sub_825799E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825799E8"))) PPC_WEAK_FUNC(sub_825799E8);
PPC_FUNC_IMPL(__imp__sub_825799E8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x825790d0
	sub_825790D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82579a38
	if (cr6.eq) goto loc_82579A38;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// bl 0x825790d0
	sub_825790D0(ctx, base);
loc_82579A38:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82579a4c
	if (cr6.lt) goto loc_82579A4C;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82579A4C:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82579A64"))) PPC_WEAK_FUNC(sub_82579A64);
PPC_FUNC_IMPL(__imp__sub_82579A64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579A68"))) PPC_WEAK_FUNC(sub_82579A68);
PPC_FUNC_IMPL(__imp__sub_82579A68) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825797d8
	sub_825797D8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82579AB8"))) PPC_WEAK_FUNC(sub_82579AB8);
PPC_FUNC_IMPL(__imp__sub_82579AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579ABC"))) PPC_WEAK_FUNC(sub_82579ABC);
PPC_FUNC_IMPL(__imp__sub_82579ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579AC0"))) PPC_WEAK_FUNC(sub_82579AC0);
PPC_FUNC_IMPL(__imp__sub_82579AC0) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82579b14
	if (!cr6.eq) goto loc_82579B14;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x82579b14
	if (!cr6.eq) goto loc_82579B14;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82579a68
	sub_82579A68(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82579B14:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x82579b44
	if (cr6.eq) goto loc_82579B44;
loc_82579B1C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82578798
	sub_82578798(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825793f0
	sub_825793F0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82579b1c
	if (!cr6.eq) goto loc_82579B1C;
loc_82579B44:
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82579B50"))) PPC_WEAK_FUNC(sub_82579B50);
PPC_FUNC_IMPL(__imp__sub_82579B50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82579B54"))) PPC_WEAK_FUNC(sub_82579B54);
PPC_FUNC_IMPL(__imp__sub_82579B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579B58"))) PPC_WEAK_FUNC(sub_82579B58);
PPC_FUNC_IMPL(__imp__sub_82579B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x82579b74
	if (cr6.lt) goto loc_82579B74;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// bgt cr6,0x82579b74
	if (cr6.gt) goto loc_82579B74;
loc_82579B6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82579B74:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x82579b84
	if (cr6.lt) goto loc_82579B84;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// ble cr6,0x82579b6c
	if (!cr6.gt) goto loc_82579B6C;
loc_82579B84:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x82579b98
	if (cr6.lt) goto loc_82579B98;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(r11.u32, 122, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_82579B98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579BA0"))) PPC_WEAK_FUNC(sub_82579BA0);
PPC_FUNC_IMPL(__imp__sub_82579BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273e1d8
	sub_8273E1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579BA4"))) PPC_WEAK_FUNC(sub_82579BA4);
PPC_FUNC_IMPL(__imp__sub_82579BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579BA8"))) PPC_WEAK_FUNC(sub_82579BA8);
PPC_FUNC_IMPL(__imp__sub_82579BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273e190
	sub_8273E190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579BAC"))) PPC_WEAK_FUNC(sub_82579BAC);
PPC_FUNC_IMPL(__imp__sub_82579BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579BB0"))) PPC_WEAK_FUNC(sub_82579BB0);
PPC_FUNC_IMPL(__imp__sub_82579BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_82579BBC"))) PPC_WEAK_FUNC(sub_82579BBC);
PPC_FUNC_IMPL(__imp__sub_82579BBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82579BC0"))) PPC_WEAK_FUNC(sub_82579BC0);
PPC_FUNC_IMPL(__imp__sub_82579BC0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82579cd4
	if (cr6.eq) goto loc_82579CD4;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82579cd4
	if (cr6.eq) goto loc_82579CD4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82579BF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82579bf0
	if (!cr6.eq) goto loc_82579BF0;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r29,0
	r29.s64 = 0;
	// rotlwi r25,r11,0
	r25.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82579ccc
	if (!cr6.gt) goto loc_82579CCC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,3
	r30.s64 = 3;
	// addi r26,r11,-19332
	r26.s64 = r11.s64 + -19332;
loc_82579C28:
	// lbzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + r28.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// blt cr6,0x82579c48
	if (cr6.lt) goto loc_82579C48;
	// cmplwi cr6,r10,57
	cr6.compare<uint32_t>(ctx.r10.u32, 57, xer);
	// bgt cr6,0x82579c48
	if (cr6.gt) goto loc_82579C48;
	// li r11,1
	r11.s64 = 1;
	// b 0x82579c78
	goto loc_82579C78;
loc_82579C48:
	// cmplwi cr6,r6,65
	cr6.compare<uint32_t>(ctx.r6.u32, 65, xer);
	// blt cr6,0x82579c60
	if (cr6.lt) goto loc_82579C60;
	// cmplwi cr6,r6,90
	cr6.compare<uint32_t>(ctx.r6.u32, 90, xer);
	// bgt cr6,0x82579c60
	if (cr6.gt) goto loc_82579C60;
	// li r11,1
	r11.s64 = 1;
	// b 0x82579c78
	goto loc_82579C78;
loc_82579C60:
	// cmplwi cr6,r6,97
	cr6.compare<uint32_t>(ctx.r6.u32, 97, xer);
	// blt cr6,0x82579c74
	if (cr6.lt) goto loc_82579C74;
	// cmplwi cr6,r6,122
	cr6.compare<uint32_t>(ctx.r6.u32, 122, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82579c78
	if (!cr6.gt) goto loc_82579C78;
loc_82579C74:
	// li r11,0
	r11.s64 = 0;
loc_82579C78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r24,-1
	r11.s64 = r24.s64 + -1;
	// beq cr6,0x82579ca0
	if (cr6.eq) goto loc_82579CA0;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82579ccc
	if (!cr6.lt) goto loc_82579CCC;
	// stbx r10,r31,r27
	PPC_STORE_U8(r31.u32 + r27.u32, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82579cc0
	goto loc_82579CC0;
loc_82579CA0:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82579ccc
	if (!cr6.lt) goto loc_82579CCC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
loc_82579CC0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// blt cr6,0x82579c28
	if (cr6.lt) goto loc_82579C28;
loc_82579CCC:
	// li r11,0
	r11.s64 = 0;
	// stbx r11,r31,r27
	PPC_STORE_U8(r31.u32 + r27.u32, r11.u8);
loc_82579CD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82579CD8"))) PPC_WEAK_FUNC(sub_82579CD8);
PPC_FUNC_IMPL(__imp__sub_82579CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82579CDC"))) PPC_WEAK_FUNC(sub_82579CDC);
PPC_FUNC_IMPL(__imp__sub_82579CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579CE0"))) PPC_WEAK_FUNC(sub_82579CE0);
PPC_FUNC_IMPL(__imp__sub_82579CE0) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// li r31,5381
	r31.s64 = 5381;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82579d2c
	if (cr6.eq) goto loc_82579D2C;
loc_82579D10:
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
	// bne cr6,0x82579d10
	if (!cr6.eq) goto loc_82579D10;
loc_82579D2C:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82579d4c
	if (cr6.eq) goto loc_82579D4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82579d50
	if (!cr6.eq) goto loc_82579D50;
loc_82579D4C:
	// li r11,0
	r11.s64 = 0;
loc_82579D50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82579e00
	if (cr6.eq) goto loc_82579E00;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r11,-19348
	ctx.r6.s64 = r11.s64 + -19348;
	// addi r5,r10,-19324
	ctx.r5.s64 = ctx.r10.s64 + -19324;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82579df0
	if (!cr6.eq) goto loc_82579DF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82579df0
	if (!cr6.eq) goto loc_82579DF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,15176
	ctx.r5.s64 = r11.s64 + 15176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82579DF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_82579E00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82579E08"))) PPC_WEAK_FUNC(sub_82579E08);
PPC_FUNC_IMPL(__imp__sub_82579E08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82579E0C"))) PPC_WEAK_FUNC(sub_82579E0C);
PPC_FUNC_IMPL(__imp__sub_82579E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579E10"))) PPC_WEAK_FUNC(sub_82579E10);
PPC_FUNC_IMPL(__imp__sub_82579E10) {
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
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r7,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r7.u32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r10.u32);
	// bl 0x82579ce0
	sub_82579CE0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82579eb4
	if (!cr6.eq) goto loc_82579EB4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2248
	ctx.r10.s64 = ctx.r1.s64 + 2248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828eaf88
	sub_828EAF88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273e758
	sub_8273E758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,2144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x828e946c
	return;
loc_82579EB4:
	// lwz r3,2144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
}

__attribute__((alias("__imp__sub_82579EC4"))) PPC_WEAK_FUNC(sub_82579EC4);
PPC_FUNC_IMPL(__imp__sub_82579EC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82579EC8"))) PPC_WEAK_FUNC(sub_82579EC8);
PPC_FUNC_IMPL(__imp__sub_82579EC8) {
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
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r9.u32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r10.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82579ce0
	sub_82579CE0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82579f74
	if (!cr6.eq) goto loc_82579F74;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2280
	ctx.r10.s64 = ctx.r1.s64 + 2280;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828eaf88
	sub_828EAF88(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r9,2276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273e800
	sub_8273E800(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,2144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x828e9464
	return;
loc_82579F74:
	// lwz r3,2144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
}

__attribute__((alias("__imp__sub_82579F84"))) PPC_WEAK_FUNC(sub_82579F84);
PPC_FUNC_IMPL(__imp__sub_82579F84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82579F88"))) PPC_WEAK_FUNC(sub_82579F88);
PPC_FUNC_IMPL(__imp__sub_82579F88) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-19288
	ctx.r9.s64 = r11.s64 + -19288;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,22296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22296, r11.u32);
	// beq cr6,0x82579fc8
	if (cr6.eq) goto loc_82579FC8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82579FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82579FD8"))) PPC_WEAK_FUNC(sub_82579FD8);
PPC_FUNC_IMPL(__imp__sub_82579FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579FDC"))) PPC_WEAK_FUNC(sub_82579FDC);
PPC_FUNC_IMPL(__imp__sub_82579FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579FE0"))) PPC_WEAK_FUNC(sub_82579FE0);
PPC_FUNC_IMPL(__imp__sub_82579FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-19280
	ctx.r9.s64 = ctx.r10.s64 + -19280;
	// stw r31,22296(r11)
	PPC_STORE_U32(r11.u32 + 22296, r31.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// li r11,0
	r11.s64 = 0;
loc_8257A058:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x8257a058
	if (!cr0.eq) goto loc_8257A058;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
loc_8257A074:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x8257a074
	if (!cr0.eq) goto loc_8257A074;
	// addi r8,r31,92
	ctx.r8.s64 = r31.s64 + 92;
loc_8257A090:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257a090
	if (!cr0.eq) goto loc_8257A090;
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

__attribute__((alias("__imp__sub_8257A0BC"))) PPC_WEAK_FUNC(sub_8257A0BC);
PPC_FUNC_IMPL(__imp__sub_8257A0BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A0C0"))) PPC_WEAK_FUNC(sub_8257A0C0);
PPC_FUNC_IMPL(__imp__sub_8257A0C0) {
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
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r10,r11,-19280
	ctx.r10.s64 = r11.s64 + -19280;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r7,r9,-19288
	ctx.r7.s64 = ctx.r9.s64 + -19288;
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,22296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22296, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257A150"))) PPC_WEAK_FUNC(sub_8257A150);
PPC_FUNC_IMPL(__imp__sub_8257A150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A154"))) PPC_WEAK_FUNC(sub_8257A154);
PPC_FUNC_IMPL(__imp__sub_8257A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A158"))) PPC_WEAK_FUNC(sub_8257A158);
PPC_FUNC_IMPL(__imp__sub_8257A158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,18432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18432);
	// bl 0x826ce060
	sub_826CE060(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,84
	ctx.r7.s64 = r31.s64 + 84;
loc_8257A1B0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a1b0
	if (!cr0.eq) goto loc_8257A1B0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257A1D8"))) PPC_WEAK_FUNC(sub_8257A1D8);
PPC_FUNC_IMPL(__imp__sub_8257A1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A1DC"))) PPC_WEAK_FUNC(sub_8257A1DC);
PPC_FUNC_IMPL(__imp__sub_8257A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A1E0"))) PPC_WEAK_FUNC(sub_8257A1E0);
PPC_FUNC_IMPL(__imp__sub_8257A1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
loc_8257A200:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257a200
	if (!cr0.eq) goto loc_8257A200;
	// addi r6,r31,76
	ctx.r6.s64 = r31.s64 + 76;
loc_8257A21C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8257a21c
	if (!cr0.eq) goto loc_8257A21C;
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r5,r3,-19276
	ctx.r5.s64 = ctx.r3.s64 + -19276;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18432(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// li r11,1
	r11.s64 = 1;
loc_8257A288:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257a288
	if (!cr0.eq) goto loc_8257A288;
	// addi r7,r31,88
	ctx.r7.s64 = r31.s64 + 88;
loc_8257A2A4:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x8257a2a4
	if (!cr0.eq) goto loc_8257A2A4;
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

__attribute__((alias("__imp__sub_8257A2D0"))) PPC_WEAK_FUNC(sub_8257A2D0);
PPC_FUNC_IMPL(__imp__sub_8257A2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A2D4"))) PPC_WEAK_FUNC(sub_8257A2D4);
PPC_FUNC_IMPL(__imp__sub_8257A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A2D8"))) PPC_WEAK_FUNC(sub_8257A2D8);
PPC_FUNC_IMPL(__imp__sub_8257A2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,36
	ctx.r4.s64 = ctx.r3.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,18432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18432);
	// bl 0x826ce060
	sub_826CE060(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,88
	ctx.r7.s64 = r31.s64 + 88;
loc_8257A30C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a30c
	if (!cr0.eq) goto loc_8257A30C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257A334"))) PPC_WEAK_FUNC(sub_8257A334);
PPC_FUNC_IMPL(__imp__sub_8257A334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A338"))) PPC_WEAK_FUNC(sub_8257A338);
PPC_FUNC_IMPL(__imp__sub_8257A338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
loc_8257A350:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r31,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r31.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8257a350
	if (!cr0.eq) goto loc_8257A350;
	// addi r7,r30,76
	ctx.r7.s64 = r30.s64 + 76;
loc_8257A36C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r31,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(r31.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a36c
	if (!cr0.eq) goto loc_8257A36C;
	// li r6,19
	ctx.r6.s64 = 19;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r5,r5,-19144
	ctx.r5.s64 = ctx.r5.s64 + -19144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r5,r3,12016
	ctx.r5.s64 = ctx.r3.s64 + 12016;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// li r11,17
	r11.s64 = 17;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// addi r5,r10,-19180
	ctx.r5.s64 = ctx.r10.s64 + -19180;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// addi r5,r7,-19220
	ctx.r5.s64 = ctx.r7.s64 + -19220;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r4,r5,-19248
	ctx.r4.s64 = ctx.r5.s64 + -19248;
	// lwz r3,22256(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22256);
	// bl 0x826fe500
	sub_826FE500(ctx, base);
	// li r11,1
	r11.s64 = 1;
loc_8257A4D0:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8257a4d0
	if (!cr0.eq) goto loc_8257A4D0;
	// addi r9,r30,92
	ctx.r9.s64 = r30.s64 + 92;
loc_8257A4EC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a4ec
	if (!cr0.eq) goto loc_8257A4EC;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8257A508"))) PPC_WEAK_FUNC(sub_8257A508);
PPC_FUNC_IMPL(__imp__sub_8257A508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257A50C"))) PPC_WEAK_FUNC(sub_8257A50C);
PPC_FUNC_IMPL(__imp__sub_8257A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A510"))) PPC_WEAK_FUNC(sub_8257A510);
PPC_FUNC_IMPL(__imp__sub_8257A510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,-19248
	ctx.r4.s64 = ctx.r10.s64 + -19248;
	// lwz r3,22256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22256);
	// bl 0x826fe518
	sub_826FE518(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,18432(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18432);
	// bl 0x826ce060
	sub_826CE060(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
loc_8257A57C:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x8257a57c
	if (!cr0.eq) goto loc_8257A57C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257A5A4"))) PPC_WEAK_FUNC(sub_8257A5A4);
PPC_FUNC_IMPL(__imp__sub_8257A5A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A5A8"))) PPC_WEAK_FUNC(sub_8257A5A8);
PPC_FUNC_IMPL(__imp__sub_8257A5A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// addi r8,r3,92
	ctx.r8.s64 = ctx.r3.s64 + 92;
loc_8257A5C0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257a5c0
	if (!cr0.eq) goto loc_8257A5C0;
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257a63c
	if (cr6.eq) goto loc_8257A63C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,22256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 22256);
	// bl 0x826fe538
	sub_826FE538(ctx, base);
loc_8257A5F8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a5f8
	if (!cr0.eq) goto loc_8257A5F8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257a63c
	if (!cr6.eq) goto loc_8257A63C;
	// li r11,1
	r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257A63C:
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257A650"))) PPC_WEAK_FUNC(sub_8257A650);
PPC_FUNC_IMPL(__imp__sub_8257A650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A654"))) PPC_WEAK_FUNC(sub_8257A654);
PPC_FUNC_IMPL(__imp__sub_8257A654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A658"))) PPC_WEAK_FUNC(sub_8257A658);
PPC_FUNC_IMPL(__imp__sub_8257A658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,76
	r11.s64 = ctx.r3.s64 + 76;
loc_8257A65C:
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
	// bne 0x8257a65c
	if (!cr0.eq) goto loc_8257A65C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A67C"))) PPC_WEAK_FUNC(sub_8257A67C);
PPC_FUNC_IMPL(__imp__sub_8257A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A680"))) PPC_WEAK_FUNC(sub_8257A680);
PPC_FUNC_IMPL(__imp__sub_8257A680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,76
	r31.s64 = ctx.r3.s64 + 76;
loc_8257A69C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// stwcx. r10,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257a69c
	if (!cr0.eq) goto loc_8257A69C;
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257a6f4
	if (!cr6.gt) goto loc_8257A6F4;
loc_8257A6C4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82605c60
	sub_82605C60(ctx, base);
loc_8257A6CC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// stwcx. r10,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257a6cc
	if (!cr0.eq) goto loc_8257A6CC;
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8257a6c4
	if (cr6.gt) goto loc_8257A6C4;
loc_8257A6F4:
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

__attribute__((alias("__imp__sub_8257A708"))) PPC_WEAK_FUNC(sub_8257A708);
PPC_FUNC_IMPL(__imp__sub_8257A708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A70C"))) PPC_WEAK_FUNC(sub_8257A70C);
PPC_FUNC_IMPL(__imp__sub_8257A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A710"))) PPC_WEAK_FUNC(sub_8257A710);
PPC_FUNC_IMPL(__imp__sub_8257A710) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8257a768
	if (cr6.eq) goto loc_8257A768;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
loc_8257A738:
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
	// bne 0x8257a738
	if (!cr0.eq) goto loc_8257A738;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257A768:
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
loc_8257A76C:
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
	// bne 0x8257a76c
	if (!cr0.eq) goto loc_8257A76C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257A798"))) PPC_WEAK_FUNC(sub_8257A798);
PPC_FUNC_IMPL(__imp__sub_8257A798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A79C"))) PPC_WEAK_FUNC(sub_8257A79C);
PPC_FUNC_IMPL(__imp__sub_8257A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A7A0"))) PPC_WEAK_FUNC(sub_8257A7A0);
PPC_FUNC_IMPL(__imp__sub_8257A7A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257a8d8
	if (cr6.eq) goto loc_8257A8D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257a8b0
	if (cr6.eq) goto loc_8257A8B0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r11,15100
	r30.s64 = r11.s64 + 15100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257a888
	if (cr6.eq) goto loc_8257A888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// bl 0x82396240
	sub_82396240(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,30244(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30244);
	// bl 0x823d60f8
	sub_823D60F8(ctx, base);
	// addi r10,r29,76
	ctx.r10.s64 = r29.s64 + 76;
loc_8257A864:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a864
	if (!cr0.eq) goto loc_8257A864;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8257A888:
	// addi r11,r29,76
	r11.s64 = r29.s64 + 76;
loc_8257A88C:
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
	// bne 0x8257a88c
	if (!cr0.eq) goto loc_8257A88C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8257A8B0:
	// addi r11,r29,76
	r11.s64 = r29.s64 + 76;
loc_8257A8B4:
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
	// bne 0x8257a8b4
	if (!cr0.eq) goto loc_8257A8B4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8257A8D8:
	// addi r11,r29,76
	r11.s64 = r29.s64 + 76;
loc_8257A8DC:
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
	// bne 0x8257a8dc
	if (!cr0.eq) goto loc_8257A8DC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8257A8FC"))) PPC_WEAK_FUNC(sub_8257A8FC);
PPC_FUNC_IMPL(__imp__sub_8257A8FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257A900"))) PPC_WEAK_FUNC(sub_8257A900);
PPC_FUNC_IMPL(__imp__sub_8257A900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
loc_8257A918:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r31,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r31.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8257a918
	if (!cr0.eq) goto loc_8257A918;
	// addi r28,r30,76
	r28.s64 = r30.s64 + 76;
loc_8257A934:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r31,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r31.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257a934
	if (!cr0.eq) goto loc_8257A934;
	// li r27,17
	r27.s64 = 17;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lis r26,-31965
	r26.s64 = -2094858240;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// lis r25,-31934
	r25.s64 = -2092826624;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// addi r24,r26,568
	r24.s64 = r26.s64 + 568;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,18432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r4,18432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// lwz r4,18432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_8257AA2C:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x8257aa2c
	if (!cr0.eq) goto loc_8257AA2C;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lis r3,-32168
	ctx.r3.s64 = -2108162048;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r3,-22624
	ctx.r7.s64 = ctx.r3.s64 + -22624;
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r27.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21640(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21640);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,568(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 568);
	// lwz r4,18432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x826cd980
	sub_826CD980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257a680
	sub_8257A680(ctx, base);
	// lwz r11,21640(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21640);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d0688
	sub_826D0688(ctx, base);
	// li r11,1
	r11.s64 = 1;
loc_8257AAB8:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r6,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x8257aab8
	if (!cr0.eq) goto loc_8257AAB8;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
loc_8257AAD4:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r4,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8257aad4
	if (!cr0.eq) goto loc_8257AAD4;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8257AAF0"))) PPC_WEAK_FUNC(sub_8257AAF0);
PPC_FUNC_IMPL(__imp__sub_8257AAF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8257AAF4"))) PPC_WEAK_FUNC(sub_8257AAF4);
PPC_FUNC_IMPL(__imp__sub_8257AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AAF8"))) PPC_WEAK_FUNC(sub_8257AAF8);
PPC_FUNC_IMPL(__imp__sub_8257AAF8) {
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
	// bl 0x8257a0c0
	sub_8257A0C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257ab30
	if (cr6.eq) goto loc_8257AB30;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257AB30:
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

__attribute__((alias("__imp__sub_8257AB44"))) PPC_WEAK_FUNC(sub_8257AB44);
PPC_FUNC_IMPL(__imp__sub_8257AB44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AB48"))) PPC_WEAK_FUNC(sub_8257AB48);
PPC_FUNC_IMPL(__imp__sub_8257AB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AB78"))) PPC_WEAK_FUNC(sub_8257AB78);
PPC_FUNC_IMPL(__imp__sub_8257AB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257ABA0"))) PPC_WEAK_FUNC(sub_8257ABA0);
PPC_FUNC_IMPL(__imp__sub_8257ABA0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e93f8
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r20,r8,-21936
	r20.s64 = ctx.r8.s64 + -21936;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r10,10844
	ctx.r4.s64 = ctx.r10.s64 + 10844;
	// addi r11,r11,-19008
	r11.s64 = r11.s64 + -19008;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-21936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21936, r11.u32);
	// lis r26,-32253
	r26.s64 = -2113732608;
	// stw r4,32(r20)
	PPC_STORE_U32(r20.u32 + 32, ctx.r4.u32);
	// addi r27,r9,32648
	r27.s64 = ctx.r9.s64 + 32648;
	// stb r10,4(r20)
	PPC_STORE_U8(r20.u32 + 4, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// stw r27,64(r20)
	PPC_STORE_U32(r20.u32 + 64, r27.u32);
	// addi r10,r26,-19020
	ctx.r10.s64 = r26.s64 + -19020;
	// stw r9,8(r20)
	PPC_STORE_U32(r20.u32 + 8, ctx.r9.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stw r11,56(r20)
	PPC_STORE_U32(r20.u32 + 56, r11.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r10,96(r20)
	PPC_STORE_U32(r20.u32 + 96, ctx.r10.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r25,-32253
	r25.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r9,r25,-23800
	ctx.r9.s64 = r25.s64 + -23800;
	// lfs f13,27400(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27400);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,-13388(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -13388);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stb r11,68(r20)
	PPC_STORE_U8(r20.u32 + 68, r11.u8);
	// stw r9,128(r20)
	PPC_STORE_U32(r20.u32 + 128, ctx.r9.u32);
	// lfs f10,-19024(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -19024);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,72(r20)
	PPC_STORE_U32(r20.u32 + 72, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stfs f0,28(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 28, temp.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r8,12(r20)
	PPC_STORE_U32(r20.u32 + 12, ctx.r8.u32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lfs f11,-19112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -19112);
	ctx.f11.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r7,16(r20)
	PPC_STORE_U32(r20.u32 + 16, ctx.r7.u32);
	// lis r11,1
	r11.s64 = 65536;
	// stw r6,20(r20)
	PPC_STORE_U32(r20.u32 + 20, ctx.r6.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r5,24(r20)
	PPC_STORE_U32(r20.u32 + 24, ctx.r5.u32);
	// lis r24,-32253
	r24.s64 = -2113732608;
	// stw r9,76(r20)
	PPC_STORE_U32(r20.u32 + 76, ctx.r9.u32);
	// lis r23,-32253
	r23.s64 = -2113732608;
	// stw r11,80(r20)
	PPC_STORE_U32(r20.u32 + 80, r11.u32);
	// lis r22,-32253
	r22.s64 = -2113732608;
	// stw r10,84(r20)
	PPC_STORE_U32(r20.u32 + 84, ctx.r10.u32);
	// lis r21,-32253
	r21.s64 = -2113732608;
	// stfs f13,60(r20)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r20.u32 + 60, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,92(r20)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r20.u32 + 92, temp.u32);
	// li r31,2
	r31.s64 = 2;
	// stfs f0,124(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 124, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// stfs f12,156(r20)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r20.u32 + 156, temp.u32);
	// lis r29,1
	r29.s64 = 65536;
	// stfs f11,188(r20)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r20.u32 + 188, temp.u32);
	// lis r28,4
	r28.s64 = 262144;
	// stfs f10,220(r20)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r20.u32 + 220, temp.u32);
	// stfs f0,252(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 252, temp.u32);
	// addi r8,r24,-19028
	ctx.r8.s64 = r24.s64 + -19028;
	// stfs f0,284(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 284, temp.u32);
	// addi r7,r23,-19040
	ctx.r7.s64 = r23.s64 + -19040;
	// addi r6,r22,-19048
	ctx.r6.s64 = r22.s64 + -19048;
	// stb r3,36(r20)
	PPC_STORE_U8(r20.u32 + 36, ctx.r3.u8);
	// addi r5,r21,-19056
	ctx.r5.s64 = r21.s64 + -19056;
	// stw r31,40(r20)
	PPC_STORE_U32(r20.u32 + 40, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,44(r20)
	PPC_STORE_U32(r20.u32 + 44, r30.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r29,48(r20)
	PPC_STORE_U32(r20.u32 + 48, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,52(r20)
	PPC_STORE_U32(r20.u32 + 52, r28.u32);
	// stb r11,100(r20)
	PPC_STORE_U8(r20.u32 + 100, r11.u8);
	// lis r11,1
	r11.s64 = 65536;
	// stw r10,104(r20)
	PPC_STORE_U32(r20.u32 + 104, ctx.r10.u32);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stw r11,112(r20)
	PPC_STORE_U32(r20.u32 + 112, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,116(r20)
	PPC_STORE_U32(r20.u32 + 116, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,132(r20)
	PPC_STORE_U8(r20.u32 + 132, r11.u8);
	// lis r11,1
	r11.s64 = 65536;
	// stw r10,136(r20)
	PPC_STORE_U32(r20.u32 + 136, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,144(r20)
	PPC_STORE_U32(r20.u32 + 144, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r9,88(r20)
	PPC_STORE_U32(r20.u32 + 88, ctx.r9.u32);
	// stb r11,164(r20)
	PPC_STORE_U8(r20.u32 + 164, r11.u8);
	// lis r11,1
	r11.s64 = 65536;
	// stw r9,108(r20)
	PPC_STORE_U32(r20.u32 + 108, ctx.r9.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r9,120(r20)
	PPC_STORE_U32(r20.u32 + 120, ctx.r9.u32);
	// stfs f13,316(r20)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r20.u32 + 316, temp.u32);
	// stw r9,140(r20)
	PPC_STORE_U32(r20.u32 + 140, ctx.r9.u32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r10,148(r20)
	PPC_STORE_U32(r20.u32 + 148, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,180(r20)
	PPC_STORE_U32(r20.u32 + 180, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r9,152(r20)
	PPC_STORE_U32(r20.u32 + 152, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,168(r20)
	PPC_STORE_U32(r20.u32 + 168, ctx.r10.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stw r11,204(r20)
	PPC_STORE_U32(r20.u32 + 204, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r8,160(r20)
	PPC_STORE_U32(r20.u32 + 160, ctx.r8.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stw r9,172(r20)
	PPC_STORE_U32(r20.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,184(r20)
	PPC_STORE_U32(r20.u32 + 184, ctx.r10.u32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,232(r20)
	PPC_STORE_U32(r20.u32 + 232, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r8,176(r20)
	PPC_STORE_U32(r20.u32 + 176, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,192(r20)
	PPC_STORE_U32(r20.u32 + 192, ctx.r7.u32);
	// lis r7,8
	ctx.r7.s64 = 524288;
	// stb r9,196(r20)
	PPC_STORE_U8(r20.u32 + 196, ctx.r9.u8);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r10,208(r20)
	PPC_STORE_U32(r20.u32 + 208, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,260(r20)
	PPC_STORE_U8(r20.u32 + 260, r11.u8);
	// li r11,1
	r11.s64 = 1;
	// stw r5,256(r20)
	PPC_STORE_U32(r20.u32 + 256, ctx.r5.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r8,200(r20)
	PPC_STORE_U32(r20.u32 + 200, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,212(r20)
	PPC_STORE_U32(r20.u32 + 212, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,216(r20)
	PPC_STORE_U32(r20.u32 + 216, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,224(r20)
	PPC_STORE_U32(r20.u32 + 224, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,236(r20)
	PPC_STORE_U32(r20.u32 + 236, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,292(r20)
	PPC_STORE_U8(r20.u32 + 292, r11.u8);
	// stfs f0,348(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 348, temp.u32);
	// stfs f0,380(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 380, temp.u32);
	// stb r8,228(r20)
	PPC_STORE_U8(r20.u32 + 228, ctx.r8.u8);
	// stfs f0,412(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 412, temp.u32);
	// stw r7,240(r20)
	PPC_STORE_U32(r20.u32 + 240, ctx.r7.u32);
	// stfs f0,444(r20)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + 444, temp.u32);
	// stw r9,244(r20)
	PPC_STORE_U32(r20.u32 + 244, ctx.r9.u32);
	// stw r6,248(r20)
	PPC_STORE_U32(r20.u32 + 248, ctx.r6.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	r31.s64 = -2113732608;
	// stw r10,264(r20)
	PPC_STORE_U32(r20.u32 + 264, ctx.r10.u32);
	// addi r5,r5,-19072
	ctx.r5.s64 = ctx.r5.s64 + -19072;
	// stw r9,268(r20)
	PPC_STORE_U32(r20.u32 + 268, ctx.r9.u32);
	// addi r4,r4,-19064
	ctx.r4.s64 = ctx.r4.s64 + -19064;
	// stw r10,296(r20)
	PPC_STORE_U32(r20.u32 + 296, ctx.r10.u32);
	// li r11,1024
	r11.s64 = 1024;
	// stw r11,308(r20)
	PPC_STORE_U32(r20.u32 + 308, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r9,300(r20)
	PPC_STORE_U32(r20.u32 + 300, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,324(r20)
	PPC_STORE_U8(r20.u32 + 324, ctx.r9.u8);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r11,332(r20)
	PPC_STORE_U32(r20.u32 + 332, r11.u32);
	// li r11,5
	r11.s64 = 5;
	// stw r10,312(r20)
	PPC_STORE_U32(r20.u32 + 312, ctx.r10.u32);
	// lis r30,-32253
	r30.s64 = -2113732608;
	// stw r10,336(r20)
	PPC_STORE_U32(r20.u32 + 336, ctx.r10.u32);
	// addi r3,r3,-19084
	ctx.r3.s64 = ctx.r3.s64 + -19084;
	// stw r9,344(r20)
	PPC_STORE_U32(r20.u32 + 344, ctx.r9.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,360(r20)
	PPC_STORE_U32(r20.u32 + 360, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r10,364(r20)
	PPC_STORE_U32(r20.u32 + 364, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,272(r20)
	PPC_STORE_U32(r20.u32 + 272, ctx.r8.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r7,276(r20)
	PPC_STORE_U32(r20.u32 + 276, ctx.r7.u32);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// stw r9,372(r20)
	PPC_STORE_U32(r20.u32 + 372, ctx.r9.u32);
	// addi r9,r30,-19108
	ctx.r9.s64 = r30.s64 + -19108;
	// stw r11,392(r20)
	PPC_STORE_U32(r20.u32 + 392, r11.u32);
	// li r11,16384
	r11.s64 = 16384;
	// stw r10,396(r20)
	PPC_STORE_U32(r20.u32 + 396, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,304(r20)
	PPC_STORE_U32(r20.u32 + 304, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,340(r20)
	PPC_STORE_U32(r20.u32 + 340, ctx.r7.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r9,416(r20)
	PPC_STORE_U32(r20.u32 + 416, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,404(r20)
	PPC_STORE_U32(r20.u32 + 404, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r10,408(r20)
	PPC_STORE_U32(r20.u32 + 408, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,328(r20)
	PPC_STORE_U32(r20.u32 + 328, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,368(r20)
	PPC_STORE_U32(r20.u32 + 368, ctx.r7.u32);
	// addi r31,r31,-19096
	r31.s64 = r31.s64 + -19096;
	// stb r9,420(r20)
	PPC_STORE_U8(r20.u32 + 420, ctx.r9.u8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r11,424(r20)
	PPC_STORE_U32(r20.u32 + 424, r11.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r10,428(r20)
	PPC_STORE_U32(r20.u32 + 428, ctx.r10.u32);
	// li r11,16384
	r11.s64 = 16384;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,280(r20)
	PPC_STORE_U32(r20.u32 + 280, ctx.r6.u32);
	// stb r8,356(r20)
	PPC_STORE_U8(r20.u32 + 356, ctx.r8.u8);
	// stw r5,288(r20)
	PPC_STORE_U32(r20.u32 + 288, ctx.r5.u32);
	// stw r4,320(r20)
	PPC_STORE_U32(r20.u32 + 320, ctx.r4.u32);
	// stw r3,352(r20)
	PPC_STORE_U32(r20.u32 + 352, ctx.r3.u32);
	// stw r6,376(r20)
	PPC_STORE_U32(r20.u32 + 376, ctx.r6.u32);
	// stw r31,384(r20)
	PPC_STORE_U32(r20.u32 + 384, r31.u32);
	// stb r8,388(r20)
	PPC_STORE_U8(r20.u32 + 388, ctx.r8.u8);
	// stw r7,400(r20)
	PPC_STORE_U32(r20.u32 + 400, ctx.r7.u32);
	// stw r9,432(r20)
	PPC_STORE_U32(r20.u32 + 432, ctx.r9.u32);
	// stw r11,436(r20)
	PPC_STORE_U32(r20.u32 + 436, r11.u32);
	// stw r10,440(r20)
	PPC_STORE_U32(r20.u32 + 440, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8257AF24"))) PPC_WEAK_FUNC(sub_8257AF24);
PPC_FUNC_IMPL(__imp__sub_8257AF24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8257AF28"))) PPC_WEAK_FUNC(sub_8257AF28);
PPC_FUNC_IMPL(__imp__sub_8257AF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-21936
	r11.s64 = r11.s64 + -21936;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8257AF38"))) PPC_WEAK_FUNC(sub_8257AF38);
PPC_FUNC_IMPL(__imp__sub_8257AF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AF3C"))) PPC_WEAK_FUNC(sub_8257AF3C);
PPC_FUNC_IMPL(__imp__sub_8257AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AF40"))) PPC_WEAK_FUNC(sub_8257AF40);
PPC_FUNC_IMPL(__imp__sub_8257AF40) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-18996
	ctx.r10.s64 = r11.s64 + -18996;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8257af84
	if (cr6.eq) goto loc_8257AF84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
loc_8257AF84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257AF94"))) PPC_WEAK_FUNC(sub_8257AF94);
PPC_FUNC_IMPL(__imp__sub_8257AF94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AF98"))) PPC_WEAK_FUNC(sub_8257AF98);
PPC_FUNC_IMPL(__imp__sub_8257AF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8257AFA4"))) PPC_WEAK_FUNC(sub_8257AFA4);
PPC_FUNC_IMPL(__imp__sub_8257AFA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e6440
	sub_826E6440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AFA8"))) PPC_WEAK_FUNC(sub_8257AFA8);
PPC_FUNC_IMPL(__imp__sub_8257AFA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AFAC"))) PPC_WEAK_FUNC(sub_8257AFAC);
PPC_FUNC_IMPL(__imp__sub_8257AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AFB0"))) PPC_WEAK_FUNC(sub_8257AFB0);
PPC_FUNC_IMPL(__imp__sub_8257AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8257AFCC"))) PPC_WEAK_FUNC(sub_8257AFCC);
PPC_FUNC_IMPL(__imp__sub_8257AFCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257AFD0"))) PPC_WEAK_FUNC(sub_8257AFD0);
PPC_FUNC_IMPL(__imp__sub_8257AFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AFD4"))) PPC_WEAK_FUNC(sub_8257AFD4);
PPC_FUNC_IMPL(__imp__sub_8257AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AFD8"))) PPC_WEAK_FUNC(sub_8257AFD8);
PPC_FUNC_IMPL(__imp__sub_8257AFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AFE8"))) PPC_WEAK_FUNC(sub_8257AFE8);
PPC_FUNC_IMPL(__imp__sub_8257AFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AFF8"))) PPC_WEAK_FUNC(sub_8257AFF8);
PPC_FUNC_IMPL(__imp__sub_8257AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r9,48
	ctx.r9.s64 = 48;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8257B00C:
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8257b00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257B00C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B01C"))) PPC_WEAK_FUNC(sub_8257B01C);
PPC_FUNC_IMPL(__imp__sub_8257B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B020"))) PPC_WEAK_FUNC(sub_8257B020);
PPC_FUNC_IMPL(__imp__sub_8257B020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_8257B028:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x8257b048
	if (cr6.eq) goto loc_8257B048;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x8257b028
	if (cr6.lt) goto loc_8257B028;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8257B048:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B050"))) PPC_WEAK_FUNC(sub_8257B050);
PPC_FUNC_IMPL(__imp__sub_8257B050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,48
	ctx.r9.s64 = 48;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8257B064:
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8257b064
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257B064;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8257B07C"))) PPC_WEAK_FUNC(sub_8257B07C);
PPC_FUNC_IMPL(__imp__sub_8257B07C) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e66a0
	sub_826E66A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B080"))) PPC_WEAK_FUNC(sub_8257B080);
PPC_FUNC_IMPL(__imp__sub_8257B080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B084"))) PPC_WEAK_FUNC(sub_8257B084);
PPC_FUNC_IMPL(__imp__sub_8257B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B088"))) PPC_WEAK_FUNC(sub_8257B088);
PPC_FUNC_IMPL(__imp__sub_8257B088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_8257B090:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x8257b0b8
	if (cr6.eq) goto loc_8257B0B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x8257b090
	if (cr6.lt) goto loc_8257B090;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
loc_8257B0B8:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8257b0cc
	if (!cr6.eq) goto loc_8257B0CC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
loc_8257B0CC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8257B0E4"))) PPC_WEAK_FUNC(sub_8257B0E4);
PPC_FUNC_IMPL(__imp__sub_8257B0E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B0E8"))) PPC_WEAK_FUNC(sub_8257B0E8);
PPC_FUNC_IMPL(__imp__sub_8257B0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_8257B100"))) PPC_WEAK_FUNC(sub_8257B100);
PPC_FUNC_IMPL(__imp__sub_8257B100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B104"))) PPC_WEAK_FUNC(sub_8257B104);
PPC_FUNC_IMPL(__imp__sub_8257B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B108"))) PPC_WEAK_FUNC(sub_8257B108);
PPC_FUNC_IMPL(__imp__sub_8257B108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8257B13C"))) PPC_WEAK_FUNC(sub_8257B13C);
PPC_FUNC_IMPL(__imp__sub_8257B13C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257B140"))) PPC_WEAK_FUNC(sub_8257B140);
PPC_FUNC_IMPL(__imp__sub_8257B140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B144"))) PPC_WEAK_FUNC(sub_8257B144);
PPC_FUNC_IMPL(__imp__sub_8257B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B148"))) PPC_WEAK_FUNC(sub_8257B148);
PPC_FUNC_IMPL(__imp__sub_8257B148) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r11,-18996
	ctx.r9.s64 = r11.s64 + -18996;
	// li r29,0
	r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8257B17C:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8257b17c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257B17C;
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-18984
	ctx.r3.s64 = r11.s64 + -18984;
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,21540(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21540);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257b1dc
	if (cr6.eq) goto loc_8257B1DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8257b1e0
	goto loc_8257B1E0;
loc_8257B1DC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8257B1E0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8257b284
	if (cr6.eq) goto loc_8257B284;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,-18992
	ctx.r4.s64 = ctx.r10.s64 + -18992;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,18088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18088);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826e5b38
	sub_826E5B38(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257b240
	if (cr6.eq) goto loc_8257B240;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257b244
	if (!cr6.eq) goto loc_8257B244;
loc_8257B240:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8257B244:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x826e7338
	sub_826E7338(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
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
	// addi r4,r9,23552
	ctx.r4.s64 = ctx.r9.s64 + 23552;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e77f0
	sub_826E77F0(ctx, base);
loc_8257B284:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257B28C"))) PPC_WEAK_FUNC(sub_8257B28C);
PPC_FUNC_IMPL(__imp__sub_8257B28C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257B290"))) PPC_WEAK_FUNC(sub_8257B290);
PPC_FUNC_IMPL(__imp__sub_8257B290) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-18996
	ctx.r10.s64 = r11.s64 + -18996;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8257b2dc
	if (cr6.eq) goto loc_8257B2DC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
loc_8257B2DC:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257b2f4
	if (cr6.eq) goto loc_8257B2F4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257B2F4:
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

__attribute__((alias("__imp__sub_8257B308"))) PPC_WEAK_FUNC(sub_8257B308);
PPC_FUNC_IMPL(__imp__sub_8257B308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B30C"))) PPC_WEAK_FUNC(sub_8257B30C);
PPC_FUNC_IMPL(__imp__sub_8257B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B310"))) PPC_WEAK_FUNC(sub_8257B310);
PPC_FUNC_IMPL(__imp__sub_8257B310) {
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
	// bl 0x8257f648
	sub_8257F648(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-18948
	ctx.r10.s64 = r11.s64 + -18948;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257B348"))) PPC_WEAK_FUNC(sub_8257B348);
PPC_FUNC_IMPL(__imp__sub_8257B348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B34C"))) PPC_WEAK_FUNC(sub_8257B34C);
PPC_FUNC_IMPL(__imp__sub_8257B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

