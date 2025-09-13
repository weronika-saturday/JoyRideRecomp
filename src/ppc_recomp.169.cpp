#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825CF56C"))) PPC_WEAK_FUNC(sub_825CF56C);
PPC_FUNC_IMPL(__imp__sub_825CF56C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825CF570"))) PPC_WEAK_FUNC(sub_825CF570);
PPC_FUNC_IMPL(__imp__sub_825CF570) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2704
	ctx.r3.s64 = ctx.r10.s64 + 2704;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19328(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19328);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825CF5E0"))) PPC_WEAK_FUNC(sub_825CF5E0);
PPC_FUNC_IMPL(__imp__sub_825CF5E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825CF5E4"))) PPC_WEAK_FUNC(sub_825CF5E4);
PPC_FUNC_IMPL(__imp__sub_825CF5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF5E8"))) PPC_WEAK_FUNC(sub_825CF5E8);
PPC_FUNC_IMPL(__imp__sub_825CF5E8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2656
	ctx.r3.s64 = ctx.r10.s64 + 2656;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19332(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19332);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825CF658"))) PPC_WEAK_FUNC(sub_825CF658);
PPC_FUNC_IMPL(__imp__sub_825CF658) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825CF65C"))) PPC_WEAK_FUNC(sub_825CF65C);
PPC_FUNC_IMPL(__imp__sub_825CF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF660"))) PPC_WEAK_FUNC(sub_825CF660);
PPC_FUNC_IMPL(__imp__sub_825CF660) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2752
	ctx.r3.s64 = ctx.r10.s64 + 2752;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19324(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19324);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825CF6D0"))) PPC_WEAK_FUNC(sub_825CF6D0);
PPC_FUNC_IMPL(__imp__sub_825CF6D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825CF6D4"))) PPC_WEAK_FUNC(sub_825CF6D4);
PPC_FUNC_IMPL(__imp__sub_825CF6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF6D8"))) PPC_WEAK_FUNC(sub_825CF6D8);
PPC_FUNC_IMPL(__imp__sub_825CF6D8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,6296
	ctx.r3.s64 = ctx.r10.s64 + 6296;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19044(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19044);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825CF748"))) PPC_WEAK_FUNC(sub_825CF748);
PPC_FUNC_IMPL(__imp__sub_825CF748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825CF74C"))) PPC_WEAK_FUNC(sub_825CF74C);
PPC_FUNC_IMPL(__imp__sub_825CF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF750"))) PPC_WEAK_FUNC(sub_825CF750);
PPC_FUNC_IMPL(__imp__sub_825CF750) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825cf798
	if (cr6.eq) goto loc_825CF798;
loc_825CF778:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825cf778
	if (!cr6.eq) goto loc_825CF778;
loc_825CF798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CF7A8"))) PPC_WEAK_FUNC(sub_825CF7A8);
PPC_FUNC_IMPL(__imp__sub_825CF7A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CF7AC"))) PPC_WEAK_FUNC(sub_825CF7AC);
PPC_FUNC_IMPL(__imp__sub_825CF7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF7B0"))) PPC_WEAK_FUNC(sub_825CF7B0);
PPC_FUNC_IMPL(__imp__sub_825CF7B0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825cf7f8
	if (cr6.eq) goto loc_825CF7F8;
loc_825CF7D8:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x826e6440
	sub_826E6440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825cf7d8
	if (!cr6.eq) goto loc_825CF7D8;
loc_825CF7F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CF808"))) PPC_WEAK_FUNC(sub_825CF808);
PPC_FUNC_IMPL(__imp__sub_825CF808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CF80C"))) PPC_WEAK_FUNC(sub_825CF80C);
PPC_FUNC_IMPL(__imp__sub_825CF80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF810"))) PPC_WEAK_FUNC(sub_825CF810);
PPC_FUNC_IMPL(__imp__sub_825CF810) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825cf864
	if (cr6.eq) goto loc_825CF864;
loc_825CF838:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cf838
	if (!cr6.eq) goto loc_825CF838;
loc_825CF864:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CF8A4"))) PPC_WEAK_FUNC(sub_825CF8A4);
PPC_FUNC_IMPL(__imp__sub_825CF8A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CF8A8"))) PPC_WEAK_FUNC(sub_825CF8A8);
PPC_FUNC_IMPL(__imp__sub_825CF8A8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CF8F4"))) PPC_WEAK_FUNC(sub_825CF8F4);
PPC_FUNC_IMPL(__imp__sub_825CF8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CF8F8"))) PPC_WEAK_FUNC(sub_825CF8F8);
PPC_FUNC_IMPL(__imp__sub_825CF8F8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825cf940
	if (cr6.eq) goto loc_825CF940;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x825cf944
	goto loc_825CF944;
loc_825CF940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825CF944:
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

__attribute__((alias("__imp__sub_825CF958"))) PPC_WEAK_FUNC(sub_825CF958);
PPC_FUNC_IMPL(__imp__sub_825CF958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CF95C"))) PPC_WEAK_FUNC(sub_825CF95C);
PPC_FUNC_IMPL(__imp__sub_825CF95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF960"))) PPC_WEAK_FUNC(sub_825CF960);
PPC_FUNC_IMPL(__imp__sub_825CF960) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// li r28,5381
	r28.s64 = 5381;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825cf9a4
	if (cr6.eq) goto loc_825CF9A4;
loc_825CF988:
	// rlwinm r8,r28,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r28,r8,r11
	r28.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825cf988
	if (!cr6.eq) goto loc_825CF988;
loc_825CF9A4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,18088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18088);
	// bl 0x826e5b38
	sub_826E5B38(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825cf9e8
	if (cr6.eq) goto loc_825CF9E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825cf9ec
	if (!cr6.eq) goto loc_825CF9EC;
loc_825CF9E8:
	// li r11,0
	r11.s64 = 0;
loc_825CF9EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x826e7338
	sub_826E7338(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e77f0
	sub_826E77F0(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// addi r3,r29,100
	ctx.r3.s64 = r29.s64 + 100;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r10,220(r29)
	PPC_STORE_U32(r29.u32 + 220, ctx.r10.u32);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r4,r7,19788
	ctx.r4.s64 = ctx.r7.s64 + 19788;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825cfab4
	if (cr6.eq) goto loc_825CFAB4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825cfab4
	if (!cr6.gt) goto loc_825CFAB4;
loc_825CFA58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x826e4328
	sub_826E4328(ctx, base);
	// lwz r8,56(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// stw r29,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, r29.u32);
	// lwz r7,56(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// lwz r3,28(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// bl 0x826e43c0
	sub_826E43C0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x825cfa58
	if (cr6.lt) goto loc_825CFA58;
loc_825CFAB4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825cfad0
	if (cr0.eq) goto loc_825CFAD0;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_825CFAD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825CFAE4"))) PPC_WEAK_FUNC(sub_825CFAE4);
PPC_FUNC_IMPL(__imp__sub_825CFAE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825CFAE8"))) PPC_WEAK_FUNC(sub_825CFAE8);
PPC_FUNC_IMPL(__imp__sub_825CFAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825cfb30
	if (cr6.eq) goto loc_825CFB30;
loc_825CFB14:
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
	// bne cr6,0x825cfb14
	if (!cr6.eq) goto loc_825CFB14;
loc_825CFB30:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CFB68"))) PPC_WEAK_FUNC(sub_825CFB68);
PPC_FUNC_IMPL(__imp__sub_825CFB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFB6C"))) PPC_WEAK_FUNC(sub_825CFB6C);
PPC_FUNC_IMPL(__imp__sub_825CFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFB70"))) PPC_WEAK_FUNC(sub_825CFB70);
PPC_FUNC_IMPL(__imp__sub_825CFB70) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825cfbbc
	if (cr6.eq) goto loc_825CFBBC;
loc_825CFBA0:
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
	// bne cr6,0x825cfba0
	if (!cr6.eq) goto loc_825CFBA0;
loc_825CFBBC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825cfbec
	if (cr6.eq) goto loc_825CFBEC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x825cfbf0
	goto loc_825CFBF0;
loc_825CFBEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825CFBF0:
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

__attribute__((alias("__imp__sub_825CFC04"))) PPC_WEAK_FUNC(sub_825CFC04);
PPC_FUNC_IMPL(__imp__sub_825CFC04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFC08"))) PPC_WEAK_FUNC(sub_825CFC08);
PPC_FUNC_IMPL(__imp__sub_825CFC08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
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

__attribute__((alias("__imp__sub_825CFC4C"))) PPC_WEAK_FUNC(sub_825CFC4C);
PPC_FUNC_IMPL(__imp__sub_825CFC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFC50"))) PPC_WEAK_FUNC(sub_825CFC50);
PPC_FUNC_IMPL(__imp__sub_825CFC50) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x825cf810
	sub_825CF810(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CFC94"))) PPC_WEAK_FUNC(sub_825CFC94);
PPC_FUNC_IMPL(__imp__sub_825CFC94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFC98"))) PPC_WEAK_FUNC(sub_825CFC98);
PPC_FUNC_IMPL(__imp__sub_825CFC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825cfce4
	if (!cr6.eq) goto loc_825CFCE4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825cfcdc
	if (!cr6.eq) goto loc_825CFCDC;
loc_825CFCC8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825cfcc8
	if (cr6.eq) goto loc_825CFCC8;
loc_825CFCDC:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825CFCE4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825cfd1c
	if (!cr6.eq) goto loc_825CFD1C;
loc_825CFCF4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cfd1c
	if (!cr6.eq) goto loc_825CFD1C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825cfcf4
	if (cr6.eq) goto loc_825CFCF4;
loc_825CFD1C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825CFD20"))) PPC_WEAK_FUNC(sub_825CFD20);
PPC_FUNC_IMPL(__imp__sub_825CFD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFD24"))) PPC_WEAK_FUNC(sub_825CFD24);
PPC_FUNC_IMPL(__imp__sub_825CFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFD28"))) PPC_WEAK_FUNC(sub_825CFD28);
PPC_FUNC_IMPL(__imp__sub_825CFD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825cfd44
	if (cr6.eq) goto loc_825CFD44;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_825CFD44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825cfd80
	if (!cr6.eq) goto loc_825CFD80;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825cfd78
	if (!cr6.eq) goto loc_825CFD78;
loc_825CFD64:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825cfd64
	if (cr6.eq) goto loc_825CFD64;
loc_825CFD78:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825CFD80:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825cfdb8
	if (!cr6.eq) goto loc_825CFDB8;
loc_825CFD90:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cfdb8
	if (!cr6.eq) goto loc_825CFDB8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825cfd90
	if (cr6.eq) goto loc_825CFD90;
loc_825CFDB8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825CFDCC"))) PPC_WEAK_FUNC(sub_825CFDCC);
PPC_FUNC_IMPL(__imp__sub_825CFDCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFDD0"))) PPC_WEAK_FUNC(sub_825CFDD0);
PPC_FUNC_IMPL(__imp__sub_825CFDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825cfdf0
	if (!cr6.eq) goto loc_825CFDF0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_825CFDF0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cfe18
	if (!cr6.eq) goto loc_825CFE18;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825CFE18:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cfe38
	if (!cr6.eq) goto loc_825CFE38;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825CFE38:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_825CFE44"))) PPC_WEAK_FUNC(sub_825CFE44);
PPC_FUNC_IMPL(__imp__sub_825CFE44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFE48"))) PPC_WEAK_FUNC(sub_825CFE48);
PPC_FUNC_IMPL(__imp__sub_825CFE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825cfe68
	if (!cr6.eq) goto loc_825CFE68;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_825CFE68:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cfe90
	if (!cr6.eq) goto loc_825CFE90;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825CFE90:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825cfeb0
	if (!cr6.eq) goto loc_825CFEB0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825CFEB0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_825CFEBC"))) PPC_WEAK_FUNC(sub_825CFEBC);
PPC_FUNC_IMPL(__imp__sub_825CFEBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFEC0"))) PPC_WEAK_FUNC(sub_825CFEC0);
PPC_FUNC_IMPL(__imp__sub_825CFEC0) {
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
	// li r3,52
	ctx.r3.s64 = 52;
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
	// stb r31,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r31.u8);
	// stb r31,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, r31.u8);
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

__attribute__((alias("__imp__sub_825CFF54"))) PPC_WEAK_FUNC(sub_825CFF54);
PPC_FUNC_IMPL(__imp__sub_825CFF54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFF58"))) PPC_WEAK_FUNC(sub_825CFF58);
PPC_FUNC_IMPL(__imp__sub_825CFF58) {
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
	// li r3,52
	ctx.r3.s64 = 52;
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
	// stb r11,48(r4)
	PPC_STORE_U8(ctx.r4.u32 + 48, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,49(r10)
	PPC_STORE_U8(ctx.r10.u32 + 49, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CFFF8"))) PPC_WEAK_FUNC(sub_825CFFF8);
PPC_FUNC_IMPL(__imp__sub_825CFFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFFFC"))) PPC_WEAK_FUNC(sub_825CFFFC);
PPC_FUNC_IMPL(__imp__sub_825CFFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0000"))) PPC_WEAK_FUNC(sub_825D0000);
PPC_FUNC_IMPL(__imp__sub_825D0000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825d0040
	if (!cr6.eq) goto loc_825D0040;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_825D0018:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x825d002c
	if (!cr6.lt) goto loc_825D002C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x825d0034
	goto loc_825D0034;
loc_825D002C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825D0034:
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825d0018
	if (cr6.eq) goto loc_825D0018;
loc_825D0040:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825d0070
	if (cr6.eq) goto loc_825D0070;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x825d0070
	if (cr6.lt) goto loc_825D0070;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_825D0070:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825D0080"))) PPC_WEAK_FUNC(sub_825D0080);
PPC_FUNC_IMPL(__imp__sub_825D0080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0084"))) PPC_WEAK_FUNC(sub_825D0084);
PPC_FUNC_IMPL(__imp__sub_825D0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0088"))) PPC_WEAK_FUNC(sub_825D0088);
PPC_FUNC_IMPL(__imp__sub_825D0088) {
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
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r9,r10,29126
	ctx.r9.u64 = ctx.r10.u64 | 29126;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825d00c8
	if (cr6.lt) goto loc_825D00C8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5516
	ctx.r3.s64 = r11.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825D00C8:
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
	// bne cr6,0x825d00f8
	if (!cr6.eq) goto loc_825D00F8;
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
	// b 0x825d0138
	goto loc_825D0138;
loc_825D00F8:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d0120
	if (cr6.eq) goto loc_825D0120;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825d0138
	if (!cr6.eq) goto loc_825D0138;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// b 0x825d0138
	goto loc_825D0138;
loc_825D0120:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825d0138
	if (!cr6.eq) goto loc_825D0138;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
loc_825D0138:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d025c
	if (!cr6.eq) goto loc_825D025C;
	// li r28,0
	r28.s64 = 0;
loc_825D0154:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x825d01dc
	if (!cr6.eq) goto loc_825D01DC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d019c
	if (!cr6.eq) goto loc_825D019C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, r29.u8);
	// stb r29,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825d024c
	goto loc_825D024C;
loc_825D019C:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825d01b4
	if (!cr6.eq) goto loc_825D01B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825cfdd0
	sub_825CFDD0(ctx, base);
loc_825D01B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x825cfe48
	sub_825CFE48(ctx, base);
	// b 0x825d024c
	goto loc_825D024C;
loc_825D01DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d0210
	if (!cr6.eq) goto loc_825D0210;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, r29.u8);
	// stb r29,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825d024c
	goto loc_825D024C;
loc_825D0210:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825d0228
	if (!cr6.eq) goto loc_825D0228;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825cfe48
	sub_825CFE48(ctx, base);
loc_825D0228:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x825cfdd0
	sub_825CFDD0(ctx, base);
loc_825D024C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d0154
	if (cr6.eq) goto loc_825D0154;
loc_825D025C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825D0274"))) PPC_WEAK_FUNC(sub_825D0274);
PPC_FUNC_IMPL(__imp__sub_825D0274) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825D0278"))) PPC_WEAK_FUNC(sub_825D0278);
PPC_FUNC_IMPL(__imp__sub_825D0278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828eaaf8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r11,21388
	ctx.r9.s64 = r11.s64 + 21388;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,21388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21388);
	f0.f64 = double(temp.f32);
	// addi r8,r10,21404
	ctx.r8.s64 = ctx.r10.s64 + 21404;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f0,21404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21404);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x825d0000
	sub_825D0000(ctx, base);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x825d042c
	if (cr6.eq) goto loc_825D042C;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
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
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d042c
	if (cr6.eq) goto loc_825D042C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f6,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f31,f3,f6
	f31.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f30,f2,f5
	f30.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lfs f29,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f29.f64 = double(temp.f32);
	// fadds f28,f1,f4
	f28.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,0(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f30,4(r29)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f28,8(r29)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f29,12(r29)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
loc_825D042C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825D0438"))) PPC_WEAK_FUNC(sub_825D0438);
PPC_FUNC_IMPL(__imp__sub_825D0438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D043C"))) PPC_WEAK_FUNC(sub_825D043C);
PPC_FUNC_IMPL(__imp__sub_825D043C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0440"))) PPC_WEAK_FUNC(sub_825D0440);
PPC_FUNC_IMPL(__imp__sub_825D0440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,5381
	ctx.r4.s64 = 5381;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d0474
	if (cr6.eq) goto loc_825D0474;
loc_825D0458:
	// rlwinm r8,r4,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d0458
	if (!cr6.eq) goto loc_825D0458;
loc_825D0474:
	// b 0x825d0278
	sub_825D0278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0478"))) PPC_WEAK_FUNC(sub_825D0478);
PPC_FUNC_IMPL(__imp__sub_825D0478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// bl 0x828e9400
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eaae8
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x825cff58
	sub_825CFF58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r30.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stb r10,20(r28)
	PPC_STORE_U8(r28.u32 + 20, ctx.r10.u8);
	// addi r30,r11,-12652
	r30.s64 = r11.s64 + -12652;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d07bc
	if (cr6.eq) goto loc_825D07BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// beq cr6,0x825d07bc
	if (cr6.eq) goto loc_825D07BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,9448
	ctx.r10.s64 = r11.s64 + 9448;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r23,r11,21404
	r23.s64 = r11.s64 + 21404;
	// addi r22,r10,21388
	r22.s64 = ctx.r10.s64 + 21388;
	// addi r27,r9,9464
	r27.s64 = ctx.r9.s64 + 9464;
	// addi r24,r8,9468
	r24.s64 = ctx.r8.s64 + 9468;
	// addi r26,r7,-14452
	r26.s64 = ctx.r7.s64 + -14452;
loc_825D05B0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d0614
	if (cr6.eq) goto loc_825D0614;
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
	// beq cr6,0x825d0614
	if (cr6.eq) goto loc_825D0614;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825d0618
	if (!cr6.eq) goto loc_825D0618;
loc_825D0614:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_825D0618:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// li r31,5381
	r31.s64 = 5381;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d0658
	if (cr6.eq) goto loc_825D0658;
loc_825D063C:
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
	// bne cr6,0x825d063c
	if (!cr6.eq) goto loc_825D063C;
loc_825D0658:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d06b8
	if (cr6.eq) goto loc_825D06B8;
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
	// beq cr6,0x825d06b8
	if (cr6.eq) goto loc_825D06B8;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825d06bc
	if (!cr6.eq) goto loc_825D06BC;
loc_825D06B8:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825D06BC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d0734
	if (cr6.eq) goto loc_825D0734;
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
	// beq cr6,0x825d0734
	if (cr6.eq) goto loc_825D0734;
	// bl 0x822d19e0
	sub_822D19E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825d0738
	if (!cr6.eq) goto loc_825D0738;
loc_825D0734:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825D0738:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f27,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// lfs f26,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f24,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f24.f64 = double(temp.f32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stfs f27,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stfs f26,136(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f25,140(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f24,144(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x825d0db8
	sub_825D0DB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825d0c68
	sub_825D0C68(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825d05b0
	if (!cr6.eq) goto loc_825D05B0;
loc_825D07BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eab34
}

__attribute__((alias("__imp__sub_825D07CC"))) PPC_WEAK_FUNC(sub_825D07CC);
PPC_FUNC_IMPL(__imp__sub_825D07CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825D07D0"))) PPC_WEAK_FUNC(sub_825D07D0);
PPC_FUNC_IMPL(__imp__sub_825D07D0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825d0840
	sub_825D0840(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x825d0eb8
	sub_825D0EB8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D083C"))) PPC_WEAK_FUNC(sub_825D083C);
PPC_FUNC_IMPL(__imp__sub_825D083C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0840"))) PPC_WEAK_FUNC(sub_825D0840);
PPC_FUNC_IMPL(__imp__sub_825D0840) {
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
	// lbz r11,49(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 49);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d088c
	if (!cr6.eq) goto loc_825D088C;
loc_825D0868:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x825d0840
	sub_825D0840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,49(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d0868
	if (cr6.eq) goto loc_825D0868;
loc_825D088C:
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

__attribute__((alias("__imp__sub_825D08A0"))) PPC_WEAK_FUNC(sub_825D08A0);
PPC_FUNC_IMPL(__imp__sub_825D08A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D08A4"))) PPC_WEAK_FUNC(sub_825D08A4);
PPC_FUNC_IMPL(__imp__sub_825D08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D08A8"))) PPC_WEAK_FUNC(sub_825D08A8);
PPC_FUNC_IMPL(__imp__sub_825D08A8) {
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
	// lbz r11,49(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 49);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d08d8
	if (cr6.eq) goto loc_825D08D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5488
	ctx.r3.s64 = r11.s64 + 5488;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
loc_825D08D8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x825cfc98
	sub_825CFC98(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x825d0900
	if (cr6.eq) goto loc_825D0900;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x825d0924
	goto loc_825D0924;
loc_825D0900:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d0918
	if (cr6.eq) goto loc_825D0918;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x825d0924
	goto loc_825D0924;
loc_825D0918:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x825d0a10
	if (!cr6.eq) goto loc_825D0A10;
loc_825D0924:
	// lbz r11,49(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 49);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d0938
	if (!cr6.eq) goto loc_825D0938;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_825D0938:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825d0950
	if (!cr6.eq) goto loc_825D0950;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x825d0968
	goto loc_825D0968;
loc_825D0950:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825d0964
	if (!cr6.eq) goto loc_825D0964;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x825d0968
	goto loc_825D0968;
loc_825D0964:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_825D0968:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825d09b8
	if (!cr6.eq) goto loc_825D09B8;
	// lbz r11,49(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d098c
	if (cr6.eq) goto loc_825D098C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x825d09b4
	goto loc_825D09B4;
loc_825D098C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825d09b4
	if (!cr6.eq) goto loc_825D09B4;
loc_825D09A0:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825d09a0
	if (cr6.eq) goto loc_825D09A0;
loc_825D09B4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_825D09B8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825d0aa4
	if (!cr6.eq) goto loc_825D0AA4;
	// lbz r11,49(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d09e0
	if (cr6.eq) goto loc_825D09E0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// b 0x825d0aa4
	goto loc_825D0AA4;
loc_825D09E0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825d0a08
	if (!cr6.eq) goto loc_825D0A08;
loc_825D09F4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825d09f4
	if (cr6.eq) goto loc_825D09F4;
loc_825D0A08:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825d0aa4
	goto loc_825D0AA4;
loc_825D0A10:
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
	// bne cr6,0x825d0a30
	if (!cr6.eq) goto loc_825D0A30;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x825d0a58
	goto loc_825D0A58;
loc_825D0A30:
	// lbz r11,49(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 49);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d0a44
	if (!cr6.eq) goto loc_825D0A44;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_825D0A44:
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
loc_825D0A58:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825d0a70
	if (!cr6.eq) goto loc_825D0A70;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x825d0a8c
	goto loc_825D0A8C;
loc_825D0A70:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825d0a88
	if (!cr6.eq) goto loc_825D0A88;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x825d0a8c
	goto loc_825D0A8C;
loc_825D0A88:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_825D0A8C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 48);
	// lbz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 48);
	// stb r9,48(r25)
	PPC_STORE_U8(r25.u32 + 48, ctx.r9.u8);
	// stb r10,48(r26)
	PPC_STORE_U8(r26.u32 + 48, ctx.r10.u8);
loc_825D0AA4:
	// lbz r11,48(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825d0c3c
	if (!cr6.eq) goto loc_825D0C3C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x825d0c38
	if (cr6.eq) goto loc_825D0C38;
	// li r30,0
	r30.s64 = 0;
loc_825D0AC8:
	// lbz r11,48(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825d0c38
	if (!cr6.eq) goto loc_825D0C38;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x825d0b80
	if (!cr6.eq) goto loc_825D0B80;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d0b08
	if (!cr6.eq) goto loc_825D0B08;
	// stb r29,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825cfdd0
	sub_825CFDD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825D0B08:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d0bd4
	if (!cr6.eq) goto loc_825D0BD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825d0b34
	if (!cr6.eq) goto loc_825D0B34;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x825d0bd0
	if (cr6.eq) goto loc_825D0BD0;
loc_825D0B34:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825d0b5c
	if (!cr6.eq) goto loc_825D0B5C;
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825cfe48
	sub_825CFE48(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825D0B5C:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(r11.u32 + 48, ctx.r10.u8);
	// stb r29,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, r29.u8);
	// bl 0x825cfdd0
	sub_825CFDD0(ctx, base);
	// b 0x825d0c38
	goto loc_825D0C38;
loc_825D0B80:
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d0ba4
	if (!cr6.eq) goto loc_825D0BA4;
	// stb r29,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825cfe48
	sub_825CFE48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825D0BA4:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d0bd4
	if (!cr6.eq) goto loc_825D0BD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825d0bf0
	if (!cr6.eq) goto loc_825D0BF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825d0bf0
	if (!cr6.eq) goto loc_825D0BF0;
loc_825D0BD0:
	// stb r30,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r30.u8);
loc_825D0BD4:
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
	// bne cr6,0x825d0ac8
	if (!cr6.eq) goto loc_825D0AC8;
	// b 0x825d0c38
	goto loc_825D0C38;
loc_825D0BF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825d0c18
	if (!cr6.eq) goto loc_825D0C18;
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,48(r11)
	PPC_STORE_U8(r11.u32 + 48, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825cfdd0
	sub_825CFDD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825D0C18:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(r11.u32 + 48, ctx.r10.u8);
	// stb r29,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, r29.u8);
	// bl 0x825cfe48
	sub_825CFE48(ctx, base);
loc_825D0C38:
	// stb r29,48(r28)
	PPC_STORE_U8(r28.u32 + 48, r29.u8);
loc_825D0C3C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d0c58
	if (cr6.eq) goto loc_825D0C58;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_825D0C58:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825D0C64"))) PPC_WEAK_FUNC(sub_825D0C64);
PPC_FUNC_IMPL(__imp__sub_825D0C64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825D0C68"))) PPC_WEAK_FUNC(sub_825D0C68);
PPC_FUNC_IMPL(__imp__sub_825D0C68) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d0cf4
	if (!cr6.eq) goto loc_825D0CF4;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_825D0CA8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825d0cc4
	if (cr6.eq) goto loc_825D0CC4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r31.u64 = temp.u64;
	// b 0x825d0cd0
	goto loc_825D0CD0;
loc_825D0CC4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	r31.u64 = ctx.r4.u32 & 0x1;
loc_825D0CD0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d0ce4
	if (cr6.eq) goto loc_825D0CE4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825d0ce8
	goto loc_825D0CE8;
loc_825D0CE4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_825D0CE8:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d0ca8
	if (cr6.eq) goto loc_825D0CA8;
loc_825D0CF4:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d0d54
	if (cr6.eq) goto loc_825D0D54;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825d0d4c
	if (!cr6.eq) goto loc_825D0D4C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825d0088
	sub_825D0088(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r25.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825D0D4C:
	// bl 0x825cfd28
	sub_825CFD28(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825D0D54:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d0d98
	if (!cr6.lt) goto loc_825D0D98;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0088
	sub_825D0088(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r25.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825D0D98:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825D0DB4"))) PPC_WEAK_FUNC(sub_825D0DB4);
PPC_FUNC_IMPL(__imp__sub_825D0DB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825D0DB8"))) PPC_WEAK_FUNC(sub_825D0DB8);
PPC_FUNC_IMPL(__imp__sub_825D0DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825cfec0
	sub_825CFEC0(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// beq 0x825d0e3c
	if (cr0.eq) goto loc_825D0E3C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_825D0E3C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_825D0E5C"))) PPC_WEAK_FUNC(sub_825D0E5C);
PPC_FUNC_IMPL(__imp__sub_825D0E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0E60"))) PPC_WEAK_FUNC(sub_825D0E60);
PPC_FUNC_IMPL(__imp__sub_825D0E60) {
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
	// bl 0x825d0840
	sub_825D0840(ctx, base);
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

__attribute__((alias("__imp__sub_825D0EB0"))) PPC_WEAK_FUNC(sub_825D0EB0);
PPC_FUNC_IMPL(__imp__sub_825D0EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0EB4"))) PPC_WEAK_FUNC(sub_825D0EB4);
PPC_FUNC_IMPL(__imp__sub_825D0EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0EB8"))) PPC_WEAK_FUNC(sub_825D0EB8);
PPC_FUNC_IMPL(__imp__sub_825D0EB8) {
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
	// bne cr6,0x825d0f0c
	if (!cr6.eq) goto loc_825D0F0C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x825d0f0c
	if (!cr6.eq) goto loc_825D0F0C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825d0e60
	sub_825D0E60(ctx, base);
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
loc_825D0F0C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x825d0f3c
	if (cr6.eq) goto loc_825D0F3C;
loc_825D0F14:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x825cfc98
	sub_825CFC98(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d08a8
	sub_825D08A8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x825d0f14
	if (!cr6.eq) goto loc_825D0F14;
loc_825D0F3C:
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D0F48"))) PPC_WEAK_FUNC(sub_825D0F48);
PPC_FUNC_IMPL(__imp__sub_825D0F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D0F4C"))) PPC_WEAK_FUNC(sub_825D0F4C);
PPC_FUNC_IMPL(__imp__sub_825D0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0F50"))) PPC_WEAK_FUNC(sub_825D0F50);
PPC_FUNC_IMPL(__imp__sub_825D0F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,11024(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11024);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
}

__attribute__((alias("__imp__sub_825D0F7C"))) PPC_WEAK_FUNC(sub_825D0F7C);
PPC_FUNC_IMPL(__imp__sub_825D0F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0F80"))) PPC_WEAK_FUNC(sub_825D0F80);
PPC_FUNC_IMPL(__imp__sub_825D0F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d1034
	if (cr6.eq) goto loc_825D1034;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x825d0fdc
	if (!cr6.eq) goto loc_825D0FDC;
	// ld r9,22016(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22016);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r9,22016(r10)
	PPC_STORE_U64(ctx.r10.u32 + 22016, ctx.r9.u64);
	// b 0x825d0fec
	goto loc_825D0FEC;
loc_825D0FDC:
	// ld r8,22008(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22008);
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,22008(r10)
	PPC_STORE_U64(ctx.r10.u32 + 22008, ctx.r9.u64);
loc_825D0FEC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,13836(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13836);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d1034
	if (cr6.eq) goto loc_825D1034;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f13,22000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22000);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,6196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6196);
	f0.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D1034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825D1040"))) PPC_WEAK_FUNC(sub_825D1040);
PPC_FUNC_IMPL(__imp__sub_825D1040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1044"))) PPC_WEAK_FUNC(sub_825D1044);
PPC_FUNC_IMPL(__imp__sub_825D1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1048"))) PPC_WEAK_FUNC(sub_825D1048);
PPC_FUNC_IMPL(__imp__sub_825D1048) {
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
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cctpl 
	// li r11,4
	r11.s64 = 4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825D1068:
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// bdnz 0x825d1068
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D1068;
	// cctpm 
	// lbz r11,11069(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d111c
	if (!cr0.eq) goto loc_825D111C;
	// lwz r11,11024(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 11024);
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,88(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x825d10c4
	if (cr6.eq) goto loc_825D10C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_825D10C4:
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// lwz r11,11016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 11016);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x825d10e4
	if (!cr6.eq) goto loc_825D10E4;
	// lwz r11,11148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 11148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d10e4
	if (cr6.eq) goto loc_825D10E4;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_825D10E4:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// lwz r11,21420(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21420);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x825d1104
	if (!cr6.lt) goto loc_825D1104;
loc_825D10FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d1120
	goto loc_825D1120;
loc_825D1104:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825eab68
	sub_825EAB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825d111c
	if (!cr0.eq) goto loc_825D111C;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x825d10fc
	goto loc_825D10FC;
loc_825D111C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D1120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D1124"))) PPC_WEAK_FUNC(sub_825D1124);
PPC_FUNC_IMPL(__imp__sub_825D1124) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D1128"))) PPC_WEAK_FUNC(sub_825D1128);
PPC_FUNC_IMPL(__imp__sub_825D1128) {
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
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24400);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24400(r31)
	PPC_STORE_U32(r31.u32 + 24400, r11.u32);
	// stw r11,24408(r31)
	PPC_STORE_U32(r31.u32 + 24408, r11.u32);
	// std r11,24416(r31)
	PPC_STORE_U64(r31.u32 + 24416, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D1174"))) PPC_WEAK_FUNC(sub_825D1174);
PPC_FUNC_IMPL(__imp__sub_825D1174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1178"))) PPC_WEAK_FUNC(sub_825D1178);
PPC_FUNC_IMPL(__imp__sub_825D1178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24424(r31)
	PPC_STORE_U32(r31.u32 + 24424, ctx.r3.u32);
	// bne 0x825d11ac
	if (!cr0.eq) goto loc_825D11AC;
loc_825D11A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d1264
	goto loc_825D1264;
loc_825D11AC:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,1260
	ctx.r3.s64 = 1260;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,24432(r31)
	PPC_STORE_U32(r31.u32 + 24432, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825d11e0
	if (!cr0.eq) goto loc_825D11E0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24424);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24424(r31)
	PPC_STORE_U32(r31.u32 + 24424, r11.u32);
	// b 0x825d1264
	goto loc_825D1264;
loc_825D11E0:
	// li r10,63
	ctx.r10.s64 = 63;
	// li r11,0
	r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825D11EC:
	// lwz r10,24424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24424);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,2989
	ctx.r8.s64 = 195887104;
	// ori r8,r8,53261
	ctx.r8.u64 = ctx.r8.u64 | 53261;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,24424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24424);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bdnz 0x825d11ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D11EC;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24448(r31)
	PPC_STORE_U32(r31.u32 + 24448, ctx.r3.u32);
	// beq 0x825d11a4
	if (cr0.eq) goto loc_825D11A4;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,24452(r31)
	PPC_STORE_U32(r31.u32 + 24452, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825d1260
	if (!cr0.eq) goto loc_825D1260;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24448);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24448(r31)
	PPC_STORE_U32(r31.u32 + 24448, r11.u32);
	// b 0x825d1264
	goto loc_825D1264;
loc_825D1260:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D1264:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D1274"))) PPC_WEAK_FUNC(sub_825D1274);
PPC_FUNC_IMPL(__imp__sub_825D1274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1278"))) PPC_WEAK_FUNC(sub_825D1278);
PPC_FUNC_IMPL(__imp__sub_825D1278) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24424);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24432);
	// stw r31,24424(r30)
	PPC_STORE_U32(r30.u32 + 24424, r31.u32);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r31,24432(r30)
	PPC_STORE_U32(r30.u32 + 24432, r31.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24448);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r31,24448(r30)
	PPC_STORE_U32(r30.u32 + 24448, r31.u32);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24452(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24452);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r31,24452(r30)
	PPC_STORE_U32(r30.u32 + 24452, r31.u32);
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

__attribute__((alias("__imp__sub_825D12E8"))) PPC_WEAK_FUNC(sub_825D12E8);
PPC_FUNC_IMPL(__imp__sub_825D12E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D12EC"))) PPC_WEAK_FUNC(sub_825D12EC);
PPC_FUNC_IMPL(__imp__sub_825D12EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D12F0"))) PPC_WEAK_FUNC(sub_825D12F0);
PPC_FUNC_IMPL(__imp__sub_825D12F0) {
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
	// ble cr6,0x825d131c
	if (!cr6.gt) goto loc_825D131C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D131C:
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1480
	r11.s64 = 1480;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// beq 0x825d1360
	if (cr0.eq) goto loc_825D1360;
	// li r11,3584
	r11.s64 = 3584;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,3648
	ctx.r8.s64 = 3648;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// b 0x825d1364
	goto loc_825D1364;
loc_825D1360:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825D1364:
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// lbz r9,11071(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r9,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, ctx.r10.u8);
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// clrldi r11,r11,2
	r11.u64 = r11.u64 & 0x3FFFFFFFFFFFFFFF;
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

__attribute__((alias("__imp__sub_825D139C"))) PPC_WEAK_FUNC(sub_825D139C);
PPC_FUNC_IMPL(__imp__sub_825D139C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D13A0"))) PPC_WEAK_FUNC(sub_825D13A0);
PPC_FUNC_IMPL(__imp__sub_825D13A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
loc_825D13A4:
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
	// bne 0x825d13a4
	if (!cr0.eq) goto loc_825D13A4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825D13C4"))) PPC_WEAK_FUNC(sub_825D13C4);
PPC_FUNC_IMPL(__imp__sub_825D13C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D13C8"))) PPC_WEAK_FUNC(sub_825D13C8);
PPC_FUNC_IMPL(__imp__sub_825D13C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
loc_825D13E4:
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
	// bne 0x825d13e4
	if (!cr0.eq) goto loc_825D13E4;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825d1430
	if (!cr6.eq) goto loc_825D1430;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, r11.u8);
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb5e0
	sub_825EB5E0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825D1430:
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

__attribute__((alias("__imp__sub_825D1448"))) PPC_WEAK_FUNC(sub_825D1448);
PPC_FUNC_IMPL(__imp__sub_825D1448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D144C"))) PPC_WEAK_FUNC(sub_825D144C);
PPC_FUNC_IMPL(__imp__sub_825D144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1450"))) PPC_WEAK_FUNC(sub_825D1450);
PPC_FUNC_IMPL(__imp__sub_825D1450) {
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
	// lwz r11,11016(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d1474
	if (cr6.eq) goto loc_825D1474;
	// bl 0x82605c68
	sub_82605C68(ctx, base);
loc_825D1474:
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// stw r3,11016(r31)
	PPC_STORE_U32(r31.u32 + 11016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D148C"))) PPC_WEAK_FUNC(sub_825D148C);
PPC_FUNC_IMPL(__imp__sub_825D148C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1490"))) PPC_WEAK_FUNC(sub_825D1490);
PPC_FUNC_IMPL(__imp__sub_825D1490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// eieio 
	// li r11,0
	r11.s64 = 0;
	// stw r11,11016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11016, r11.u32);
}

__attribute__((alias("__imp__sub_825D149C"))) PPC_WEAK_FUNC(sub_825D149C);
PPC_FUNC_IMPL(__imp__sub_825D149C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D14A0"))) PPC_WEAK_FUNC(sub_825D14A0);
PPC_FUNC_IMPL(__imp__sub_825D14A0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d14e4
	if (cr6.eq) goto loc_825D14E4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d14e4
	if (cr6.eq) goto loc_825D14E4;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D14E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// addi r30,r31,15348
	r30.s64 = r31.s64 + 15348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,11464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11464);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r11,r11,108
	r11.s64 = r11.s64 * 108;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,11656(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11656);
	// stb r10,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// stw r11,11016(r31)
	PPC_STORE_U32(r31.u32 + 11016, r11.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825D1534"))) PPC_WEAK_FUNC(sub_825D1534);
PPC_FUNC_IMPL(__imp__sub_825D1534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1538"))) PPC_WEAK_FUNC(sub_825D1538);
PPC_FUNC_IMPL(__imp__sub_825D1538) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d157c
	if (cr6.eq) goto loc_825D157C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d157c
	if (cr6.eq) goto loc_825D157C;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D157C:
	// addi r30,r31,15348
	r30.s64 = r31.s64 + 15348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// stw r3,11016(r31)
	PPC_STORE_U32(r31.u32 + 11016, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825D15B8"))) PPC_WEAK_FUNC(sub_825D15B8);
PPC_FUNC_IMPL(__imp__sub_825D15B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D15BC"))) PPC_WEAK_FUNC(sub_825D15BC);
PPC_FUNC_IMPL(__imp__sub_825D15BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D15C0"))) PPC_WEAK_FUNC(sub_825D15C0);
PPC_FUNC_IMPL(__imp__sub_825D15C0) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d15f4
	if (!cr6.gt) goto loc_825D15F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D15F4:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,17920
	r11.u64 = r11.u64 | 17920;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x825d1630
	if (!cr6.eq) goto loc_825D1630;
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
loc_825D1630:
	// lbz r10,11069(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// andi. r11,r10,251
	r11.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
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

__attribute__((alias("__imp__sub_825D1654"))) PPC_WEAK_FUNC(sub_825D1654);
PPC_FUNC_IMPL(__imp__sub_825D1654) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1658"))) PPC_WEAK_FUNC(sub_825D1658);
PPC_FUNC_IMPL(__imp__sub_825D1658) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r29,r3,12816
	r29.s64 = ctx.r3.s64 + 12816;
loc_825D1670:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,15236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 15236);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825d1690
	if (cr6.eq) goto loc_825D1690;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
loc_825D1690:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825d1670
	if (cr6.lt) goto loc_825D1670;
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,15228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 15228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825d16bc
	if (cr6.eq) goto loc_825D16BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
loc_825D16BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7988
	sub_825D7988(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dee60
	sub_825DEE60(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// rldicr r29,r11,63,63
	r29.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_825D16F8:
	// subfic r11,r30,95
	xer.ca = r30.u32 <= 95;
	r11.s64 = 95 - r30.s64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r11,r11,21846
	r11.s64 = r11.s64 * 21846;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = r11.u8 & 0x40 ? 0 : (r29.u64 >> (r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825decb8
	sub_825DECB8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// blt cr6,0x825d16f8
	if (cr6.lt) goto loc_825D16F8;
	// li r30,0
	r30.s64 = 0;
loc_825D1738:
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (r29.u64 >> (r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,26
	cr6.compare<uint32_t>(r30.u32, 26, xer);
	// blt cr6,0x825d1738
	if (cr6.lt) goto loc_825D1738;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D1764"))) PPC_WEAK_FUNC(sub_825D1764);
PPC_FUNC_IMPL(__imp__sub_825D1764) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D1768"))) PPC_WEAK_FUNC(sub_825D1768);
PPC_FUNC_IMPL(__imp__sub_825D1768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,24416(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24416);
	// addi r6,r3,24416
	ctx.r6.s64 = ctx.r3.s64 + 24416;
	// rldicl r9,r4,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x825d17b8
	goto loc_825D17B8;
loc_825D177C:
	// mfmsr r5
	// mtmsrd r13,1
	// ldarx r7,0,r6
	reserved.u64 = *(uint64_t*)(base + ctx.r6.u32);
	ctx.r7.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r7,r11
	cr6.compare<int64_t>(ctx.r7.s64, r11.s64, xer);
	// bne cr6,0x825d17a0
	if (!cr6.eq) goto loc_825D17A0;
	// stdcx. r10,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x825d177c
	if (!cr0.eq) goto loc_825D177C;
	// b 0x825d17a8
	goto loc_825D17A8;
loc_825D17A0:
	// stdcx. r7,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), reserved.s64, __builtin_bswap64(ctx.r7.s64));
	cr0.so = xer.so;
	// mtmsrd r5,1
loc_825D17A8:
	// mr r7,r7
	ctx.r7.u64 = ctx.r7.u64;
	// cmpd cr6,r11,r7
	cr6.compare<int64_t>(r11.s64, ctx.r7.s64, xer);
	// beq cr6,0x825d17dc
	if (cr6.eq) goto loc_825D17DC;
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
loc_825D17B8:
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// sld r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// bne cr6,0x825d177c
	if (!cr6.eq) goto loc_825D177C;
	// b 0x825d17e0
	goto loc_825D17E0;
loc_825D17DC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D17E0:
	// lwz r10,24396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24396);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825D17EC:
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825d1810
	if (!cr0.eq) goto loc_825D1810;
	// clrlwi r7,r9,1
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFFFFF;
loc_825D1810:
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// bne cr6,0x825d1824
	if (!cr6.eq) goto loc_825D1824;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
loc_825D1824:
	// lwz r8,24400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24400);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldimi r9,r10,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// std r9,544(r8)
	PPC_STORE_U64(ctx.r8.u32 + 544, ctx.r9.u64);
	// sync 
	// lwz r10,24396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24396);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825d1858
	if (!cr6.eq) goto loc_825D1858;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// bne cr6,0x825d17ec
	if (!cr6.eq) goto loc_825D17EC;
	// blr 
	return;
loc_825D1858:
	// lwz r11,24400(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24400);
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r10,544(r11)
	PPC_STORE_U64(r11.u32 + 544, ctx.r10.u64);
}

__attribute__((alias("__imp__sub_825D1864"))) PPC_WEAK_FUNC(sub_825D1864);
PPC_FUNC_IMPL(__imp__sub_825D1864) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1868"))) PPC_WEAK_FUNC(sub_825D1868);
PPC_FUNC_IMPL(__imp__sub_825D1868) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825d18a8
	if (cr0.eq) goto loc_825D18A8;
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// stw r3,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_825D18A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D18B8"))) PPC_WEAK_FUNC(sub_825D18B8);
PPC_FUNC_IMPL(__imp__sub_825D18B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D18BC"))) PPC_WEAK_FUNC(sub_825D18BC);
PPC_FUNC_IMPL(__imp__sub_825D18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D18C0"))) PPC_WEAK_FUNC(sub_825D18C0);
PPC_FUNC_IMPL(__imp__sub_825D18C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x825d1868
	sub_825D1868(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x825d18f4
	if (cr0.eq) goto loc_825D18F4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825D18F4:
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

__attribute__((alias("__imp__sub_825D190C"))) PPC_WEAK_FUNC(sub_825D190C);
PPC_FUNC_IMPL(__imp__sub_825D190C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1910"))) PPC_WEAK_FUNC(sub_825D1910);
PPC_FUNC_IMPL(__imp__sub_825D1910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24400(r31)
	PPC_STORE_U32(r31.u32 + 24400, ctx.r3.u32);
	// bne 0x825d1948
	if (!cr0.eq) goto loc_825D1948;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d1a70
	goto loc_825D1A70;
loc_825D1948:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,24408(r31)
	PPC_STORE_U32(r31.u32 + 24408, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825d197c
	if (!cr0.eq) goto loc_825D197C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24400);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24400(r31)
	PPC_STORE_U32(r31.u32 + 24400, r11.u32);
	// b 0x825d1a70
	goto loc_825D1A70;
loc_825D197C:
	// lwz r11,24400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24400);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r6,-1640
	ctx.r4.s64 = ctx.r6.s64 + -1640;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// li r10,8709
	ctx.r10.s64 = 8709;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,8576
	ctx.r9.u64 = ctx.r9.u64 | 8576;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,10568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10568);
	// rlwinm r10,r10,0,29,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r10,24400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24400);
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
loc_825D1A24:
	// lis r10,-16381
	ctx.r10.s64 = -1073545216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,8705
	ctx.r10.u64 = ctx.r10.u64 | 8705;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825d1a24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D1A24;
	// lwz r11,24400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24400);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r11,r11,-28
	r11.s64 = r11.s64 + -28;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r11,24404(r31)
	PPC_STORE_U32(r31.u32 + 24404, r11.u32);
loc_825D1A70:
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

__attribute__((alias("__imp__sub_825D1A84"))) PPC_WEAK_FUNC(sub_825D1A84);
PPC_FUNC_IMPL(__imp__sub_825D1A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1A88"))) PPC_WEAK_FUNC(sub_825D1A88);
PPC_FUNC_IMPL(__imp__sub_825D1A88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,24704
	ctx.r3.s64 = 24704;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x825d18c0
	sub_825D18C0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825d1acc
	if (!cr0.eq) goto loc_825D1ACC;
loc_825D1AC0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825d1b54
	goto loc_825D1B54;
loc_825D1ACC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb4a0
	sub_825EB4A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825d1aec
	if (!cr0.eq) goto loc_825D1AEC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825d1ac0
	goto loc_825D1AC0;
loc_825D1AEC:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x825d1b24
	if (!cr6.eq) goto loc_825D1B24;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stb r11,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, r11.u8);
	// bl 0x825e2c18
	sub_825E2C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb510
	sub_825EB510(ctx, base);
loc_825D1B10:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825d1b4c
	if (!cr0.eq) goto loc_825D1B4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d13c8
	sub_825D13C8(ctx, base);
	// b 0x825d1ac0
	goto loc_825D1AC0;
loc_825D1B24:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d1b38
	if (!cr0.eq) goto loc_825D1B38;
	// rlwinm. r11,r30,0,2,7
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d1b38
	if (!cr0.eq) goto loc_825D1B38;
	// oris r30,r30,3072
	r30.u64 = r30.u64 | 201326592;
loc_825D1B38:
	// stw r30,24392(r31)
	PPC_STORE_U32(r31.u32 + 24392, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eba38
	sub_825EBA38(ctx, base);
	// b 0x825d1b10
	goto loc_825D1B10;
loc_825D1B4C:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D1B54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D1B58"))) PPC_WEAK_FUNC(sub_825D1B58);
PPC_FUNC_IMPL(__imp__sub_825D1B58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825D1B5C"))) PPC_WEAK_FUNC(sub_825D1B5C);
PPC_FUNC_IMPL(__imp__sub_825D1B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1B60"))) PPC_WEAK_FUNC(sub_825D1B60);
PPC_FUNC_IMPL(__imp__sub_825D1B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d1be0
	if (cr6.eq) goto loc_825D1BE0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_825D1B94:
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825e6230
	sub_825E6230(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825d1bd0
	if (cr6.eq) goto loc_825D1BD0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d1bd4
	if (cr6.eq) goto loc_825D1BD4;
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - r24.s64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x825d1bd4
	if (!cr6.lt) goto loc_825D1BD4;
loc_825D1BD0:
	// mr r24,r11
	r24.u64 = r11.u64;
loc_825D1BD4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825d1b94
	if (!cr0.eq) goto loc_825D1B94;
loc_825D1BE0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825d1c28
	if (cr6.eq) goto loc_825D1C28;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_825D1BF0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// beq cr6,0x825d1c1c
	if (cr6.eq) goto loc_825D1C1C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d1c20
	if (cr6.eq) goto loc_825D1C20;
	// lwz r9,11036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// subf r9,r23,r9
	ctx.r9.s64 = ctx.r9.s64 - r23.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x825d1c20
	if (!cr6.lt) goto loc_825D1C20;
loc_825D1C1C:
	// mr r23,r11
	r23.u64 = r11.u64;
loc_825D1C20:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825d1bf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D1BF0;
loc_825D1C28:
	// rlwinm. r30,r25,0,29,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x825d1c4c
	if (!cr0.eq) goto loc_825D1C4C;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// beq cr6,0x825d1c44
	if (cr6.eq) goto loc_825D1C44;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bne cr6,0x825d1c4c
	if (!cr6.eq) goto loc_825D1C4C;
loc_825D1C44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D1C4C:
	// ld r11,24416(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24416);
	// addi r8,r31,24416
	ctx.r8.s64 = r31.s64 + 24416;
	// rldicr r11,r11,0,0
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825d1cb0
	if (cr6.eq) goto loc_825D1CB0;
	// rlwinm r10,r25,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
loc_825D1C64:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d1cbc
	if (!cr6.eq) goto loc_825D1CBC;
	// cctpl 
	// li r11,4
	r11.s64 = 4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825D1C78:
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// bdnz 0x825d1c78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D1C78;
	// cctpm 
	// ld r11,0(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rldicr r11,r11,0,0
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x825d1c64
	if (!cr6.eq) goto loc_825D1C64;
loc_825D1CB0:
	// li r9,1
	ctx.r9.s64 = 1;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x825d1cfc
	goto loc_825D1CFC;
loc_825D1CBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d1eb8
	goto loc_825D1EB8;
loc_825D1CC4:
	// mfmsr r6
	// mtmsrd r13,1
	// ldarx r7,0,r8
	reserved.u64 = *(uint64_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r7,r11
	cr6.compare<int64_t>(ctx.r7.s64, r11.s64, xer);
	// bne cr6,0x825d1ce8
	if (!cr6.eq) goto loc_825D1CE8;
	// stdcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x825d1cc4
	if (!cr0.eq) goto loc_825D1CC4;
	// b 0x825d1cf0
	goto loc_825D1CF0;
loc_825D1CE8:
	// stdcx. r7,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), reserved.s64, __builtin_bswap64(ctx.r7.s64));
	cr0.so = xer.so;
	// mtmsrd r6,1
loc_825D1CF0:
	// mr r7,r7
	ctx.r7.u64 = ctx.r7.u64;
	// cmpd cr6,r11,r7
	cr6.compare<int64_t>(r11.s64, ctx.r7.s64, xer);
	// beq cr6,0x825d1d28
	if (cr6.eq) goto loc_825D1D28;
loc_825D1CFC:
	// ld r11,0(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rldicl r7,r11,33,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 33) & 0x1FFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r7,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// bne cr6,0x825d1cc4
	if (!cr6.eq) goto loc_825D1CC4;
	// b 0x825d1d2c
	goto loc_825D1D2C;
loc_825D1D28:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D1D2C:
	// lwz r9,24408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24408);
	// rlwinm r10,r11,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(r11.u32, 0);
	// clrlwi r28,r11,27
	r28.u64 = r11.u32 & 0x1F;
	// add r26,r9,r10
	r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825d1ea0
	if (!cr6.eq) goto loc_825D1EA0;
	// lwz r11,24400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24400);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,544
	r11.s64 = r11.s64 + 544;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// ble cr6,0x825d1d80
	if (!cr6.gt) goto loc_825D1D80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D1D80:
	// li r11,1402
	r11.s64 = 1402;
	// oris r9,r28,2048
	ctx.r9.u64 = r28.u64 | 134217728;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm. r10,r27,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// beq 0x825d1da8
	if (cr0.eq) goto loc_825D1DA8;
	// not r9,r27
	ctx.r9.u64 = ~r27.u64;
	// rlwinm r8,r9,1,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x80000000;
	// b 0x825d1dac
	goto loc_825D1DAC;
loc_825D1DA8:
	// clrlwi r8,r27,1
	ctx.r8.u64 = r27.u32 & 0x7FFFFFFF;
loc_825D1DAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d1dbc
	if (cr6.eq) goto loc_825D1DBC;
	// clrlwi r9,r27,1
	ctx.r9.u64 = r27.u32 & 0x7FFFFFFF;
	// b 0x825d1dc4
	goto loc_825D1DC4;
loc_825D1DBC:
	// not r10,r27
	ctx.r10.u64 = ~r27.u64;
	// rlwinm r9,r10,1,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x80000000;
loc_825D1DC4:
	// lis r10,-16380
	ctx.r10.s64 = -1073479680;
	// li r7,21
	ctx.r7.s64 = 21;
	// ori r10,r10,15360
	ctx.r10.u64 = ctx.r10.u64 | 15360;
	// ori r6,r30,2
	ctx.r6.u64 = r30.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r5,256
	ctx.r5.s64 = 256;
	// lis r3,-16380
	ctx.r3.s64 = -1073479680;
	// li r30,21
	r30.s64 = 21;
	// ori r3,r3,15360
	ctx.r3.u64 = ctx.r3.u64 | 15360;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// ori r7,r29,2
	ctx.r7.u64 = r29.u64 | 2;
	// li r29,256
	r29.s64 = 256;
	// li r28,1402
	r28.s64 = 1402;
	// li r22,0
	r22.s64 = 0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// clrlwi. r25,r25,31
	r25.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
	// beq 0x825d1e9c
	if (cr0.eq) goto loc_825D1E9C;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// ori r11,r11,16128
	r11.u64 = r11.u64 | 16128;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// lwz r11,24400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24400);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// lwz r11,24404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24404);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// oris r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 524288;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
loc_825D1E9C:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825D1EA0:
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// rldicr r11,r27,32,31
	r11.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r24,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r24.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// stw r23,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r23.u32);
	// std r3,8(r26)
	PPC_STORE_U64(r26.u32 + 8, ctx.r3.u64);
loc_825D1EB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825D1EBC"))) PPC_WEAK_FUNC(sub_825D1EBC);
PPC_FUNC_IMPL(__imp__sub_825D1EBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825D1EC0"))) PPC_WEAK_FUNC(sub_825D1EC0);
PPC_FUNC_IMPL(__imp__sub_825D1EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
}

__attribute__((alias("__imp__sub_825D1ED4"))) PPC_WEAK_FUNC(sub_825D1ED4);
PPC_FUNC_IMPL(__imp__sub_825D1ED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1ED8"))) PPC_WEAK_FUNC(sub_825D1ED8);
PPC_FUNC_IMPL(__imp__sub_825D1ED8) {
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
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,-19264(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19264);
	// bl 0x825d1ec0
	sub_825D1EC0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,-19264(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19264, ctx.r3.u32);
	// lwz r3,-19260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -19260);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825D1F08"))) PPC_WEAK_FUNC(sub_825D1F08);
PPC_FUNC_IMPL(__imp__sub_825D1F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1F0C"))) PPC_WEAK_FUNC(sub_825D1F0C);
PPC_FUNC_IMPL(__imp__sub_825D1F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1F10"))) PPC_WEAK_FUNC(sub_825D1F10);
PPC_FUNC_IMPL(__imp__sub_825D1F10) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10280
	r11.s64 = 673710080;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r30,r11,310
	r30.u64 = r11.u64 | 310;
	// bne cr6,0x825d1f64
	if (!cr6.eq) goto loc_825D1F64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x825d1f64
	if (cr6.eq) goto loc_825D1F64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x825d1f5c
	if (!cr6.eq) goto loc_825D1F5C;
	// bl 0x825ec378
	sub_825EC378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x825d1f6c
	goto loc_825D1F6C;
loc_825D1F5C:
	// bl 0x825ec330
	sub_825EC330(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_825D1F64:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bne cr6,0x825d1f78
	if (!cr6.eq) goto loc_825D1F78;
loc_825D1F6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ec200
	sub_825EC200(ctx, base);
	// b 0x825d1f80
	goto loc_825D1F80;
loc_825D1F78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ec110
	sub_825EC110(ctx, base);
loc_825D1F80:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
}

__attribute__((alias("__imp__sub_825D1F84"))) PPC_WEAK_FUNC(sub_825D1F84);
PPC_FUNC_IMPL(__imp__sub_825D1F84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D1F88"))) PPC_WEAK_FUNC(sub_825D1F88);
PPC_FUNC_IMPL(__imp__sub_825D1F88) {
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
	// addi r30,r3,17120
	r30.s64 = ctx.r3.s64 + 17120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ec
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,16952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16952);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16952(r31)
	PPC_STORE_U32(r31.u32 + 16952, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,17112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 17112);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,17108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 17108);
	// stw r11,16956(r31)
	PPC_STORE_U32(r31.u32 + 16956, r11.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x825d2050
	if (cr6.eq) goto loc_825D2050;
loc_825D1FD0:
	// lwz r11,17108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17108);
	// lwz r8,16952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16952);
	// rlwinm r11,r11,3,25,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x78;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,16980
	ctx.r10.s64 = r11.s64 + 16980;
	// lwz r10,16984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16984);
	// lwz r11,16980(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16980);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x825d2050
	if (cr6.gt) goto loc_825D2050;
	// lwz r10,16976(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16976);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r8,16956(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16956);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16976(r31)
	PPC_STORE_U32(r31.u32 + 16976, ctx.r10.u32);
	// stw r8,16964(r31)
	PPC_STORE_U32(r31.u32 + 16964, ctx.r8.u32);
	// bne cr6,0x825d201c
	if (!cr6.eq) goto loc_825D201C;
	// lwz r11,11028(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x825d202c
	goto loc_825D202C;
loc_825D201C:
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,24848(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 24848, r11.u32);
	// eieio 
	// sync 
loc_825D202C:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,17108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17108);
	// stw r10,23788(r31)
	PPC_STORE_U32(r31.u32 + 23788, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17108(r31)
	PPC_STORE_U32(r31.u32 + 17108, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,17112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 17112);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825d1fd0
	if (!cr6.eq) goto loc_825D1FD0;
loc_825D2050:
	// lwz r11,16948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d207c
	if (cr6.eq) goto loc_825D207C;
	// lwz r10,16976(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16976);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,16952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16952);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D207C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24460
	ctx.r3.s64 = r31.s64 + 24460;
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sradi r11,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	r11.s64 = r11.s64 >> 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,22084(r31)
	PPC_STORE_U32(r31.u32 + 22084, r11.u32);
	// bl 0x8314d0cc
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D20B0"))) PPC_WEAK_FUNC(sub_825D20B0);
PPC_FUNC_IMPL(__imp__sub_825D20B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D20B4"))) PPC_WEAK_FUNC(sub_825D20B4);
PPC_FUNC_IMPL(__imp__sub_825D20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D20B8"))) PPC_WEAK_FUNC(sub_825D20B8);
PPC_FUNC_IMPL(__imp__sub_825D20B8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825d20e0
	if (!cr6.eq) goto loc_825D20E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825d20e8
	goto loc_825D20E8;
loc_825D20E0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825D20E8:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r26,r31,17120
	r26.s64 = r31.s64 + 17120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0ec
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16972);
	// lwz r11,21964(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21964);
	// rlwinm r29,r30,24,28,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,16972(r31)
	PPC_STORE_U32(r31.u32 + 16972, ctx.r10.u32);
	// rlwinm r30,r30,0,0,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// bne cr6,0x825d2128
	if (!cr6.eq) goto loc_825D2128;
	// li r28,60
	r28.s64 = 60;
loc_825D2128:
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,16956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16956);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r24,r10,r11
	r24.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8314d0fc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = r24.s64 * 100;
	// divwu r11,r11,r28
	r11.u32 = r11.u32 / r28.u32;
	// twllei r28,0
	if (r28.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// cmplwi cr6,r7,100
	cr6.compare<uint32_t>(ctx.r7.u32, 100, xer);
	// ble cr6,0x825d2164
	if (!cr6.gt) goto loc_825D2164;
	// li r7,100
	ctx.r7.s64 = 100;
loc_825D2164:
	// lwz r8,16960(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16960);
	// lwz r10,16952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16952);
	// add r11,r8,r29
	r11.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d2190
	if (cr6.gt) goto loc_825D2190;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d2190
	if (cr6.eq) goto loc_825D2190;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// ble cr6,0x825d2190
	if (!cr6.gt) goto loc_825D2190;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D2190:
	// lwz r9,16944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16944);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d21d0
	if (cr6.eq) goto loc_825D21D0;
	// lwz r6,16972(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16972);
	// addic r5,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r5.s64 = r30.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r11,r5,r30
	temp.u8 = (~ctx.r5.u32 + r30.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + r30.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_825D21D0:
	// lwz r10,16952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16952);
	// stw r11,16960(r31)
	PPC_STORE_U32(r31.u32 + 16960, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825d2214
	if (cr6.eq) goto loc_825D2214;
	// lwz r10,16972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16972);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x825d2214
	if (cr6.eq) goto loc_825D2214;
	// lwz r10,17112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 17112);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r9,r10,16980
	ctx.r9.s64 = ctx.r10.s64 + 16980;
	// stw r11,16984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16984, r11.u32);
	// stw r30,16980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16980, r30.u32);
	// lwz r11,17112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17112);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17112(r31)
	PPC_STORE_U32(r31.u32 + 17112, r11.u32);
	// b 0x825d2250
	goto loc_825D2250;
loc_825D2214:
	// lwz r11,16976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16976);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16976(r31)
	PPC_STORE_U32(r31.u32 + 16976, r11.u32);
	// beq cr6,0x825d223c
	if (cr6.eq) goto loc_825D223C;
	// lis r11,32712
	r11.s64 = 2143813632;
	// stw r30,24848(r11)
	PPC_MM_STORE_U32(r11.u32 + 24848, r30.u32);
	// eieio 
	// sync 
	// b 0x825d2248
	goto loc_825D2248;
loc_825D223C:
	// lwz r11,11028(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_825D2248:
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,23788(r31)
	PPC_STORE_U32(r31.u32 + 23788, r11.u32);
loc_825D2250:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0cc
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825D2260"))) PPC_WEAK_FUNC(sub_825D2260);
PPC_FUNC_IMPL(__imp__sub_825D2260) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825D2264"))) PPC_WEAK_FUNC(sub_825D2264);
PPC_FUNC_IMPL(__imp__sub_825D2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2268"))) PPC_WEAK_FUNC(sub_825D2268);
PPC_FUNC_IMPL(__imp__sub_825D2268) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d229c
	if (!cr6.gt) goto loc_825D229C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D229C:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r10,6209
	ctx.r10.s64 = 6209;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,-1793
	ctx.r8.s64 = -1793;
	// ori r11,r9,310
	r11.u64 = ctx.r9.u64 | 310;
	// li r7,6448
	ctx.r7.s64 = 6448;
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r9,3,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x100;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825D2308"))) PPC_WEAK_FUNC(sub_825D2308);
PPC_FUNC_IMPL(__imp__sub_825D2308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D230C"))) PPC_WEAK_FUNC(sub_825D230C);
PPC_FUNC_IMPL(__imp__sub_825D230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2310"))) PPC_WEAK_FUNC(sub_825D2310);
PPC_FUNC_IMPL(__imp__sub_825D2310) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r11,r10,19,19,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// lfs f0,-1136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1136);
	f0.f64 = double(temp.f32);
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f13,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,1470
	cr6.compare<uint32_t>(r11.u32, 1470, xer);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r28,r10,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// rlwinm r25,r11,31,1,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bge cr6,0x825d2390
	if (!cr6.lt) goto loc_825D2390;
	// addi r25,r25,-3
	r25.s64 = r25.s64 + -3;
	// addi r28,r28,6
	r28.s64 = r28.s64 + 6;
loc_825D2390:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d23cc
	if (cr6.eq) goto loc_825D23CC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// add r9,r25,r28
	ctx.r9.u64 = r25.u64 + r28.u64;
	// addi r5,r11,-1304
	ctx.r5.s64 = r11.s64 + -1304;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8314d10c
	__imp___snprintf(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
loc_825D23CC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7bf8
	sub_825D7BF8(ctx, base);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r12,-9
	r12.s64 = -589824;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r7,r10,2
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// oris r8,r8,19200
	ctx.r8.u64 = ctx.r8.u64 | 1258291200;
	// ori r12,r12,58618
	r12.u64 = r12.u64 | 58618;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r11,r11,0,3,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFC;
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & r12.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// oris r10,r7,16384
	ctx.r10.u64 = ctx.r7.u64 | 1073741824;
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// oris r8,r8,7
	ctx.r8.u64 = ctx.r8.u64 | 458752;
	// li r26,1
	r26.s64 = 1;
	// rlwimi r10,r11,30,2,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0x3FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFC0000000);
	// rlwimi r9,r26,0,9,31
	ctx.r9.u64 = (__builtin_rotateleft32(r26.u32, 0) & 0x7FFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFF800000);
	// lfs f31,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r11,19200
	r11.s64 = 1258291200;
	// lfs f30,-25600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f30.f64 = double(temp.f32);
	// ori r8,r8,9218
	ctx.r8.u64 = ctx.r8.u64 | 9218;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r4,r31,13024
	ctx.r4.s64 = r31.s64 + 13024;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,13052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13052);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r9,13056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13056);
	// lwz r8,13060(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13060);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,13064(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13064);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x825def38
	sub_825DEF38(ctx, base);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// li r27,0
	r27.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
loc_825D24B4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825deef0
	sub_825DEEF0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825d24b4
	if (cr6.lt) goto loc_825D24B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ddb68
	sub_825DDB68(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	sub_825D7940(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7728
	sub_825D7728(ctx, base);
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// li r11,6
	r11.s64 = 6;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r27.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r27.u32);
loc_825D2520:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825d2520
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D2520;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d4fa0
	sub_825D4FA0(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ddb28
	sub_825DDB28(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r11,r11,63,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stfs f0,6016(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,6020(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f12,6024(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f11,6028(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// stfs f31,6032(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 6032, temp.u32);
	// stfs f30,6036(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 6036, temp.u32);
	// stfs f31,6040(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 6040, temp.u32);
	// stfs f31,6044(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 6044, temp.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// lis r12,-9
	r12.s64 = -589824;
	// rlwimi r11,r26,11,19,21
	r11.u64 = (__builtin_rotateleft32(r26.u32, 11) & 0x1C00) | (r11.u64 & 0xFFFFFFFFFFFFE3FF);
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// rlwimi r11,r26,14,16,18
	r11.u64 = (__builtin_rotateleft32(r26.u32, 14) & 0xE000) | (r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// lis r12,-17
	r12.s64 = -1114112;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// lis r12,-2
	r12.s64 = -131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// li r12,-2
	r12.s64 = -2;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// lis r12,-1
	r12.s64 = -65536;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,32767
	r12.u64 = r12.u64 | 32767;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// li r12,-16385
	r12.s64 = -16385;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// li r12,-9
	r12.s64 = -9;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d26a8
	if (!cr6.gt) goto loc_825D26A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D26A8:
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
	// li r8,24
	ctx.r8.s64 = 24;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r29,r7,-1544
	r29.s64 = ctx.r7.s64 + -1544;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// li r4,44
	ctx.r4.s64 = 44;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// lis r11,-16347
	r11.s64 = -1071316992;
	// li r10,36
	ctx.r10.s64 = 36;
	// ori r11,r11,11008
	r11.u64 = r11.u64 | 11008;
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r5,144
	ctx.r5.s64 = 144;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,144
	r11.s64 = r30.s64 + 144;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,257
	ctx.r9.u64 = ctx.r9.u64 | 257;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,3
	ctx.r5.s64 = 3;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825dfcc8
	sub_825DFCC8(ctx, base);
	// add r11,r25,r28
	r11.u64 = r25.u64 + r28.u64;
	// clrldi r9,r24,32
	ctx.r9.u64 = r24.u64 & 0xFFFFFFFF;
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// stfs f31,4(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f0,136(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// clrldi r11,r25,32
	r11.u64 = r25.u64 & 0xFFFFFFFF;
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r11.u64);
	// stfs f30,12(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfs f31,24(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,36(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f31,40(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f30,44(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f11,28(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f11,52(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,56(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f11,60(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stfs f31,72(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// stfs f30,76(r10)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stfs f0,48(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f0,64(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// stfs f13,68(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stfs f0,80(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f12,84(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f31,88(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f11,92(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// bl 0x825dfcb8
	sub_825DFCB8(ctx, base);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// li r12,1
	r12.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// beq cr6,0x825d28a8
	if (cr6.eq) goto loc_825D28A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825D28A8:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d28c4
	if (cr6.eq) goto loc_825D28C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825D28C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825d28f8
	if (cr6.eq) goto loc_825D28F8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825D28F8:
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
loc_825D28FC:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825d2920
	if (cr6.eq) goto loc_825D2920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825D2920:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// blt cr6,0x825d28fc
	if (cr6.lt) goto loc_825D28FC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df598
	sub_825DF598(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825debc0
	sub_825DEBC0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ddb28
	sub_825DDB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_825D2988"))) PPC_WEAK_FUNC(sub_825D2988);
PPC_FUNC_IMPL(__imp__sub_825D2988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825D298C"))) PPC_WEAK_FUNC(sub_825D298C);
PPC_FUNC_IMPL(__imp__sub_825D298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2990"))) PPC_WEAK_FUNC(sub_825D2990);
PPC_FUNC_IMPL(__imp__sub_825D2990) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16948, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_825D2994"))) PPC_WEAK_FUNC(sub_825D2994);
PPC_FUNC_IMPL(__imp__sub_825D2994) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2998"))) PPC_WEAK_FUNC(sub_825D2998);
PPC_FUNC_IMPL(__imp__sub_825D2998) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825ef6f8
	sub_825EF6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825d2a54
	if (!cr6.eq) goto loc_825D2A54;
	// lwz r11,24584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d2a54
	if (!cr6.eq) goto loc_825D2A54;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d29f0
	if (!cr6.gt) goto loc_825D29F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D29F0:
	// li r11,1401
	r11.s64 = 1401;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16380
	r11.s64 = -1073479680;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r11,r11,15360
	r11.u64 = r11.u64 | 15360;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11028(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825D2A54:
	// lwz r11,14000(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d2a90
	if (cr6.eq) goto loc_825D2A90;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825d2a90
	if (cr6.eq) goto loc_825D2A90;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825d2a88
	if (cr6.eq) goto loc_825D2A88;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// b 0x825d2a94
	goto loc_825D2A94;
loc_825D2A88:
	// li r11,2
	r11.s64 = 2;
	// b 0x825d2a94
	goto loc_825D2A94;
loc_825D2A90:
	// li r11,1
	r11.s64 = 1;
loc_825D2A94:
	// lwz r10,12284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,9,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7F;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// or r30,r11,r29
	r30.u64 = r11.u64 | r29.u64;
	// ble cr6,0x825d2ac4
	if (!cr6.gt) goto loc_825D2AC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825D2AC4:
	// lis r11,-32163
	r11.s64 = -2107834368;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,8376
	ctx.r6.s64 = r11.s64 + 8376;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3db0
	sub_825E3DB0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x825d2b58
	if (!cr6.eq) goto loc_825D2B58;
	// lwz r11,24584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d2b58
	if (!cr6.eq) goto loc_825D2B58;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d2b08
	if (!cr6.gt) goto loc_825D2B08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D2B08:
	// lis r11,-16380
	r11.s64 = -1073479680;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r11,15360
	r11.u64 = r11.u64 | 15360;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11028(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825D2B58:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ef6f8
	sub_825EF6F8(ctx, base);
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825D2B74"))) PPC_WEAK_FUNC(sub_825D2B74);
PPC_FUNC_IMPL(__imp__sub_825D2B74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D2B78"))) PPC_WEAK_FUNC(sub_825D2B78);
PPC_FUNC_IMPL(__imp__sub_825D2B78) {
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
	// rlwinm r11,r4,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// lwz r9,24392(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24392);
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x825d2c1c
	if (!cr0.eq) goto loc_825D2C1C;
	// lwz r11,24584(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x825d2c1c
	if (cr6.gt) goto loc_825D2C1C;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825d2bd0
	if (!cr6.gt) goto loc_825D2BD0;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825D2BD0:
	// li r10,6212
	ctx.r10.s64 = 6212;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825d2268
	sub_825D2268(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825d2c24
	if (!cr6.eq) goto loc_825D2C24;
	// lis r11,10280
	r11.s64 = 673710080;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,310
	r11.u64 = r11.u64 | 310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x825d2c14
	if (!cr6.eq) goto loc_825D2C14;
	// bl 0x825ec200
	sub_825EC200(ctx, base);
	// b 0x825d2c24
	goto loc_825D2C24;
loc_825D2C14:
	// bl 0x825ec110
	sub_825EC110(ctx, base);
	// b 0x825d2c24
	goto loc_825D2C24;
loc_825D2C1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2998
	sub_825D2998(ctx, base);
loc_825D2C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825D2C28"))) PPC_WEAK_FUNC(sub_825D2C28);
PPC_FUNC_IMPL(__imp__sub_825D2C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D2C2C"))) PPC_WEAK_FUNC(sub_825D2C2C);
PPC_FUNC_IMPL(__imp__sub_825D2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2C30"))) PPC_WEAK_FUNC(sub_825D2C30);
PPC_FUNC_IMPL(__imp__sub_825D2C30) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwz r9,24392(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24392);
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r25,r11,r10
	r25.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x825d2c84
	if (!cr0.eq) goto loc_825D2C84;
	// lwz r11,24584(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825d2c90
	if (!cr6.gt) goto loc_825D2C90;
loc_825D2C84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2998
	sub_825D2998(ctx, base);
loc_825D2C90:
	// rlwinm. r27,r26,0,29,29
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x825d2d5c
	if (cr0.eq) goto loc_825D2D5C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d2cb0
	if (!cr6.gt) goto loc_825D2CB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D2CB0:
	// li r11,6515
	r11.s64 = 6515;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6500
	r11.s64 = 6500;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r22,0
	r22.s64 = 0;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r21,3
	r21.s64 = 3;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r20,6515
	r20.s64 = 6515;
	// li r19,0
	r19.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r17,256
	r17.s64 = 256;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// li r16,6226
	r16.s64 = 6226;
	// li r11,0
	r11.s64 = 0;
	// li r15,6200
	r15.s64 = 6200;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r9,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r14.u32 = ea;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r8,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r14.u32 = ea;
	// stwu r22,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r22.u32);
	r14.u32 = ea;
	// stwu r10,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r14.u32 = ea;
	// stwu r21,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r21.u32);
	r14.u32 = ea;
	// stwu r20,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r20.u32);
	r14.u32 = ea;
	// stwu r19,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r19.u32);
	r14.u32 = ea;
	// stwu r18,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r18.u32);
	r14.u32 = ea;
	// stwu r17,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r17.u32);
	r14.u32 = ea;
	// stwu r16,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r16.u32);
	r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r11.u32);
	r14.u32 = ea;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r15,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r15.u32);
	r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r11.u32);
	r14.u32 = ea;
	// stw r14,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r14.u32);
	// bl 0x825f15b0
	sub_825F15B0(ctx, base);
loc_825D2D5C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2268
	sub_825D2268(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d2d80
	if (!cr6.gt) goto loc_825D2D80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D2D80:
	// li r11,6212
	r11.s64 = 6212;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// beq cr6,0x825d2dec
	if (cr6.eq) goto loc_825D2DEC;
	// li r10,6200
	ctx.r10.s64 = 6200;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r8,15360
	ctx.r10.u64 = ctx.r8.u64 | 15360;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,6226
	ctx.r3.s64 = 6226;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825D2DEC:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x825d2e20
	if (!cr6.eq) goto loc_825D2E20;
	// lis r11,10280
	r11.s64 = 673710080;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,310
	r11.u64 = r11.u64 | 310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// bne cr6,0x825d2e18
	if (!cr6.eq) goto loc_825D2E18;
	// bl 0x825ec200
	sub_825EC200(ctx, base);
	// b 0x825d2e3c
	goto loc_825D2E3C;
loc_825D2E18:
	// bl 0x825ec110
	sub_825EC110(ctx, base);
	// b 0x825d2e3c
	goto loc_825D2E3C;
loc_825D2E20:
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d2e3c
	if (cr0.eq) goto loc_825D2E3C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1f10
	sub_825D1F10(ctx, base);
loc_825D2E3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_825D2E48"))) PPC_WEAK_FUNC(sub_825D2E48);
PPC_FUNC_IMPL(__imp__sub_825D2E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825D2E4C"))) PPC_WEAK_FUNC(sub_825D2E4C);
PPC_FUNC_IMPL(__imp__sub_825D2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2E50"))) PPC_WEAK_FUNC(sub_825D2E50);
PPC_FUNC_IMPL(__imp__sub_825D2E50) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_825D2E54"))) PPC_WEAK_FUNC(sub_825D2E54);
PPC_FUNC_IMPL(__imp__sub_825D2E54) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d2998
	sub_825D2998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2E58"))) PPC_WEAK_FUNC(sub_825D2E58);
PPC_FUNC_IMPL(__imp__sub_825D2E58) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// lwz r11,13992(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13992);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subfe r19,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r19.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq 0x825d2ea4
	if (cr0.eq) goto loc_825D2EA4;
	// bl 0x825d1ed8
	sub_825D1ED8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825d2ea4
	if (cr0.eq) goto loc_825D2EA4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2310
	sub_825D2310(ctx, base);
loc_825D2EA4:
	// lwz r11,16968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,16968(r31)
	PPC_STORE_U32(r31.u32 + 16968, r11.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,14012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14012);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r30,26
	r11.u64 = r30.u32 & 0x3F;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// bne cr6,0x825d2edc
	if (!cr6.eq) goto loc_825D2EDC;
	// li r11,3
	r11.s64 = 3;
	// b 0x825d2ee8
	goto loc_825D2EE8;
loc_825D2EDC:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x825d2ef0
	if (!cr6.eq) goto loc_825D2EF0;
	// li r11,27
	r11.s64 = 27;
loc_825D2EE8:
	// rlwimi r30,r11,1,26,31
	r30.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x3F) | (r30.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
loc_825D2EF0:
	// rlwinm r29,r10,15,17,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lbz r7,11072(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwimi r9,r10,25,22,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r8,r11,0,31,18
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFFE001) | (ctx.r8.u64 & 0x1FFE);
	// rlwinm. r11,r7,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// rlwimi r29,r8,0,0,30
	r29.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFE) | (r29.u64 & 0xFFFFFFFF00000001);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// beq 0x825d2f30
	if (cr0.eq) goto loc_825D2F30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
	// lwz r29,140(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_825D2F30:
	// addi r3,r31,15248
	ctx.r3.s64 = r31.s64 + 15248;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r29,2,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x2;
	// lwz r9,14016(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 14016);
	// clrlwi r7,r10,19
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFF;
	// lwz r5,22040(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22040);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r6,r10,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// clrlwi r8,r30,26
	ctx.r8.u64 = r30.u32 & 0x3F;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r20,0
	r20.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r11
	r22.u64 = r11.u64;
	// beq cr6,0x825d300c
	if (cr6.eq) goto loc_825D300C;
	// lwz r10,22032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22032);
	// lwz r11,22036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22036);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x825d300c
	if (!cr6.lt) goto loc_825D300C;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r20.u32);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r11,22036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22036);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r20.u32);
	// lwz r11,22036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22036);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x825ef668
	sub_825EF668(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_825D300C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x825d304c
	if (cr6.eq) goto loc_825D304C;
	// addi r10,r31,14044
	ctx.r10.s64 = r31.s64 + 14044;
	// mr r11,r21
	r11.u64 = r21.u64;
	// addi r8,r21,28
	ctx.r8.s64 = r21.s64 + 28;
loc_825D3020:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d3040
	if (!cr0.eq) goto loc_825D3040;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825d3020
	if (!cr6.eq) goto loc_825D3020;
loc_825D3040:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r26,1
	r26.s64 = 1;
	// bne 0x825d3050
	if (!cr0.eq) goto loc_825D3050;
loc_825D304C:
	// mr r26,r20
	r26.u64 = r20.u64;
loc_825D3050:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x825d30a4
	if (cr6.eq) goto loc_825D30A4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19268);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d3084
	if (cr6.eq) goto loc_825D3084;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d3080
	if (!cr6.gt) goto loc_825D3080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D3080:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825D3084:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x825d3098
	if (cr6.eq) goto loc_825D3098;
	// lwz r11,24368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24368);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,24368(r31)
	PPC_STORE_U32(r31.u32 + 24368, r11.u32);
loc_825D3098:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4760
	sub_825F4760(ctx, base);
loc_825D30A4:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8314d14c
	__imp__VdGetSystemCommandBuffer(ctx, base);
	// lwz r11,21940(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d30fc
	if (cr6.eq) goto loc_825D30FC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d30e0
	if (!cr6.gt) goto loc_825D30E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D30E0:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x825d31ec
	goto loc_825D31EC;
loc_825D30FC:
	// lwz r11,24596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24596);
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,1280
	cr6.compare<uint32_t>(ctx.r10.u32, 1280, xer);
	// subfe r10,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne cr6,0x825d3120
	if (!cr6.eq) goto loc_825D3120;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,1470
	cr6.compare<uint32_t>(r11.u32, 1470, xer);
	// beq cr6,0x825d3138
	if (cr6.eq) goto loc_825D3138;
loc_825D3120:
	// lwz r11,14088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14088);
	// cmplwi cr6,r11,1280
	cr6.compare<uint32_t>(r11.u32, 1280, xer);
	// bne cr6,0x825d3140
	if (!cr6.eq) goto loc_825D3140;
	// lwz r11,14092(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14092);
	// cmplwi cr6,r11,1470
	cr6.compare<uint32_t>(r11.u32, 1470, xer);
	// bne cr6,0x825d3140
	if (!cr6.eq) goto loc_825D3140;
loc_825D3138:
	// li r11,1
	r11.s64 = 1;
	// b 0x825d3144
	goto loc_825D3144;
loc_825D3140:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_825D3144:
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825d3154
	if (!cr6.eq) goto loc_825D3154;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D3154:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825d3168
	if (!cr6.eq) goto loc_825D3168;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d3170
	if (!cr6.eq) goto loc_825D3170;
	// b 0x825d319c
	goto loc_825D319C;
loc_825D3168:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d319c
	if (!cr6.eq) goto loc_825D319C;
loc_825D3170:
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,14072
	ctx.r3.s64 = r31.s64 + 14072;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825D319C:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8314d13c
	__imp__VdSwap(ctx, base);
	// addi r11,r29,256
	r11.s64 = r29.s64 + 256;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825D31EC:
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r11,23760(r31)
	PPC_STORE_U32(r31.u32 + 23760, r11.u32);
	// beq cr6,0x825d322c
	if (cr6.eq) goto loc_825D322C;
	// lwz r11,22036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22036);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825ef668
	sub_825EF668(ctx, base);
	// lwz r11,22036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22036);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,22036(r31)
	PPC_STORE_U32(r31.u32 + 22036, r11.u32);
loc_825D322C:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d323c
	if (cr6.eq) goto loc_825D323C;
	// stw r11,24388(r31)
	PPC_STORE_U32(r31.u32 + 24388, r11.u32);
loc_825D323C:
	// lwz r29,17116(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 17116);
	// stw r20,17116(r31)
	PPC_STORE_U32(r31.u32 + 17116, r20.u32);
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d3264
	if (cr0.eq) goto loc_825D3264;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r31,13948
	ctx.r4.s64 = r31.s64 + 13948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb238
	sub_825EB238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D3264:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x825d3288
	if (cr6.eq) goto loc_825D3288;
	// addi r3,r31,14044
	ctx.r3.s64 = r31.s64 + 14044;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f17e0
	sub_825F17E0(ctx, base);
loc_825D3288:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d3360
	if (cr6.eq) goto loc_825D3360;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x825d3360
	if (!cr6.eq) goto loc_825D3360;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r31,14072
	ctx.r3.s64 = r31.s64 + 14072;
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// lis r27,10280
	r27.s64 = 673710080;
	// bne cr6,0x825d32c4
	if (!cr6.eq) goto loc_825D32C4;
	// ori r27,r27,310
	r27.u64 = r27.u64 | 310;
	// b 0x825d32c8
	goto loc_825D32C8;
loc_825D32C4:
	// ori r27,r27,262
	r27.u64 = r27.u64 | 262;
loc_825D32C8:
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d3324
	if (cr6.eq) goto loc_825D3324;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,56
	ctx.r8.s64 = r11.s64 + 56;
loc_825D32E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825d3300
	if (!cr0.eq) goto loc_825D3300;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825d32e0
	if (!cr6.eq) goto loc_825D32E0;
loc_825D3300:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d3324
	if (cr0.eq) goto loc_825D3324;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
	// b 0x825d3340
	goto loc_825D3340;
loc_825D3324:
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d3344
	if (cr0.eq) goto loc_825D3344;
	// lwz r11,352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d3344
	if (!cr6.eq) goto loc_825D3344;
	// addi r28,r31,14128
	r28.s64 = r31.s64 + 14128;
loc_825D3340:
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
loc_825D3344:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d3354
	if (!cr0.eq) goto loc_825D3354;
	// ori r29,r29,3
	r29.u64 = r29.u64 | 3;
loc_825D3354:
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x825d33c0
	goto loc_825D33C0;
loc_825D3360:
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// addi r28,r31,14128
	r28.s64 = r31.s64 + 14128;
	// lwz r27,14012(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 14012);
	// addi r26,r31,15408
	r26.s64 = r31.s64 + 15408;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// beq 0x825d33ac
	if (cr0.eq) goto loc_825D33AC;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,14072
	ctx.r3.s64 = r31.s64 + 14072;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
loc_825D33AC:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d33bc
	if (cr0.eq) goto loc_825D33BC;
	// ori r29,r29,3
	r29.u64 = r29.u64 | 3;
loc_825D33BC:
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_825D33C0:
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d33e0
	if (!cr6.eq) goto loc_825D33E0;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d33e4
	if (cr0.eq) goto loc_825D33E4;
loc_825D33E0:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_825D33E4:
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x825d3428
	if (cr6.eq) goto loc_825D3428;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825d2c30
	sub_825D2C30(ctx, base);
	// b 0x825d3434
	goto loc_825D3434;
loc_825D3428:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825d2b78
	sub_825D2B78(ctx, base);
loc_825D3434:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ef3c0
	sub_825EF3C0(ctx, base);
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d34dc
	if (cr0.eq) goto loc_825D34DC;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x825d34dc
	if (cr6.eq) goto loc_825D34DC;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825d3484
	if (!cr6.gt) goto loc_825D3484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825D3484:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r10,7758
	ctx.r10.s64 = 7758;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mr r11,r20
	r11.u64 = r20.u64;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r20,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r20.u32);
	ctx.r7.u32 = ea;
	// std r20,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r20.u64);
	// stw r20,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r20.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// bl 0x8314d12c
	__imp__VdPersistDisplay(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825d34dc
	if (cr0.eq) goto loc_825D34DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8314d11c
	__imp__MmFreePhysicalMemory(ctx, base);
loc_825D34DC:
	// lwz r11,24584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d34f8
	if (cr6.eq) goto loc_825D34F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1b98
	sub_825F1B98(ctx, base);
loc_825D34F8:
	// lwz r30,11036(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,11056(r31)
	PPC_STORE_U32(r31.u32 + 11056, r30.u32);
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1828
	sub_825F1828(ctx, base);
	// lwz r11,15316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15316);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x825e3620
	sub_825E3620(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,15344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 15344);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
	// lwz r11,24392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24392);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d358c
	if (cr0.eq) goto loc_825D358C;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
loc_825D355C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825d3580
	if (cr0.eq) goto loc_825D3580;
	// lwz r11,16976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16976);
	// lwz r10,16968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bge cr6,0x825d355c
	if (!cr6.lt) goto loc_825D355C;
loc_825D3580:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
	// b 0x825d3590
	goto loc_825D3590;
loc_825D358C:
	// stw r30,15344(r31)
	PPC_STORE_U32(r31.u32 + 15344, r30.u32);
loc_825D3590:
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
	// bl 0x825ef7d0
	sub_825EF7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1810
	sub_825F1810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df1b8
	sub_825DF1B8(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
}

__attribute__((alias("__imp__sub_825D35BC"))) PPC_WEAK_FUNC(sub_825D35BC);
PPC_FUNC_IMPL(__imp__sub_825D35BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825D35C0"))) PPC_WEAK_FUNC(sub_825D35C0);
PPC_FUNC_IMPL(__imp__sub_825D35C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,13024
	ctx.r4.s64 = ctx.r3.s64 + 13024;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,13052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13052);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,13056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13056);
	// lwz r8,13060(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13060);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,13064(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13064);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,15236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 15236);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x825df648
	sub_825DF648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2998
	sub_825D2998(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r6,15232(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 15232);
	// addi r7,r11,-1120
	ctx.r7.s64 = r11.s64 + -1120;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f1,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d3688
	if (!cr0.eq) goto loc_825D3688;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d3690
	if (cr0.eq) goto loc_825D3690;
loc_825D3688:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825D3690:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df598
	sub_825DF598(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825debc0
	sub_825DEBC0(ctx, base);
	// addi r5,r31,14044
	ctx.r5.s64 = r31.s64 + 14044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,15232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 15232);
	// bl 0x825d2e58
	sub_825D2E58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D36D4"))) PPC_WEAK_FUNC(sub_825D36D4);
PPC_FUNC_IMPL(__imp__sub_825D36D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D36D8"))) PPC_WEAK_FUNC(sub_825D36D8);
PPC_FUNC_IMPL(__imp__sub_825D36D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,2,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x2;
	// rlwinm. r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x825d370c
	if (!cr0.eq) goto loc_825D370C;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x825d3768
	goto loc_825D3768;
loc_825D370C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bne cr6,0x825d3748
	if (!cr6.eq) goto loc_825D3748;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_825D3748:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_825D3768:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825D376C"))) PPC_WEAK_FUNC(sub_825D376C);
PPC_FUNC_IMPL(__imp__sub_825D376C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D3770"))) PPC_WEAK_FUNC(sub_825D3770);
PPC_FUNC_IMPL(__imp__sub_825D3770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x2;
	// rlwinm. r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x825d37a8
	if (!cr0.eq) goto loc_825D37A8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_825D37A8:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x825d37e0
	if (!cr6.eq) goto loc_825D37E0;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x825d3808
	goto loc_825D3808;
loc_825D37E0:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D3808:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825D380C"))) PPC_WEAK_FUNC(sub_825D380C);
PPC_FUNC_IMPL(__imp__sub_825D380C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D3810"))) PPC_WEAK_FUNC(sub_825D3810);
PPC_FUNC_IMPL(__imp__sub_825D3810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
}

__attribute__((alias("__imp__sub_825D381C"))) PPC_WEAK_FUNC(sub_825D381C);
PPC_FUNC_IMPL(__imp__sub_825D381C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D3820"))) PPC_WEAK_FUNC(sub_825D3820);
PPC_FUNC_IMPL(__imp__sub_825D3820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
}

__attribute__((alias("__imp__sub_825D3830"))) PPC_WEAK_FUNC(sub_825D3830);
PPC_FUNC_IMPL(__imp__sub_825D3830) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4f88
	sub_825E4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3834"))) PPC_WEAK_FUNC(sub_825D3834);
PPC_FUNC_IMPL(__imp__sub_825D3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D3838"))) PPC_WEAK_FUNC(sub_825D3838);
PPC_FUNC_IMPL(__imp__sub_825D3838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
}

__attribute__((alias("__imp__sub_825D384C"))) PPC_WEAK_FUNC(sub_825D384C);
PPC_FUNC_IMPL(__imp__sub_825D384C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4f88
	sub_825E4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3850"))) PPC_WEAK_FUNC(sub_825D3850);
PPC_FUNC_IMPL(__imp__sub_825D3850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// blt cr6,0x825d386c
	if (cr6.lt) goto loc_825D386C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_825D386C:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x825d3878
	if (!cr6.eq) goto loc_825D3878;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_825D3878:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r7,r11,r7
	ctx.r7.u32 = r11.u32 / ctx.r7.u32;
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r10,r7,80
	ctx.r10.s64 = ctx.r7.s64 * 80;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// beq cr6,0x825d38a8
	if (cr6.eq) goto loc_825D38A8;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x825d38a8
	if (cr6.eq) goto loc_825D38A8;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x825d38ac
	if (!cr6.eq) goto loc_825D38AC;
loc_825D38A8:
	// li r8,8
	ctx.r8.s64 = 8;
loc_825D38AC:
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// divwu r3,r11,r10
	ctx.r3.u32 = r11.u32 / ctx.r10.u32;
}

__attribute__((alias("__imp__sub_825D38BC"))) PPC_WEAK_FUNC(sub_825D38BC);
PPC_FUNC_IMPL(__imp__sub_825D38BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D38C0"))) PPC_WEAK_FUNC(sub_825D38C0);
PPC_FUNC_IMPL(__imp__sub_825D38C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,44
	cr6.compare<uint32_t>(ctx.r3.u32, 44, xer);
	// bgt cr6,0x825d3918
	if (cr6.gt) goto loc_825D3918;
	// beq cr6,0x825d3910
	if (cr6.eq) goto loc_825D3910;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// blt cr6,0x825d3940
	if (cr6.lt) goto loc_825D3940;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// ble cr6,0x825d38fc
	if (!cr6.gt) goto loc_825D38FC;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// ble cr6,0x825d3940
	if (!cr6.gt) goto loc_825D3940;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// ble cr6,0x825d3948
	if (!cr6.gt) goto loc_825D3948;
	// cmplwi cr6,r3,39
	cr6.compare<uint32_t>(ctx.r3.u32, 39, xer);
	// beq cr6,0x825d3910
	if (cr6.eq) goto loc_825D3910;
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bne cr6,0x825d3940
	if (!cr6.eq) goto loc_825D3940;
loc_825D38FC:
	// li r11,2
	r11.s64 = 2;
loc_825D3900:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825D3910:
	// li r11,4
	r11.s64 = 4;
	// b 0x825d3900
	goto loc_825D3900;
loc_825D3918:
	// cmplwi cr6,r3,49
	cr6.compare<uint32_t>(ctx.r3.u32, 49, xer);
	// beq cr6,0x825d3948
	if (cr6.eq) goto loc_825D3948;
	// cmplwi cr6,r3,50
	cr6.compare<uint32_t>(ctx.r3.u32, 50, xer);
	// ble cr6,0x825d3940
	if (!cr6.gt) goto loc_825D3940;
	// cmplwi cr6,r3,53
	cr6.compare<uint32_t>(ctx.r3.u32, 53, xer);
	// ble cr6,0x825d3948
	if (!cr6.gt) goto loc_825D3948;
	// cmplwi cr6,r3,57
	cr6.compare<uint32_t>(ctx.r3.u32, 57, xer);
	// ble cr6,0x825d3940
	if (!cr6.gt) goto loc_825D3940;
	// cmplwi cr6,r3,61
	cr6.compare<uint32_t>(ctx.r3.u32, 61, xer);
	// ble cr6,0x825d3948
	if (!cr6.gt) goto loc_825D3948;
loc_825D3940:
	// li r11,1
	r11.s64 = 1;
	// b 0x825d394c
	goto loc_825D394C;
loc_825D3948:
	// li r11,4
	r11.s64 = 4;
loc_825D394C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825D3954"))) PPC_WEAK_FUNC(sub_825D3954);
PPC_FUNC_IMPL(__imp__sub_825D3954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D3958"))) PPC_WEAK_FUNC(sub_825D3958);
PPC_FUNC_IMPL(__imp__sub_825D3958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// bgt cr6,0x825d3970
	if (cr6.gt) goto loc_825D3970;
	// li r11,1
	r11.s64 = 1;
loc_825D3970:
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// ble cr6,0x825d3984
	if (!cr6.gt) goto loc_825D3984;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x825d3994
	goto loc_825D3994;
loc_825D3984:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bgt cr6,0x825d3994
	if (cr6.gt) goto loc_825D3994;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825D3994:
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d39d0
	if (cr6.gt) goto loc_825D39D0;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// bgt cr6,0x825d39b0
	if (cr6.gt) goto loc_825D39B0;
	// li r11,1
	r11.s64 = 1;
loc_825D39B0:
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// ble cr6,0x825d39c0
	if (!cr6.gt) goto loc_825D39C0;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// b 0x825d39d0
	goto loc_825D39D0;
loc_825D39C0:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// bgt cr6,0x825d39d0
	if (cr6.gt) goto loc_825D39D0;
	// li r11,1
	r11.s64 = 1;
loc_825D39D0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r3,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r3.s64 = 32 - r11.s64;
}

__attribute__((alias("__imp__sub_825D39D8"))) PPC_WEAK_FUNC(sub_825D39D8);
PPC_FUNC_IMPL(__imp__sub_825D39D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D39DC"))) PPC_WEAK_FUNC(sub_825D39DC);
PPC_FUNC_IMPL(__imp__sub_825D39DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D39E0"))) PPC_WEAK_FUNC(sub_825D39E0);
PPC_FUNC_IMPL(__imp__sub_825D39E0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	r11.s64 = 0 - ctx.r8.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r25,32
	r25.s64 = 32;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// addi r24,r11,1
	r24.s64 = r11.s64 + 1;
	// li r27,4
	r27.s64 = 4;
	// beq cr6,0x825d3a28
	if (cr6.eq) goto loc_825D3A28;
	// li r27,1
	r27.s64 = 1;
loc_825D3A28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x825d3a70
	if (!cr6.eq) goto loc_825D3A70;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm. r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d3a70
	if (cr0.eq) goto loc_825D3A70;
	// li r8,256
	ctx.r8.s64 = 256;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r10,r8,r10
	ctx.r10.u32 = ctx.r8.u32 / ctx.r10.u32;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x825d3a70
	if (cr6.lt) goto loc_825D3A70;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_825D3A70:
	// mullw r11,r11,r25
	r11.s64 = int64_t(r11.s32) * int64_t(r25.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r11,r9,r24
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// andc r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r11,r8
	r11.u64 = r11.u64 & ~ctx.r8.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mullw r9,r9,r26
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x825d3aec
	if (cr6.eq) goto loc_825D3AEC;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// b 0x825d3af8
	goto loc_825D3AF8;
loc_825D3AEC:
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_825D3AF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825D3AFC"))) PPC_WEAK_FUNC(sub_825D3AFC);
PPC_FUNC_IMPL(__imp__sub_825D3AFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825D3B00"))) PPC_WEAK_FUNC(sub_825D3B00);
PPC_FUNC_IMPL(__imp__sub_825D3B00) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r19,1
	r19.s64 = 1;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(r22.u32, 1, xer);
	// bne cr6,0x825d3b4c
	if (!cr6.eq) goto loc_825D3B4C;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// ble cr6,0x825d3b4c
	if (!cr6.gt) goto loc_825D3B4C;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// b 0x825d3b5c
	goto loc_825D3B5C;
loc_825D3B4C:
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// cmplwi cr6,r22,3
	cr6.compare<uint32_t>(r22.u32, 3, xer);
	// mr r14,r17
	r14.u64 = r17.u64;
	// bne cr6,0x825d3b60
	if (!cr6.eq) goto loc_825D3B60;
loc_825D3B5C:
	// mr r14,r19
	r14.u64 = r19.u64;
loc_825D3B60:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// mr r28,r19
	r28.u64 = r19.u64;
	// bne cr6,0x825d3b70
	if (!cr6.eq) goto loc_825D3B70;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_825D3B70:
	// lwz r31,340(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r7,r20,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1104
	ctx.r10.s64 = ctx.r10.s64 + -1104;
	// subf r23,r11,r3
	r23.s64 = ctx.r3.s64 - r11.s64;
	// subf r25,r11,r24
	r25.s64 = r24.s64 - r11.s64;
	// addi r9,r23,-1
	ctx.r9.s64 = r23.s64 + -1;
	// addi r6,r25,-1
	ctx.r6.s64 = r25.s64 + -1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// subf r9,r9,r31
	ctx.r9.s64 = r31.s64 - ctx.r9.s64;
	// lbzx r21,r7,r5
	r21.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r29,r10,32
	r29.s64 = ctx.r10.s64 + 32;
	// addi r30,r9,32
	r30.s64 = ctx.r9.s64 + 32;
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// bne cr6,0x825d3bd8
	if (!cr6.eq) goto loc_825D3BD8;
	// subf r26,r11,r28
	r26.s64 = r28.s64 - r11.s64;
	// lwz r27,356(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// b 0x825d3bf0
	goto loc_825D3BF0;
loc_825D3BD8:
	// subfic r11,r22,0
	xer.ca = r22.u32 <= 0;
	r11.s64 = 0 - r22.s64;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r26,r19
	r26.u64 = r19.u64;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r11,r17
	r11.u64 = r17.u64;
	// and r27,r9,r10
	r27.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_825D3BF0:
	// slw r11,r19,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r19.u32 << (r11.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// slw r10,r19,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// slw r11,r19,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// ble cr6,0x825d3c18
	if (!cr6.gt) goto loc_825D3C18;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bgt cr6,0x825d3c20
	if (cr6.gt) goto loc_825D3C20;
loc_825D3C18:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x825d3c48
	if (!cr6.eq) goto loc_825D3C48;
loc_825D3C20:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x825d3c30
	if (!cr6.eq) goto loc_825D3C30;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x825d3c40
	goto loc_825D3C40;
loc_825D3C30:
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r21,0
	if (r21.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r21
	r11.u32 = r11.u32 / r21.u32;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_825D3C40:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_825D3C48:
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r18,88(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x825d3c7c
	if (!cr6.eq) goto loc_825D3C7C;
	// mullw r11,r18,r21
	r11.s64 = int64_t(r18.s32) * int64_t(r21.s32);
	// rlwinm r27,r11,29,3,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_825D3C7C:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// bne cr6,0x825d3cf8
	if (!cr6.eq) goto loc_825D3CF8;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bne cr6,0x825d3cf8
	if (!cr6.eq) goto loc_825D3CF8;
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// beq cr6,0x825d3d1c
	if (cr6.eq) goto loc_825D3D1C;
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(r22.u32, 1, xer);
	// bne cr6,0x825d3ce4
	if (!cr6.eq) goto loc_825D3CE4;
	// cmplwi cr6,r15,1
	cr6.compare<uint32_t>(r15.u32, 1, xer);
	// bne cr6,0x825d3ce4
	if (!cr6.eq) goto loc_825D3CE4;
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825d3ce4
	if (!cr6.eq) goto loc_825D3CE4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825d3ce4
	if (!cr6.eq) goto loc_825D3CE4;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// mullw r24,r11,r27
	r24.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// b 0x825d3e5c
	goto loc_825D3E5C;
loc_825D3CE4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// mullw r24,r11,r10
	r24.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// b 0x825d3d44
	goto loc_825D3D44;
loc_825D3CF8:
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// beq cr6,0x825d3d1c
	if (cr6.eq) goto loc_825D3D1C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r24,r11,r10
	r24.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// b 0x825d3d34
	goto loc_825D3D34;
loc_825D3D1C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r24,r11,0,0,19
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_825D3D34:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x825d3d44
	if (cr6.eq) goto loc_825D3D44;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r24,r24,r11
	r24.s64 = int64_t(r24.s32) * int64_t(r11.s32);
loc_825D3D44:
	// cmplwi cr6,r15,1
	cr6.compare<uint32_t>(r15.u32, 1, xer);
	// bgt cr6,0x825d3d54
	if (cr6.gt) goto loc_825D3D54;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x825d3e5c
	if (!cr6.eq) goto loc_825D3E5C;
loc_825D3D54:
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bgt cr6,0x825d3d64
	if (cr6.gt) goto loc_825D3D64;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_825D3D64:
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// ble cr6,0x825d3d74
	if (!cr6.gt) goto loc_825D3D74;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x825d3d84
	goto loc_825D3D84;
loc_825D3D74:
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bgt cr6,0x825d3d84
	if (cr6.gt) goto loc_825D3D84;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_825D3D84:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x825d3d94
	if (!cr6.eq) goto loc_825D3D94;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r15,r11,32
	xer.ca = r11.u32 <= 32;
	r15.s64 = 32 - r11.s64;
loc_825D3D94:
	// li r11,15
	r11.s64 = 15;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r27,r11,32
	xer.ca = r11.u32 <= 32;
	r27.s64 = 32 - r11.s64;
	// addic. r31,r15,-1
	xer.ca = r15.u32 > 0;
	r31.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x825d3e28
	if (cr0.eq) goto loc_825D3E28;
loc_825D3DA8:
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d3dc4
	if (cr6.eq) goto loc_825D3DC4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// ble cr6,0x825d3e28
	if (!cr6.gt) goto loc_825D3E28;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// ble cr6,0x825d3e28
	if (!cr6.gt) goto loc_825D3E28;
loc_825D3DC4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825d3dd0
	if (cr6.eq) goto loc_825D3DD0;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_825D3DD0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825d3ddc
	if (cr6.eq) goto loc_825D3DDC;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_825D3DDC:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// ble cr6,0x825d3de8
	if (!cr6.gt) goto loc_825D3DE8;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_825D3DE8:
	// slw r11,r19,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// slw r10,r19,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r17,r3,r17
	r17.u64 = ctx.r3.u64 + r17.u64;
	// bne 0x825d3da8
	if (!cr0.eq) goto loc_825D3DA8;
loc_825D3E28:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x825d3e5c
	if (cr6.eq) goto loc_825D3E5C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// mullw r17,r11,r17
	r17.s64 = int64_t(r11.s32) * int64_t(r17.s32);
loc_825D3E5C:
	// lwz r11,364(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r9,380(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r17,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r17.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825D3E7C"))) PPC_WEAK_FUNC(sub_825D3E7C);
PPC_FUNC_IMPL(__imp__sub_825D3E7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825D3E80"))) PPC_WEAK_FUNC(sub_825D3E80);
PPC_FUNC_IMPL(__imp__sub_825D3E80) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r10,r11,-1104
	ctx.r10.s64 = r11.s64 + -1104;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbzx r24,r7,r10
	r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r11,r11,32
	xer.ca = r11.u32 <= 32;
	r11.s64 = 32 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r10,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r10.s64;
	// subfic r8,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r9.s64;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x825d3f9c
	if (!cr6.lt) goto loc_825D3F9C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_825D3F40:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r7,r10,r24
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// divwu r8,r8,r5
	ctx.r8.u32 = ctx.r8.u32 / ctx.r5.u32;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9458
	return;
loc_825D3F9C:
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r31,-2
	ctx.r7.s64 = r31.s64 + -2;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// stwx r10,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x825d3f40
	if (!cr6.lt) goto loc_825D3F40;
	// subf r11,r31,r8
	r11.s64 = ctx.r8.s64 - r31.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x825d3fd0
	if (cr6.gt) goto loc_825D3FD0;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825D3FD0:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
}

__attribute__((alias("__imp__sub_825D3FD4"))) PPC_WEAK_FUNC(sub_825D3FD4);
PPC_FUNC_IMPL(__imp__sub_825D3FD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d3f44
	// ERROR 825D3F44
	return;
}

__attribute__((alias("__imp__sub_825D3FD8"))) PPC_WEAK_FUNC(sub_825D3FD8);
PPC_FUNC_IMPL(__imp__sub_825D3FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// clrlwi r22,r10,26
	r22.u64 = ctx.r10.u32 & 0x3F;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// lbzx r21,r10,r11
	r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x825d4090
	if (!cr6.eq) goto loc_825D4090;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// rlwinm r9,r11,10,23,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1FF;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mullw r31,r9,r21
	r31.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// rlwinm r31,r31,2,3,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x1FFFFFFC;
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r24,100(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// b 0x825d4344
	goto loc_825D4344;
loc_825D4090:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r26,r28,23,30,31
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r8,r25
	ctx.r9.s64 = r25.s64 - ctx.r8.s64;
	// lwz r24,100(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r7,r8,r27
	ctx.r7.s64 = r27.s64 - ctx.r8.s64;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r4,r5,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// slw r3,r5,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x825d4114
	if (!cr6.eq) goto loc_825D4114;
	// subf r11,r8,r24
	r11.s64 = r24.s64 - ctx.r8.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r29,r5,r11
	r29.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// b 0x825d4118
	goto loc_825D4118;
loc_825D4114:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_825D4118:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x825d41e0
	if (!cr6.eq) goto loc_825D41E0;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// ble cr6,0x825d4134
	if (!cr6.gt) goto loc_825D4134;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// bgt cr6,0x825d413c
	if (cr6.gt) goto loc_825D413C;
loc_825D4134:
	// rlwinm. r11,r28,0,20,20
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d4148
	if (!cr0.eq) goto loc_825D4148;
loc_825D413C:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
loc_825D4148:
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// rlwinm r22,r29,1,31,31
	r22.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x825d41d0
	if (!cr6.eq) goto loc_825D41D0;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d41d0
	if (!cr0.eq) goto loc_825D41D0;
	// rlwinm. r10,r28,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d41d0
	if (!cr0.eq) goto loc_825D41D0;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x825d41d0
	if (!cr6.eq) goto loc_825D41D0;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm. r10,r10,0,22,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d41d0
	if (!cr0.eq) goto loc_825D41D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825d41d0
	if (!cr6.eq) goto loc_825D41D0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_825D41D0:
	// rlwinm r11,r29,10,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,2,3,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x825d4344
	goto loc_825D4344;
loc_825D41E0:
	// srw r11,r9,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r23.u8 & 0x3F));
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x825d41f8
	if (cr6.gt) goto loc_825D41F8;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_825D41F8:
	// srw r10,r7,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r23.u8 & 0x3F));
	// add r25,r11,r8
	r25.u64 = r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x825d420c
	if (cr6.gt) goto loc_825D420C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_825D420C:
	// add r27,r10,r8
	r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// bne cr6,0x825d4234
	if (!cr6.eq) goto loc_825D4234;
	// subf r11,r8,r24
	r11.s64 = r24.s64 - ctx.r8.s64;
	// srw r11,r11,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x825d422c
	if (cr6.gt) goto loc_825D422C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_825D422C:
	// add r24,r11,r8
	r24.u64 = r11.u64 + ctx.r8.u64;
	// b 0x825d4238
	goto loc_825D4238;
loc_825D4234:
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
loc_825D4238:
	// rlwinm. r11,r28,0,20,20
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d42d8
	if (cr0.eq) goto loc_825D42D8;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r11,r8,r6
	r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// subf r10,r7,r31
	ctx.r10.s64 = r31.s64 - ctx.r7.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825d4274
	if (cr6.lt) goto loc_825D4274;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D4274:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x825d42d8
	if (cr6.lt) goto loc_825D42D8;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r11,r8,r6
	r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// subf r10,r9,r31
	ctx.r10.s64 = r31.s64 - ctx.r9.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825d42c4
	if (cr6.lt) goto loc_825D42C4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825D42C4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r23,r10,r11
	r23.u64 = ctx.r10.u64 & r11.u64;
loc_825D42D8:
	// srw r11,r4,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bgt cr6,0x825d42ec
	if (cr6.gt) goto loc_825D42EC;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
loc_825D42EC:
	// srw r11,r3,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bgt cr6,0x825d4300
	if (cr6.gt) goto loc_825D4300;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_825D4300:
	// srw r11,r29,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r29.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bgt cr6,0x825d4314
	if (cr6.gt) goto loc_825D4314;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_825D4314:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_825D4344:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r25.u32);
	// stw r27,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r27.u32);
	// mullw r11,r31,r11
	r11.s64 = int64_t(r31.s32) * int64_t(r11.s32);
	// stw r24,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r24.u32);
	// stw r31,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d4384
	if (!cr0.eq) goto loc_825D4384;
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(r23.u32, 1, xer);
	// bgt cr6,0x825d4384
	if (cr6.gt) goto loc_825D4384;
	// cmpwi cr6,r15,3
	cr6.compare<int32_t>(r15.s32, 3, xer);
	// beq cr6,0x825d43a0
	if (cr6.eq) goto loc_825D43A0;
	// cmpwi cr6,r15,20
	cr6.compare<int32_t>(r15.s32, 20, xer);
	// beq cr6,0x825d43a0
	if (cr6.eq) goto loc_825D43A0;
loc_825D4384:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// beq cr6,0x825d43a0
	if (cr6.eq) goto loc_825D43A0;
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
loc_825D43A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825D43A4"))) PPC_WEAK_FUNC(sub_825D43A4);
PPC_FUNC_IMPL(__imp__sub_825D43A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_825D43A8"))) PPC_WEAK_FUNC(sub_825D43A8);
PPC_FUNC_IMPL(__imp__sub_825D43A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825d3fd8
	sub_825D3FD8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_825D44A4"))) PPC_WEAK_FUNC(sub_825D44A4);
PPC_FUNC_IMPL(__imp__sub_825D44A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D44A8"))) PPC_WEAK_FUNC(sub_825D44A8);
PPC_FUNC_IMPL(__imp__sub_825D44A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825d3fd8
	sub_825D3FD8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_825D45A4"))) PPC_WEAK_FUNC(sub_825D45A4);
PPC_FUNC_IMPL(__imp__sub_825D45A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D45A8"))) PPC_WEAK_FUNC(sub_825D45A8);
PPC_FUNC_IMPL(__imp__sub_825D45A8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stw r7,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbzx r14,r10,r11
	r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// rlwinm r28,r7,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// rlwinm r24,r6,23,30,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x3;
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(r24.u32, 2, xer);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,120(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r29,r7
	ctx.r9.s64 = ctx.r7.s64 - r29.s64;
	// subf r8,r29,r23
	ctx.r8.s64 = r23.s64 - r29.s64;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// subf r11,r6,r30
	r11.s64 = r30.s64 - ctx.r6.s64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r26,r25,r10
	r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// slw r17,r25,r11
	r17.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// bne cr6,0x825d4694
	if (!cr6.eq) goto loc_825D4694;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r15,r25,r11
	r15.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// b 0x825d4698
	goto loc_825D4698;
loc_825D4694:
	// mr r15,r25
	r15.u64 = r25.u64;
loc_825D4698:
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// ble cr6,0x825d46a8
	if (!cr6.gt) goto loc_825D46A8;
	// cmplwi cr6,r17,16
	cr6.compare<uint32_t>(r17.u32, 16, xer);
	// bgt cr6,0x825d46b8
	if (cr6.gt) goto loc_825D46B8;
loc_825D46A8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d46bc
	if (!cr0.eq) goto loc_825D46BC;
loc_825D46B8:
	// li r30,0
	r30.s64 = 0;
loc_825D46BC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825d46d4
	if (cr6.eq) goto loc_825D46D4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825d46d4
	if (!cr6.eq) goto loc_825D46D4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x825d46d8
	goto loc_825D46D8;
loc_825D46D4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_825D46D8:
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bne cr6,0x825d47c4
	if (!cr6.eq) goto loc_825D47C4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825d47c4
	if (!cr6.eq) goto loc_825D47C4;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// rlwinm r27,r29,23,30,31
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 23) & 0x3;
	// clrlwi r28,r30,26
	r28.u64 = r30.u32 & 0x3F;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r26,0,0,0
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d4794
	if (!cr0.eq) goto loc_825D4794;
	// rlwinm. r11,r30,0,21,21
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d4794
	if (!cr0.eq) goto loc_825D4794;
	// rlwinm. r11,r29,0,20,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d4794
	if (!cr0.eq) goto loc_825D4794;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x825d4794
	if (!cr6.eq) goto loc_825D4794;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,22,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3C0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d4794
	if (!cr0.eq) goto loc_825D4794;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d4794
	if (!cr0.eq) goto loc_825D4794;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r23
	ctx.r10.u64 = r11.u64 + r23.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r17,r10,r11
	r17.u64 = ctx.r10.u64 & ~r11.u64;
	// b 0x825d4798
	goto loc_825D4798;
loc_825D4794:
	// lwz r17,100(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_825D4798:
	// lwz r15,96(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x825d47b4
	if (!cr6.eq) goto loc_825D47B4;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r11,r11,r14
	r11.s64 = int64_t(r11.s32) * int64_t(r14.s32);
	// rlwinm r30,r11,29,3,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x825d49f8
	goto loc_825D49F8;
loc_825D47B4:
	// rlwinm r11,r26,10,23,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r14
	r11.s64 = int64_t(r11.s32) * int64_t(r14.s32);
	// rlwinm r30,r11,2,3,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x825d49f8
	goto loc_825D49F8;
loc_825D47C4:
	// srw r10,r9,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r27.u8 & 0x3F));
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x825d47d4
	if (cr6.gt) goto loc_825D47D4;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_825D47D4:
	// srw r11,r8,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r27.u8 & 0x3F));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bgt cr6,0x825d47ec
	if (cr6.gt) goto loc_825D47EC;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825D47EC:
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(r24.u32, 2, xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bne cr6,0x825d4820
	if (!cr6.eq) goto loc_825D4820;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srw r11,r11,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 >> (r27.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x825d4814
	if (cr6.gt) goto loc_825D4814;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825D4814:
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// b 0x825d4824
	goto loc_825D4824;
loc_825D4820:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
loc_825D4824:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x825d4844
	if (cr6.eq) goto loc_825D4844;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// beq cr6,0x825d4844
	if (cr6.eq) goto loc_825D4844;
	// mr r16,r25
	r16.u64 = r25.u64;
	// b 0x825d4864
	goto loc_825D4864;
loc_825D4844:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,23,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x2;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r16,r10,r11
	r16.u64 = ctx.r10.u64 & ~r11.u64;
loc_825D4864:
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// cntlzw r10,r17
	ctx.r10.u64 = r17.u32 == 0 ? 32 : __builtin_clz(r17.u32);
	// cntlzw r9,r15
	ctx.r9.u64 = r15.u32 == 0 ? 32 : __builtin_clz(r15.u32);
	// subfic r22,r11,31
	xer.ca = r11.u32 <= 31;
	r22.s64 = 31 - r11.s64;
	// subfic r23,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	r23.s64 = 31 - ctx.r10.s64;
	// subfic r24,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	r24.s64 = 31 - ctx.r9.s64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x825d4898
	if (cr6.eq) goto loc_825D4898;
	// mr r18,r27
	r18.u64 = r27.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x825d489c
	goto loc_825D489C;
loc_825D4898:
	// addi r18,r27,-1
	r18.s64 = r27.s64 + -1;
loc_825D489C:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// blt cr6,0x825d49f4
	if (cr6.lt) goto loc_825D49F4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r20,48(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r19,r11,1,31,31
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// clrlwi r21,r10,26
	r21.u64 = ctx.r10.u32 & 0x3F;
loc_825D48B8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825d48c4
	if (cr6.eq) goto loc_825D48C4;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
loc_825D48C4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x825d48d0
	if (cr6.eq) goto loc_825D48D0;
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
loc_825D48D0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825d48dc
	if (cr6.eq) goto loc_825D48DC;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
loc_825D48DC:
	// slw r29,r25,r22
	r29.u64 = r22.u8 & 0x20 ? 0 : (r25.u32 << (r22.u8 & 0x3F));
	// slw r28,r25,r23
	r28.u64 = r23.u8 & 0x20 ? 0 : (r25.u32 << (r23.u8 & 0x3F));
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// slw r27,r25,r24
	r27.u64 = r24.u8 & 0x20 ? 0 : (r25.u32 << (r24.u8 & 0x3F));
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// rlwinm r26,r20,23,30,31
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 23) & 0x3;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// mullw r11,r11,r14
	r11.s64 = int64_t(r11.s32) * int64_t(r14.s32);
	// rlwinm r30,r11,29,3,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// ble cr6,0x825d4934
	if (!cr6.gt) goto loc_825D4934;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// bgt cr6,0x825d493c
	if (cr6.gt) goto loc_825D493C;
loc_825D4934:
	// rlwinm. r11,r20,0,20,20
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825d499c
	if (!cr0.eq) goto loc_825D499C;
loc_825D493C:
	// lwz r17,100(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// lwz r15,96(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x825d4988
	if (!cr6.gt) goto loc_825D4988;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// beq cr6,0x825d4968
	if (cr6.eq) goto loc_825D4968;
	// mullw r11,r30,r17
	r11.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r11,r11,r15
	r11.s64 = int64_t(r11.s32) * int64_t(r15.s32);
	// b 0x825d4978
	goto loc_825D4978;
loc_825D4968:
	// mullw r11,r30,r15
	r11.s64 = int64_t(r30.s32) * int64_t(r15.s32);
	// mullw r11,r11,r17
	r11.s64 = int64_t(r11.s32) * int64_t(r17.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_825D4978:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r11,r16
	r11.s64 = int64_t(r11.s32) * int64_t(r16.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_825D4988:
	// addic. r18,r18,-1
	xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// bge 0x825d48b8
	if (!cr0.lt) goto loc_825D48B8;
	// lwz r21,340(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// b 0x825d49f8
	goto loc_825D49F8;
loc_825D499C:
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r17,100(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mullw r8,r30,r17
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825d3e80
	sub_825D3E80(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,96(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r21,340(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// b 0x825d49f8
	goto loc_825D49F8;
loc_825D49F4:
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_825D49F8:
	// mullw r11,r30,r17
	r11.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,332(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r10,r11,4095
	ctx.r10.s64 = r11.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1024
	cr6.compare<uint32_t>(ctx.r9.u32, 1024, xer);
	// beq cr6,0x825d4a40
	if (cr6.eq) goto loc_825D4A40;
	// mullw r11,r10,r15
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r15.s32);
	// stw r10,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// b 0x825d4a50
	goto loc_825D4A50;
loc_825D4A40:
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r15.s32);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// addi r11,r10,4095
	r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_825D4A50:
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_825D4A88"))) PPC_WEAK_FUNC(sub_825D4A88);
PPC_FUNC_IMPL(__imp__sub_825D4A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825D4A8C"))) PPC_WEAK_FUNC(sub_825D4A8C);
PPC_FUNC_IMPL(__imp__sub_825D4A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4A90"))) PPC_WEAK_FUNC(sub_825D4A90);
PPC_FUNC_IMPL(__imp__sub_825D4A90) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r31,276(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r8,r8,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r7,r11,0,0,19
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e63d0
	sub_825E63D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825D4B60"))) PPC_WEAK_FUNC(sub_825D4B60);
PPC_FUNC_IMPL(__imp__sub_825D4B60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825D4B64"))) PPC_WEAK_FUNC(sub_825D4B64);
PPC_FUNC_IMPL(__imp__sub_825D4B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4B68"))) PPC_WEAK_FUNC(sub_825D4B68);
PPC_FUNC_IMPL(__imp__sub_825D4B68) {
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d4a90
	sub_825D4A90(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d4be4
	if (cr6.eq) goto loc_825D4BE4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// mullw r11,r7,r9
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// b 0x825d4be8
	goto loc_825D4BE8;
loc_825D4BE4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825D4BE8:
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825D4BF4"))) PPC_WEAK_FUNC(sub_825D4BF4);
PPC_FUNC_IMPL(__imp__sub_825D4BF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D4BF8"))) PPC_WEAK_FUNC(sub_825D4BF8);
PPC_FUNC_IMPL(__imp__sub_825D4BF8) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d4a90
	sub_825D4A90(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825d4c8c
	if (cr6.eq) goto loc_825D4C8C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r11,r6,r7
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// b 0x825d4c90
	goto loc_825D4C90;
loc_825D4C8C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825D4C90:
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825D4CA0"))) PPC_WEAK_FUNC(sub_825D4CA0);
PPC_FUNC_IMPL(__imp__sub_825D4CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D4CA4"))) PPC_WEAK_FUNC(sub_825D4CA4);
PPC_FUNC_IMPL(__imp__sub_825D4CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4CA8"))) PPC_WEAK_FUNC(sub_825D4CA8);
PPC_FUNC_IMPL(__imp__sub_825D4CA8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,340(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r20,1,0,30
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// beq cr6,0x825d4d58
	if (cr6.eq) goto loc_825D4D58;
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// beq cr6,0x825d4d1c
	if (cr6.eq) goto loc_825D4D1C;
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x825d4d14
	if (cr6.eq) goto loc_825D4D14;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// beq cr6,0x825d4d58
	if (cr6.eq) goto loc_825D4D58;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bne cr6,0x825d4d60
	if (!cr6.eq) goto loc_825D4D60;
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// b 0x825d4d6c
	goto loc_825D4D6C;
loc_825D4D14:
	// li r30,3
	r30.s64 = 3;
	// b 0x825d4d6c
	goto loc_825D4D6C;
loc_825D4D1C:
	// li r30,2
	r30.s64 = 2;
loc_825D4D20:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_825D4D24:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x825d4d40
	if (!cr6.eq) goto loc_825D4D40;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d3958
	sub_825D3958(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_825D4D40:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x825d4d74
	if (!cr6.eq) goto loc_825D4D74;
	// subfic r11,r22,1
	xer.ca = r22.u32 <= 1;
	r11.s64 = 1 - r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r23,r11,31
	r23.u64 = r11.u32 & 0x1;
	// b 0x825d4d78
	goto loc_825D4D78;
loc_825D4D58:
	// li r30,1
	r30.s64 = 1;
	// b 0x825d4d64
	goto loc_825D4D64;
loc_825D4D60:
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_825D4D64:
	// cmpwi cr6,r19,17
	cr6.compare<int32_t>(r19.s32, 17, xer);
	// beq cr6,0x825d4d20
	if (cr6.eq) goto loc_825D4D20;
loc_825D4D6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x825d4d24
	goto loc_825D4D24;
loc_825D4D74:
	// mr r23,r26
	r23.u64 = r26.u64;
loc_825D4D78:
	// lwz r11,356(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r21,348(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// clrlwi r26,r31,26
	r26.u64 = r31.u32 & 0x3F;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwinm r9,r31,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0x1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d3b00
	sub_825D3B00(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// beq 0x825d4de4
	if (cr0.eq) goto loc_825D4DE4;
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
loc_825D4DE4:
	// rlwinm. r11,r24,0,22,22
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d4df0
	if (cr0.eq) goto loc_825D4DF0;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
loc_825D4DF0:
	// lwz r11,364(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// rlwimi r10,r30,9,21,22
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 9) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// blt cr6,0x825d4eb8
	if (cr6.lt) goto loc_825D4EB8;
	// beq cr6,0x825d4e80
	if (cr6.eq) goto loc_825D4E80;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x825d4e50
	if (cr6.lt) goto loc_825D4E50;
	// bne cr6,0x825d4ec8
	if (!cr6.eq) goto loc_825D4EC8;
	// subf r9,r25,r28
	ctx.r9.s64 = r28.s64 - r25.s64;
	// subf r8,r25,r29
	ctx.r8.s64 = r29.s64 - r25.s64;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// rlwimi r8,r9,13,6,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0x3FFE000) | (ctx.r8.u64 & 0xFFFFFFFFFC001FFF);
	// rlwimi r8,r7,26,0,5
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 26) & 0xFC000000) | (ctx.r8.u64 & 0xFFFFFFFF03FFFFFF);
	// b 0x825d4ec4
	goto loc_825D4EC4;
loc_825D4E50:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.s64 = r29.s64 - r25.s64;
	// subf r7,r25,r28
	ctx.r7.s64 = r28.s64 - r25.s64;
	// rlwimi r8,r9,0,0,20
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF800) | (ctx.r8.u64 & 0xFFFFFFFF000007FF);
	// subf r6,r25,r27
	ctx.r6.s64 = r27.s64 - r25.s64;
	// rlwinm r9,r7,11,10,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x3FF800;
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// rlwinm r7,r6,22,0,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0xFFC00000;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// clrlwi r8,r8,21
	ctx.r8.u64 = ctx.r8.u32 & 0x7FF;
	// b 0x825d4eac
	goto loc_825D4EAC;
loc_825D4E80:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.s64 = r29.s64 - r25.s64;
	// subf r7,r25,r28
	ctx.r7.s64 = r28.s64 - r25.s64;
	// rlwimi r8,r9,0,0,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFE000) | (ctx.r8.u64 & 0xFFFFFFFF00001FFF);
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// rlwinm r8,r7,13,6,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x3FFE000;
	// rlwinm r9,r9,26,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
loc_825D4EAC:
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// b 0x825d4ec8
	goto loc_825D4EC8;
loc_825D4EB8:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.s64 = r29.s64 - r25.s64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
loc_825D4EC4:
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
loc_825D4EC8:
	// srawi r9,r31,15
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 15;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r7,r31,13
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFF) != 0);
	ctx.r7.s64 = r31.s32 >> 13;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// srawi r5,r31,11
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r5.s64 = r31.s32 >> 11;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// srawi r3,r31,9
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FF) != 0);
	ctx.r3.s64 = r31.s32 >> 9;
	// lwz r30,40(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r28,44(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// srawi r29,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r29.s64 = r31.s32 >> 8;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r27,r19,-19
	r27.s64 = r19.s64 + -19;
	// lwz r25,132(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r8,r29,14,0,17
	ctx.r8.u64 = (__builtin_rotateleft32(r29.u32, 14) & 0xFFFFC000) | (ctx.r8.u64 & 0xFFFFFFFF00003FFF);
	// lwz r24,380(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r27,r27
	r27.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r6,r8,17,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 17) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// srawi r19,r31,6
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3F) != 0);
	r19.s64 = r31.s32 >> 6;
	// rlwinm r8,r27,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x1;
	// rlwimi r3,r5,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwimi r19,r8,4,27,27
	r19.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x10) | (r19.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwinm r8,r4,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r5,r20,18,0,13
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 18) & 0xFFFC0000;
	// clrlwi r6,r21,26
	ctx.r6.u64 = r21.u32 & 0x3F;
	// rlwinm r7,r7,0,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// srawi r5,r31,17
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 17;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// rlwimi r5,r6,13,0,18
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0xFFFFE000) | (ctx.r5.u64 & 0xFFFFFFFF00001FFF);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// rlwimi r8,r19,6,24,25
	ctx.r8.u64 = (__builtin_rotateleft32(r19.u32, 6) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r7,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r7.u32);
	// rlwinm r6,r30,0,1,12
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7FF80000;
	// rlwimi r28,r4,6,22,25
	r28.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0x3C0) | (r28.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r8,r19,6,21,21
	ctx.r8.u64 = (__builtin_rotateleft32(r19.u32, 6) & 0x400) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r10,r23,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(r23.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r28,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r28.u32);
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r7.u32);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825D4F98"))) PPC_WEAK_FUNC(sub_825D4F98);
PPC_FUNC_IMPL(__imp__sub_825D4F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825D4F9C"))) PPC_WEAK_FUNC(sub_825D4F9C);
PPC_FUNC_IMPL(__imp__sub_825D4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4FA0"))) PPC_WEAK_FUNC(sub_825D4FA0);
PPC_FUNC_IMPL(__imp__sub_825D4FA0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r5,26
	r25.u64 = ctx.r5.u32 & 0x3F;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r25,22
	cr6.compare<uint32_t>(r25.u32, 22, xer);
	// beq cr6,0x825d4fe8
	if (cr6.eq) goto loc_825D4FE8;
	// cmplwi cr6,r25,23
	cr6.compare<uint32_t>(r25.u32, 23, xer);
	// li r26,0
	r26.s64 = 0;
	// bne cr6,0x825d4fec
	if (!cr6.eq) goto loc_825D4FEC;
loc_825D4FE8:
	// mr r26,r22
	r26.u64 = r22.u64;
loc_825D4FEC:
	// cmplwi cr6,r25,54
	cr6.compare<uint32_t>(r25.u32, 54, xer);
	// bne cr6,0x825d4ff8
	if (!cr6.eq) goto loc_825D4FF8;
	// li r25,7
	r25.s64 = 7;
loc_825D4FF8:
	// li r11,4
	r11.s64 = 4;
	// stw r22,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r22.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r24,-1
	r24.s64 = -1;
	// bl 0x825d3850
	sub_825D3850(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x825d5068
	if (cr6.eq) goto loc_825D5068;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// blt cr6,0x825d5040
	if (cr6.lt) goto loc_825D5040;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_825D5040:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x825d504c
	if (!cr6.eq) goto loc_825D504C;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_825D504C:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r7,r11,9
	ctx.r7.u64 = r11.u32 & 0x7FFFFF;
	// b 0x825d506c
	goto loc_825D506C;
loc_825D5068:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825D506C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x825d5084
	if (cr6.eq) goto loc_825D5084;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r24,4(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// b 0x825d50a8
	goto loc_825D50A8;
loc_825D5084:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x825d50a8
	if (cr6.eq) goto loc_825D50A8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19256);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r24,r11,r24
	r24.u64 = r11.u64 & r24.u64;
loc_825D50A8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825d50b8
	if (cr6.eq) goto loc_825D50B8;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x825d50d4
	if (!cr6.eq) goto loc_825D50D4;
loc_825D50B8:
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r11,r30,79
	r11.s64 = r30.s64 + 79;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r11,80
	ctx.r10.s64 = r11.s64 * 80;
	// addi r11,r30,31
	r11.s64 = r30.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x825d50ec
	goto loc_825D50EC;
loc_825D50D4:
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r11,r30,39
	r11.s64 = r30.s64 + 39;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r11,40
	ctx.r10.s64 = r11.s64 * 40;
	// addi r11,r30,15
	r11.s64 = r30.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_825D50EC:
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// rlwimi r29,r11,2,0,29
	r29.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// rlwinm r11,r5,18,0,13
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFFFC0000;
	// clrlwi r6,r6,29
	ctx.r6.u64 = ctx.r6.u32 & 0x7;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
	// rlwinm r4,r29,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// addi r5,r5,-1104
	ctx.r5.s64 = ctx.r5.s64 + -1104;
	// rlwinm r30,r25,1,0,30
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r11,r6,3,14,28
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 3) & 0x3FFF8) | (r11.u64 & 0xFFFFFFFFFFFC0007);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lhzx r11,r30,r5
	r11.u64 = PPC_LOAD_U16(r30.u32 + ctx.r5.u32);
	// rlwinm r11,r11,24,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// beq cr6,0x825d51a4
	if (cr6.eq) goto loc_825D51A4;
	// rlwinm r11,r11,16,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x10000;
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// beq cr6,0x825d5198
	if (cr6.eq) goto loc_825D5198;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x825d5174
	if (cr6.eq) goto loc_825D5174;
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825d5174
	if (cr6.eq) goto loc_825D5174;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x825d5180
	goto loc_825D5180;
loc_825D5174:
	// addi r11,r25,-22
	r11.s64 = r25.s64 + -22;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825D5180:
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// rlwinm r10,r24,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 13) & 0xFFFFE000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r22,r11,4,0,27
	r22.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xFFFFFFF0) | (r22.u64 & 0xFFFFFFFF0000000F);
	// stw r22,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r22.u32);
	// b 0x825d51f8
	goto loc_825D51F8;
loc_825D5198:
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x825d51f8
	goto loc_825D51F8;
loc_825D51A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825d51e4
	if (!cr6.eq) goto loc_825D51E4;
	// rlwinm. r10,r28,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d51e4
	if (!cr0.eq) goto loc_825D51E4;
	// rlwinm r10,r28,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x600;
	// cmpwi cr6,r10,1536
	cr6.compare<int32_t>(ctx.r10.s32, 1536, xer);
	// bne cr6,0x825d51e4
	if (!cr6.eq) goto loc_825D51E4;
	// rlwinm r10,r28,0,19,20
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1800;
	// cmpwi cr6,r10,6144
	cr6.compare<int32_t>(ctx.r10.s32, 6144, xer);
	// bne cr6,0x825d51e4
	if (!cr6.eq) goto loc_825D51E4;
	// rlwinm r10,r28,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x6000;
	// cmpwi cr6,r10,24576
	cr6.compare<int32_t>(ctx.r10.s32, 24576, xer);
	// bne cr6,0x825d51e4
	if (!cr6.eq) goto loc_825D51E4;
	// rlwinm. r10,r28,0,15,16
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x18000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d51e4
	if (!cr0.eq) goto loc_825D51E4;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825D51E4:
	// rlwimi r11,r8,4,22,27
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x3F0) | (r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,16,6,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3FF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_825D51F8:
	// mulli r11,r3,5120
	r11.s64 = ctx.r3.s64 * 5120;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// stw r7,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825D520C"))) PPC_WEAK_FUNC(sub_825D520C);
PPC_FUNC_IMPL(__imp__sub_825D520C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825D5210"))) PPC_WEAK_FUNC(sub_825D5210);
PPC_FUNC_IMPL(__imp__sub_825D5210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
}

__attribute__((alias("__imp__sub_825D521C"))) PPC_WEAK_FUNC(sub_825D521C);
PPC_FUNC_IMPL(__imp__sub_825D521C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5220"))) PPC_WEAK_FUNC(sub_825D5220);
PPC_FUNC_IMPL(__imp__sub_825D5220) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d43a8
	sub_825D43A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5220"))) PPC_WEAK_FUNC(sub_825D5220);
PPC_FUNC_IMPL(__imp__sub_825D5220) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825D5224"))) PPC_WEAK_FUNC(sub_825D5224);
PPC_FUNC_IMPL(__imp__sub_825D5224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5228"))) PPC_WEAK_FUNC(sub_825D5228);
PPC_FUNC_IMPL(__imp__sub_825D5228) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825d5290
	if (!cr0.eq) goto loc_825D5290;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d52d8
	goto loc_825D52D8;
loc_825D5290:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r29,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	r11.u64 = r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwinm r11,r11,0,10,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825D52D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825D52DC"))) PPC_WEAK_FUNC(sub_825D52DC);
PPC_FUNC_IMPL(__imp__sub_825D52DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825D52E0"))) PPC_WEAK_FUNC(sub_825D52E0);
PPC_FUNC_IMPL(__imp__sub_825D52E0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_825D52F8"))) PPC_WEAK_FUNC(sub_825D52F8);
PPC_FUNC_IMPL(__imp__sub_825D52F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d4b68
	sub_825D4B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D52FC"))) PPC_WEAK_FUNC(sub_825D52FC);
PPC_FUNC_IMPL(__imp__sub_825D52FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5300"))) PPC_WEAK_FUNC(sub_825D5300);
PPC_FUNC_IMPL(__imp__sub_825D5300) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_825D5318"))) PPC_WEAK_FUNC(sub_825D5318);
PPC_FUNC_IMPL(__imp__sub_825D5318) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d4b68
	sub_825D4B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D531C"))) PPC_WEAK_FUNC(sub_825D531C);
PPC_FUNC_IMPL(__imp__sub_825D531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5320"))) PPC_WEAK_FUNC(sub_825D5320);
PPC_FUNC_IMPL(__imp__sub_825D5320) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d44a8
	sub_825D44A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5320"))) PPC_WEAK_FUNC(sub_825D5320);
PPC_FUNC_IMPL(__imp__sub_825D5320) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825D5324"))) PPC_WEAK_FUNC(sub_825D5324);
PPC_FUNC_IMPL(__imp__sub_825D5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5328"))) PPC_WEAK_FUNC(sub_825D5328);
PPC_FUNC_IMPL(__imp__sub_825D5328) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d4bf8
	sub_825D4BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5328"))) PPC_WEAK_FUNC(sub_825D5328);
PPC_FUNC_IMPL(__imp__sub_825D5328) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825D532C"))) PPC_WEAK_FUNC(sub_825D532C);
PPC_FUNC_IMPL(__imp__sub_825D532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5330"))) PPC_WEAK_FUNC(sub_825D5330);
PPC_FUNC_IMPL(__imp__sub_825D5330) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825d537c
	if (!cr0.eq) goto loc_825D537C;
loc_825D5374:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d5448
	goto loc_825D5448;
loc_825D537C:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r1,132
	r11.s64 = ctx.r1.s64 + 132;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825d4ca8
	sub_825D4CA8(ctx, base);
	// not r11,r29
	r11.u64 = ~r29.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// rlwinm r11,r11,28,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF0000000;
	// oris r30,r11,35968
	r30.u64 = r11.u64 | 2357198848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x825d53f8
	if (!cr0.eq) goto loc_825D53F8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825D53F0:
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825d5374
	goto loc_825D5374;
loc_825D53F8:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d542c
	if (cr6.eq) goto loc_825D542C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// bne 0x825d542c
	if (!cr0.eq) goto loc_825D542C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x825d53f0
	goto loc_825D53F0;
loc_825D542C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r29,0,0,19
	r11.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r22,r10,0,20,31
	r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r22.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r22,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r22.u32);
loc_825D5448:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825D544C"))) PPC_WEAK_FUNC(sub_825D544C);
PPC_FUNC_IMPL(__imp__sub_825D544C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825D5450"))) PPC_WEAK_FUNC(sub_825D5450);
PPC_FUNC_IMPL(__imp__sub_825D5450) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825d548c
	if (!cr0.eq) goto loc_825D548C;
loc_825D5484:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d5580
	goto loc_825D5580;
loc_825D548C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d4fa0
	sub_825D4FA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x825d557c
	if (!cr6.eq) goto loc_825D557C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// beq cr6,0x825d54e0
	if (cr6.eq) goto loc_825D54E0;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x825d54e4
	if (!cr6.eq) goto loc_825D54E4;
loc_825D54E0:
	// li r29,1
	r29.s64 = 1;
loc_825D54E4:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f6b90
	sub_825F6B90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825d550c
	if (!cr0.eq) goto loc_825D550C;
loc_825D54FC:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825d5484
	goto loc_825D5484;
loc_825D550C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(r11.u32, 2048, xer);
	// ble cr6,0x825d5528
	if (!cr6.gt) goto loc_825D5528;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f6b40
	sub_825F6B40(ctx, base);
	// b 0x825d54fc
	goto loc_825D54FC;
loc_825D5528:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x825d5570
	if (cr6.eq) goto loc_825D5570;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// rlwimi r3,r10,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r10,-19256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -19256);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825d557c
	if (!cr6.eq) goto loc_825D557C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-19256(r11)
	PPC_STORE_U32(r11.u32 + -19256, ctx.r10.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// clrlwi r11,r11,15
	r11.u64 = r11.u32 & 0x1FFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x825d557c
	goto loc_825D557C;
loc_825D5570:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwimi r3,r11,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_825D557C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825D5580:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825D5584"))) PPC_WEAK_FUNC(sub_825D5584);
PPC_FUNC_IMPL(__imp__sub_825D5584) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825D5588"))) PPC_WEAK_FUNC(sub_825D5588);
PPC_FUNC_IMPL(__imp__sub_825D5588) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d55c0
	if (cr0.eq) goto loc_825D55C0;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// bl 0x825d43a8
	sub_825D43A8(ctx, base);
	// b 0x825d5604
	goto loc_825D5604;
loc_825D55C0:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,14,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,29,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lhz r11,24(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_825D5604:
	// li r11,4
	r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D561C"))) PPC_WEAK_FUNC(sub_825D561C);
PPC_FUNC_IMPL(__imp__sub_825D561C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5620"))) PPC_WEAK_FUNC(sub_825D5620);
PPC_FUNC_IMPL(__imp__sub_825D5620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3F;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_825D5640"))) PPC_WEAK_FUNC(sub_825D5640);
PPC_FUNC_IMPL(__imp__sub_825D5640) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d4b68
	sub_825D4B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5644"))) PPC_WEAK_FUNC(sub_825D5644);
PPC_FUNC_IMPL(__imp__sub_825D5644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5648"))) PPC_WEAK_FUNC(sub_825D5648);
PPC_FUNC_IMPL(__imp__sub_825D5648) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// bl 0x825d44a8
	sub_825D44A8(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825D5688"))) PPC_WEAK_FUNC(sub_825D5688);
PPC_FUNC_IMPL(__imp__sub_825D5688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D568C"))) PPC_WEAK_FUNC(sub_825D568C);
PPC_FUNC_IMPL(__imp__sub_825D568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5690"))) PPC_WEAK_FUNC(sub_825D5690);
PPC_FUNC_IMPL(__imp__sub_825D5690) {
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
	// addi r11,r4,3230
	r11.s64 = ctx.r4.s64 + 3230;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r28,r29,r3
	r28.u64 = PPC_LOAD_U32(r29.u32 + ctx.r3.u32);
	// beq cr6,0x825d5798
	if (cr6.eq) goto loc_825D5798;
	// lwz r27,48(r5)
	r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r27,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFF;
	// lwz r26,44(r5)
	r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r10,r7,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// lwz r25,28(r5)
	r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// lwz r24,36(r5)
	r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r30,r7,3
	r30.u64 = ctx.r7.u32 & 0x1FFFFFFF;
	// lwz r21,12(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lwz r20,20(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r3,r10,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lwz r23,40(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// add r9,r31,r4
	ctx.r9.u64 = r31.u64 + ctx.r4.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r7,r27,0,3,22
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1FFFFE00;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// rlwimi r10,r4,0,30,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFFFFFFC03) | (ctx.r10.u64 & 0x3FC);
	// lbz r8,12356(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12356);
	// rlwimi r25,r22,0,10,21
	r25.u64 = (__builtin_rotateleft32(r22.u32, 0) & 0x3FFC00) | (r25.u64 & 0xFFFFFFFFFFC003FF);
	// rlwimi r3,r27,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft32(r27.u32, 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// rlwimi r23,r21,0,1,12
	r23.u64 = (__builtin_rotateleft32(r21.u32, 0) & 0x7FF80000) | (r23.u64 & 0xFFFFFFFF8007FFFF);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// rlwimi r7,r20,0,23,31
	ctx.r7.u64 = (__builtin_rotateleft32(r20.u32, 0) & 0x1FF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// rlwinm r4,r26,30,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xF;
	// stw r23,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r23.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x825d5760
	if (!cr6.gt) goto loc_825D5760;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(r26.u32, 0);
	// rlwinm r8,r8,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
loc_825D5760:
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwimi r10,r8,2,26,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// lbz r9,12382(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12382);
	// rlwinm r8,r7,26,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x825d5780
	if (!cr6.lt) goto loc_825D5780;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_825D5780:
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// rlwimi r10,r9,6,22,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// std r9,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// b 0x825d57a4
	goto loc_825D57A4;
loc_825D5798:
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
loc_825D57A4:
	// stwx r5,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r5.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825d5814
	if (cr6.eq) goto loc_825D5814;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825d57c4
	if (cr6.eq) goto loc_825D57C4;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x825d5814
	goto loc_825D5814;
loc_825D57C4:
	// lwz r11,11040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d5814
	if (cr0.eq) goto loc_825D5814;
	// lwz r11,13932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825d57ec
	if (cr6.lt) goto loc_825D57EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825D57EC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	r11.u64 = (__builtin_rotateleft32(r28.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
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
loc_825D5814:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825D5818"))) PPC_WEAK_FUNC(sub_825D5818);
PPC_FUNC_IMPL(__imp__sub_825D5818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825D581C"))) PPC_WEAK_FUNC(sub_825D581C);
PPC_FUNC_IMPL(__imp__sub_825D581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5820"))) PPC_WEAK_FUNC(sub_825D5820);
PPC_FUNC_IMPL(__imp__sub_825D5820) {
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
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r5,44
	ctx.r5.s64 = 2883584;
	// li r11,0
	r11.s64 = 0;
	// andi. r7,r3,16398
	ctx.r7.u64 = ctx.r3.u64 & 16398;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ori r6,r10,9145
	ctx.r6.u64 = ctx.r10.u64 | 9145;
	// ori r31,r9,10374
	r31.u64 = ctx.r9.u64 | 10374;
	// ori r30,r5,33700
	r30.u64 = ctx.r5.u64 | 33700;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x825d5ba4
	if (cr6.eq) goto loc_825D5BA4;
	// cmplwi cr6,r7,6
	cr6.compare<uint32_t>(ctx.r7.u32, 6, xer);
	// beq cr6,0x825d5b1c
	if (cr6.eq) goto loc_825D5B1C;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// beq cr6,0x825d5aa0
	if (cr6.eq) goto loc_825D5AA0;
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// beq cr6,0x825d5a0c
	if (cr6.eq) goto loc_825D5A0C;
	// cmplwi cr6,r7,12
	cr6.compare<uint32_t>(ctx.r7.u32, 12, xer);
	// beq cr6,0x825d5948
	if (cr6.eq) goto loc_825D5948;
	// cmplwi cr6,r7,14
	cr6.compare<uint32_t>(ctx.r7.u32, 14, xer);
	// beq cr6,0x825d58a4
	if (cr6.eq) goto loc_825D58A4;
	// cmplwi cr6,r7,16386
	cr6.compare<uint32_t>(ctx.r7.u32, 16386, xer);
	// bne cr6,0x825d5bc8
	if (!cr6.eq) goto loc_825D5BC8;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r7,r9,9126
	ctx.r7.u64 = ctx.r9.u64 | 9126;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x825d5bac
	goto loc_825D5BAC;
loc_825D58A4:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// rlwinm. r7,r3,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U16(ea, r11.u16);
	ctx.r10.u32 = ea;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// beq 0x825d5914
	if (cr0.eq) goto loc_825D5914;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,28
	ctx.r8.s64 = 28;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x825d5bb8
	goto loc_825D5BB8;
loc_825D5914:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,32
	ctx.r9.s64 = 32;
	// beq 0x825d5940
	if (cr0.eq) goto loc_825D5940;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5940:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5948:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// beq 0x825d59b4
	if (cr0.eq) goto loc_825D59B4;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_825D5990:
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U16(ea, r11.u16);
	ctx.r10.u32 = ea;
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// li r28,2
	r28.s64 = 2;
	// ori r29,r8,8838
	r29.u64 = ctx.r8.u64 | 8838;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stb r28,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r28.u8);
	// b 0x825d5bbc
	goto loc_825D5BBC;
loc_825D59B4:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d59ec
	if (cr0.eq) goto loc_825D59EC;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_825D59D0:
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U16(ea, r11.u16);
	ctx.r10.u32 = ea;
	// li r29,2
	r29.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r29,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r29.u8);
	// b 0x825d5bbc
	goto loc_825D5BBC;
loc_825D59EC:
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5A0C:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// beq 0x825d5a60
	if (cr0.eq) goto loc_825D5A60;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x825d5990
	goto loc_825D5990;
loc_825D5A60:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d5a88
	if (cr0.eq) goto loc_825D5A88;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x825d59d0
	goto loc_825D59D0;
loc_825D5A88:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5AA0:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// beq 0x825d5aec
	if (cr0.eq) goto loc_825D5AEC;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
loc_825D5AD8:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x825d5990
	goto loc_825D5990;
loc_825D5AEC:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825d5afc
	if (cr0.eq) goto loc_825D5AFC;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x825d5ad8
	goto loc_825D5AD8;
loc_825D5AFC:
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5B1C:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// beq 0x825d5b64
	if (cr0.eq) goto loc_825D5B64;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// li r7,12
	ctx.r7.s64 = 12;
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// b 0x825d5bb8
	goto loc_825D5BB8;
loc_825D5B64:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// beq 0x825d5b94
	if (cr0.eq) goto loc_825D5B94;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5B94:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// b 0x825d5bc4
	goto loc_825D5BC4;
loc_825D5BA4:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_825D5BAC:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
loc_825D5BB8:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
loc_825D5BBC:
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
loc_825D5BC4:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825D5BC8:
	// rlwinm. r7,r3,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825d5c00
	if (cr0.eq) goto loc_825D5C00;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825D5C00:
	// rlwinm. r7,r3,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825d5c38
	if (cr0.eq) goto loc_825D5C38;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825D5C38:
	// rlwinm. r7,r3,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// li r6,10
	ctx.r6.s64 = 10;
	// beq 0x825d5c70
	if (cr0.eq) goto loc_825D5C70;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825D5C70:
	// rlwinm. r7,r3,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825d5ca4
	if (cr0.eq) goto loc_825D5CA4;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r5,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r5.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_825D5CA4:
	// rlwinm. r5,r3,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r7,r3,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// beq 0x825d5d18
	if (cr0.eq) goto loc_825D5D18;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r5,r5,-840
	ctx.r5.s64 = ctx.r5.s64 + -840;
loc_825D5CC4:
	// clrlwi r31,r7,30
	r31.u64 = ctx.r7.u32 & 0x3;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r29,r6,24
	r29.u64 = ctx.r6.u32 & 0xFF;
	// li r28,5
	r28.s64 = 5;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r31,r31,r30
	r31.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// add r31,r9,r5
	r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r28,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r28.u8);
	// stb r29,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r29.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x825d5cc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D5CC4;
loc_825D5D18:
	// li r7,255
	ctx.r7.s64 = 255;
	// sth r11,-62(r1)
	PPC_STORE_U16(ctx.r1.u32 + -62, r11.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, r11.u8);
	// sth r7,-64(r1)
	PPC_STORE_U16(ctx.r1.u32 + -64, ctx.r7.u16);
	// lwz r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, r11.u8);
	// lwz r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, r11.u32);
}

__attribute__((alias("__imp__sub_825D5D54"))) PPC_WEAK_FUNC(sub_825D5D54);
PPC_FUNC_IMPL(__imp__sub_825D5D54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825D5D58"))) PPC_WEAK_FUNC(sub_825D5D58);
PPC_FUNC_IMPL(__imp__sub_825D5D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// b 0x825d5d6c
	goto loc_825D5D6C;
loc_825D5D64:
	// lhzu r10,12(r3)
	ea = 12 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825D5D6C:
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x825d5d64
	if (!cr6.eq) goto loc_825D5D64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
}

__attribute__((alias("__imp__sub_825D5D7C"))) PPC_WEAK_FUNC(sub_825D5D7C);
PPC_FUNC_IMPL(__imp__sub_825D5D7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5D80"))) PPC_WEAK_FUNC(sub_825D5D80);
PPC_FUNC_IMPL(__imp__sub_825D5D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5D90"))) PPC_WEAK_FUNC(sub_825D5D90);
PPC_FUNC_IMPL(__imp__sub_825D5D90) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq cr6,0x825d5dd0
	if (cr6.eq) goto loc_825D5DD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825D5DD0:
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

__attribute__((alias("__imp__sub_825D5DE4"))) PPC_WEAK_FUNC(sub_825D5DE4);
PPC_FUNC_IMPL(__imp__sub_825D5DE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5DE8"))) PPC_WEAK_FUNC(sub_825D5DE8);
PPC_FUNC_IMPL(__imp__sub_825D5DE8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r30,r11,r5
	r30.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825d5e2c
	if (cr6.gt) goto loc_825D5E2C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825d5e40
	if (cr6.eq) goto loc_825D5E40;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x825d5e40
	goto loc_825D5E40;
loc_825D5E2C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d5e40
	if (cr6.eq) goto loc_825D5E40;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_825D5E40:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825d5e54
	if (!cr6.gt) goto loc_825D5E54;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_825D5E54:
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

__attribute__((alias("__imp__sub_825D5E68"))) PPC_WEAK_FUNC(sub_825D5E68);
PPC_FUNC_IMPL(__imp__sub_825D5E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5E6C"))) PPC_WEAK_FUNC(sub_825D5E6C);
PPC_FUNC_IMPL(__imp__sub_825D5E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5E70"))) PPC_WEAK_FUNC(sub_825D5E70);
PPC_FUNC_IMPL(__imp__sub_825D5E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm. r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r9,r9,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// beq 0x825d5e94
	if (cr0.eq) goto loc_825D5E94;
	// rlwinm. r8,r11,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825d5e94
	if (cr0.eq) goto loc_825D5E94;
	// li r9,15
	ctx.r9.s64 = 15;
loc_825D5E94:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825d5eac
	if (cr6.eq) goto loc_825D5EAC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x825d5eb0
	if (cr6.lt) goto loc_825D5EB0;
loc_825D5EAC:
	// li r11,0
	r11.s64 = 0;
loc_825D5EB0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825d5ec4
	if (cr0.eq) goto loc_825D5EC4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825d5ec8
	if (!cr6.eq) goto loc_825D5EC8;
loc_825D5EC4:
	// li r11,0
	r11.s64 = 0;
loc_825D5EC8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// beqlr 
	if (cr0.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825D5EE4"))) PPC_WEAK_FUNC(sub_825D5EE4);
PPC_FUNC_IMPL(__imp__sub_825D5EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5EE8"))) PPC_WEAK_FUNC(sub_825D5EE8);
PPC_FUNC_IMPL(__imp__sub_825D5EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// beq 0x825d5f20
	if (cr0.eq) goto loc_825D5F20;
	// rlwinm r10,r11,22,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,12,14,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// rlwinm r10,r11,29,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xFC;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,5,21,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x7E0) | (r11.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// blr 
	return;
loc_825D5F20:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825d5f48
	if (!cr0.eq) goto loc_825D5F48;
	// rlwinm r10,r11,26,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,8,18,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_825D5F48:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,21424
	r11.s64 = r11.s64 + 21424;
	// rlwinm r6,r10,8,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F;
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
	// rlwinm r4,r9,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// lbzx r6,r4,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x825d5f94
	if (cr6.lt) goto loc_825D5F94;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d5f94
	if (cr0.eq) goto loc_825D5F94;
	// lbz r10,9(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r10,9(r7)
	PPC_STORE_U8(ctx.r7.u32 + 9, ctx.r10.u8);
loc_825D5F94:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x825d5fc0
	if (cr6.lt) goto loc_825D5FC0;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d5fc0
	if (cr0.eq) goto loc_825D5FC0;
	// lbz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r10,10(r7)
	PPC_STORE_U8(ctx.r7.u32 + 10, ctx.r10.u8);
loc_825D5FC0:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x825d5fd0
	if (!cr6.lt) goto loc_825D5FD0;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x825d5ff0
	if (!cr6.eq) goto loc_825D5FF0;
loc_825D5FD0:
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825d5ff0
	if (cr0.eq) goto loc_825D5FF0;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,0,24,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,11(r7)
	PPC_STORE_U8(ctx.r7.u32 + 11, r11.u8);
loc_825D5FF0:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r10,r11,30,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r10,6,30,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwimi r6,r10,0,26,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3C) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwimi r11,r10,28,2,2
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x20000000) | (r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r9,r10,26,5,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x4000000) | (ctx.r9.u64 & 0xFFFFFFFFFBFFFFFF);
	// stb r6,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r6.u8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6040"))) PPC_WEAK_FUNC(sub_825D6040);
PPC_FUNC_IMPL(__imp__sub_825D6040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

