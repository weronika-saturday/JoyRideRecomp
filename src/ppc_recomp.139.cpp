#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82541FA8"))) PPC_WEAK_FUNC(sub_82541FA8);
PPC_FUNC_IMPL(__imp__sub_82541FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541FB0"))) PPC_WEAK_FUNC(sub_82541FB0);
PPC_FUNC_IMPL(__imp__sub_82541FB0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,1080(r31)
	PPC_STORE_U32(r31.u32 + 1080, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1080(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82542020"))) PPC_WEAK_FUNC(sub_82542020);
PPC_FUNC_IMPL(__imp__sub_82542020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542024"))) PPC_WEAK_FUNC(sub_82542024);
PPC_FUNC_IMPL(__imp__sub_82542024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542028"))) PPC_WEAK_FUNC(sub_82542028);
PPC_FUNC_IMPL(__imp__sub_82542028) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// lwz r6,1080(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1080(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82542098"))) PPC_WEAK_FUNC(sub_82542098);
PPC_FUNC_IMPL(__imp__sub_82542098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254209C"))) PPC_WEAK_FUNC(sub_8254209C);
PPC_FUNC_IMPL(__imp__sub_8254209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825420A0"))) PPC_WEAK_FUNC(sub_825420A0);
PPC_FUNC_IMPL(__imp__sub_825420A0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// b 0x82604ed8
	sub_82604ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825420B0"))) PPC_WEAK_FUNC(sub_825420B0);
PPC_FUNC_IMPL(__imp__sub_825420B0) {
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
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// addi r8,r9,30880
	ctx.r8.s64 = ctx.r9.s64 + 30880;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r6,r7,31768
	ctx.r6.s64 = ctx.r7.s64 + 31768;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(r31.u32 + 1080, r11.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
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

__attribute__((alias("__imp__sub_8254214C"))) PPC_WEAK_FUNC(sub_8254214C);
PPC_FUNC_IMPL(__imp__sub_8254214C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542150"))) PPC_WEAK_FUNC(sub_82542150);
PPC_FUNC_IMPL(__imp__sub_82542150) {
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
	// addi r9,r11,30880
	ctx.r9.s64 = r11.s64 + 30880;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8254218c
	if (cr6.eq) goto loc_8254218C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254218C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254219C"))) PPC_WEAK_FUNC(sub_8254219C);
PPC_FUNC_IMPL(__imp__sub_8254219C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825421A0"))) PPC_WEAK_FUNC(sub_825421A0);
PPC_FUNC_IMPL(__imp__sub_825421A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17056
	ctx.r3.s64 = r11.s64 + -17056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825421AC"))) PPC_WEAK_FUNC(sub_825421AC);
PPC_FUNC_IMPL(__imp__sub_825421AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825421B0"))) PPC_WEAK_FUNC(sub_825421B0);
PPC_FUNC_IMPL(__imp__sub_825421B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17056
	ctx.r3.s64 = r11.s64 + -17056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825421BC"))) PPC_WEAK_FUNC(sub_825421BC);
PPC_FUNC_IMPL(__imp__sub_825421BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825421C0"))) PPC_WEAK_FUNC(sub_825421C0);
PPC_FUNC_IMPL(__imp__sub_825421C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,116
	r30.s64 = ctx.r4.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r29,r29,56
	r29.s64 = r29.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82542258
	if (cr6.eq) goto loc_82542258;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cbd90
	sub_826CBD90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9464
	return;
loc_82542258:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82542270"))) PPC_WEAK_FUNC(sub_82542270);
PPC_FUNC_IMPL(__imp__sub_82542270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82542274"))) PPC_WEAK_FUNC(sub_82542274);
PPC_FUNC_IMPL(__imp__sub_82542274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542278"))) PPC_WEAK_FUNC(sub_82542278);
PPC_FUNC_IMPL(__imp__sub_82542278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826ca7a0
	sub_826CA7A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825422CC"))) PPC_WEAK_FUNC(sub_825422CC);
PPC_FUNC_IMPL(__imp__sub_825422CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825422D0"))) PPC_WEAK_FUNC(sub_825422D0);
PPC_FUNC_IMPL(__imp__sub_825422D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8272e848
	sub_8272E848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82542310"))) PPC_WEAK_FUNC(sub_82542310);
PPC_FUNC_IMPL(__imp__sub_82542310) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82542314"))) PPC_WEAK_FUNC(sub_82542314);
PPC_FUNC_IMPL(__imp__sub_82542314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542318"))) PPC_WEAK_FUNC(sub_82542318);
PPC_FUNC_IMPL(__imp__sub_82542318) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8272e950
	sub_8272E950(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82542358"))) PPC_WEAK_FUNC(sub_82542358);
PPC_FUNC_IMPL(__imp__sub_82542358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254235C"))) PPC_WEAK_FUNC(sub_8254235C);
PPC_FUNC_IMPL(__imp__sub_8254235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542360"))) PPC_WEAK_FUNC(sub_82542360);
PPC_FUNC_IMPL(__imp__sub_82542360) {
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
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,31792
	ctx.r10.s64 = r11.s64 + 31792;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
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

__attribute__((alias("__imp__sub_825423A8"))) PPC_WEAK_FUNC(sub_825423A8);
PPC_FUNC_IMPL(__imp__sub_825423A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825423AC"))) PPC_WEAK_FUNC(sub_825423AC);
PPC_FUNC_IMPL(__imp__sub_825423AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825423B0"))) PPC_WEAK_FUNC(sub_825423B0);
PPC_FUNC_IMPL(__imp__sub_825423B0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,31792
	ctx.r10.s64 = r11.s64 + 31792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r8,r9,30888
	ctx.r8.s64 = ctx.r9.s64 + 30888;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r7,30880
	ctx.r6.s64 = ctx.r7.s64 + 30880;
	// stw r6,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r6.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8254242C"))) PPC_WEAK_FUNC(sub_8254242C);
PPC_FUNC_IMPL(__imp__sub_8254242C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542430"))) PPC_WEAK_FUNC(sub_82542430);
PPC_FUNC_IMPL(__imp__sub_82542430) {
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
	// bl 0x825423b0
	sub_825423B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82542468
	if (cr6.eq) goto loc_82542468;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82542468:
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

__attribute__((alias("__imp__sub_8254247C"))) PPC_WEAK_FUNC(sub_8254247C);
PPC_FUNC_IMPL(__imp__sub_8254247C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542480"))) PPC_WEAK_FUNC(sub_82542480);
PPC_FUNC_IMPL(__imp__sub_82542480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542484"))) PPC_WEAK_FUNC(sub_82542484);
PPC_FUNC_IMPL(__imp__sub_82542484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542488"))) PPC_WEAK_FUNC(sub_82542488);
PPC_FUNC_IMPL(__imp__sub_82542488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254248C"))) PPC_WEAK_FUNC(sub_8254248C);
PPC_FUNC_IMPL(__imp__sub_8254248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542490"))) PPC_WEAK_FUNC(sub_82542490);
PPC_FUNC_IMPL(__imp__sub_82542490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542494"))) PPC_WEAK_FUNC(sub_82542494);
PPC_FUNC_IMPL(__imp__sub_82542494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542498"))) PPC_WEAK_FUNC(sub_82542498);
PPC_FUNC_IMPL(__imp__sub_82542498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,31816
	ctx.r9.s64 = r11.s64 + 31816;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424B0"))) PPC_WEAK_FUNC(sub_825424B0);
PPC_FUNC_IMPL(__imp__sub_825424B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,31816
	ctx.r10.s64 = r11.s64 + 31816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424C0"))) PPC_WEAK_FUNC(sub_825424C0);
PPC_FUNC_IMPL(__imp__sub_825424C0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
}

__attribute__((alias("__imp__sub_825424CC"))) PPC_WEAK_FUNC(sub_825424CC);
PPC_FUNC_IMPL(__imp__sub_825424CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825424D0"))) PPC_WEAK_FUNC(sub_825424D0);
PPC_FUNC_IMPL(__imp__sub_825424D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424D8"))) PPC_WEAK_FUNC(sub_825424D8);
PPC_FUNC_IMPL(__imp__sub_825424D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424E0"))) PPC_WEAK_FUNC(sub_825424E0);
PPC_FUNC_IMPL(__imp__sub_825424E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825424E8"))) PPC_WEAK_FUNC(sub_825424E8);
PPC_FUNC_IMPL(__imp__sub_825424E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,20016
	ctx.r4.s64 = r11.s64 + 20016;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r4,r10,31824
	ctx.r4.s64 = ctx.r10.s64 + 31824;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
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

__attribute__((alias("__imp__sub_82542550"))) PPC_WEAK_FUNC(sub_82542550);
PPC_FUNC_IMPL(__imp__sub_82542550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542554"))) PPC_WEAK_FUNC(sub_82542554);
PPC_FUNC_IMPL(__imp__sub_82542554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542558"))) PPC_WEAK_FUNC(sub_82542558);
PPC_FUNC_IMPL(__imp__sub_82542558) {
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
	// lwz r11,2308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r11,2308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2308);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, r30.u32);
	// lwz r11,2308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2308);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2308(r31)
	PPC_STORE_U32(r31.u32 + 2308, r11.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_825425D4"))) PPC_WEAK_FUNC(sub_825425D4);
PPC_FUNC_IMPL(__imp__sub_825425D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425D8"))) PPC_WEAK_FUNC(sub_825425D8);
PPC_FUNC_IMPL(__imp__sub_825425D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425F0"))) PPC_WEAK_FUNC(sub_825425F0);
PPC_FUNC_IMPL(__imp__sub_825425F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,2308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2308, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825425FC"))) PPC_WEAK_FUNC(sub_825425FC);
PPC_FUNC_IMPL(__imp__sub_825425FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542600"))) PPC_WEAK_FUNC(sub_82542600);
PPC_FUNC_IMPL(__imp__sub_82542600) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
}

__attribute__((alias("__imp__sub_82542604"))) PPC_WEAK_FUNC(sub_82542604);
PPC_FUNC_IMPL(__imp__sub_82542604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542608"))) PPC_WEAK_FUNC(sub_82542608);
PPC_FUNC_IMPL(__imp__sub_82542608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,31836
	ctx.r9.s64 = r11.s64 + 31836;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,31816
	ctx.r10.s64 = ctx.r10.s64 + 31816;
loc_8254262C:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stwu r9,72(r11)
	ea = 72 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8254262c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8254262C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,2308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2308, r11.u32);
}

__attribute__((alias("__imp__sub_82542640"))) PPC_WEAK_FUNC(sub_82542640);
PPC_FUNC_IMPL(__imp__sub_82542640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542644"))) PPC_WEAK_FUNC(sub_82542644);
PPC_FUNC_IMPL(__imp__sub_82542644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542648"))) PPC_WEAK_FUNC(sub_82542648);
PPC_FUNC_IMPL(__imp__sub_82542648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,31836
	ctx.r9.s64 = r11.s64 + 31836;
	// addi r11,r3,2308
	r11.s64 = ctx.r3.s64 + 2308;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,31816
	ctx.r10.s64 = ctx.r10.s64 + 31816;
loc_82542668:
	// stwu r10,-72(r11)
	ea = -72 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82542668
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82542668;
}

__attribute__((alias("__imp__sub_82542670"))) PPC_WEAK_FUNC(sub_82542670);
PPC_FUNC_IMPL(__imp__sub_82542670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542674"))) PPC_WEAK_FUNC(sub_82542674);
PPC_FUNC_IMPL(__imp__sub_82542674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542678"))) PPC_WEAK_FUNC(sub_82542678);
PPC_FUNC_IMPL(__imp__sub_82542678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r10,2308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_825426A4:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x825426a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825426A4;
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r11.u32);
	// lwz r11,2308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2308, r11.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825426D0"))) PPC_WEAK_FUNC(sub_825426D0);
PPC_FUNC_IMPL(__imp__sub_825426D0) {
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
	// addi r9,r11,31816
	ctx.r9.s64 = r11.s64 + 31816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82542704
	if (cr6.eq) goto loc_82542704;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82542704:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82542714"))) PPC_WEAK_FUNC(sub_82542714);
PPC_FUNC_IMPL(__imp__sub_82542714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542718"))) PPC_WEAK_FUNC(sub_82542718);
PPC_FUNC_IMPL(__imp__sub_82542718) {
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
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,31836
	ctx.r9.s64 = r11.s64 + 31836;
	// addi r11,r3,2308
	r11.s64 = ctx.r3.s64 + 2308;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,31816
	ctx.r10.s64 = ctx.r10.s64 + 31816;
loc_8254274C:
	// stwu r10,-72(r11)
	ea = -72 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x8254274c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8254274C;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254276c
	if (cr6.eq) goto loc_8254276C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254276C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254277C"))) PPC_WEAK_FUNC(sub_8254277C);
PPC_FUNC_IMPL(__imp__sub_8254277C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542780"))) PPC_WEAK_FUNC(sub_82542780);
PPC_FUNC_IMPL(__imp__sub_82542780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23748
	ctx.r9.s64 = r11.s64 + -23748;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542798"))) PPC_WEAK_FUNC(sub_82542798);
PPC_FUNC_IMPL(__imp__sub_82542798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-23748
	ctx.r10.s64 = r11.s64 + -23748;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825427A4"))) PPC_WEAK_FUNC(sub_825427A4);
PPC_FUNC_IMPL(__imp__sub_825427A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825427A8"))) PPC_WEAK_FUNC(sub_825427A8);
PPC_FUNC_IMPL(__imp__sub_825427A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825427CC"))) PPC_WEAK_FUNC(sub_825427CC);
PPC_FUNC_IMPL(__imp__sub_825427CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825427D0"))) PPC_WEAK_FUNC(sub_825427D0);
PPC_FUNC_IMPL(__imp__sub_825427D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
}

__attribute__((alias("__imp__sub_825427DC"))) PPC_WEAK_FUNC(sub_825427DC);
PPC_FUNC_IMPL(__imp__sub_825427DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825427E0"))) PPC_WEAK_FUNC(sub_825427E0);
PPC_FUNC_IMPL(__imp__sub_825427E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
}

__attribute__((alias("__imp__sub_825427E8"))) PPC_WEAK_FUNC(sub_825427E8);
PPC_FUNC_IMPL(__imp__sub_825427E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825427EC"))) PPC_WEAK_FUNC(sub_825427EC);
PPC_FUNC_IMPL(__imp__sub_825427EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825427F0"))) PPC_WEAK_FUNC(sub_825427F0);
PPC_FUNC_IMPL(__imp__sub_825427F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
}

__attribute__((alias("__imp__sub_825427F4"))) PPC_WEAK_FUNC(sub_825427F4);
PPC_FUNC_IMPL(__imp__sub_825427F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825427F8"))) PPC_WEAK_FUNC(sub_825427F8);
PPC_FUNC_IMPL(__imp__sub_825427F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542800"))) PPC_WEAK_FUNC(sub_82542800);
PPC_FUNC_IMPL(__imp__sub_82542800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-23740
	ctx.r9.s64 = ctx.r10.s64 + -23740;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254282C"))) PPC_WEAK_FUNC(sub_8254282C);
PPC_FUNC_IMPL(__imp__sub_8254282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542830"))) PPC_WEAK_FUNC(sub_82542830);
PPC_FUNC_IMPL(__imp__sub_82542830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-23740
	ctx.r10.s64 = r11.s64 + -23740;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8254283C"))) PPC_WEAK_FUNC(sub_8254283C);
PPC_FUNC_IMPL(__imp__sub_8254283C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542840"))) PPC_WEAK_FUNC(sub_82542840);
PPC_FUNC_IMPL(__imp__sub_82542840) {
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
	// lwz r11,420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x825428d0
	if (!cr6.lt) goto loc_825428D0;
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// lwz r9,420(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mulli r11,r9,52
	r11.s64 = ctx.r9.s64 * 52;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r5,420(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mulli r11,r5,52
	r11.s64 = ctx.r5.s64 * 52;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mulli r11,r3,52
	r11.s64 = ctx.r3.s64 * 52;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stb r7,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r7.u8);
	// beq cr6,0x825428c4
	if (cr6.eq) goto loc_825428C4;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,21
	ctx.r3.s64 = r11.s64 + 21;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
loc_825428C4:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
loc_825428D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825428E0"))) PPC_WEAK_FUNC(sub_825428E0);
PPC_FUNC_IMPL(__imp__sub_825428E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825428E4"))) PPC_WEAK_FUNC(sub_825428E4);
PPC_FUNC_IMPL(__imp__sub_825428E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825428E8"))) PPC_WEAK_FUNC(sub_825428E8);
PPC_FUNC_IMPL(__imp__sub_825428E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,52
	r11.s64 = ctx.r4.s64 * 52;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
}

__attribute__((alias("__imp__sub_825428F4"))) PPC_WEAK_FUNC(sub_825428F4);
PPC_FUNC_IMPL(__imp__sub_825428F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825428F8"))) PPC_WEAK_FUNC(sub_825428F8);
PPC_FUNC_IMPL(__imp__sub_825428F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
}

__attribute__((alias("__imp__sub_825428FC"))) PPC_WEAK_FUNC(sub_825428FC);
PPC_FUNC_IMPL(__imp__sub_825428FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542900"))) PPC_WEAK_FUNC(sub_82542900);
PPC_FUNC_IMPL(__imp__sub_82542900) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542908"))) PPC_WEAK_FUNC(sub_82542908);
PPC_FUNC_IMPL(__imp__sub_82542908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r7,420(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mulli r10,r7,52
	ctx.r10.s64 = ctx.r7.s64 * 52;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mulli r10,r5,52
	ctx.r10.s64 = ctx.r5.s64 * 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stb r8,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r8.u8);
	// lwz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,420(r11)
	PPC_STORE_U32(r11.u32 + 420, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254296C"))) PPC_WEAK_FUNC(sub_8254296C);
PPC_FUNC_IMPL(__imp__sub_8254296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542970"))) PPC_WEAK_FUNC(sub_82542970);
PPC_FUNC_IMPL(__imp__sub_82542970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// addi r11,r3,428
	r11.s64 = ctx.r3.s64 + 428;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r7,420(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mulli r10,r7,52
	ctx.r10.s64 = ctx.r7.s64 * 52;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mulli r10,r5,52
	ctx.r10.s64 = ctx.r5.s64 * 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stb r8,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r8.u8);
	// lwz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,420(r11)
	PPC_STORE_U32(r11.u32 + 420, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429D4"))) PPC_WEAK_FUNC(sub_825429D4);
PPC_FUNC_IMPL(__imp__sub_825429D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825429D8"))) PPC_WEAK_FUNC(sub_825429D8);
PPC_FUNC_IMPL(__imp__sub_825429D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 852, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429E0"))) PPC_WEAK_FUNC(sub_825429E0);
PPC_FUNC_IMPL(__imp__sub_825429E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 856, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429E8"))) PPC_WEAK_FUNC(sub_825429E8);
PPC_FUNC_IMPL(__imp__sub_825429E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,880(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// addi r11,r3,860
	r11.s64 = ctx.r3.s64 + 860;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r4.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A14"))) PPC_WEAK_FUNC(sub_82542A14);
PPC_FUNC_IMPL(__imp__sub_82542A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542A18"))) PPC_WEAK_FUNC(sub_82542A18);
PPC_FUNC_IMPL(__imp__sub_82542A18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,860
	ctx.r3.s64 = ctx.r3.s64 + 860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A20"))) PPC_WEAK_FUNC(sub_82542A20);
PPC_FUNC_IMPL(__imp__sub_82542A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,424
	r11.s64 = ctx.r4.s64 * 424;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A30"))) PPC_WEAK_FUNC(sub_82542A30);
PPC_FUNC_IMPL(__imp__sub_82542A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,213
	r11.s64 = ctx.r4.s64 + 213;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542A40"))) PPC_WEAK_FUNC(sub_82542A40);
PPC_FUNC_IMPL(__imp__sub_82542A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-23716
	ctx.r8.s64 = ctx.r10.s64 + -23716;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r7,r9,-23740
	ctx.r7.s64 = ctx.r9.s64 + -23740;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stb r11,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, r11.u8);
	// stb r11,125(r3)
	PPC_STORE_U8(ctx.r3.u32 + 125, r11.u8);
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, r11.u8);
	// stb r11,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, r11.u8);
	// stw r7,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r7.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, r11.u32);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stb r11,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, r11.u8);
	// stb r11,229(r3)
	PPC_STORE_U8(ctx.r3.u32 + 229, r11.u8);
	// stw r7,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r7.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, r11.u32);
	// stw r10,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r10.u32);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, r11.u8);
	// stb r11,281(r3)
	PPC_STORE_U8(ctx.r3.u32 + 281, r11.u8);
	// stw r7,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, r11.u32);
	// stw r10,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// stb r11,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, r11.u8);
	// stb r11,333(r3)
	PPC_STORE_U8(ctx.r3.u32 + 333, r11.u8);
	// stw r7,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r7.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, r11.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, r11.u32);
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stb r11,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, r11.u8);
	// stb r11,385(r3)
	PPC_STORE_U8(ctx.r3.u32 + 385, r11.u8);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, r11.u32);
}

__attribute__((alias("__imp__sub_82542B20"))) PPC_WEAK_FUNC(sub_82542B20);
PPC_FUNC_IMPL(__imp__sub_82542B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B24"))) PPC_WEAK_FUNC(sub_82542B24);
PPC_FUNC_IMPL(__imp__sub_82542B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542B28"))) PPC_WEAK_FUNC(sub_82542B28);
PPC_FUNC_IMPL(__imp__sub_82542B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,-23716
	ctx.r9.s64 = r11.s64 + -23716;
	// addi r11,r3,420
	r11.s64 = ctx.r3.s64 + 420;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-23740
	ctx.r10.s64 = ctx.r10.s64 + -23740;
loc_82542B48:
	// stwu r10,-52(r11)
	ea = -52 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82542b48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82542B48;
}

__attribute__((alias("__imp__sub_82542B50"))) PPC_WEAK_FUNC(sub_82542B50);
PPC_FUNC_IMPL(__imp__sub_82542B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B54"))) PPC_WEAK_FUNC(sub_82542B54);
PPC_FUNC_IMPL(__imp__sub_82542B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542B58"))) PPC_WEAK_FUNC(sub_82542B58);
PPC_FUNC_IMPL(__imp__sub_82542B58) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-23708
	ctx.r10.s64 = r11.s64 + -23708;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// bl 0x82542a40
	sub_82542A40(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-23748
	ctx.r8.s64 = ctx.r9.s64 + -23748;
	// stw r11,448(r6)
	PPC_STORE_U32(ctx.r6.u32 + 448, r11.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r8,428(r6)
	PPC_STORE_U32(ctx.r6.u32 + 428, ctx.r8.u32);
	// stw r11,452(r6)
	PPC_STORE_U32(ctx.r6.u32 + 452, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82542BA4"))) PPC_WEAK_FUNC(sub_82542BA4);
PPC_FUNC_IMPL(__imp__sub_82542BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542BA8"))) PPC_WEAK_FUNC(sub_82542BA8);
PPC_FUNC_IMPL(__imp__sub_82542BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r11,8
	r11.s64 = 8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r7,r10,-23708
	ctx.r7.s64 = ctx.r10.s64 + -23708;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r10,420
	r11.s64 = ctx.r10.s64 + 420;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r6,r9,-23748
	ctx.r6.s64 = ctx.r9.s64 + -23748;
	// addi r5,r8,-23716
	ctx.r5.s64 = ctx.r8.s64 + -23716;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r6,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r10,r10,-23740
	ctx.r10.s64 = ctx.r10.s64 + -23740;
loc_82542BE4:
	// stwu r10,-52(r11)
	ea = -52 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82542be4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82542BE4;
}

__attribute__((alias("__imp__sub_82542BEC"))) PPC_WEAK_FUNC(sub_82542BEC);
PPC_FUNC_IMPL(__imp__sub_82542BEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542BF0"))) PPC_WEAK_FUNC(sub_82542BF0);
PPC_FUNC_IMPL(__imp__sub_82542BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,31844
	ctx.r10.s64 = r11.s64 + 31844;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82542C14:
	// bl 0x82542a40
	sub_82542A40(ctx, base);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r3,r3,424
	ctx.r3.s64 = ctx.r3.s64 + 424;
	// bge 0x82542c14
	if (!cr0.lt) goto loc_82542C14;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-23748
	ctx.r9.s64 = ctx.r10.s64 + -23748;
	// stw r11,880(r5)
	PPC_STORE_U32(ctx.r5.u32 + 880, r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r9,860(r5)
	PPC_STORE_U32(ctx.r5.u32 + 860, ctx.r9.u32);
	// stw r11,852(r5)
	PPC_STORE_U32(ctx.r5.u32 + 852, r11.u32);
	// stw r11,856(r5)
	PPC_STORE_U32(ctx.r5.u32 + 856, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82542C50"))) PPC_WEAK_FUNC(sub_82542C50);
PPC_FUNC_IMPL(__imp__sub_82542C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542C54"))) PPC_WEAK_FUNC(sub_82542C54);
PPC_FUNC_IMPL(__imp__sub_82542C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542C58"))) PPC_WEAK_FUNC(sub_82542C58);
PPC_FUNC_IMPL(__imp__sub_82542C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,31844
	ctx.r9.s64 = r11.s64 + 31844;
	// addi r8,r10,-23748
	ctx.r8.s64 = ctx.r10.s64 + -23748;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,852
	r31.s64 = ctx.r3.s64 + 852;
	// stw r8,860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 860, ctx.r8.u32);
	// li r30,1
	r30.s64 = 1;
	// addi r29,r11,-23716
	r29.s64 = r11.s64 + -23716;
loc_82542C8C:
	// stwu r29,-424(r31)
	ea = -424 + r31.u32;
	PPC_STORE_U32(ea, r29.u32);
	r31.u32 = ea;
	// lis r11,-32172
	r11.s64 = -2108424192;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,10288
	ctx.r6.s64 = r11.s64 + 10288;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822b0b20
	sub_822B0B20(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82542c8c
	if (!cr0.lt) goto loc_82542C8C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82542CB4"))) PPC_WEAK_FUNC(sub_82542CB4);
PPC_FUNC_IMPL(__imp__sub_82542CB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82542CB8"))) PPC_WEAK_FUNC(sub_82542CB8);
PPC_FUNC_IMPL(__imp__sub_82542CB8) {
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
	// bl 0x82542c58
	sub_82542C58(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82542cf0
	if (cr6.eq) goto loc_82542CF0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82542CF0:
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

__attribute__((alias("__imp__sub_82542D04"))) PPC_WEAK_FUNC(sub_82542D04);
PPC_FUNC_IMPL(__imp__sub_82542D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D08"))) PPC_WEAK_FUNC(sub_82542D08);
PPC_FUNC_IMPL(__imp__sub_82542D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31852
	ctx.r9.s64 = r11.s64 + 31852;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D20"))) PPC_WEAK_FUNC(sub_82542D20);
PPC_FUNC_IMPL(__imp__sub_82542D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,31852
	ctx.r10.s64 = r11.s64 + 31852;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D30"))) PPC_WEAK_FUNC(sub_82542D30);
PPC_FUNC_IMPL(__imp__sub_82542D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,31860
	ctx.r10.s64 = r11.s64 + 31860;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D44"))) PPC_WEAK_FUNC(sub_82542D44);
PPC_FUNC_IMPL(__imp__sub_82542D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542D48"))) PPC_WEAK_FUNC(sub_82542D48);
PPC_FUNC_IMPL(__imp__sub_82542D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,31860
	ctx.r10.s64 = r11.s64 + 31860;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542D58"))) PPC_WEAK_FUNC(sub_82542D58);
PPC_FUNC_IMPL(__imp__sub_82542D58) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,31880
	ctx.r4.s64 = ctx.r10.s64 + 31880;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r9,31868
	ctx.r4.s64 = ctx.r9.s64 + 31868;
	// addi r5,r11,72
	ctx.r5.s64 = r11.s64 + 72;
	// bl 0x82881060
	sub_82881060(ctx, base);
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

__attribute__((alias("__imp__sub_82542DB8"))) PPC_WEAK_FUNC(sub_82542DB8);
PPC_FUNC_IMPL(__imp__sub_82542DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542DBC"))) PPC_WEAK_FUNC(sub_82542DBC);
PPC_FUNC_IMPL(__imp__sub_82542DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82542DC0"))) PPC_WEAK_FUNC(sub_82542DC0);
PPC_FUNC_IMPL(__imp__sub_82542DC0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82542e80
	if (cr6.eq) goto loc_82542E80;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82542e50
	if (cr6.eq) goto loc_82542E50;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,5381
	r11.s64 = 5381;
	// beq cr6,0x82542e24
	if (cr6.eq) goto loc_82542E24;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r10,32028
	ctx.r9.s64 = ctx.r10.s64 + 32028;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82542E04:
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
	// bne cr6,0x82542e04
	if (!cr6.eq) goto loc_82542E04;
	// b 0x82542eac
	goto loc_82542EAC;
loc_82542E24:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r10,32012
	ctx.r9.s64 = ctx.r10.s64 + 32012;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82542E30:
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
	// bne cr6,0x82542e30
	if (!cr6.eq) goto loc_82542E30;
	// b 0x82542eac
	goto loc_82542EAC;
loc_82542E50:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31996
	ctx.r9.s64 = ctx.r10.s64 + 31996;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82542E60:
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
	// bne cr6,0x82542e60
	if (!cr6.eq) goto loc_82542E60;
	// b 0x82542eac
	goto loc_82542EAC;
loc_82542E80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31984
	ctx.r9.s64 = ctx.r10.s64 + 31984;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82542E90:
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
	// bne cr6,0x82542e90
	if (!cr6.eq) goto loc_82542E90;
loc_82542EAC:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82542ecc
	if (cr6.eq) goto loc_82542ECC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82542ed0
	if (!cr6.eq) goto loc_82542ED0;
loc_82542ECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82542ED0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,31928
	ctx.r5.s64 = ctx.r10.s64 + 31928;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
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
	// bne cr6,0x82542f78
	if (!cr6.eq) goto loc_82542F78;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,31916
	ctx.r5.s64 = ctx.r10.s64 + 31916;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82542F78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// addi r4,r11,31904
	ctx.r4.s64 = r11.s64 + 31904;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r30,72
	ctx.r5.s64 = r30.s64 + 72;
	// addi r4,r10,31892
	ctx.r4.s64 = ctx.r10.s64 + 31892;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82542FB4"))) PPC_WEAK_FUNC(sub_82542FB4);
PPC_FUNC_IMPL(__imp__sub_82542FB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82542FB8"))) PPC_WEAK_FUNC(sub_82542FB8);
PPC_FUNC_IMPL(__imp__sub_82542FB8) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82542ff0
	if (cr6.eq) goto loc_82542FF0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x82542ff4
	if (!cr6.eq) goto loc_82542FF4;
loc_82542FF0:
	// li r11,0
	r11.s64 = 0;
loc_82542FF4:
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r31,260(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// beq cr6,0x82543014
	if (cr6.eq) goto loc_82543014;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82543018
	if (!cr6.eq) goto loc_82543018;
loc_82543014:
	// li r11,0
	r11.s64 = 0;
loc_82543018:
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
	// addi r5,r9,32064
	ctx.r5.s64 = ctx.r9.s64 + 32064;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
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
	// bne cr6,0x825430c0
	if (!cr6.eq) goto loc_825430C0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,4920
	ctx.r5.s64 = ctx.r10.s64 + 4920;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_825430C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r30,136
	ctx.r5.s64 = r30.s64 + 136;
	// addi r4,r11,32052
	ctx.r4.s64 = r11.s64 + 32052;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r30,200
	ctx.r5.s64 = r30.s64 + 200;
	// addi r4,r10,32040
	ctx.r4.s64 = ctx.r10.s64 + 32040;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825430FC"))) PPC_WEAK_FUNC(sub_825430FC);
PPC_FUNC_IMPL(__imp__sub_825430FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82543100"))) PPC_WEAK_FUNC(sub_82543100);
PPC_FUNC_IMPL(__imp__sub_82543100) {
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
	// bl 0x82542dc0
	sub_82542DC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82542fb8
	sub_82542FB8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,31880
	ctx.r4.s64 = ctx.r10.s64 + 31880;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r9,31868
	ctx.r4.s64 = ctx.r9.s64 + 31868;
	// addi r5,r11,72
	ctx.r5.s64 = r11.s64 + 72;
	// bl 0x82881060
	sub_82881060(ctx, base);
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

__attribute__((alias("__imp__sub_82543170"))) PPC_WEAK_FUNC(sub_82543170);
PPC_FUNC_IMPL(__imp__sub_82543170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543174"))) PPC_WEAK_FUNC(sub_82543174);
PPC_FUNC_IMPL(__imp__sub_82543174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543178"))) PPC_WEAK_FUNC(sub_82543178);
PPC_FUNC_IMPL(__imp__sub_82543178) {
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
	// addi r9,r11,31852
	ctx.r9.s64 = r11.s64 + 31852;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825431ac
	if (cr6.eq) goto loc_825431AC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825431AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825431BC"))) PPC_WEAK_FUNC(sub_825431BC);
PPC_FUNC_IMPL(__imp__sub_825431BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825431C0"))) PPC_WEAK_FUNC(sub_825431C0);
PPC_FUNC_IMPL(__imp__sub_825431C0) {
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
	// addi r9,r11,31860
	ctx.r9.s64 = r11.s64 + 31860;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825431f4
	if (cr6.eq) goto loc_825431F4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825431F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82543204"))) PPC_WEAK_FUNC(sub_82543204);
PPC_FUNC_IMPL(__imp__sub_82543204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543208"))) PPC_WEAK_FUNC(sub_82543208);
PPC_FUNC_IMPL(__imp__sub_82543208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5968
	ctx.r9.s64 = r11.s64 + 5968;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543220"))) PPC_WEAK_FUNC(sub_82543220);
PPC_FUNC_IMPL(__imp__sub_82543220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,5968
	ctx.r10.s64 = r11.s64 + 5968;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8254322C"))) PPC_WEAK_FUNC(sub_8254322C);
PPC_FUNC_IMPL(__imp__sub_8254322C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543230"))) PPC_WEAK_FUNC(sub_82543230);
PPC_FUNC_IMPL(__imp__sub_82543230) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
}

__attribute__((alias("__imp__sub_8254323C"))) PPC_WEAK_FUNC(sub_8254323C);
PPC_FUNC_IMPL(__imp__sub_8254323C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543240"))) PPC_WEAK_FUNC(sub_82543240);
PPC_FUNC_IMPL(__imp__sub_82543240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543248"))) PPC_WEAK_FUNC(sub_82543248);
PPC_FUNC_IMPL(__imp__sub_82543248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543250"))) PPC_WEAK_FUNC(sub_82543250);
PPC_FUNC_IMPL(__imp__sub_82543250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,32116
	ctx.r9.s64 = r11.s64 + 32116;
	// stb r10,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543268"))) PPC_WEAK_FUNC(sub_82543268);
PPC_FUNC_IMPL(__imp__sub_82543268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,32116
	ctx.r10.s64 = r11.s64 + 32116;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543278"))) PPC_WEAK_FUNC(sub_82543278);
PPC_FUNC_IMPL(__imp__sub_82543278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,6012
	ctx.r9.s64 = ctx.r10.s64 + 6012;
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, r11.u8);
	// stb r11,123(r3)
	PPC_STORE_U8(ctx.r3.u32 + 123, r11.u8);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825432A0"))) PPC_WEAK_FUNC(sub_825432A0);
PPC_FUNC_IMPL(__imp__sub_825432A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,6012
	ctx.r10.s64 = r11.s64 + 6012;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825432AC"))) PPC_WEAK_FUNC(sub_825432AC);
PPC_FUNC_IMPL(__imp__sub_825432AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825432B0"))) PPC_WEAK_FUNC(sub_825432B0);
PPC_FUNC_IMPL(__imp__sub_825432B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825432BC"))) PPC_WEAK_FUNC(sub_825432BC);
PPC_FUNC_IMPL(__imp__sub_825432BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825432C0"))) PPC_WEAK_FUNC(sub_825432C0);
PPC_FUNC_IMPL(__imp__sub_825432C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825432E0"))) PPC_WEAK_FUNC(sub_825432E0);
PPC_FUNC_IMPL(__imp__sub_825432E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543300"))) PPC_WEAK_FUNC(sub_82543300);
PPC_FUNC_IMPL(__imp__sub_82543300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543320"))) PPC_WEAK_FUNC(sub_82543320);
PPC_FUNC_IMPL(__imp__sub_82543320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543340"))) PPC_WEAK_FUNC(sub_82543340);
PPC_FUNC_IMPL(__imp__sub_82543340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543348"))) PPC_WEAK_FUNC(sub_82543348);
PPC_FUNC_IMPL(__imp__sub_82543348) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543350"))) PPC_WEAK_FUNC(sub_82543350);
PPC_FUNC_IMPL(__imp__sub_82543350) {
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
	// lwz r11,836(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r11,r11,104
	r11.s64 = r11.s64 * 104;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mulli r11,r10,104
	r11.s64 = ctx.r10.s64 * 104;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r9,836(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mulli r11,r9,104
	r11.s64 = ctx.r9.s64 * 104;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r11,836(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mulli r7,r8,104
	ctx.r7.s64 = ctx.r8.s64 * 104;
	// stbx r28,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + r31.u32, r28.u8);
	// lwz r11,836(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,836(r31)
	PPC_STORE_U32(r31.u32 + 836, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825433E0"))) PPC_WEAK_FUNC(sub_825433E0);
PPC_FUNC_IMPL(__imp__sub_825433E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825433E4"))) PPC_WEAK_FUNC(sub_825433E4);
PPC_FUNC_IMPL(__imp__sub_825433E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825433E8"))) PPC_WEAK_FUNC(sub_825433E8);
PPC_FUNC_IMPL(__imp__sub_825433E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825433F4"))) PPC_WEAK_FUNC(sub_825433F4);
PPC_FUNC_IMPL(__imp__sub_825433F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825433F8"))) PPC_WEAK_FUNC(sub_825433F8);
PPC_FUNC_IMPL(__imp__sub_825433F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,104
	r11.s64 = ctx.r4.s64 * 104;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543408"))) PPC_WEAK_FUNC(sub_82543408);
PPC_FUNC_IMPL(__imp__sub_82543408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543410"))) PPC_WEAK_FUNC(sub_82543410);
PPC_FUNC_IMPL(__imp__sub_82543410) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543418"))) PPC_WEAK_FUNC(sub_82543418);
PPC_FUNC_IMPL(__imp__sub_82543418) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
}

__attribute__((alias("__imp__sub_8254341C"))) PPC_WEAK_FUNC(sub_8254341C);
PPC_FUNC_IMPL(__imp__sub_8254341C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543420"))) PPC_WEAK_FUNC(sub_82543420);
PPC_FUNC_IMPL(__imp__sub_82543420) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543428"))) PPC_WEAK_FUNC(sub_82543428);
PPC_FUNC_IMPL(__imp__sub_82543428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,1052
	r11.s64 = ctx.r3.s64 + 1052;
	// stw r4,1076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1076, ctx.r4.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
}

__attribute__((alias("__imp__sub_82543438"))) PPC_WEAK_FUNC(sub_82543438);
PPC_FUNC_IMPL(__imp__sub_82543438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254343C"))) PPC_WEAK_FUNC(sub_8254343C);
PPC_FUNC_IMPL(__imp__sub_8254343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543440"))) PPC_WEAK_FUNC(sub_82543440);
PPC_FUNC_IMPL(__imp__sub_82543440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1056
	ctx.r3.s64 = ctx.r3.s64 + 1056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543448"))) PPC_WEAK_FUNC(sub_82543448);
PPC_FUNC_IMPL(__imp__sub_82543448) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1076(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543450"))) PPC_WEAK_FUNC(sub_82543450);
PPC_FUNC_IMPL(__imp__sub_82543450) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543458"))) PPC_WEAK_FUNC(sub_82543458);
PPC_FUNC_IMPL(__imp__sub_82543458) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
}

__attribute__((alias("__imp__sub_8254345C"))) PPC_WEAK_FUNC(sub_8254345C);
PPC_FUNC_IMPL(__imp__sub_8254345C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543460"))) PPC_WEAK_FUNC(sub_82543460);
PPC_FUNC_IMPL(__imp__sub_82543460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82543478
	if (!cr6.eq) goto loc_82543478;
	// li r11,0
	r11.s64 = 0;
	// stb r11,1096(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1096, r11.u8);
	// blr 
	return;
loc_82543478:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r3,1096
	ctx.r3.s64 = ctx.r3.s64 + 1096;
}

__attribute__((alias("__imp__sub_82543480"))) PPC_WEAK_FUNC(sub_82543480);
PPC_FUNC_IMPL(__imp__sub_82543480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543484"))) PPC_WEAK_FUNC(sub_82543484);
PPC_FUNC_IMPL(__imp__sub_82543484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543488"))) PPC_WEAK_FUNC(sub_82543488);
PPC_FUNC_IMPL(__imp__sub_82543488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1096
	ctx.r3.s64 = ctx.r3.s64 + 1096;
}

__attribute__((alias("__imp__sub_8254348C"))) PPC_WEAK_FUNC(sub_8254348C);
PPC_FUNC_IMPL(__imp__sub_8254348C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543490"))) PPC_WEAK_FUNC(sub_82543490);
PPC_FUNC_IMPL(__imp__sub_82543490) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1084, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_82543494"))) PPC_WEAK_FUNC(sub_82543494);
PPC_FUNC_IMPL(__imp__sub_82543494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543498"))) PPC_WEAK_FUNC(sub_82543498);
PPC_FUNC_IMPL(__imp__sub_82543498) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8254349C"))) PPC_WEAK_FUNC(sub_8254349C);
PPC_FUNC_IMPL(__imp__sub_8254349C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434A0"))) PPC_WEAK_FUNC(sub_825434A0);
PPC_FUNC_IMPL(__imp__sub_825434A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1092, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_825434A4"))) PPC_WEAK_FUNC(sub_825434A4);
PPC_FUNC_IMPL(__imp__sub_825434A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434A8"))) PPC_WEAK_FUNC(sub_825434A8);
PPC_FUNC_IMPL(__imp__sub_825434A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
}

__attribute__((alias("__imp__sub_825434AC"))) PPC_WEAK_FUNC(sub_825434AC);
PPC_FUNC_IMPL(__imp__sub_825434AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434B0"))) PPC_WEAK_FUNC(sub_825434B0);
PPC_FUNC_IMPL(__imp__sub_825434B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1088(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
}

__attribute__((alias("__imp__sub_825434B4"))) PPC_WEAK_FUNC(sub_825434B4);
PPC_FUNC_IMPL(__imp__sub_825434B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434B8"))) PPC_WEAK_FUNC(sub_825434B8);
PPC_FUNC_IMPL(__imp__sub_825434B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1092(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
}

__attribute__((alias("__imp__sub_825434BC"))) PPC_WEAK_FUNC(sub_825434BC);
PPC_FUNC_IMPL(__imp__sub_825434BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825434C0"))) PPC_WEAK_FUNC(sub_825434C0);
PPC_FUNC_IMPL(__imp__sub_825434C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,32124
	ctx.r9.s64 = r11.s64 + 32124;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,32116
	ctx.r8.s64 = ctx.r10.s64 + 32116;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, r11.u8);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r8,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r8.u32);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, r11.u8);
	// stw r8,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r8.u32);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, r11.u8);
	// stw r8,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r8.u32);
	// stb r11,416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 416, r11.u8);
	// stw r8,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r8.u32);
	// stb r11,520(r3)
	PPC_STORE_U8(ctx.r3.u32 + 520, r11.u8);
	// stw r8,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r8.u32);
	// stb r11,624(r3)
	PPC_STORE_U8(ctx.r3.u32 + 624, r11.u8);
	// stw r8,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r8.u32);
	// stb r11,728(r3)
	PPC_STORE_U8(ctx.r3.u32 + 728, r11.u8);
	// stw r8,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r8.u32);
	// stb r11,832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 832, r11.u8);
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543520"))) PPC_WEAK_FUNC(sub_82543520);
PPC_FUNC_IMPL(__imp__sub_82543520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,32124
	ctx.r9.s64 = r11.s64 + 32124;
	// addi r11,r3,836
	r11.s64 = ctx.r3.s64 + 836;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,32116
	ctx.r10.s64 = ctx.r10.s64 + 32116;
loc_82543540:
	// stwu r10,-104(r11)
	ea = -104 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82543540
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254354C"))) PPC_WEAK_FUNC(sub_8254354C);
PPC_FUNC_IMPL(__imp__sub_8254354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543550"))) PPC_WEAK_FUNC(sub_82543550);
PPC_FUNC_IMPL(__imp__sub_82543550) {
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
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825435a0
	if (cr6.eq) goto loc_825435A0;
	// lwz r11,1048(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
loc_825435A0:
	// lwz r11,1048(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r9,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lwz r11,1048(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// lbz r8,239(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// lbz r6,247(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lbz r5,263(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lbz r3,255(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 255);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r9,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,124(r11)
	PPC_STORE_U32(r11.u32 + 124, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r9,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r8,120(r11)
	PPC_STORE_U8(r11.u32 + 120, ctx.r8.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r9,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stb r6,122(r8)
	PPC_STORE_U8(ctx.r8.u32 + 122, ctx.r6.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,1048(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r6,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r5,123(r11)
	PPC_STORE_U8(r11.u32 + 123, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r9,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r26,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,1048(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r6,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r25,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, r25.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,1048(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r4,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r4.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r9,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stb r3,121(r8)
	PPC_STORE_U8(ctx.r8.u32 + 121, ctx.r3.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,1048(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// rlwinm r11,r6,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 116, ctx.r7.u32);
	// lwz r11,1048(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,1048(r31)
	PPC_STORE_U32(r31.u32 + 1048, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825436D0"))) PPC_WEAK_FUNC(sub_825436D0);
PPC_FUNC_IMPL(__imp__sub_825436D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825436D4"))) PPC_WEAK_FUNC(sub_825436D4);
PPC_FUNC_IMPL(__imp__sub_825436D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825436D8"))) PPC_WEAK_FUNC(sub_825436D8);
PPC_FUNC_IMPL(__imp__sub_825436D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825436E8"))) PPC_WEAK_FUNC(sub_825436E8);
PPC_FUNC_IMPL(__imp__sub_825436E8) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r11,279(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// lbz r31,271(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// lbz r30,263(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// lbz r29,255(r1)
	r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 255);
	// lwz r28,244(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r11.u8);
	// stb r31,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, r31.u8);
	// stb r30,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r30.u8);
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r29.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82543550
	sub_82543550(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82543724"))) PPC_WEAK_FUNC(sub_82543724);
PPC_FUNC_IMPL(__imp__sub_82543724) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82543728"))) PPC_WEAK_FUNC(sub_82543728);
PPC_FUNC_IMPL(__imp__sub_82543728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_82543734"))) PPC_WEAK_FUNC(sub_82543734);
PPC_FUNC_IMPL(__imp__sub_82543734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543738"))) PPC_WEAK_FUNC(sub_82543738);
PPC_FUNC_IMPL(__imp__sub_82543738) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,24192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r9,6076
	ctx.r4.s64 = ctx.r9.s64 + 6076;
	// addi r7,r10,6088
	ctx.r7.s64 = ctx.r10.s64 + 6088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r8,r8,6012
	ctx.r8.s64 = ctx.r8.s64 + 6012;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,1048(r31)
	PPC_STORE_U32(r31.u32 + 1048, r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stb r11,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r11.u8);
	// stb r11,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, r11.u8);
	// stb r11,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, r11.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r11.u8);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r11.u8);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// bl 0x82543e28
	sub_82543E28(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825437E0"))) PPC_WEAK_FUNC(sub_825437E0);
PPC_FUNC_IMPL(__imp__sub_825437E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825437E4"))) PPC_WEAK_FUNC(sub_825437E4);
PPC_FUNC_IMPL(__imp__sub_825437E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825437E8"))) PPC_WEAK_FUNC(sub_825437E8);
PPC_FUNC_IMPL(__imp__sub_825437E8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6088
	ctx.r9.s64 = r11.s64 + 6088;
	// addi r8,r10,6076
	ctx.r8.s64 = ctx.r10.s64 + 6076;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822bf178
	sub_822BF178(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,6000
	ctx.r6.s64 = ctx.r7.s64 + 6000;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// bl 0x822bf178
	sub_822BF178(ctx, base);
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

__attribute__((alias("__imp__sub_8254384C"))) PPC_WEAK_FUNC(sub_8254384C);
PPC_FUNC_IMPL(__imp__sub_8254384C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543850"))) PPC_WEAK_FUNC(sub_82543850);
PPC_FUNC_IMPL(__imp__sub_82543850) {
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
	// bl 0x82543738
	sub_82543738(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,5968
	ctx.r9.s64 = ctx.r10.s64 + 5968;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,1076(r31)
	PPC_STORE_U32(r31.u32 + 1076, r11.u32);
	// stw r9,1052(r31)
	PPC_STORE_U32(r31.u32 + 1052, ctx.r9.u32);
	// stw r8,1080(r31)
	PPC_STORE_U32(r31.u32 + 1080, ctx.r8.u32);
	// stb r11,1096(r31)
	PPC_STORE_U8(r31.u32 + 1096, r11.u8);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,1084(r31)
	PPC_STORE_U32(r31.u32 + 1084, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825438A8"))) PPC_WEAK_FUNC(sub_825438A8);
PPC_FUNC_IMPL(__imp__sub_825438A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825438AC"))) PPC_WEAK_FUNC(sub_825438AC);
PPC_FUNC_IMPL(__imp__sub_825438AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825438B0"))) PPC_WEAK_FUNC(sub_825438B0);
PPC_FUNC_IMPL(__imp__sub_825438B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,5968
	ctx.r8.s64 = r11.s64 + 5968;
	// addi r7,r10,6088
	ctx.r7.s64 = ctx.r10.s64 + 6088;
	// addi r6,r9,6076
	ctx.r6.s64 = ctx.r9.s64 + 6076;
	// stw r8,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822bf178
	sub_822BF178(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r5,6000
	ctx.r4.s64 = ctx.r5.s64 + 6000;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// bl 0x822bf178
	sub_822BF178(ctx, base);
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

__attribute__((alias("__imp__sub_82543920"))) PPC_WEAK_FUNC(sub_82543920);
PPC_FUNC_IMPL(__imp__sub_82543920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543924"))) PPC_WEAK_FUNC(sub_82543924);
PPC_FUNC_IMPL(__imp__sub_82543924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543928"))) PPC_WEAK_FUNC(sub_82543928);
PPC_FUNC_IMPL(__imp__sub_82543928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82543974
	if (cr6.eq) goto loc_82543974;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - r11.s64;
	// srawi r5,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 7;
	// bne cr6,0x82543968
	if (!cr6.eq) goto loc_82543968;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r6,r9,13056
	ctx.r6.s64 = ctx.r9.s64 + 13056;
	// b 0x82544c90
	sub_82544C90(ctx, base);
	return;
loc_82543968:
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r6,r9,13088
	ctx.r6.s64 = ctx.r9.s64 + 13088;
	// b 0x82544c90
	sub_82544C90(ctx, base);
	return;
loc_82543974:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r5,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 7;
	// bne cr6,0x825439a4
	if (!cr6.eq) goto loc_825439A4;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r6,r9,12992
	ctx.r6.s64 = ctx.r9.s64 + 12992;
	// b 0x82544c90
	sub_82544C90(ctx, base);
	return;
loc_825439A4:
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r6,r9,13024
	ctx.r6.s64 = ctx.r9.s64 + 13024;
}

__attribute__((alias("__imp__sub_825439AC"))) PPC_WEAK_FUNC(sub_825439AC);
PPC_FUNC_IMPL(__imp__sub_825439AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82544c90
	sub_82544C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439B0"))) PPC_WEAK_FUNC(sub_825439B0);
PPC_FUNC_IMPL(__imp__sub_825439B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825439B4"))) PPC_WEAK_FUNC(sub_825439B4);
PPC_FUNC_IMPL(__imp__sub_825439B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825439B8"))) PPC_WEAK_FUNC(sub_825439B8);
PPC_FUNC_IMPL(__imp__sub_825439B8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825439B8"))) PPC_WEAK_FUNC(sub_825439B8);
PPC_FUNC_IMPL(__imp__sub_825439B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82543928
	sub_82543928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439BC"))) PPC_WEAK_FUNC(sub_825439BC);
PPC_FUNC_IMPL(__imp__sub_825439BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825439C0"))) PPC_WEAK_FUNC(sub_825439C0);
PPC_FUNC_IMPL(__imp__sub_825439C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825439DC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x825439dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825439DC;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r4,40
	ctx.r9.s64 = ctx.r4.s64 + 40;
	// addi r8,r3,40
	ctx.r8.s64 = ctx.r3.s64 + 40;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82543A00:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82543a00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543A00;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r4,72
	ctx.r9.s64 = ctx.r4.s64 + 72;
	// addi r8,r3,72
	ctx.r8.s64 = ctx.r3.s64 + 72;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82543A24:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82543a24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543A24;
	// lwz r11,104(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r9,112(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// lbz r7,120(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// stb r7,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r7.u8);
	// lbz r6,121(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 121);
	// stb r6,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r6.u8);
	// lbz r5,122(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 122);
	// stb r5,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r5.u8);
	// lbz r11,123(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 123);
	// stb r11,123(r3)
	PPC_STORE_U8(ctx.r3.u32 + 123, r11.u8);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82543A7C"))) PPC_WEAK_FUNC(sub_82543A7C);
PPC_FUNC_IMPL(__imp__sub_82543A7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543A80"))) PPC_WEAK_FUNC(sub_82543A80);
PPC_FUNC_IMPL(__imp__sub_82543A80) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// bge cr6,0x82543bb4
	if (!cr6.lt) goto loc_82543BB4;
loc_82543AB4:
	// rlwinm r11,r28,7,0,24
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0xFFFFFF80;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82543bb4
	if (cr6.eq) goto loc_82543BB4;
	// rlwinm r11,r30,7,0,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
loc_82543AFC:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82543afc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543AFC;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
	// addi r7,r11,40
	ctx.r7.s64 = r11.s64 + 40;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82543B20:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82543b20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543B20;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,72
	ctx.r8.s64 = r31.s64 + 72;
	// addi r7,r11,72
	ctx.r7.s64 = r11.s64 + 72;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82543B44:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82543b44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543B44;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// mr r30,r28
	r30.u64 = r28.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(r26.s32, r28.s32, xer);
	// addze r28,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r28.s64 = temp.s64;
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r7,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r7.u32);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r6,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r6.u32);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r5,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r5.u32);
	// lbz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// stb r4,120(r11)
	PPC_STORE_U8(r11.u32 + 120, ctx.r4.u8);
	// lbz r3,121(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 121);
	// stb r3,121(r11)
	PPC_STORE_U8(r11.u32 + 121, ctx.r3.u8);
	// lbz r10,122(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 122);
	// stb r10,122(r11)
	PPC_STORE_U8(r11.u32 + 122, ctx.r10.u8);
	// lbz r9,123(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 123);
	// stb r9,123(r11)
	PPC_STORE_U8(r11.u32 + 123, ctx.r9.u8);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r8,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r8.u32);
	// blt cr6,0x82543ab4
	if (cr6.lt) goto loc_82543AB4;
loc_82543BB4:
	// rlwinm r11,r30,7,0,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82543BC8"))) PPC_WEAK_FUNC(sub_82543BC8);
PPC_FUNC_IMPL(__imp__sub_82543BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82543BCC"))) PPC_WEAK_FUNC(sub_82543BCC);
PPC_FUNC_IMPL(__imp__sub_82543BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543BD0"))) PPC_WEAK_FUNC(sub_82543BD0);
PPC_FUNC_IMPL(__imp__sub_82543BD0) {
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
	// addi r9,r11,32116
	ctx.r9.s64 = r11.s64 + 32116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82543c04
	if (cr6.eq) goto loc_82543C04;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82543C04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82543C14"))) PPC_WEAK_FUNC(sub_82543C14);
PPC_FUNC_IMPL(__imp__sub_82543C14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543C18"))) PPC_WEAK_FUNC(sub_82543C18);
PPC_FUNC_IMPL(__imp__sub_82543C18) {
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
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82543c9c
	if (!cr6.lt) goto loc_82543C9C;
loc_82543C4C:
	// rlwinm r11,r31,7,0,24
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// mtctr r27
	ctr.u64 = r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// addi r4,r3,-128
	ctx.r4.s64 = ctx.r3.s64 + -128;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82543c70
	if (cr6.eq) goto loc_82543C70;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82543C70:
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r29,7,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82543c4c
	if (cr6.lt) goto loc_82543C4C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
loc_82543C9C:
	// bne cr6,0x82543cbc
	if (!cr6.eq) goto loc_82543CBC;
	// rlwinm r11,r28,7,0,24
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r29,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r11,-128
	ctx.r4.s64 = r11.s64 + -128;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
loc_82543CBC:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82543a80
	sub_82543A80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82543CD8"))) PPC_WEAK_FUNC(sub_82543CD8);
PPC_FUNC_IMPL(__imp__sub_82543CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82543CDC"))) PPC_WEAK_FUNC(sub_82543CDC);
PPC_FUNC_IMPL(__imp__sub_82543CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82543CE0"))) PPC_WEAK_FUNC(sub_82543CE0);
PPC_FUNC_IMPL(__imp__sub_82543CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82543db8
	if (cr6.eq) goto loc_82543DB8;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
loc_82543CEC:
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
loc_82543D0C:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82543d0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543D0C;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// addi r7,r5,40
	ctx.r7.s64 = ctx.r5.s64 + 40;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82543D30:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82543d30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543D30;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,64
	ctx.r8.s64 = r11.s64 + 64;
	// addi r7,r5,72
	ctx.r7.s64 = ctx.r5.s64 + 72;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82543D54:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82543d54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543D54;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// stw r10,104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 104, ctx.r10.u32);
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// stw r8,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, ctx.r8.u32);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// stw r7,112(r5)
	PPC_STORE_U32(ctx.r5.u32 + 112, ctx.r7.u32);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// stw r6,116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 116, ctx.r6.u32);
	// lbz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 112);
	// stb r4,120(r5)
	PPC_STORE_U8(ctx.r5.u32 + 120, ctx.r4.u8);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 113);
	// stb r10,121(r5)
	PPC_STORE_U8(ctx.r5.u32 + 121, ctx.r10.u8);
	// lbz r9,114(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 114);
	// stb r9,122(r5)
	PPC_STORE_U8(ctx.r5.u32 + 122, ctx.r9.u8);
	// lbz r8,115(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 115);
	// stb r8,123(r5)
	PPC_STORE_U8(ctx.r5.u32 + 123, ctx.r8.u8);
	// lwz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r7,124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 124, ctx.r7.u32);
	// bne cr6,0x82543cec
	if (!cr6.eq) goto loc_82543CEC;
loc_82543DB8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
}

__attribute__((alias("__imp__sub_82543DBC"))) PPC_WEAK_FUNC(sub_82543DBC);
PPC_FUNC_IMPL(__imp__sub_82543DBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543DC0"))) PPC_WEAK_FUNC(sub_82543DC0);
PPC_FUNC_IMPL(__imp__sub_82543DC0) {
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
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,32124
	ctx.r9.s64 = r11.s64 + 32124;
	// addi r11,r3,836
	r11.s64 = ctx.r3.s64 + 836;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,32116
	ctx.r10.s64 = ctx.r10.s64 + 32116;
loc_82543DF4:
	// stwu r10,-104(r11)
	ea = -104 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82543df4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543DF4;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82543e14
	if (cr6.eq) goto loc_82543E14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82543E14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82543E24"))) PPC_WEAK_FUNC(sub_82543E24);
PPC_FUNC_IMPL(__imp__sub_82543E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543E28"))) PPC_WEAK_FUNC(sub_82543E28);
PPC_FUNC_IMPL(__imp__sub_82543E28) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82543e5c
	if (!cr6.gt) goto loc_82543E5C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82543E5C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bge cr6,0x82543f74
	if (!cr6.lt) goto loc_82543F74;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,6012
	r29.s64 = r11.s64 + 6012;
loc_82543E70:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82543e98
	if (!cr6.gt) goto loc_82543E98;
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
loc_82543E98:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82543f68
	if (cr0.eq) goto loc_82543F68;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82543ED4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82543ed4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543ED4;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r11,40
	ctx.r9.s64 = r11.s64 + 40;
	// addi r10,r30,36
	ctx.r10.s64 = r30.s64 + 36;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82543EF4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82543ef4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543EF4;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r11,72
	ctx.r9.s64 = r11.s64 + 72;
	// addi r10,r30,68
	ctx.r10.s64 = r30.s64 + 68;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82543F14:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82543f14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82543F14;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// stw r9,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r9.u32);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r8,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r8.u32);
	// lwz r7,116(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// stw r7,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r7.u32);
	// lbz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 120);
	// stb r6,120(r11)
	PPC_STORE_U8(r11.u32 + 120, ctx.r6.u8);
	// lbz r5,121(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 121);
	// stb r5,121(r11)
	PPC_STORE_U8(r11.u32 + 121, ctx.r5.u8);
	// lbz r4,122(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 122);
	// stb r4,122(r11)
	PPC_STORE_U8(r11.u32 + 122, ctx.r4.u8);
	// lbz r3,123(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 123);
	// stb r3,123(r11)
	PPC_STORE_U8(r11.u32 + 123, ctx.r3.u8);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r10,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r10.u32);
loc_82543F68:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x82543e70
	if (cr6.lt) goto loc_82543E70;
loc_82543F74:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// ble cr6,0x82543fc0
	if (!cr6.gt) goto loc_82543FC0;
loc_82543F80:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-128
	ctx.r3.s64 = r11.s64 + -128;
	// lwz r10,-128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -128);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bgt cr6,0x82543f80
	if (cr6.gt) goto loc_82543F80;
loc_82543FC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82543FC4"))) PPC_WEAK_FUNC(sub_82543FC4);
PPC_FUNC_IMPL(__imp__sub_82543FC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82543FC8"))) PPC_WEAK_FUNC(sub_82543FC8);
PPC_FUNC_IMPL(__imp__sub_82543FC8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x822befb0
	sub_822BEFB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82544030"))) PPC_WEAK_FUNC(sub_82544030);
PPC_FUNC_IMPL(__imp__sub_82544030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544034"))) PPC_WEAK_FUNC(sub_82544034);
PPC_FUNC_IMPL(__imp__sub_82544034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544038"))) PPC_WEAK_FUNC(sub_82544038);
PPC_FUNC_IMPL(__imp__sub_82544038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r27,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	r27.s64 = ctx.r10.s32 >> 7;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// srawi r8,r27,1
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r8.s64 = r27.s32 >> 1;
	// addze. r30,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r30.s64 = temp.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// ble 0x82544154
	if (!cr0.gt) goto loc_82544154;
	// rlwinm r11,r30,7,0,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,6012
	r29.s64 = r11.s64 + 6012;
loc_82544080:
	// addi r31,r31,-128
	r31.s64 = r31.s64 + -128;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_825440A4:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825440a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825440A4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825440C0:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825440c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825440C0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825440DC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825440dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825440DC;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r25,112(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r24,113(r31)
	r24.u64 = PPC_LOAD_U8(r31.u32 + 113);
	// lbz r23,114(r31)
	r23.u64 = PPC_LOAD_U8(r31.u32 + 114);
	// lbz r22,115(r31)
	r22.u64 = PPC_LOAD_U8(r31.u32 + 115);
	// lwz r21,116(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stb r25,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r25.u8);
	// stb r24,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, r24.u8);
	// stb r23,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, r23.u8);
	// stb r22,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, r22.u8);
	// stw r21,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r21.u32);
	// bl 0x82543c18
	sub_82543C18(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bgt cr6,0x82544080
	if (cr6.gt) goto loc_82544080;
loc_82544154:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_82544160"))) PPC_WEAK_FUNC(sub_82544160);
PPC_FUNC_IMPL(__imp__sub_82544160) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82544164"))) PPC_WEAK_FUNC(sub_82544164);
PPC_FUNC_IMPL(__imp__sub_82544164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544168"))) PPC_WEAK_FUNC(sub_82544168);
PPC_FUNC_IMPL(__imp__sub_82544168) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825441ac
	if (cr6.eq) goto loc_825441AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82543fc8
	sub_82543FC8(ctx, base);
loc_825441AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825441d4
	if (cr6.eq) goto loc_825441D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82543fc8
	sub_82543FC8(ctx, base);
loc_825441D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825441fc
	if (cr6.eq) goto loc_825441FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82543fc8
	sub_82543FC8(ctx, base);
loc_825441FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82544200"))) PPC_WEAK_FUNC(sub_82544200);
PPC_FUNC_IMPL(__imp__sub_82544200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82544204"))) PPC_WEAK_FUNC(sub_82544204);
PPC_FUNC_IMPL(__imp__sub_82544204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544208"))) PPC_WEAK_FUNC(sub_82544208);
PPC_FUNC_IMPL(__imp__sub_82544208) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// ble cr6,0x8254429c
	if (!cr6.gt) goto loc_8254429C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// rlwinm r29,r11,7,0,24
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r26,r11,8,0,23
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r29,r3
	r27.u64 = r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82544168
	sub_82544168(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = r31.s64 - r29.s64;
	// bl 0x82544168
	sub_82544168(ctx, base);
	// subf r29,r29,r28
	r29.s64 = r28.s64 - r29.s64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = r28.s64 - r26.s64;
	// bl 0x82544168
	sub_82544168(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82544168
	sub_82544168(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8254429C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82544168
	sub_82544168(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825442AC"))) PPC_WEAK_FUNC(sub_825442AC);
PPC_FUNC_IMPL(__imp__sub_825442AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825442B0"))) PPC_WEAK_FUNC(sub_825442B0);
PPC_FUNC_IMPL(__imp__sub_825442B0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// beq cr6,0x825443b0
	if (cr6.eq) goto loc_825443B0;
	// addi r30,r3,128
	r30.s64 = ctx.r3.s64 + 128;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x825443b0
	if (cr6.eq) goto loc_825443B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r23,80(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r30,-128
	r28.s64 = r30.s64 + -128;
	// addi r24,r11,6012
	r24.s64 = r11.s64 + 6012;
loc_825442F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x822befb0
	sub_822BEFB0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82544340
	if (cr6.eq) goto loc_82544340;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r28,256
	ctx.r5.s64 = r28.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82543ce0
	sub_82543CE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82544394
	goto loc_82544394;
loc_82544340:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r28
	r31.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82544390
	if (cr6.eq) goto loc_82544390;
loc_82544360:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r31,r31,-128
	r31.s64 = r31.s64 + -128;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82544360
	if (!cr6.eq) goto loc_82544360;
loc_82544390:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82544394:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x825442f8
	if (!cr6.eq) goto loc_825442F8;
loc_825443B0:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_825443BC"))) PPC_WEAK_FUNC(sub_825443BC);
PPC_FUNC_IMPL(__imp__sub_825443BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825443C0"))) PPC_WEAK_FUNC(sub_825443C0);
PPC_FUNC_IMPL(__imp__sub_825443C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// srawi r10,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = r11.s32 >> 7;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r10,24192(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm r11,r7,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r31,r11,r4
	r31.u64 = r11.u64 + ctx.r4.u64;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stw r10,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// bl 0x82544208
	sub_82544208(ctx, base);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r25,r31,128
	r25.s64 = r31.s64 + 128;
	// cmplw cr6,r23,r31
	cr6.compare<uint32_t>(r23.u32, r31.u32, xer);
	// bge cr6,0x82544468
	if (!cr6.lt) goto loc_82544468;
loc_82544420:
	// addi r31,r30,-128
	r31.s64 = r30.s64 + -128;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82544468
	if (!cr6.eq) goto loc_82544468;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82544468
	if (!cr6.eq) goto loc_82544468;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r23,r31
	cr6.compare<uint32_t>(r23.u32, r31.u32, xer);
	// blt cr6,0x82544420
	if (cr6.lt) goto loc_82544420;
loc_82544468:
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(r25.u32, r22.u32, xer);
	// bge cr6,0x825444b4
	if (!cr6.lt) goto loc_825444B4;
loc_82544470:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825444b4
	if (!cr6.eq) goto loc_825444B4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825444b4
	if (!cr6.eq) goto loc_825444B4;
	// addi r25,r25,128
	r25.s64 = r25.s64 + 128;
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(r25.u32, r22.u32, xer);
	// blt cr6,0x82544470
	if (cr6.lt) goto loc_82544470;
loc_825444B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// addi r27,r11,6012
	r27.s64 = r11.s64 + 6012;
loc_825444C4:
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(r28.u32, r22.u32, xer);
	// bge cr6,0x825445d8
	if (!cr6.lt) goto loc_825445D8;
loc_825444CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825445cc
	if (!cr6.eq) goto loc_825445CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825445d8
	if (!cr6.eq) goto loc_825445D8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r27.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// addi r25,r25,128
	r25.s64 = r25.s64 + 128;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
loc_82544528:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544528;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544544:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544544
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544544;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544560:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544560
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544560;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lbz r7,120(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r11.u32);
	// lbz r6,121(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// lbz r5,122(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// lbz r11,123(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 123);
	// lwz r31,124(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// stw r8,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r8.u32);
	// stb r7,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r7.u8);
	// stb r6,329(r1)
	PPC_STORE_U8(ctx.r1.u32 + 329, ctx.r6.u8);
	// stb r5,330(r1)
	PPC_STORE_U8(ctx.r1.u32 + 330, ctx.r5.u8);
	// stb r11,331(r1)
	PPC_STORE_U8(ctx.r1.u32 + 331, r11.u8);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r27.u32);
loc_825445CC:
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(r28.u32, r22.u32, xer);
	// blt cr6,0x825444cc
	if (cr6.lt) goto loc_825444CC;
loc_825445D8:
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(r26.u32, r23.u32, xer);
	// ble cr6,0x82544704
	if (!cr6.gt) goto loc_82544704;
	// addi r29,r26,-128
	r29.s64 = r26.s64 + -128;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
loc_825445E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825446ec
	if (!cr6.eq) goto loc_825446EC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82544700
	if (!cr6.eq) goto loc_82544700;
	// addi r31,r31,-128
	r31.s64 = r31.s64 + -128;
	// stw r27,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, r27.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,724
	ctx.r10.s64 = ctx.r1.s64 + 724;
	// addi r30,r30,-128
	r30.s64 = r30.s64 + -128;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r8.u32);
loc_82544644:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544644
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544644;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,756
	ctx.r10.s64 = ctx.r1.s64 + 756;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544660:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544660
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544660;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,788
	ctx.r10.s64 = ctx.r1.s64 + 788;
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8254467C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8254467c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8254467C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lbz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// lbz r6,113(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 113);
	// lbz r5,114(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 114);
	// lbz r20,115(r31)
	r20.u64 = PPC_LOAD_U8(r31.u32 + 115);
	// lwz r19,116(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r11,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, r11.u32);
	// stw r10,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r10.u32);
	// stw r9,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r9.u32);
	// stw r8,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r8.u32);
	// stb r7,840(r1)
	PPC_STORE_U8(ctx.r1.u32 + 840, ctx.r7.u8);
	// stb r6,841(r1)
	PPC_STORE_U8(ctx.r1.u32 + 841, ctx.r6.u8);
	// stb r5,842(r1)
	PPC_STORE_U8(ctx.r1.u32 + 842, ctx.r5.u8);
	// stb r20,843(r1)
	PPC_STORE_U8(ctx.r1.u32 + 843, r20.u8);
	// stw r19,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, r19.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// stw r27,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, r27.u32);
loc_825446EC:
	// addi r11,r26,-128
	r11.s64 = r26.s64 + -128;
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// mr r26,r11
	r26.u64 = r11.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x825445e8
	if (cr6.lt) goto loc_825445E8;
loc_82544700:
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(r26.u32, r23.u32, xer);
loc_82544704:
	// bne cr6,0x825448b4
	if (!cr6.eq) goto loc_825448B4;
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(r28.u32, r22.u32, xer);
	// beq cr6,0x82544b30
	if (cr6.eq) goto loc_82544B30;
	// cmplw cr6,r25,r28
	cr6.compare<uint32_t>(r25.u32, r28.u32, xer);
	// beq cr6,0x825447dc
	if (cr6.eq) goto loc_825447DC;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,468
	ctx.r10.s64 = ctx.r1.s64 + 468;
	// stw r27,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r27.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r8,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544734:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544734
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544734;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,500
	ctx.r10.s64 = ctx.r1.s64 + 500;
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544750:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544750
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544750;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,532
	ctx.r10.s64 = ctx.r1.s64 + 532;
	// addi r11,r30,68
	r11.s64 = r30.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8254476C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8254476c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8254476C;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lbz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 120);
	// lbz r6,121(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 121);
	// lbz r5,122(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 122);
	// lbz r31,123(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 123);
	// lwz r29,124(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r11,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r11.u32);
	// stw r10,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r10.u32);
	// stw r9,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r9.u32);
	// stw r8,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r8.u32);
	// stb r7,584(r1)
	PPC_STORE_U8(ctx.r1.u32 + 584, ctx.r7.u8);
	// stb r6,585(r1)
	PPC_STORE_U8(ctx.r1.u32 + 585, ctx.r6.u8);
	// stb r5,586(r1)
	PPC_STORE_U8(ctx.r1.u32 + 586, ctx.r5.u8);
	// stb r31,587(r1)
	PPC_STORE_U8(ctx.r1.u32 + 587, r31.u8);
	// stw r29,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, r29.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// stw r27,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r27.u32);
loc_825447DC:
	// li r11,8
	r11.s64 = 8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r31,r28
	r31.u64 = r28.u64;
	// addi r25,r25,128
	r25.s64 = r25.s64 + 128;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_8254480C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8254480c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8254480C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544828:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544828
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544828;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544844:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544844
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544844;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lbz r7,120(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// lbz r6,121(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 121);
	// lbz r5,122(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 122);
	// lbz r11,123(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 123);
	// lwz r29,124(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stb r7,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r7.u8);
	// stb r6,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r6.u8);
	// stb r5,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r5.u8);
	// stb r11,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, r11.u8);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r29.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// b 0x825444c4
	goto loc_825444C4;
loc_825448B4:
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(r28.u32, r22.u32, xer);
	// bne cr6,0x82544a60
	if (!cr6.eq) goto loc_82544A60;
	// addi r11,r26,-128
	r11.s64 = r26.s64 + -128;
	// addi r30,r30,-128
	r30.s64 = r30.s64 + -128;
	// mr r26,r11
	r26.u64 = r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82544994
	if (cr6.eq) goto loc_82544994;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,340
	ctx.r10.s64 = ctx.r1.s64 + 340;
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825448EC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825448ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825448EC;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,372
	ctx.r10.s64 = ctx.r1.s64 + 372;
	// addi r11,r26,36
	r11.s64 = r26.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544908:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544908
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544908;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,404
	ctx.r10.s64 = ctx.r1.s64 + 404;
	// addi r11,r26,68
	r11.s64 = r26.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544924:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544924
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544924;
	// lwz r11,104(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,108(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,112(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 112);
	// lwz r8,116(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 116);
	// lbz r7,120(r26)
	ctx.r7.u64 = PPC_LOAD_U8(r26.u32 + 120);
	// lbz r6,121(r26)
	ctx.r6.u64 = PPC_LOAD_U8(r26.u32 + 121);
	// lbz r5,122(r26)
	ctx.r5.u64 = PPC_LOAD_U8(r26.u32 + 122);
	// lbz r31,123(r26)
	r31.u64 = PPC_LOAD_U8(r26.u32 + 123);
	// lwz r29,124(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// stw r11,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, r11.u32);
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// stw r9,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// stw r8,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r8.u32);
	// stb r7,456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 456, ctx.r7.u8);
	// stb r6,457(r1)
	PPC_STORE_U8(ctx.r1.u32 + 457, ctx.r6.u8);
	// stb r5,458(r1)
	PPC_STORE_U8(ctx.r1.u32 + 458, ctx.r5.u8);
	// stb r31,459(r1)
	PPC_STORE_U8(ctx.r1.u32 + 459, r31.u8);
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r29.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r27.u32);
loc_82544994:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,596
	ctx.r10.s64 = ctx.r1.s64 + 596;
	// stw r27,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r27.u32);
	// addi r25,r25,-128
	r25.s64 = r25.s64 + -128;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r8,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825449B4:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825449b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825449B4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,628
	ctx.r10.s64 = ctx.r1.s64 + 628;
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825449D0:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825449d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825449D0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,660
	ctx.r10.s64 = ctx.r1.s64 + 660;
	// addi r11,r30,68
	r11.s64 = r30.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825449EC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825449ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825449EC;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lbz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 120);
	// lbz r6,121(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 121);
	// lbz r5,122(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 122);
	// lbz r31,123(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 123);
	// lwz r29,124(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r11,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, r11.u32);
	// stw r10,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r10.u32);
	// stw r9,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r9.u32);
	// stw r8,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r8.u32);
	// stb r7,712(r1)
	PPC_STORE_U8(ctx.r1.u32 + 712, ctx.r7.u8);
	// stb r6,713(r1)
	PPC_STORE_U8(ctx.r1.u32 + 713, ctx.r6.u8);
	// stb r5,714(r1)
	PPC_STORE_U8(ctx.r1.u32 + 714, ctx.r5.u8);
	// stb r31,715(r1)
	PPC_STORE_U8(ctx.r1.u32 + 715, r31.u8);
	// stw r29,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r29.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// stw r27,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r27.u32);
	// b 0x825444c4
	goto loc_825444C4;
loc_82544A60:
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,852
	ctx.r10.s64 = ctx.r1.s64 + 852;
	// stw r27,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, r27.u32);
	// addi r26,r26,-128
	r26.s64 = r26.s64 + -128;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// stw r8,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544A80:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544a80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544A80;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,884
	ctx.r10.s64 = ctx.r1.s64 + 884;
	// addi r11,r28,36
	r11.s64 = r28.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544A9C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544a9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544A9C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,916
	ctx.r10.s64 = ctx.r1.s64 + 916;
	// addi r11,r28,68
	r11.s64 = r28.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544AB8:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544ab8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544AB8;
	// lwz r11,104(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,112(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// lwz r8,116(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// lbz r7,120(r28)
	ctx.r7.u64 = PPC_LOAD_U8(r28.u32 + 120);
	// lbz r6,121(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 121);
	// lbz r5,122(r28)
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + 122);
	// lbz r31,123(r28)
	r31.u64 = PPC_LOAD_U8(r28.u32 + 123);
	// lwz r29,124(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// stw r11,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, r11.u32);
	// stw r10,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r10.u32);
	// stw r9,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r9.u32);
	// stw r8,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r8.u32);
	// stb r7,968(r1)
	PPC_STORE_U8(ctx.r1.u32 + 968, ctx.r7.u8);
	// stb r6,969(r1)
	PPC_STORE_U8(ctx.r1.u32 + 969, ctx.r6.u8);
	// stb r5,970(r1)
	PPC_STORE_U8(ctx.r1.u32 + 970, ctx.r5.u8);
	// stb r31,971(r1)
	PPC_STORE_U8(ctx.r1.u32 + 971, r31.u8);
	// stw r29,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, r29.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// stw r27,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, r27.u32);
	// b 0x825444c4
	goto loc_825444C4;
loc_82544B30:
	// lwz r3,976(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// stw r25,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r25.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
}

__attribute__((alias("__imp__sub_82544B48"))) PPC_WEAK_FUNC(sub_82544B48);
PPC_FUNC_IMPL(__imp__sub_82544B48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

