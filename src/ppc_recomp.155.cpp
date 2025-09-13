#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82584E08"))) PPC_WEAK_FUNC(sub_82584E08);
PPC_FUNC_IMPL(__imp__sub_82584E08) {
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
	// li r3,28
	ctx.r3.s64 = 28;
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
	// stb r31,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r31.u8);
	// stb r31,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r31.u8);
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

__attribute__((alias("__imp__sub_82584E9C"))) PPC_WEAK_FUNC(sub_82584E9C);
PPC_FUNC_IMPL(__imp__sub_82584E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584EA0"))) PPC_WEAK_FUNC(sub_82584EA0);
PPC_FUNC_IMPL(__imp__sub_82584EA0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e9fb0
	sub_822E9FB0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82584f14
	if (cr6.eq) goto loc_82584F14;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_82584F14:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82584F1C"))) PPC_WEAK_FUNC(sub_82584F1C);
PPC_FUNC_IMPL(__imp__sub_82584F1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82584F20"))) PPC_WEAK_FUNC(sub_82584F20);
PPC_FUNC_IMPL(__imp__sub_82584F20) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9fb0
	sub_822E9FB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82584f68
	if (cr6.eq) goto loc_82584F68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e5cf0
	sub_826E5CF0(ctx, base);
loc_82584F68:
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

__attribute__((alias("__imp__sub_82584F7C"))) PPC_WEAK_FUNC(sub_82584F7C);
PPC_FUNC_IMPL(__imp__sub_82584F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584F80"))) PPC_WEAK_FUNC(sub_82584F80);
PPC_FUNC_IMPL(__imp__sub_82584F80) {
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
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,0(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82584e08
	sub_82584E08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584fbc
	if (cr0.eq) goto loc_82584FBC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_82584FBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ed5e0
	sub_826ED5E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82584FD0"))) PPC_WEAK_FUNC(sub_82584FD0);
PPC_FUNC_IMPL(__imp__sub_82584FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82584FD4"))) PPC_WEAK_FUNC(sub_82584FD4);
PPC_FUNC_IMPL(__imp__sub_82584FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584FD8"))) PPC_WEAK_FUNC(sub_82584FD8);
PPC_FUNC_IMPL(__imp__sub_82584FD8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-17112
	ctx.r9.s64 = ctx.r10.s64 + -17112;
	// stw r31,22280(r11)
	PPC_STORE_U32(r11.u32 + 22280, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ba70
	sub_8241BA70(ctx, base);
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

__attribute__((alias("__imp__sub_82585024"))) PPC_WEAK_FUNC(sub_82585024);
PPC_FUNC_IMPL(__imp__sub_82585024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585028"))) PPC_WEAK_FUNC(sub_82585028);
PPC_FUNC_IMPL(__imp__sub_82585028) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-17112
	ctx.r10.s64 = r11.s64 + -17112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x826ec150
	sub_826EC150(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826e60b0
	sub_826E60B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// addi r10,r4,-17120
	ctx.r10.s64 = ctx.r4.s64 + -17120;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,22280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22280, r11.u32);
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

__attribute__((alias("__imp__sub_825850C8"))) PPC_WEAK_FUNC(sub_825850C8);
PPC_FUNC_IMPL(__imp__sub_825850C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825850CC"))) PPC_WEAK_FUNC(sub_825850CC);
PPC_FUNC_IMPL(__imp__sub_825850CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825850D0"))) PPC_WEAK_FUNC(sub_825850D0);
PPC_FUNC_IMPL(__imp__sub_825850D0) {
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
	// bl 0x82585028
	sub_82585028(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82585108
	if (cr6.eq) goto loc_82585108;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82585108:
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

__attribute__((alias("__imp__sub_8258511C"))) PPC_WEAK_FUNC(sub_8258511C);
PPC_FUNC_IMPL(__imp__sub_8258511C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585120"))) PPC_WEAK_FUNC(sub_82585120);
PPC_FUNC_IMPL(__imp__sub_82585120) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-17100
	ctx.r9.s64 = r11.s64 + -17100;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82585154
	if (cr6.eq) goto loc_82585154;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82585154:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82585164"))) PPC_WEAK_FUNC(sub_82585164);
PPC_FUNC_IMPL(__imp__sub_82585164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585168"))) PPC_WEAK_FUNC(sub_82585168);
PPC_FUNC_IMPL(__imp__sub_82585168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258516C"))) PPC_WEAK_FUNC(sub_8258516C);
PPC_FUNC_IMPL(__imp__sub_8258516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585170"))) PPC_WEAK_FUNC(sub_82585170);
PPC_FUNC_IMPL(__imp__sub_82585170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585174"))) PPC_WEAK_FUNC(sub_82585174);
PPC_FUNC_IMPL(__imp__sub_82585174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585178"))) PPC_WEAK_FUNC(sub_82585178);
PPC_FUNC_IMPL(__imp__sub_82585178) {
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
	// lbz r11,63(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 63);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825851b0
	if (!cr6.eq) goto loc_825851B0;
	// lwz r11,-12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825851B0:
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82585200
	if (cr6.eq) goto loc_82585200;
loc_825851D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// bne cr6,0x825851d0
	if (!cr6.eq) goto loc_825851D0;
loc_82585200:
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

__attribute__((alias("__imp__sub_82585214"))) PPC_WEAK_FUNC(sub_82585214);
PPC_FUNC_IMPL(__imp__sub_82585214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585218"))) PPC_WEAK_FUNC(sub_82585218);
PPC_FUNC_IMPL(__imp__sub_82585218) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258527c
	if (cr6.eq) goto loc_8258527C;
loc_8258524C:
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
	// bne cr6,0x8258524c
	if (!cr6.eq) goto loc_8258524C;
loc_8258527C:
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

__attribute__((alias("__imp__sub_82585290"))) PPC_WEAK_FUNC(sub_82585290);
PPC_FUNC_IMPL(__imp__sub_82585290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585294"))) PPC_WEAK_FUNC(sub_82585294);
PPC_FUNC_IMPL(__imp__sub_82585294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585298"))) PPC_WEAK_FUNC(sub_82585298);
PPC_FUNC_IMPL(__imp__sub_82585298) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82585300
	if (cr6.eq) goto loc_82585300;
loc_825852D0:
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
	// bne cr6,0x825852d0
	if (!cr6.eq) goto loc_825852D0;
loc_82585300:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82585318"))) PPC_WEAK_FUNC(sub_82585318);
PPC_FUNC_IMPL(__imp__sub_82585318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258531C"))) PPC_WEAK_FUNC(sub_8258531C);
PPC_FUNC_IMPL(__imp__sub_8258531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585320"))) PPC_WEAK_FUNC(sub_82585320);
PPC_FUNC_IMPL(__imp__sub_82585320) {
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
	// li r11,1
	r11.s64 = 1;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82585388
	if (cr6.eq) goto loc_82585388;
loc_82585358:
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
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x82585358
	if (!cr6.eq) goto loc_82585358;
loc_82585388:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825853A0"))) PPC_WEAK_FUNC(sub_825853A0);
PPC_FUNC_IMPL(__imp__sub_825853A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825853A4"))) PPC_WEAK_FUNC(sub_825853A4);
PPC_FUNC_IMPL(__imp__sub_825853A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825853A8"))) PPC_WEAK_FUNC(sub_825853A8);
PPC_FUNC_IMPL(__imp__sub_825853A8) {
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
	// li r11,1
	r11.s64 = 1;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, r11.u8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82585410
	if (cr6.eq) goto loc_82585410;
loc_825853E0:
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
	// bne cr6,0x825853e0
	if (!cr6.eq) goto loc_825853E0;
loc_82585410:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82585428"))) PPC_WEAK_FUNC(sub_82585428);
PPC_FUNC_IMPL(__imp__sub_82585428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258542C"))) PPC_WEAK_FUNC(sub_8258542C);
PPC_FUNC_IMPL(__imp__sub_8258542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585430"))) PPC_WEAK_FUNC(sub_82585430);
PPC_FUNC_IMPL(__imp__sub_82585430) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82585490
	if (cr6.eq) goto loc_82585490;
loc_82585460:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne cr6,0x82585460
	if (!cr6.eq) goto loc_82585460;
loc_82585490:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825854A8"))) PPC_WEAK_FUNC(sub_825854A8);
PPC_FUNC_IMPL(__imp__sub_825854A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825854AC"))) PPC_WEAK_FUNC(sub_825854AC);
PPC_FUNC_IMPL(__imp__sub_825854AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825854B0"))) PPC_WEAK_FUNC(sub_825854B0);
PPC_FUNC_IMPL(__imp__sub_825854B0) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82585510
	if (cr6.eq) goto loc_82585510;
loc_825854E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
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
	// bne cr6,0x825854e0
	if (!cr6.eq) goto loc_825854E0;
loc_82585510:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82585528"))) PPC_WEAK_FUNC(sub_82585528);
PPC_FUNC_IMPL(__imp__sub_82585528) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258552C"))) PPC_WEAK_FUNC(sub_8258552C);
PPC_FUNC_IMPL(__imp__sub_8258552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585530"))) PPC_WEAK_FUNC(sub_82585530);
PPC_FUNC_IMPL(__imp__sub_82585530) {
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
	// li r11,1
	r11.s64 = 1;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82585598
	if (cr6.eq) goto loc_82585598;
loc_82585568:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
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
	// bne cr6,0x82585568
	if (!cr6.eq) goto loc_82585568;
loc_82585598:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825855B0"))) PPC_WEAK_FUNC(sub_825855B0);
PPC_FUNC_IMPL(__imp__sub_825855B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825855B4"))) PPC_WEAK_FUNC(sub_825855B4);
PPC_FUNC_IMPL(__imp__sub_825855B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825855B8"))) PPC_WEAK_FUNC(sub_825855B8);
PPC_FUNC_IMPL(__imp__sub_825855B8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82585620
	if (cr6.eq) goto loc_82585620;
loc_825855F0:
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
	// bne cr6,0x825855f0
	if (!cr6.eq) goto loc_825855F0;
loc_82585620:
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// addi r3,r29,-12
	ctx.r3.s64 = r29.s64 + -12;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82585638"))) PPC_WEAK_FUNC(sub_82585638);
PPC_FUNC_IMPL(__imp__sub_82585638) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258563C"))) PPC_WEAK_FUNC(sub_8258563C);
PPC_FUNC_IMPL(__imp__sub_8258563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585640"))) PPC_WEAK_FUNC(sub_82585640);
PPC_FUNC_IMPL(__imp__sub_82585640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x825856b0
	if (cr6.eq) goto loc_825856B0;
loc_8258567C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
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
	// bne cr6,0x8258567c
	if (!cr6.eq) goto loc_8258567C;
loc_825856B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_825856C8"))) PPC_WEAK_FUNC(sub_825856C8);
PPC_FUNC_IMPL(__imp__sub_825856C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825856CC"))) PPC_WEAK_FUNC(sub_825856CC);
PPC_FUNC_IMPL(__imp__sub_825856CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825856D0"))) PPC_WEAK_FUNC(sub_825856D0);
PPC_FUNC_IMPL(__imp__sub_825856D0) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82585764
	if (cr6.eq) goto loc_82585764;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82585764
	if (!cr6.eq) goto loc_82585764;
	// li r11,0
	r11.s64 = 0;
	// lwz r31,36(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// stb r11,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, r11.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82585764
	if (cr6.eq) goto loc_82585764;
loc_82585734:
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
	// bne cr6,0x82585734
	if (!cr6.eq) goto loc_82585734;
loc_82585764:
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

__attribute__((alias("__imp__sub_82585778"))) PPC_WEAK_FUNC(sub_82585778);
PPC_FUNC_IMPL(__imp__sub_82585778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258577C"))) PPC_WEAK_FUNC(sub_8258577C);
PPC_FUNC_IMPL(__imp__sub_8258577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585780"))) PPC_WEAK_FUNC(sub_82585780);
PPC_FUNC_IMPL(__imp__sub_82585780) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825857A8"))) PPC_WEAK_FUNC(sub_825857A8);
PPC_FUNC_IMPL(__imp__sub_825857A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825857AC"))) PPC_WEAK_FUNC(sub_825857AC);
PPC_FUNC_IMPL(__imp__sub_825857AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825857B0"))) PPC_WEAK_FUNC(sub_825857B0);
PPC_FUNC_IMPL(__imp__sub_825857B0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-16940
	ctx.r9.s64 = r11.s64 + -16940;
	// addi r8,r10,-16996
	ctx.r8.s64 = ctx.r10.s64 + -16996;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// beq cr6,0x82585800
	if (cr6.eq) goto loc_82585800;
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
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r9.u32);
loc_82585800:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82585840
	if (cr0.lt) goto loc_82585840;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82585810:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82585834
	if (cr6.eq) goto loc_82585834;
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
loc_82585834:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82585810
	if (!cr0.lt) goto loc_82585810;
loc_82585840:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r31,r29,32
	r31.s64 = r29.s64 + 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82585868
	if (!cr6.gt) goto loc_82585868;
loc_82585850:
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
	// bgt cr6,0x82585850
	if (cr6.gt) goto loc_82585850;
loc_82585868:
	// addi r3,r29,112
	ctx.r3.s64 = r29.s64 + 112;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-17008
	ctx.r10.s64 = r11.s64 + -17008;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825858a0
	if (!cr6.gt) goto loc_825858A0;
loc_82585888:
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
	// bgt cr6,0x82585888
	if (cr6.gt) goto loc_82585888;
loc_825858A0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-17020
	ctx.r9.s64 = r11.s64 + -17020;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825858d0
	if (!cr6.gt) goto loc_825858D0;
loc_825858B8:
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
	// bgt cr6,0x825858b8
	if (cr6.gt) goto loc_825858B8;
loc_825858D0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-17100
	ctx.r9.s64 = r11.s64 + -17100;
	// addi r8,r10,-17044
	ctx.r8.s64 = ctx.r10.s64 + -17044;
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825858EC"))) PPC_WEAK_FUNC(sub_825858EC);
PPC_FUNC_IMPL(__imp__sub_825858EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825858F0"))) PPC_WEAK_FUNC(sub_825858F0);
PPC_FUNC_IMPL(__imp__sub_825858F0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82585920
	if (cr6.eq) goto loc_82585920;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82585924
	if (!cr6.eq) goto loc_82585924;
loc_82585920:
	// li r11,0
	r11.s64 = 0;
loc_82585924:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,26460(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26460);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,112
	ctx.r4.s64 = r28.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82585978
	if (!cr6.eq) goto loc_82585978;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82585978
	if (!cr6.eq) goto loc_82585978;
	// lwz r11,26460(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26460);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82585978:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82585990"))) PPC_WEAK_FUNC(sub_82585990);
PPC_FUNC_IMPL(__imp__sub_82585990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82585994"))) PPC_WEAK_FUNC(sub_82585994);
PPC_FUNC_IMPL(__imp__sub_82585994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585998"))) PPC_WEAK_FUNC(sub_82585998);
PPC_FUNC_IMPL(__imp__sub_82585998) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,26464(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26464);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82585a0c
	if (cr6.eq) goto loc_82585A0C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82585a0c
	if (!cr6.eq) goto loc_82585A0C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82585A0C:
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

__attribute__((alias("__imp__sub_82585A20"))) PPC_WEAK_FUNC(sub_82585A20);
PPC_FUNC_IMPL(__imp__sub_82585A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585A24"))) PPC_WEAK_FUNC(sub_82585A24);
PPC_FUNC_IMPL(__imp__sub_82585A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585A28"))) PPC_WEAK_FUNC(sub_82585A28);
PPC_FUNC_IMPL(__imp__sub_82585A28) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32168
	r11.s64 = -2108162048;
	// addi r30,r11,22224
	r30.s64 = r11.s64 + 22224;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82585a60
	if (cr6.eq) goto loc_82585A60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82585a64
	if (!cr6.eq) goto loc_82585A64;
loc_82585A60:
	// li r11,0
	r11.s64 = 0;
loc_82585A64:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,24912
	ctx.r3.s64 = ctx.r9.s64 + 24912;
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
	// lwz r11,26460(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26460);
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
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82585AC8"))) PPC_WEAK_FUNC(sub_82585AC8);
PPC_FUNC_IMPL(__imp__sub_82585AC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82585ACC"))) PPC_WEAK_FUNC(sub_82585ACC);
PPC_FUNC_IMPL(__imp__sub_82585ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585AD0"))) PPC_WEAK_FUNC(sub_82585AD0);
PPC_FUNC_IMPL(__imp__sub_82585AD0) {
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
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82585b68
	if (!cr6.eq) goto loc_82585B68;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r4,220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82585b68
	if (cr6.eq) goto loc_82585B68;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82585b28
	if (!cr6.eq) goto loc_82585B28;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82585B28:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82585b68
	if (!cr6.eq) goto loc_82585B68;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82585b54
	if (cr6.lt) goto loc_82585B54;
	// bne cr6,0x82585b64
	if (!cr6.eq) goto loc_82585B64;
	// stb r30,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r30.u8);
	// b 0x82585b58
	goto loc_82585B58;
loc_82585B54:
	// stb r30,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r30.u8);
loc_82585B58:
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585998
	sub_82585998(ctx, base);
loc_82585B64:
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
loc_82585B68:
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82585bb8
	if (cr6.eq) goto loc_82585BB8;
loc_82585B88:
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
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x82585b88
	if (!cr6.eq) goto loc_82585B88;
loc_82585BB8:
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

__attribute__((alias("__imp__sub_82585BCC"))) PPC_WEAK_FUNC(sub_82585BCC);
PPC_FUNC_IMPL(__imp__sub_82585BCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585BD0"))) PPC_WEAK_FUNC(sub_82585BD0);
PPC_FUNC_IMPL(__imp__sub_82585BD0) {
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
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82585c08
	if (!cr6.eq) goto loc_82585C08;
	// li r30,0
	r30.s64 = 0;
	// stb r30,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r30.u8);
	// stb r30,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r30.u8);
	// bl 0x82585998
	sub_82585998(ctx, base);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
loc_82585C08:
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82585c58
	if (cr6.eq) goto loc_82585C58;
loc_82585C28:
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
	// bne cr6,0x82585c28
	if (!cr6.eq) goto loc_82585C28;
loc_82585C58:
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

__attribute__((alias("__imp__sub_82585C6C"))) PPC_WEAK_FUNC(sub_82585C6C);
PPC_FUNC_IMPL(__imp__sub_82585C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585C70"))) PPC_WEAK_FUNC(sub_82585C70);
PPC_FUNC_IMPL(__imp__sub_82585C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e941c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eaaf8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82585de4
	if (!cr6.eq) goto loc_82585DE4;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f30.f64 = double(temp.f32);
	// lfs f29,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f29.f64 = double(temp.f32);
	// lfs f28,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	f28.f64 = double(temp.f32);
	// lwz r11,220(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f11,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82585d60
	if (cr6.eq) goto loc_82585D60;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18224
	ctx.r4.s64 = ctx.r8.s64 + 18224;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82585d60
	if (cr6.eq) goto loc_82585D60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * f0.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * f28.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82585D60:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f31,f0,f11
	f31.f64 = double(float(f0.f64 + ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f30,f10,f13
	f30.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f29,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f29.f64 = double(temp.f32);
	// fadds f28,f9,f12
	f28.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,96(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f7,100(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f6,104(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f5,108(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f30,84(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f28,88(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f29,92(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x82585998
	sub_82585998(ctx, base);
loc_82585DE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82585DF0"))) PPC_WEAK_FUNC(sub_82585DF0);
PPC_FUNC_IMPL(__imp__sub_82585DF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82585DF4"))) PPC_WEAK_FUNC(sub_82585DF4);
PPC_FUNC_IMPL(__imp__sub_82585DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585DF8"))) PPC_WEAK_FUNC(sub_82585DF8);
PPC_FUNC_IMPL(__imp__sub_82585DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93f0
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// li r20,0
	r20.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82585e30
	if (cr6.eq) goto loc_82585E30;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82585e34
	if (!cr6.eq) goto loc_82585E34;
loc_82585E30:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_82585E34:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r20,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r20.u8);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r7,r10,-17100
	ctx.r7.s64 = ctx.r10.s64 + -17100;
	// addi r6,r9,-16940
	ctx.r6.s64 = ctx.r9.s64 + -16940;
	// addi r5,r8,-16996
	ctx.r5.s64 = ctx.r8.s64 + -16996;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r7,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r7.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r5,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r5.u32);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// stb r20,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r20.u8);
	// addi r22,r29,32
	r22.s64 = r29.s64 + 32;
	// stb r30,17(r29)
	PPC_STORE_U8(r29.u32 + 17, r30.u8);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stb r20,18(r29)
	PPC_STORE_U8(r29.u32 + 18, r20.u8);
	// addi r10,r4,-17008
	ctx.r10.s64 = ctx.r4.s64 + -17008;
	// stw r20,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r20.u32);
	// addi r9,r22,20
	ctx.r9.s64 = r22.s64 + 20;
	// stw r20,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r20.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r7,12(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lfs f0,-25600(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r7,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r7.u32);
	// addi r6,r11,-20788
	ctx.r6.s64 = r11.s64 + -20788;
	// stw r10,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r10.u32);
	// lis r5,-31965
	ctx.r5.s64 = -2094858240;
	// stw r20,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r20.u32);
	// addi r3,r29,112
	ctx.r3.s64 = r29.s64 + 112;
	// stw r9,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r9.u32);
	// addi r4,r5,4360
	ctx.r4.s64 = ctx.r5.s64 + 4360;
	// stw r8,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r8.u32);
	// stw r30,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r30.u32);
	// stfs f0,76(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 76, temp.u32);
	// stb r20,72(r29)
	PPC_STORE_U8(r29.u32 + 72, r20.u8);
	// stb r20,73(r29)
	PPC_STORE_U8(r29.u32 + 73, r20.u8);
	// stb r20,74(r29)
	PPC_STORE_U8(r29.u32 + 74, r20.u8);
	// stb r20,75(r29)
	PPC_STORE_U8(r29.u32 + 75, r20.u8);
	// lfs f0,-20788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20788);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 80, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 84, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 88, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 92, temp.u32);
	// lfs f0,4360(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4360);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 96, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 100, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 104, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 108, temp.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,-17276
	ctx.r3.s64 = ctx.r3.s64 + -17276;
	// lwz r21,4(r18)
	r21.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82585fb0
	if (cr6.eq) goto loc_82585FB0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// addi r7,r10,-16792
	ctx.r7.s64 = ctx.r10.s64 + -16792;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// li r8,46
	ctx.r8.s64 = 46;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r20,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r20.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586158
	if (cr6.eq) goto loc_82586158;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82584048
	sub_82584048(ctx, base);
	// b 0x8258615c
	goto loc_8258615C;
loc_82585FB0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,30916
	ctx.r3.s64 = r11.s64 + 30916;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82586034
	if (cr6.eq) goto loc_82586034;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// addi r7,r10,-16792
	ctx.r7.s64 = ctx.r10.s64 + -16792;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r20,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r20.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586158
	if (cr6.eq) goto loc_82586158;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x825842b8
	sub_825842B8(ctx, base);
	// b 0x8258615c
	goto loc_8258615C;
loc_82586034:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-17308
	ctx.r3.s64 = r11.s64 + -17308;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825860b8
	if (cr6.eq) goto loc_825860B8;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,54
	ctx.r8.s64 = 54;
	// addi r7,r9,-16792
	ctx.r7.s64 = ctx.r9.s64 + -16792;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// rldicr r6,r20,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r20.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586158
	if (cr6.eq) goto loc_82586158;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82583fb8
	sub_82583FB8(ctx, base);
	// b 0x8258615c
	goto loc_8258615C;
loc_825860B8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-17236
	ctx.r3.s64 = r11.s64 + -17236;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r20,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r20.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r7,r10,-16792
	ctx.r7.s64 = ctx.r10.s64 + -16792;
	// beq cr6,0x8258613c
	if (cr6.eq) goto loc_8258613C;
	// li r8,58
	ctx.r8.s64 = 58;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586158
	if (cr6.eq) goto loc_82586158;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82584368
	sub_82584368(ctx, base);
	// b 0x8258615c
	goto loc_8258615C;
loc_8258613C:
	// li r8,62
	ctx.r8.s64 = 62;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586158
	if (cr6.eq) goto loc_82586158;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82583e98
	sub_82583E98(ctx, base);
	// b 0x8258615c
	goto loc_8258615C;
loc_82586158:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_8258615C:
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-17480
	r31.s64 = r11.s64 + -17480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82586204
	if (cr6.eq) goto loc_82586204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-20772(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20772);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x825861f0
	if (!cr6.eq) goto loc_825861F0;
	// stw r20,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r20.u32);
	// b 0x82586204
	goto loc_82586204;
loc_825861F0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-20768(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20768);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82586204
	if (!cr6.eq) goto loc_82586204;
	// stw r30,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r30.u32);
loc_82586204:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-16804
	r31.s64 = r11.s64 + -16804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258626c
	if (cr6.eq) goto loc_8258626C;
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
	// beq cr6,0x8258626c
	if (cr6.eq) goto loc_8258626C;
	// bl 0x82343920
	sub_82343920(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bne cr6,0x82586270
	if (!cr6.eq) goto loc_82586270;
loc_8258626C:
	// addi r27,r1,240
	r27.s64 = ctx.r1.s64 + 240;
loc_82586270:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r19,r11,18440
	r19.s64 = r11.s64 + 18440;
	// beq cr6,0x82586478
	if (cr6.eq) goto loc_82586478;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82586478
	if (!cr6.gt) goto loc_82586478;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// addi r25,r11,-16816
	r25.s64 = r11.s64 + -16816;
	// addi r24,r10,-16828
	r24.s64 = ctx.r10.s64 + -16828;
loc_825862E4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82586360
	if (cr6.eq) goto loc_82586360;
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
	// beq cr6,0x82586360
	if (cr6.eq) goto loc_82586360;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82586364
	if (!cr6.eq) goto loc_82586364;
loc_82586360:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82586364:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825863e0
	if (cr6.eq) goto loc_825863E0;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne cr6,0x825863e4
	if (!cr6.eq) goto loc_825863E4;
loc_825863E0:
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
loc_825863E4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,22280(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 22280);
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82584ea0
	sub_82584EA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x8258641c
	if (!cr6.eq) goto loc_8258641C;
	// mr r31,r20
	r31.u64 = r20.u64;
loc_8258641C:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82586444
	if (!cr6.gt) goto loc_82586444;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82586444:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r22)
	PPC_STORE_U32(r22.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82586464
	if (cr0.eq) goto loc_82586464;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_82586464:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// blt cr6,0x825862e4
	if (cr6.lt) goto loc_825862E4;
loc_82586478:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-16844
	r31.s64 = r11.s64 + -16844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825864d4
	if (cr6.eq) goto loc_825864D4;
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bne cr6,0x825864d8
	if (!cr6.eq) goto loc_825864D8;
loc_825864D4:
	// addi r27,r1,240
	r27.s64 = ctx.r1.s64 + 240;
loc_825864D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825866d8
	if (cr6.eq) goto loc_825866D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825866d8
	if (!cr6.gt) goto loc_825866D8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// addi r25,r11,-16860
	r25.s64 = r11.s64 + -16860;
	// addi r24,r10,-16880
	r24.s64 = ctx.r10.s64 + -16880;
loc_82586544:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825865c0
	if (cr6.eq) goto loc_825865C0;
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
	// beq cr6,0x825865c0
	if (cr6.eq) goto loc_825865C0;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825865c4
	if (!cr6.eq) goto loc_825865C4;
loc_825865C0:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825865C4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82586640
	if (cr6.eq) goto loc_82586640;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne cr6,0x82586644
	if (!cr6.eq) goto loc_82586644;
loc_82586640:
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
loc_82586644:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,22284(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 22284);
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82584b30
	sub_82584B30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x8258667c
	if (!cr6.eq) goto loc_8258667C;
	// mr r31,r20
	r31.u64 = r20.u64;
loc_8258667C:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825866a4
	if (!cr6.gt) goto loc_825866A4;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825866A4:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r22)
	PPC_STORE_U32(r22.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825866c4
	if (cr0.eq) goto loc_825866C4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_825866C4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// blt cr6,0x82586544
	if (cr6.lt) goto loc_82586544;
loc_825866D8:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
}

__attribute__((alias("__imp__sub_825866E8"))) PPC_WEAK_FUNC(sub_825866E8);
PPC_FUNC_IMPL(__imp__sub_825866E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_825866EC"))) PPC_WEAK_FUNC(sub_825866EC);
PPC_FUNC_IMPL(__imp__sub_825866EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825866F0"))) PPC_WEAK_FUNC(sub_825866F0);
PPC_FUNC_IMPL(__imp__sub_825866F0) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-17044
	ctx.r9.s64 = r11.s64 + -17044;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82586724
	if (cr6.eq) goto loc_82586724;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586724:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82586734"))) PPC_WEAK_FUNC(sub_82586734);
PPC_FUNC_IMPL(__imp__sub_82586734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586738"))) PPC_WEAK_FUNC(sub_82586738);
PPC_FUNC_IMPL(__imp__sub_82586738) {
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
	// addi r9,r11,-17020
	ctx.r9.s64 = r11.s64 + -17020;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8258677c
	if (!cr6.gt) goto loc_8258677C;
loc_82586764:
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
	// bgt cr6,0x82586764
	if (cr6.gt) goto loc_82586764;
loc_8258677C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82586794
	if (cr6.eq) goto loc_82586794;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586794:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825867A4"))) PPC_WEAK_FUNC(sub_825867A4);
PPC_FUNC_IMPL(__imp__sub_825867A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825867A8"))) PPC_WEAK_FUNC(sub_825867A8);
PPC_FUNC_IMPL(__imp__sub_825867A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-17008
	ctx.r9.s64 = r11.s64 + -17008;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825867d8
	if (!cr6.gt) goto loc_825867D8;
loc_825867C0:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825867c0
	if (cr6.gt) goto loc_825867C0;
loc_825867D8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-17020
	ctx.r9.s64 = r11.s64 + -17020;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_825867F0:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825867f0
	if (cr6.gt) goto loc_825867F0;
}

__attribute__((alias("__imp__sub_82586808"))) PPC_WEAK_FUNC(sub_82586808);
PPC_FUNC_IMPL(__imp__sub_82586808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258680C"))) PPC_WEAK_FUNC(sub_8258680C);
PPC_FUNC_IMPL(__imp__sub_8258680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586810"))) PPC_WEAK_FUNC(sub_82586810);
PPC_FUNC_IMPL(__imp__sub_82586810) {
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
	// bl 0x825867a8
	sub_825867A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82586848
	if (cr6.eq) goto loc_82586848;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586848:
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

__attribute__((alias("__imp__sub_8258685C"))) PPC_WEAK_FUNC(sub_8258685C);
PPC_FUNC_IMPL(__imp__sub_8258685C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586860"))) PPC_WEAK_FUNC(sub_82586860);
PPC_FUNC_IMPL(__imp__sub_82586860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82586864"))) PPC_WEAK_FUNC(sub_82586864);
PPC_FUNC_IMPL(__imp__sub_82586864) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82586868
	goto loc_82586868;
loc_82586868:
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
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825868a0
	if (cr6.eq) goto loc_825868A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825868A0:
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

__attribute__((alias("__imp__sub_82586868"))) PPC_WEAK_FUNC(sub_82586868);
PPC_FUNC_IMPL(__imp__sub_82586868) {
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
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825868a0
	if (cr6.eq) goto loc_825868A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825868A0:
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

__attribute__((alias("__imp__sub_825868B8"))) PPC_WEAK_FUNC(sub_825868B8);
PPC_FUNC_IMPL(__imp__sub_825868B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258691c
	if (cr6.eq) goto loc_8258691C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82591970
	sub_82591970(ctx, base);
	// b 0x82586920
	goto loc_82586920;
loc_8258691C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586920:
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

__attribute__((alias("__imp__sub_82586934"))) PPC_WEAK_FUNC(sub_82586934);
PPC_FUNC_IMPL(__imp__sub_82586934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586938"))) PPC_WEAK_FUNC(sub_82586938);
PPC_FUNC_IMPL(__imp__sub_82586938) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,212
	ctx.r3.s64 = 212;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258699c
	if (cr6.eq) goto loc_8258699C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82590e48
	sub_82590E48(ctx, base);
	// b 0x825869a0
	goto loc_825869A0;
loc_8258699C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825869A0:
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

__attribute__((alias("__imp__sub_825869B4"))) PPC_WEAK_FUNC(sub_825869B4);
PPC_FUNC_IMPL(__imp__sub_825869B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825869B8"))) PPC_WEAK_FUNC(sub_825869B8);
PPC_FUNC_IMPL(__imp__sub_825869B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,184
	ctx.r3.s64 = 184;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586a1c
	if (cr6.eq) goto loc_82586A1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8258f600
	sub_8258F600(ctx, base);
	// b 0x82586a20
	goto loc_82586A20;
loc_82586A1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586A20:
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

__attribute__((alias("__imp__sub_82586A34"))) PPC_WEAK_FUNC(sub_82586A34);
PPC_FUNC_IMPL(__imp__sub_82586A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586A38"))) PPC_WEAK_FUNC(sub_82586A38);
PPC_FUNC_IMPL(__imp__sub_82586A38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586a9c
	if (cr6.eq) goto loc_82586A9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82591828
	sub_82591828(ctx, base);
	// b 0x82586aa0
	goto loc_82586AA0;
loc_82586A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586AA0:
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

__attribute__((alias("__imp__sub_82586AB4"))) PPC_WEAK_FUNC(sub_82586AB4);
PPC_FUNC_IMPL(__imp__sub_82586AB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586AB8"))) PPC_WEAK_FUNC(sub_82586AB8);
PPC_FUNC_IMPL(__imp__sub_82586AB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586b1c
	if (cr6.eq) goto loc_82586B1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82590880
	sub_82590880(ctx, base);
	// b 0x82586b20
	goto loc_82586B20;
loc_82586B1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586B20:
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

__attribute__((alias("__imp__sub_82586B34"))) PPC_WEAK_FUNC(sub_82586B34);
PPC_FUNC_IMPL(__imp__sub_82586B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586B38"))) PPC_WEAK_FUNC(sub_82586B38);
PPC_FUNC_IMPL(__imp__sub_82586B38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586b9c
	if (cr6.eq) goto loc_82586B9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825913a8
	sub_825913A8(ctx, base);
	// b 0x82586ba0
	goto loc_82586BA0;
loc_82586B9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586BA0:
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

__attribute__((alias("__imp__sub_82586BB4"))) PPC_WEAK_FUNC(sub_82586BB4);
PPC_FUNC_IMPL(__imp__sub_82586BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586BB8"))) PPC_WEAK_FUNC(sub_82586BB8);
PPC_FUNC_IMPL(__imp__sub_82586BB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586c1c
	if (cr6.eq) goto loc_82586C1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82590ab0
	sub_82590AB0(ctx, base);
	// b 0x82586c20
	goto loc_82586C20;
loc_82586C1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586C20:
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

__attribute__((alias("__imp__sub_82586C34"))) PPC_WEAK_FUNC(sub_82586C34);
PPC_FUNC_IMPL(__imp__sub_82586C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586C38"))) PPC_WEAK_FUNC(sub_82586C38);
PPC_FUNC_IMPL(__imp__sub_82586C38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,156
	ctx.r3.s64 = 156;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586c9c
	if (cr6.eq) goto loc_82586C9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8258ee08
	sub_8258EE08(ctx, base);
	// b 0x82586ca0
	goto loc_82586CA0;
loc_82586C9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586CA0:
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

__attribute__((alias("__imp__sub_82586CB4"))) PPC_WEAK_FUNC(sub_82586CB4);
PPC_FUNC_IMPL(__imp__sub_82586CB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586CB8"))) PPC_WEAK_FUNC(sub_82586CB8);
PPC_FUNC_IMPL(__imp__sub_82586CB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586d1c
	if (cr6.eq) goto loc_82586D1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d1d08
	sub_822D1D08(ctx, base);
	// b 0x82586d20
	goto loc_82586D20;
loc_82586D1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586D20:
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

__attribute__((alias("__imp__sub_82586D34"))) PPC_WEAK_FUNC(sub_82586D34);
PPC_FUNC_IMPL(__imp__sub_82586D34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586D38"))) PPC_WEAK_FUNC(sub_82586D38);
PPC_FUNC_IMPL(__imp__sub_82586D38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,320
	ctx.r3.s64 = 320;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586d9c
	if (cr6.eq) goto loc_82586D9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82592f58
	sub_82592F58(ctx, base);
	// b 0x82586da0
	goto loc_82586DA0;
loc_82586D9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586DA0:
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

__attribute__((alias("__imp__sub_82586DB4"))) PPC_WEAK_FUNC(sub_82586DB4);
PPC_FUNC_IMPL(__imp__sub_82586DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586DB8"))) PPC_WEAK_FUNC(sub_82586DB8);
PPC_FUNC_IMPL(__imp__sub_82586DB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586e1c
	if (cr6.eq) goto loc_82586E1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d20a0
	sub_822D20A0(ctx, base);
	// b 0x82586e20
	goto loc_82586E20;
loc_82586E1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586E20:
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

__attribute__((alias("__imp__sub_82586E34"))) PPC_WEAK_FUNC(sub_82586E34);
PPC_FUNC_IMPL(__imp__sub_82586E34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586E38"))) PPC_WEAK_FUNC(sub_82586E38);
PPC_FUNC_IMPL(__imp__sub_82586E38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586e9c
	if (cr6.eq) goto loc_82586E9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825928d0
	sub_825928D0(ctx, base);
	// b 0x82586ea0
	goto loc_82586EA0;
loc_82586E9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586EA0:
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

__attribute__((alias("__imp__sub_82586EB4"))) PPC_WEAK_FUNC(sub_82586EB4);
PPC_FUNC_IMPL(__imp__sub_82586EB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586EB8"))) PPC_WEAK_FUNC(sub_82586EB8);
PPC_FUNC_IMPL(__imp__sub_82586EB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586f1c
	if (cr6.eq) goto loc_82586F1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82592088
	sub_82592088(ctx, base);
	// b 0x82586f20
	goto loc_82586F20;
loc_82586F1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586F20:
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

__attribute__((alias("__imp__sub_82586F34"))) PPC_WEAK_FUNC(sub_82586F34);
PPC_FUNC_IMPL(__imp__sub_82586F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586F38"))) PPC_WEAK_FUNC(sub_82586F38);
PPC_FUNC_IMPL(__imp__sub_82586F38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82586f9c
	if (cr6.eq) goto loc_82586F9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82591b40
	sub_82591B40(ctx, base);
	// b 0x82586fa0
	goto loc_82586FA0;
loc_82586F9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82586FA0:
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

__attribute__((alias("__imp__sub_82586FB4"))) PPC_WEAK_FUNC(sub_82586FB4);
PPC_FUNC_IMPL(__imp__sub_82586FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586FB8"))) PPC_WEAK_FUNC(sub_82586FB8);
PPC_FUNC_IMPL(__imp__sub_82586FB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258701c
	if (cr6.eq) goto loc_8258701C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82591d38
	sub_82591D38(ctx, base);
	// b 0x82587020
	goto loc_82587020;
loc_8258701C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587020:
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

__attribute__((alias("__imp__sub_82587034"))) PPC_WEAK_FUNC(sub_82587034);
PPC_FUNC_IMPL(__imp__sub_82587034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587038"))) PPC_WEAK_FUNC(sub_82587038);
PPC_FUNC_IMPL(__imp__sub_82587038) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258709c
	if (cr6.eq) goto loc_8258709C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82593a58
	sub_82593A58(ctx, base);
	// b 0x825870a0
	goto loc_825870A0;
loc_8258709C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825870A0:
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

__attribute__((alias("__imp__sub_825870B4"))) PPC_WEAK_FUNC(sub_825870B4);
PPC_FUNC_IMPL(__imp__sub_825870B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825870B8"))) PPC_WEAK_FUNC(sub_825870B8);
PPC_FUNC_IMPL(__imp__sub_825870B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,152
	ctx.r3.s64 = 152;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258711c
	if (cr6.eq) goto loc_8258711C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82593ca0
	sub_82593CA0(ctx, base);
	// b 0x82587120
	goto loc_82587120;
loc_8258711C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587120:
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

__attribute__((alias("__imp__sub_82587134"))) PPC_WEAK_FUNC(sub_82587134);
PPC_FUNC_IMPL(__imp__sub_82587134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587138"))) PPC_WEAK_FUNC(sub_82587138);
PPC_FUNC_IMPL(__imp__sub_82587138) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,156
	ctx.r3.s64 = 156;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258719c
	if (cr6.eq) goto loc_8258719C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82594888
	sub_82594888(ctx, base);
	// b 0x825871a0
	goto loc_825871A0;
loc_8258719C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825871A0:
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

__attribute__((alias("__imp__sub_825871B4"))) PPC_WEAK_FUNC(sub_825871B4);
PPC_FUNC_IMPL(__imp__sub_825871B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825871B8"))) PPC_WEAK_FUNC(sub_825871B8);
PPC_FUNC_IMPL(__imp__sub_825871B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258721c
	if (cr6.eq) goto loc_8258721C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82594db0
	sub_82594DB0(ctx, base);
	// b 0x82587220
	goto loc_82587220;
loc_8258721C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587220:
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

__attribute__((alias("__imp__sub_82587234"))) PPC_WEAK_FUNC(sub_82587234);
PPC_FUNC_IMPL(__imp__sub_82587234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587238"))) PPC_WEAK_FUNC(sub_82587238);
PPC_FUNC_IMPL(__imp__sub_82587238) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258729c
	if (cr6.eq) goto loc_8258729C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82595120
	sub_82595120(ctx, base);
	// b 0x825872a0
	goto loc_825872A0;
loc_8258729C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825872A0:
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

__attribute__((alias("__imp__sub_825872B4"))) PPC_WEAK_FUNC(sub_825872B4);
PPC_FUNC_IMPL(__imp__sub_825872B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825872B8"))) PPC_WEAK_FUNC(sub_825872B8);
PPC_FUNC_IMPL(__imp__sub_825872B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258731c
	if (cr6.eq) goto loc_8258731C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82594238
	sub_82594238(ctx, base);
	// b 0x82587320
	goto loc_82587320;
loc_8258731C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587320:
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

__attribute__((alias("__imp__sub_82587334"))) PPC_WEAK_FUNC(sub_82587334);
PPC_FUNC_IMPL(__imp__sub_82587334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587338"))) PPC_WEAK_FUNC(sub_82587338);
PPC_FUNC_IMPL(__imp__sub_82587338) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258739c
	if (cr6.eq) goto loc_8258739C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d14f0
	sub_822D14F0(ctx, base);
	// b 0x825873a0
	goto loc_825873A0;
loc_8258739C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825873A0:
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

__attribute__((alias("__imp__sub_825873B4"))) PPC_WEAK_FUNC(sub_825873B4);
PPC_FUNC_IMPL(__imp__sub_825873B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825873B8"))) PPC_WEAK_FUNC(sub_825873B8);
PPC_FUNC_IMPL(__imp__sub_825873B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258741c
	if (cr6.eq) goto loc_8258741C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825937f8
	sub_825937F8(ctx, base);
	// b 0x82587420
	goto loc_82587420;
loc_8258741C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587420:
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

__attribute__((alias("__imp__sub_82587434"))) PPC_WEAK_FUNC(sub_82587434);
PPC_FUNC_IMPL(__imp__sub_82587434) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587438"))) PPC_WEAK_FUNC(sub_82587438);
PPC_FUNC_IMPL(__imp__sub_82587438) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258749c
	if (cr6.eq) goto loc_8258749C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82593928
	sub_82593928(ctx, base);
	// b 0x825874a0
	goto loc_825874A0;
loc_8258749C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825874A0:
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

__attribute__((alias("__imp__sub_825874B4"))) PPC_WEAK_FUNC(sub_825874B4);
PPC_FUNC_IMPL(__imp__sub_825874B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825874B8"))) PPC_WEAK_FUNC(sub_825874B8);
PPC_FUNC_IMPL(__imp__sub_825874B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258751c
	if (cr6.eq) goto loc_8258751C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82593598
	sub_82593598(ctx, base);
	// b 0x82587520
	goto loc_82587520;
loc_8258751C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587520:
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

__attribute__((alias("__imp__sub_82587534"))) PPC_WEAK_FUNC(sub_82587534);
PPC_FUNC_IMPL(__imp__sub_82587534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587538"))) PPC_WEAK_FUNC(sub_82587538);
PPC_FUNC_IMPL(__imp__sub_82587538) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258759c
	if (cr6.eq) goto loc_8258759C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825936c8
	sub_825936C8(ctx, base);
	// b 0x825875a0
	goto loc_825875A0;
loc_8258759C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825875A0:
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

__attribute__((alias("__imp__sub_825875B4"))) PPC_WEAK_FUNC(sub_825875B4);
PPC_FUNC_IMPL(__imp__sub_825875B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825875B8"))) PPC_WEAK_FUNC(sub_825875B8);
PPC_FUNC_IMPL(__imp__sub_825875B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258761c
	if (cr6.eq) goto loc_8258761C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8259a3c8
	sub_8259A3C8(ctx, base);
	// b 0x82587620
	goto loc_82587620;
loc_8258761C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587620:
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

__attribute__((alias("__imp__sub_82587634"))) PPC_WEAK_FUNC(sub_82587634);
PPC_FUNC_IMPL(__imp__sub_82587634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587638"))) PPC_WEAK_FUNC(sub_82587638);
PPC_FUNC_IMPL(__imp__sub_82587638) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,156
	ctx.r3.s64 = 156;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258769c
	if (cr6.eq) goto loc_8258769C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8259a7e8
	sub_8259A7E8(ctx, base);
	// b 0x825876a0
	goto loc_825876A0;
loc_8258769C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825876A0:
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

__attribute__((alias("__imp__sub_825876B4"))) PPC_WEAK_FUNC(sub_825876B4);
PPC_FUNC_IMPL(__imp__sub_825876B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825876B8"))) PPC_WEAK_FUNC(sub_825876B8);
PPC_FUNC_IMPL(__imp__sub_825876B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,268
	ctx.r3.s64 = 268;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258771c
	if (cr6.eq) goto loc_8258771C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82595bd0
	sub_82595BD0(ctx, base);
	// b 0x82587720
	goto loc_82587720;
loc_8258771C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587720:
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

__attribute__((alias("__imp__sub_82587734"))) PPC_WEAK_FUNC(sub_82587734);
PPC_FUNC_IMPL(__imp__sub_82587734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587738"))) PPC_WEAK_FUNC(sub_82587738);
PPC_FUNC_IMPL(__imp__sub_82587738) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258779c
	if (cr6.eq) goto loc_8258779C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82596788
	sub_82596788(ctx, base);
	// b 0x825877a0
	goto loc_825877A0;
loc_8258779C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825877A0:
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

__attribute__((alias("__imp__sub_825877B4"))) PPC_WEAK_FUNC(sub_825877B4);
PPC_FUNC_IMPL(__imp__sub_825877B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825877B8"))) PPC_WEAK_FUNC(sub_825877B8);
PPC_FUNC_IMPL(__imp__sub_825877B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258781c
	if (cr6.eq) goto loc_8258781C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8259afd0
	sub_8259AFD0(ctx, base);
	// b 0x82587820
	goto loc_82587820;
loc_8258781C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587820:
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

__attribute__((alias("__imp__sub_82587834"))) PPC_WEAK_FUNC(sub_82587834);
PPC_FUNC_IMPL(__imp__sub_82587834) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587838"))) PPC_WEAK_FUNC(sub_82587838);
PPC_FUNC_IMPL(__imp__sub_82587838) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,216
	ctx.r3.s64 = 216;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258789c
	if (cr6.eq) goto loc_8258789C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82597918
	sub_82597918(ctx, base);
	// b 0x825878a0
	goto loc_825878A0;
loc_8258789C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825878A0:
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

__attribute__((alias("__imp__sub_825878B4"))) PPC_WEAK_FUNC(sub_825878B4);
PPC_FUNC_IMPL(__imp__sub_825878B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825878B8"))) PPC_WEAK_FUNC(sub_825878B8);
PPC_FUNC_IMPL(__imp__sub_825878B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258791c
	if (cr6.eq) goto loc_8258791C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82596d48
	sub_82596D48(ctx, base);
	// b 0x82587920
	goto loc_82587920;
loc_8258791C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587920:
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

__attribute__((alias("__imp__sub_82587934"))) PPC_WEAK_FUNC(sub_82587934);
PPC_FUNC_IMPL(__imp__sub_82587934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587938"))) PPC_WEAK_FUNC(sub_82587938);
PPC_FUNC_IMPL(__imp__sub_82587938) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,212
	ctx.r3.s64 = 212;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258799c
	if (cr6.eq) goto loc_8258799C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825972b8
	sub_825972B8(ctx, base);
	// b 0x825879a0
	goto loc_825879A0;
loc_8258799C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825879A0:
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

__attribute__((alias("__imp__sub_825879B4"))) PPC_WEAK_FUNC(sub_825879B4);
PPC_FUNC_IMPL(__imp__sub_825879B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825879B8"))) PPC_WEAK_FUNC(sub_825879B8);
PPC_FUNC_IMPL(__imp__sub_825879B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587a1c
	if (cr6.eq) goto loc_82587A1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82597ed8
	sub_82597ED8(ctx, base);
	// b 0x82587a20
	goto loc_82587A20;
loc_82587A1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587A20:
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

__attribute__((alias("__imp__sub_82587A34"))) PPC_WEAK_FUNC(sub_82587A34);
PPC_FUNC_IMPL(__imp__sub_82587A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587A38"))) PPC_WEAK_FUNC(sub_82587A38);
PPC_FUNC_IMPL(__imp__sub_82587A38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,216
	ctx.r3.s64 = 216;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587a9c
	if (cr6.eq) goto loc_82587A9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82599cf0
	sub_82599CF0(ctx, base);
	// b 0x82587aa0
	goto loc_82587AA0;
loc_82587A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587AA0:
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

__attribute__((alias("__imp__sub_82587AB4"))) PPC_WEAK_FUNC(sub_82587AB4);
PPC_FUNC_IMPL(__imp__sub_82587AB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587AB8"))) PPC_WEAK_FUNC(sub_82587AB8);
PPC_FUNC_IMPL(__imp__sub_82587AB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16696
	ctx.r7.s64 = ctx.r10.s64 + -16696;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587b1c
	if (cr6.eq) goto loc_82587B1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82599eb8
	sub_82599EB8(ctx, base);
	// b 0x82587b20
	goto loc_82587B20;
loc_82587B1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587B20:
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

__attribute__((alias("__imp__sub_82587B34"))) PPC_WEAK_FUNC(sub_82587B34);
PPC_FUNC_IMPL(__imp__sub_82587B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587B38"))) PPC_WEAK_FUNC(sub_82587B38);
PPC_FUNC_IMPL(__imp__sub_82587B38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16576
	ctx.r7.s64 = ctx.r10.s64 + -16576;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,120
	ctx.r3.s64 = 120;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587b9c
	if (cr6.eq) goto loc_82587B9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82598740
	sub_82598740(ctx, base);
	// b 0x82587ba0
	goto loc_82587BA0;
loc_82587B9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587BA0:
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

__attribute__((alias("__imp__sub_82587BB4"))) PPC_WEAK_FUNC(sub_82587BB4);
PPC_FUNC_IMPL(__imp__sub_82587BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587BB8"))) PPC_WEAK_FUNC(sub_82587BB8);
PPC_FUNC_IMPL(__imp__sub_82587BB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16448
	ctx.r7.s64 = ctx.r10.s64 + -16448;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587c1c
	if (cr6.eq) goto loc_82587C1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825991b0
	sub_825991B0(ctx, base);
	// b 0x82587c20
	goto loc_82587C20;
loc_82587C1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587C20:
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

__attribute__((alias("__imp__sub_82587C34"))) PPC_WEAK_FUNC(sub_82587C34);
PPC_FUNC_IMPL(__imp__sub_82587C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587C38"))) PPC_WEAK_FUNC(sub_82587C38);
PPC_FUNC_IMPL(__imp__sub_82587C38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16448
	ctx.r7.s64 = ctx.r10.s64 + -16448;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587c9c
	if (cr6.eq) goto loc_82587C9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82598f08
	sub_82598F08(ctx, base);
	// b 0x82587ca0
	goto loc_82587CA0;
loc_82587C9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587CA0:
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

__attribute__((alias("__imp__sub_82587CB4"))) PPC_WEAK_FUNC(sub_82587CB4);
PPC_FUNC_IMPL(__imp__sub_82587CB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587CB8"))) PPC_WEAK_FUNC(sub_82587CB8);
PPC_FUNC_IMPL(__imp__sub_82587CB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-16448
	ctx.r7.s64 = ctx.r10.s64 + -16448;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82587d1c
	if (cr6.eq) goto loc_82587D1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825995a8
	sub_825995A8(ctx, base);
	// b 0x82587d20
	goto loc_82587D20;
loc_82587D1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82587D20:
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

__attribute__((alias("__imp__sub_82587D34"))) PPC_WEAK_FUNC(sub_82587D34);
PPC_FUNC_IMPL(__imp__sub_82587D34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82587D38"))) PPC_WEAK_FUNC(sub_82587D38);
PPC_FUNC_IMPL(__imp__sub_82587D38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-16312
	ctx.r10.s64 = r11.s64 + -16312;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82587d78
	if (cr6.eq) goto loc_82587D78;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82587D78:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-20604
	ctx.r4.s64 = r11.s64 + -20604;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r10,-20608
	ctx.r4.s64 = ctx.r10.s64 + -20608;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r9,-20612
	ctx.r4.s64 = ctx.r9.s64 + -20612;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r8,-20616
	ctx.r4.s64 = ctx.r8.s64 + -20616;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r7,-20620
	ctx.r4.s64 = ctx.r7.s64 + -20620;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r6,-20624
	ctx.r4.s64 = ctx.r6.s64 + -20624;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r5,-20628
	ctx.r4.s64 = ctx.r5.s64 + -20628;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r4,-20632
	ctx.r4.s64 = ctx.r4.s64 + -20632;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r11,-20636
	ctx.r4.s64 = r11.s64 + -20636;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r10,-20640
	ctx.r4.s64 = ctx.r10.s64 + -20640;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r9,-20644
	ctx.r4.s64 = ctx.r9.s64 + -20644;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r8,-20648
	ctx.r4.s64 = ctx.r8.s64 + -20648;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r7,-20652
	ctx.r4.s64 = ctx.r7.s64 + -20652;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r6,-20656
	ctx.r4.s64 = ctx.r6.s64 + -20656;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r5,-20660
	ctx.r4.s64 = ctx.r5.s64 + -20660;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r4,-20664
	ctx.r4.s64 = ctx.r4.s64 + -20664;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r11,-20668
	ctx.r4.s64 = r11.s64 + -20668;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r10,-20672
	ctx.r4.s64 = ctx.r10.s64 + -20672;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r9,-20676
	ctx.r4.s64 = ctx.r9.s64 + -20676;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r8,-20680
	ctx.r4.s64 = ctx.r8.s64 + -20680;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r7,-20684
	ctx.r4.s64 = ctx.r7.s64 + -20684;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r6,-20688
	ctx.r4.s64 = ctx.r6.s64 + -20688;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r5,-20692
	ctx.r4.s64 = ctx.r5.s64 + -20692;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r4,-20696
	ctx.r4.s64 = ctx.r4.s64 + -20696;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r11,-20700
	ctx.r4.s64 = r11.s64 + -20700;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r10,-20704
	ctx.r4.s64 = ctx.r10.s64 + -20704;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r9,-20708
	ctx.r4.s64 = ctx.r9.s64 + -20708;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r8,-20712
	ctx.r4.s64 = ctx.r8.s64 + -20712;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r7,-20716
	ctx.r4.s64 = ctx.r7.s64 + -20716;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r6,-20720
	ctx.r4.s64 = ctx.r6.s64 + -20720;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r5,-20724
	ctx.r4.s64 = ctx.r5.s64 + -20724;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r4,-20728
	ctx.r4.s64 = ctx.r4.s64 + -20728;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r11,-20732
	ctx.r4.s64 = r11.s64 + -20732;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r10,-20736
	ctx.r4.s64 = ctx.r10.s64 + -20736;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r9,-20740
	ctx.r4.s64 = ctx.r9.s64 + -20740;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r8,-20744
	ctx.r4.s64 = ctx.r8.s64 + -20744;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r3,22276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22276);
	// addi r4,r7,-20748
	ctx.r4.s64 = ctx.r7.s64 + -20748;
	// bl 0x82584540
	sub_82584540(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r4,r5,-20752
	ctx.r4.s64 = ctx.r5.s64 + -20752;
	// lwz r3,22280(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22280);
	// bl 0x82584f20
	sub_82584F20(ctx, base);
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// addi r4,r4,-20756
	ctx.r4.s64 = ctx.r4.s64 + -20756;
	// lwz r3,22284(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22284);
	// bl 0x82584bb0
	sub_82584BB0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,22284(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22284);
	// addi r4,r11,-20760
	ctx.r4.s64 = r11.s64 + -20760;
	// bl 0x82584bb0
	sub_82584BB0(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,22284(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22284);
	// addi r4,r10,-20764
	ctx.r4.s64 = ctx.r10.s64 + -20764;
	// bl 0x82584bb0
	sub_82584BB0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82588038
	if (cr6.eq) goto loc_82588038;
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
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82588038:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258805c
	if (cr6.eq) goto loc_8258805C;
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
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8258805C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82588060"))) PPC_WEAK_FUNC(sub_82588060);
PPC_FUNC_IMPL(__imp__sub_82588060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82588064"))) PPC_WEAK_FUNC(sub_82588064);
PPC_FUNC_IMPL(__imp__sub_82588064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82588068"))) PPC_WEAK_FUNC(sub_82588068);
PPC_FUNC_IMPL(__imp__sub_82588068) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x825880d0
	if (cr6.eq) goto loc_825880D0;
loc_82588098:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x82588098
	if (!cr6.eq) goto loc_82588098;
loc_825880D0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8258810c
	if (!cr6.gt) goto loc_8258810C;
	// li r29,0
	r29.s64 = 0;
loc_825880E8:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82584858
	sub_82584858(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x825880e8
	if (cr6.lt) goto loc_825880E8;
loc_8258810C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82588110"))) PPC_WEAK_FUNC(sub_82588110);
PPC_FUNC_IMPL(__imp__sub_82588110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82588114"))) PPC_WEAK_FUNC(sub_82588114);
PPC_FUNC_IMPL(__imp__sub_82588114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82588118"))) PPC_WEAK_FUNC(sub_82588118);
PPC_FUNC_IMPL(__imp__sub_82588118) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82588170
	if (!cr6.gt) goto loc_82588170;
	// li r30,0
	r30.s64 = 0;
loc_82588140:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82584770
	sub_82584770(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82588160
	if (!cr6.eq) goto loc_82588160;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82588160:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82588140
	if (cr6.lt) goto loc_82588140;
loc_82588170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82588174"))) PPC_WEAK_FUNC(sub_82588174);
PPC_FUNC_IMPL(__imp__sub_82588174) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82588178"))) PPC_WEAK_FUNC(sub_82588178);
PPC_FUNC_IMPL(__imp__sub_82588178) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258819c
	if (cr6.eq) goto loc_8258819C;
	// bl 0x826e6440
	sub_826E6440(ctx, base);
loc_8258819C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82589288
	sub_82589288(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825891c0
	sub_825891C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825881BC"))) PPC_WEAK_FUNC(sub_825881BC);
PPC_FUNC_IMPL(__imp__sub_825881BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825881C0"))) PPC_WEAK_FUNC(sub_825881C0);
PPC_FUNC_IMPL(__imp__sub_825881C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82589448
	sub_82589448(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x825895a0
	sub_825895A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825881f4
	if (cr6.eq) goto loc_825881F4;
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
loc_825881F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82588204"))) PPC_WEAK_FUNC(sub_82588204);
PPC_FUNC_IMPL(__imp__sub_82588204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82588208"))) PPC_WEAK_FUNC(sub_82588208);
PPC_FUNC_IMPL(__imp__sub_82588208) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r11,-16312
	ctx.r10.s64 = r11.s64 + -16312;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r9,-1712
	ctx.r3.s64 = ctx.r9.s64 + -1712;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r11,21644(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21644);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r7,-16096
	ctx.r6.s64 = ctx.r7.s64 + -16096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// addi r3,r9,-16124
	ctx.r3.s64 = ctx.r9.s64 + -16124;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82588310
	if (cr6.eq) goto loc_82588310;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x82588310
	if (cr6.eq) goto loc_82588310;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82588314
	if (!cr6.eq) goto loc_82588314;
loc_82588310:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82588314:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r28,29
	r28.s64 = 29;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// addi r29,r10,-16192
	r29.s64 = ctx.r10.s64 + -16192;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r25,-31970
	r25.s64 = -2095185920;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825883a0
	if (cr6.eq) goto loc_825883A0;
	// lwz r3,-14368(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82588384
	if (cr6.eq) goto loc_82588384;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82588388
	if (!cr6.eq) goto loc_82588388;
loc_82588384:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82588388:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825896b8
	sub_825896B8(ctx, base);
	// b 0x825883a4
	goto loc_825883A4;
loc_825883A0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_825883A4:
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,65
	ctx.r8.s64 = 65;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82588418
	if (cr6.eq) goto loc_82588418;
	// lwz r3,-14368(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825883fc
	if (cr6.eq) goto loc_825883FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82588400
	if (!cr6.eq) goto loc_82588400;
loc_825883FC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82588400:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825898d0
	sub_825898D0(ctx, base);
	// b 0x8258841c
	goto loc_8258841C;
loc_82588418:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8258841C:
	// lis r11,-32168
	r11.s64 = -2108162048;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r9,r11,26808
	ctx.r9.s64 = r11.s64 + 26808;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r5,26808
	ctx.r3.s64 = ctx.r5.s64 + 26808;
	// and r11,r4,r8
	r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r11.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r10,-20604
	ctx.r4.s64 = ctx.r10.s64 + -20604;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r7,r9,26936
	ctx.r7.s64 = ctx.r9.s64 + 26936;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// addi r6,r8,20288
	ctx.r6.s64 = ctx.r8.s64 + 20288;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r11,-32168
	r11.s64 = -2108162048;
	// and r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ctx.r6.u64;
	// addi r9,r11,26936
	ctx.r9.s64 = r11.s64 + 26936;
	// stw r8,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r8.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r9,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r7,-20608
	ctx.r4.s64 = ctx.r7.s64 + -20608;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r4,r6,27064
	ctx.r4.s64 = ctx.r6.s64 + 27064;
	// addi r11,r5,20288
	r11.s64 = ctx.r5.s64 + 20288;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,27064
	ctx.r6.s64 = ctx.r8.s64 + 27064;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r4,-20612
	ctx.r4.s64 = ctx.r4.s64 + -20612;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,27192
	ctx.r9.s64 = r11.s64 + 27192;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,27192
	r11.s64 = ctx.r5.s64 + 27192;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r9,-20616
	ctx.r4.s64 = ctx.r9.s64 + -20616;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,27320
	ctx.r6.s64 = ctx.r8.s64 + 27320;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r11,-32168
	r11.s64 = -2108162048;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,27320
	ctx.r9.s64 = r11.s64 + 27320;
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// stw r8,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r8.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r7,-20620
	ctx.r4.s64 = ctx.r7.s64 + -20620;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r4,r6,27448
	ctx.r4.s64 = ctx.r6.s64 + 27448;
	// addi r11,r5,20288
	r11.s64 = ctx.r5.s64 + 20288;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,27448
	ctx.r6.s64 = ctx.r8.s64 + 27448;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r4,-20624
	ctx.r4.s64 = ctx.r4.s64 + -20624;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,27576
	ctx.r9.s64 = r11.s64 + 27576;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,27576
	r11.s64 = ctx.r5.s64 + 27576;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r9,-20628
	ctx.r4.s64 = ctx.r9.s64 + -20628;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r6,r8,27704
	ctx.r6.s64 = ctx.r8.s64 + 27704;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,27704
	ctx.r8.s64 = ctx.r10.s64 + 27704;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r6,-20632
	ctx.r4.s64 = ctx.r6.s64 + -20632;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r11,r5,27832
	r11.s64 = ctx.r5.s64 + 27832;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,27832
	ctx.r5.s64 = ctx.r7.s64 + 27832;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-20636
	ctx.r4.s64 = r11.s64 + -20636;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r8,r10,27960
	ctx.r8.s64 = ctx.r10.s64 + 27960;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,27960
	ctx.r10.s64 = ctx.r4.s64 + 27960;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r8,-20640
	ctx.r4.s64 = ctx.r8.s64 + -20640;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,28088
	ctx.r5.s64 = ctx.r7.s64 + 28088;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,28088
	ctx.r7.s64 = ctx.r9.s64 + 28088;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// addi r5,r1,440
	ctx.r5.s64 = ctx.r1.s64 + 440;
	// addi r4,r4,-20644
	ctx.r4.s64 = ctx.r4.s64 + -20644;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,28216
	ctx.r9.s64 = r11.s64 + 28216;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,28216
	r11.s64 = ctx.r5.s64 + 28216;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r9,-20648
	ctx.r4.s64 = ctx.r9.s64 + -20648;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r6,r8,28344
	ctx.r6.s64 = ctx.r8.s64 + 28344;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,28344
	ctx.r8.s64 = ctx.r10.s64 + 28344;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r6,-20652
	ctx.r4.s64 = ctx.r6.s64 + -20652;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r3,r5,28472
	ctx.r3.s64 = ctx.r5.s64 + 28472;
	// addi r11,r4,20288
	r11.s64 = ctx.r4.s64 + 20288;
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,28472
	ctx.r6.s64 = ctx.r8.s64 + 28472;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r4,-20656
	ctx.r4.s64 = ctx.r4.s64 + -20656;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,28600
	ctx.r9.s64 = r11.s64 + 28600;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,28600
	r11.s64 = ctx.r5.s64 + 28600;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r9,-20660
	ctx.r4.s64 = ctx.r9.s64 + -20660;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// addi r6,r8,28728
	ctx.r6.s64 = ctx.r8.s64 + 28728;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,28728
	ctx.r8.s64 = ctx.r10.s64 + 28728;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r6,-20664
	ctx.r4.s64 = ctx.r6.s64 + -20664;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r11,r5,28856
	r11.s64 = ctx.r5.s64 + 28856;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,28856
	ctx.r5.s64 = ctx.r7.s64 + 28856;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r4.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-20668
	ctx.r4.s64 = r11.s64 + -20668;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r8,r10,28984
	ctx.r8.s64 = ctx.r10.s64 + 28984;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,28984
	ctx.r10.s64 = ctx.r4.s64 + 28984;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r8,-20672
	ctx.r4.s64 = ctx.r8.s64 + -20672;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r5,r7,29112
	ctx.r5.s64 = ctx.r7.s64 + 29112;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,29112
	ctx.r7.s64 = ctx.r9.s64 + 29112;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// addi r5,r1,456
	ctx.r5.s64 = ctx.r1.s64 + 456;
	// addi r4,r4,-20676
	ctx.r4.s64 = ctx.r4.s64 + -20676;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,29240
	ctx.r9.s64 = r11.s64 + 29240;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,29240
	r11.s64 = ctx.r5.s64 + 29240;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r9,-20680
	ctx.r4.s64 = ctx.r9.s64 + -20680;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,29368
	ctx.r6.s64 = ctx.r8.s64 + 29368;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,29368
	ctx.r8.s64 = ctx.r10.s64 + 29368;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r6,-20684
	ctx.r4.s64 = ctx.r6.s64 + -20684;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r11,r5,29496
	r11.s64 = ctx.r5.s64 + 29496;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,29496
	ctx.r5.s64 = ctx.r7.s64 + 29496;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r4.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-20688
	ctx.r4.s64 = r11.s64 + -20688;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r8,r10,29624
	ctx.r8.s64 = ctx.r10.s64 + 29624;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,29624
	ctx.r10.s64 = ctx.r4.s64 + 29624;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r8,-20692
	ctx.r4.s64 = ctx.r8.s64 + -20692;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r5,r7,29752
	ctx.r5.s64 = ctx.r7.s64 + 29752;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,29752
	ctx.r7.s64 = ctx.r9.s64 + 29752;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r4,-20696
	ctx.r4.s64 = ctx.r4.s64 + -20696;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,29880
	ctx.r9.s64 = r11.s64 + 29880;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,29880
	r11.s64 = ctx.r5.s64 + 29880;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r9,-20700
	ctx.r4.s64 = ctx.r9.s64 + -20700;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,30008
	ctx.r6.s64 = ctx.r8.s64 + 30008;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,30008
	ctx.r8.s64 = ctx.r10.s64 + 30008;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r6,-20704
	ctx.r4.s64 = ctx.r6.s64 + -20704;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r11,r5,30136
	r11.s64 = ctx.r5.s64 + 30136;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// and r11,r6,r10
	r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r10,r7,30136
	ctx.r10.s64 = ctx.r7.s64 + 30136;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// addi r4,r5,-20708
	ctx.r4.s64 = ctx.r5.s64 + -20708;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r7,r9,30264
	ctx.r7.s64 = ctx.r9.s64 + 30264;
	// addi r6,r8,20288
	ctx.r6.s64 = ctx.r8.s64 + 20288;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// lis r11,-32168
	r11.s64 = -2108162048;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,30264
	ctx.r9.s64 = r11.s64 + 30264;
	// and r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ctx.r6.u64;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// addi r4,r7,-20712
	ctx.r4.s64 = ctx.r7.s64 + -20712;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r4,r6,30392
	ctx.r4.s64 = ctx.r6.s64 + 30392;
	// addi r11,r5,20288
	r11.s64 = ctx.r5.s64 + 20288;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,30392
	ctx.r6.s64 = ctx.r8.s64 + 30392;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r4,-20716
	ctx.r4.s64 = ctx.r4.s64 + -20716;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,30520
	ctx.r9.s64 = r11.s64 + 30520;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,30520
	r11.s64 = ctx.r5.s64 + 30520;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// addi r4,r9,-20720
	ctx.r4.s64 = ctx.r9.s64 + -20720;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,30648
	ctx.r6.s64 = ctx.r8.s64 + 30648;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,30648
	ctx.r8.s64 = ctx.r10.s64 + 30648;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// addi r4,r6,-20724
	ctx.r4.s64 = ctx.r6.s64 + -20724;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r3,r5,30776
	ctx.r3.s64 = ctx.r5.s64 + 30776;
	// addi r11,r4,20288
	r11.s64 = ctx.r4.s64 + 20288;
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,30776
	ctx.r6.s64 = ctx.r8.s64 + 30776;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r5.u32);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// addi r4,r4,-20728
	ctx.r4.s64 = ctx.r4.s64 + -20728;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r9,r11,30904
	ctx.r9.s64 = r11.s64 + 30904;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,30904
	r11.s64 = ctx.r5.s64 + 30904;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// addi r4,r9,-20732
	ctx.r4.s64 = ctx.r9.s64 + -20732;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r6,r8,31032
	ctx.r6.s64 = ctx.r8.s64 + 31032;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,31032
	ctx.r8.s64 = ctx.r10.s64 + 31032;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// addi r5,r1,312
	ctx.r5.s64 = ctx.r1.s64 + 312;
	// addi r4,r6,-20736
	ctx.r4.s64 = ctx.r6.s64 + -20736;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r11,r5,31160
	r11.s64 = ctx.r5.s64 + 31160;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,31160
	ctx.r5.s64 = ctx.r7.s64 + 31160;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// addi r4,r11,-20740
	ctx.r4.s64 = r11.s64 + -20740;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r8,r10,31288
	ctx.r8.s64 = ctx.r10.s64 + 31288;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,31288
	ctx.r10.s64 = ctx.r4.s64 + 31288;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r8,-20744
	ctx.r4.s64 = ctx.r8.s64 + -20744;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22276);
	// addi r5,r7,31416
	ctx.r5.s64 = ctx.r7.s64 + 31416;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,31416
	ctx.r7.s64 = ctx.r9.s64 + 31416;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r4,-20748
	ctx.r4.s64 = ctx.r4.s64 + -20748;
	// bl 0x825845a0
	sub_825845A0(ctx, base);
	// lis r3,-32168
	ctx.r3.s64 = -2108162048;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// addi r10,r3,31544
	ctx.r10.s64 = ctx.r3.s64 + 31544;
	// addi r9,r11,20288
	ctx.r9.s64 = r11.s64 + 20288;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r6,31544
	ctx.r4.s64 = ctx.r6.s64 + 31544;
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r4.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// addi r4,r10,-20752
	ctx.r4.s64 = ctx.r10.s64 + -20752;
	// lwz r3,22280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22280);
	// bl 0x82584f80
	sub_82584F80(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// addi r7,r9,31672
	ctx.r7.s64 = ctx.r9.s64 + 31672;
	// addi r6,r8,20288
	ctx.r6.s64 = ctx.r8.s64 + 20288;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// lis r3,-32168
	ctx.r3.s64 = -2108162048;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r3,31672
	ctx.r10.s64 = ctx.r3.s64 + 31672;
	// and r9,r11,r6
	ctx.r9.u64 = r11.u64 & ctx.r6.u64;
	// stw r10,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r10.u32);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// stw r9,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r1,392
	ctx.r5.s64 = ctx.r1.s64 + 392;
	// addi r4,r8,-20756
	ctx.r4.s64 = ctx.r8.s64 + -20756;
	// lwz r3,22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22284);
	// bl 0x82584c10
	sub_82584C10(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22284);
	// addi r5,r7,31800
	ctx.r5.s64 = ctx.r7.s64 + 31800;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,31800
	ctx.r7.s64 = ctx.r9.s64 + 31800;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// addi r4,r4,-20760
	ctx.r4.s64 = ctx.r4.s64 + -20760;
	// bl 0x82584c10
	sub_82584C10(ctx, base);
	// lis r3,-32168
	ctx.r3.s64 = -2108162048;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// addi r10,r3,31928
	ctx.r10.s64 = ctx.r3.s64 + 31928;
	// addi r9,r11,20288
	ctx.r9.s64 = r11.s64 + 20288;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// lwz r3,22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22284);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,31928
	r11.s64 = ctx.r5.s64 + 31928;
	// and r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r11,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, r11.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r4,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// addi r5,r1,424
	ctx.r5.s64 = ctx.r1.s64 + 424;
	// addi r4,r10,-20764
	ctx.r4.s64 = ctx.r10.s64 + -20764;
	// bl 0x82584c10
	sub_82584C10(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-16244
	ctx.r3.s64 = ctx.r9.s64 + -16244;
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,21540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21540);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82588eb8
	if (cr6.eq) goto loc_82588EB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82588ebc
	goto loc_82588EBC;
loc_82588EB8:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82588EBC:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82588f34
	if (cr6.eq) goto loc_82588F34;
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
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826e5b38
	sub_826E5B38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82588f18
	if (cr6.eq) goto loc_82588F18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82588f1c
	if (!cr6.eq) goto loc_82588F1C;
loc_82588F18:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82588F1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x826e7338
	sub_826E7338(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e77f0
	sub_826E77F0(ctx, base);
loc_82588F34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
}

__attribute__((alias("__imp__sub_82588F3C"))) PPC_WEAK_FUNC(sub_82588F3C);
PPC_FUNC_IMPL(__imp__sub_82588F3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82588F40"))) PPC_WEAK_FUNC(sub_82588F40);
PPC_FUNC_IMPL(__imp__sub_82588F40) {
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
	// addi r9,r11,-16708
	ctx.r9.s64 = r11.s64 + -16708;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82588f84
	if (!cr6.gt) goto loc_82588F84;
loc_82588F6C:
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
	// bgt cr6,0x82588f6c
	if (cr6.gt) goto loc_82588F6C;
loc_82588F84:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82588f9c
	if (cr6.eq) goto loc_82588F9C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82588F9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82588FAC"))) PPC_WEAK_FUNC(sub_82588FAC);
PPC_FUNC_IMPL(__imp__sub_82588FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82588FB0"))) PPC_WEAK_FUNC(sub_82588FB0);
PPC_FUNC_IMPL(__imp__sub_82588FB0) {
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
	// addi r9,r10,-16304
	ctx.r9.s64 = ctx.r10.s64 + -16304;
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

__attribute__((alias("__imp__sub_82589008"))) PPC_WEAK_FUNC(sub_82589008);
PPC_FUNC_IMPL(__imp__sub_82589008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258900C"))) PPC_WEAK_FUNC(sub_8258900C);
PPC_FUNC_IMPL(__imp__sub_8258900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589010"))) PPC_WEAK_FUNC(sub_82589010);
PPC_FUNC_IMPL(__imp__sub_82589010) {
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
	// bl 0x82587d38
	sub_82587D38(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82589048
	if (cr6.eq) goto loc_82589048;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82589048:
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

__attribute__((alias("__imp__sub_8258905C"))) PPC_WEAK_FUNC(sub_8258905C);
PPC_FUNC_IMPL(__imp__sub_8258905C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589060"))) PPC_WEAK_FUNC(sub_82589060);
PPC_FUNC_IMPL(__imp__sub_82589060) {
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
	// beq cr6,0x82589144
	if (cr6.eq) goto loc_82589144;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825890d4
	if (!cr6.eq) goto loc_825890D4;
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
	// beq cr6,0x82589144
	if (cr6.eq) goto loc_82589144;
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
	// b 0x82589144
	goto loc_82589144;
loc_825890D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82588fb0
	sub_82588FB0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82589100
	if (!cr6.gt) goto loc_82589100;
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
loc_82589100:
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
	// bl 0x82589508
	sub_82589508(ctx, base);
loc_82589144:
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

__attribute__((alias("__imp__sub_82589158"))) PPC_WEAK_FUNC(sub_82589158);
PPC_FUNC_IMPL(__imp__sub_82589158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258915C"))) PPC_WEAK_FUNC(sub_8258915C);
PPC_FUNC_IMPL(__imp__sub_8258915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589160"))) PPC_WEAK_FUNC(sub_82589160);
PPC_FUNC_IMPL(__imp__sub_82589160) {
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
	// addi r9,r10,-16292
	ctx.r9.s64 = ctx.r10.s64 + -16292;
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

__attribute__((alias("__imp__sub_825891B8"))) PPC_WEAK_FUNC(sub_825891B8);
PPC_FUNC_IMPL(__imp__sub_825891B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825891BC"))) PPC_WEAK_FUNC(sub_825891BC);
PPC_FUNC_IMPL(__imp__sub_825891BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825891C0"))) PPC_WEAK_FUNC(sub_825891C0);
PPC_FUNC_IMPL(__imp__sub_825891C0) {
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
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28652(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28652);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82589224
	if (!cr6.eq) goto loc_82589224;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82589224
	if (!cr6.eq) goto loc_82589224;
	// lwz r11,28652(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82589224:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28648(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28648);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82589278
	if (!cr6.eq) goto loc_82589278;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82589278
	if (!cr6.eq) goto loc_82589278;
	// lwz r11,28648(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28648);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82589278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8258927C"))) PPC_WEAK_FUNC(sub_8258927C);
PPC_FUNC_IMPL(__imp__sub_8258927C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82589280"))) PPC_WEAK_FUNC(sub_82589280);
PPC_FUNC_IMPL(__imp__sub_82589280) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82589280"))) PPC_WEAK_FUNC(sub_82589280);
PPC_FUNC_IMPL(__imp__sub_82589280) {
	PPC_FUNC_PROLOGUE();
	// b 0x82589060
	sub_82589060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589284"))) PPC_WEAK_FUNC(sub_82589284);
PPC_FUNC_IMPL(__imp__sub_82589284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589288"))) PPC_WEAK_FUNC(sub_82589288);
PPC_FUNC_IMPL(__imp__sub_82589288) {
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
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,21076(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21076);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825892ec
	if (!cr6.eq) goto loc_825892EC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825892ec
	if (!cr6.eq) goto loc_825892EC;
	// lwz r11,21076(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21076);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825892EC:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,21072(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82589340
	if (!cr6.eq) goto loc_82589340;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82589340
	if (!cr6.eq) goto loc_82589340;
	// lwz r11,21072(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21072);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82589340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82589344"))) PPC_WEAK_FUNC(sub_82589344);
PPC_FUNC_IMPL(__imp__sub_82589344) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82589348"))) PPC_WEAK_FUNC(sub_82589348);
PPC_FUNC_IMPL(__imp__sub_82589348) {
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
	// beq cr6,0x8258942c
	if (cr6.eq) goto loc_8258942C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825893bc
	if (!cr6.eq) goto loc_825893BC;
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
	// beq cr6,0x8258942c
	if (cr6.eq) goto loc_8258942C;
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
	// b 0x8258942c
	goto loc_8258942C;
loc_825893BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82589160
	sub_82589160(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825893e8
	if (!cr6.gt) goto loc_825893E8;
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
loc_825893E8:
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
	// bl 0x82589778
	sub_82589778(ctx, base);
loc_8258942C:
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

__attribute__((alias("__imp__sub_82589440"))) PPC_WEAK_FUNC(sub_82589440);
PPC_FUNC_IMPL(__imp__sub_82589440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589444"))) PPC_WEAK_FUNC(sub_82589444);
PPC_FUNC_IMPL(__imp__sub_82589444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589448"))) PPC_WEAK_FUNC(sub_82589448);
PPC_FUNC_IMPL(__imp__sub_82589448) {
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
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r28,r11,-3784
	r28.s64 = r11.s64 + -3784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32185
	r11.s64 = -2109276160;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,-14944
	ctx.r3.s64 = ctx.r10.s64 + -14944;
	// addi r30,r11,-4184
	r30.s64 = r11.s64 + -4184;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28652(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28652);
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
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31968
	ctx.r8.s64 = -2095054848;
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,-14864
	ctx.r3.s64 = ctx.r8.s64 + -14864;
	// addi r30,r11,-20096
	r30.s64 = r11.s64 + -20096;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28648(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28648);
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
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82589504"))) PPC_WEAK_FUNC(sub_82589504);
PPC_FUNC_IMPL(__imp__sub_82589504) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82589508"))) PPC_WEAK_FUNC(sub_82589508);
PPC_FUNC_IMPL(__imp__sub_82589508) {
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
	// addi r9,r11,-16304
	ctx.r9.s64 = r11.s64 + -16304;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8258954c
	if (!cr6.gt) goto loc_8258954C;
loc_82589534:
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
	// bgt cr6,0x82589534
	if (cr6.gt) goto loc_82589534;
loc_8258954C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82589060
	sub_82589060(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-16708
	ctx.r10.s64 = r11.s64 + -16708;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82589588
	if (!cr6.gt) goto loc_82589588;
loc_82589570:
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
	// bgt cr6,0x82589570
	if (cr6.gt) goto loc_82589570;
loc_82589588:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82589598"))) PPC_WEAK_FUNC(sub_82589598);
PPC_FUNC_IMPL(__imp__sub_82589598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258959C"))) PPC_WEAK_FUNC(sub_8258959C);
PPC_FUNC_IMPL(__imp__sub_8258959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825895A0"))) PPC_WEAK_FUNC(sub_825895A0);
PPC_FUNC_IMPL(__imp__sub_825895A0) {
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
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r28,r11,-3784
	r28.s64 = r11.s64 + -3784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32185
	r11.s64 = -2109276160;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,21432
	ctx.r3.s64 = ctx.r10.s64 + 21432;
	// addi r30,r11,-4184
	r30.s64 = r11.s64 + -4184;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,21076(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21076);
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
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,21512
	ctx.r3.s64 = ctx.r8.s64 + 21512;
	// addi r30,r11,-20096
	r30.s64 = r11.s64 + -20096;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,21072(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21072);
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
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8258965C"))) PPC_WEAK_FUNC(sub_8258965C);
PPC_FUNC_IMPL(__imp__sub_8258965C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82589660"))) PPC_WEAK_FUNC(sub_82589660);
PPC_FUNC_IMPL(__imp__sub_82589660) {
	PPC_FUNC_PROLOGUE();
	// b 0x82589348
	sub_82589348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589660"))) PPC_WEAK_FUNC(sub_82589660);
PPC_FUNC_IMPL(__imp__sub_82589660) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82589664"))) PPC_WEAK_FUNC(sub_82589664);
PPC_FUNC_IMPL(__imp__sub_82589664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589668"))) PPC_WEAK_FUNC(sub_82589668);
PPC_FUNC_IMPL(__imp__sub_82589668) {
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
	// bl 0x82589508
	sub_82589508(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825896a0
	if (cr6.eq) goto loc_825896A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825896A0:
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

__attribute__((alias("__imp__sub_825896B4"))) PPC_WEAK_FUNC(sub_825896B4);
PPC_FUNC_IMPL(__imp__sub_825896B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825896B8"))) PPC_WEAK_FUNC(sub_825896B8);
PPC_FUNC_IMPL(__imp__sub_825896B8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-16268
	ctx.r9.s64 = r11.s64 + -16268;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-16304
	ctx.r8.s64 = ctx.r10.s64 + -16304;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,-16280
	ctx.r4.s64 = ctx.r6.s64 + -16280;
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// ble cr6,0x8258975c
	if (!cr6.gt) goto loc_8258975C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8258975C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82589770"))) PPC_WEAK_FUNC(sub_82589770);
PPC_FUNC_IMPL(__imp__sub_82589770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82589774"))) PPC_WEAK_FUNC(sub_82589774);
PPC_FUNC_IMPL(__imp__sub_82589774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589778"))) PPC_WEAK_FUNC(sub_82589778);
PPC_FUNC_IMPL(__imp__sub_82589778) {
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
	// addi r9,r11,-16292
	ctx.r9.s64 = r11.s64 + -16292;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825897bc
	if (!cr6.gt) goto loc_825897BC;
loc_825897A4:
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
	// bgt cr6,0x825897a4
	if (cr6.gt) goto loc_825897A4;
loc_825897BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82589348
	sub_82589348(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-7024
	ctx.r10.s64 = r11.s64 + -7024;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825897f8
	if (!cr6.gt) goto loc_825897F8;
loc_825897E0:
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
	// bgt cr6,0x825897e0
	if (cr6.gt) goto loc_825897E0;
loc_825897F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82589808"))) PPC_WEAK_FUNC(sub_82589808);
PPC_FUNC_IMPL(__imp__sub_82589808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258980C"))) PPC_WEAK_FUNC(sub_8258980C);
PPC_FUNC_IMPL(__imp__sub_8258980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589810"))) PPC_WEAK_FUNC(sub_82589810);
PPC_FUNC_IMPL(__imp__sub_82589810) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r10,r11,-16268
	ctx.r10.s64 = r11.s64 + -16268;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82589508
	sub_82589508(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82589868
	if (cr6.eq) goto loc_82589868;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82589868:
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

__attribute__((alias("__imp__sub_8258987C"))) PPC_WEAK_FUNC(sub_8258987C);
PPC_FUNC_IMPL(__imp__sub_8258987C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589880"))) PPC_WEAK_FUNC(sub_82589880);
PPC_FUNC_IMPL(__imp__sub_82589880) {
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
	// bl 0x82589778
	sub_82589778(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825898b8
	if (cr6.eq) goto loc_825898B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825898B8:
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

__attribute__((alias("__imp__sub_825898CC"))) PPC_WEAK_FUNC(sub_825898CC);
PPC_FUNC_IMPL(__imp__sub_825898CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825898D0"))) PPC_WEAK_FUNC(sub_825898D0);
PPC_FUNC_IMPL(__imp__sub_825898D0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-16248
	ctx.r9.s64 = r11.s64 + -16248;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-16292
	ctx.r8.s64 = ctx.r10.s64 + -16292;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,-16260
	ctx.r4.s64 = ctx.r6.s64 + -16260;
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// ble cr6,0x82589974
	if (!cr6.gt) goto loc_82589974;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82589974:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82589988"))) PPC_WEAK_FUNC(sub_82589988);
PPC_FUNC_IMPL(__imp__sub_82589988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8258998C"))) PPC_WEAK_FUNC(sub_8258998C);
PPC_FUNC_IMPL(__imp__sub_8258998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589990"))) PPC_WEAK_FUNC(sub_82589990);
PPC_FUNC_IMPL(__imp__sub_82589990) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r10,r11,-16248
	ctx.r10.s64 = r11.s64 + -16248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82589778
	sub_82589778(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825899e8
	if (cr6.eq) goto loc_825899E8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825899E8:
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

__attribute__((alias("__imp__sub_825899FC"))) PPC_WEAK_FUNC(sub_825899FC);
PPC_FUNC_IMPL(__imp__sub_825899FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589A00"))) PPC_WEAK_FUNC(sub_82589A00);
PPC_FUNC_IMPL(__imp__sub_82589A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r9,-12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589A20"))) PPC_WEAK_FUNC(sub_82589A20);
PPC_FUNC_IMPL(__imp__sub_82589A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r9,-12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589A40"))) PPC_WEAK_FUNC(sub_82589A40);
PPC_FUNC_IMPL(__imp__sub_82589A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r9,-12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stb r10,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589A60"))) PPC_WEAK_FUNC(sub_82589A60);
PPC_FUNC_IMPL(__imp__sub_82589A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,-12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589A74"))) PPC_WEAK_FUNC(sub_82589A74);
PPC_FUNC_IMPL(__imp__sub_82589A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589A78"))) PPC_WEAK_FUNC(sub_82589A78);
PPC_FUNC_IMPL(__imp__sub_82589A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,-12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589A8C"))) PPC_WEAK_FUNC(sub_82589A8C);
PPC_FUNC_IMPL(__imp__sub_82589A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589A90"))) PPC_WEAK_FUNC(sub_82589A90);
PPC_FUNC_IMPL(__imp__sub_82589A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r9,-12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589AB0"))) PPC_WEAK_FUNC(sub_82589AB0);
PPC_FUNC_IMPL(__imp__sub_82589AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r9,-12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589AD0"))) PPC_WEAK_FUNC(sub_82589AD0);
PPC_FUNC_IMPL(__imp__sub_82589AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82589b18
	if (!cr6.eq) goto loc_82589B18;
	// lwz r11,-12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82589B18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82589B28"))) PPC_WEAK_FUNC(sub_82589B28);
PPC_FUNC_IMPL(__imp__sub_82589B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589B2C"))) PPC_WEAK_FUNC(sub_82589B2C);
PPC_FUNC_IMPL(__imp__sub_82589B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589B30"))) PPC_WEAK_FUNC(sub_82589B30);
PPC_FUNC_IMPL(__imp__sub_82589B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589B40"))) PPC_WEAK_FUNC(sub_82589B40);
PPC_FUNC_IMPL(__imp__sub_82589B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-17100
	ctx.r9.s64 = r11.s64 + -17100;
	// addi r8,r10,-16076
	ctx.r8.s64 = ctx.r10.s64 + -16076;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82589B58"))) PPC_WEAK_FUNC(sub_82589B58);
PPC_FUNC_IMPL(__imp__sub_82589B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589B5C"))) PPC_WEAK_FUNC(sub_82589B5C);
PPC_FUNC_IMPL(__imp__sub_82589B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82589B60"))) PPC_WEAK_FUNC(sub_82589B60);
PPC_FUNC_IMPL(__imp__sub_82589B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r8,220(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,-12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// stb r8,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r8.u8);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589BAC"))) PPC_WEAK_FUNC(sub_82589BAC);
PPC_FUNC_IMPL(__imp__sub_82589BAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589BB0"))) PPC_WEAK_FUNC(sub_82589BB0);
PPC_FUNC_IMPL(__imp__sub_82589BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82589c00
	if (!cr6.eq) goto loc_82589C00;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82589bec
	if (cr6.eq) goto loc_82589BEC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82589bf0
	if (!cr6.eq) goto loc_82589BF0;
loc_82589BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82589BF0:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82589C00:
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// addi r3,r31,-12
	ctx.r3.s64 = r31.s64 + -12;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
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

__attribute__((alias("__imp__sub_82589C24"))) PPC_WEAK_FUNC(sub_82589C24);
PPC_FUNC_IMPL(__imp__sub_82589C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

