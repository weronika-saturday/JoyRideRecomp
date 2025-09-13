#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8256F8E0"))) PPC_WEAK_FUNC(sub_8256F8E0);
PPC_FUNC_IMPL(__imp__sub_8256F8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F8E4"))) PPC_WEAK_FUNC(sub_8256F8E4);
PPC_FUNC_IMPL(__imp__sub_8256F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F8E8"))) PPC_WEAK_FUNC(sub_8256F8E8);
PPC_FUNC_IMPL(__imp__sub_8256F8E8) {
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
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256f954
	if (cr6.eq) goto loc_8256F954;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21076
	ctx.r8.s64 = ctx.r9.s64 + -21076;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r5.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256F954:
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

__attribute__((alias("__imp__sub_8256F968"))) PPC_WEAK_FUNC(sub_8256F968);
PPC_FUNC_IMPL(__imp__sub_8256F968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F96C"))) PPC_WEAK_FUNC(sub_8256F96C);
PPC_FUNC_IMPL(__imp__sub_8256F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F970"))) PPC_WEAK_FUNC(sub_8256F970);
PPC_FUNC_IMPL(__imp__sub_8256F970) {
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
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x8273ebf0
	sub_8273EBF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F9BC"))) PPC_WEAK_FUNC(sub_8256F9BC);
PPC_FUNC_IMPL(__imp__sub_8256F9BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F9C0"))) PPC_WEAK_FUNC(sub_8256F9C0);
PPC_FUNC_IMPL(__imp__sub_8256F9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8256F9D0"))) PPC_WEAK_FUNC(sub_8256F9D0);
PPC_FUNC_IMPL(__imp__sub_8256F9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256F9D4"))) PPC_WEAK_FUNC(sub_8256F9D4);
PPC_FUNC_IMPL(__imp__sub_8256F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F9D8"))) PPC_WEAK_FUNC(sub_8256F9D8);
PPC_FUNC_IMPL(__imp__sub_8256F9D8) {
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
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// neg r9,r3
	ctx.r9.s64 = -ctx.r3.s64;
	// andc r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256FA10"))) PPC_WEAK_FUNC(sub_8256FA10);
PPC_FUNC_IMPL(__imp__sub_8256FA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FA14"))) PPC_WEAK_FUNC(sub_8256FA14);
PPC_FUNC_IMPL(__imp__sub_8256FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FA18"))) PPC_WEAK_FUNC(sub_8256FA18);
PPC_FUNC_IMPL(__imp__sub_8256FA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FA2C"))) PPC_WEAK_FUNC(sub_8256FA2C);
PPC_FUNC_IMPL(__imp__sub_8256FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FA30"))) PPC_WEAK_FUNC(sub_8256FA30);
PPC_FUNC_IMPL(__imp__sub_8256FA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8256FA40"))) PPC_WEAK_FUNC(sub_8256FA40);
PPC_FUNC_IMPL(__imp__sub_8256FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FA44"))) PPC_WEAK_FUNC(sub_8256FA44);
PPC_FUNC_IMPL(__imp__sub_8256FA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FA48"))) PPC_WEAK_FUNC(sub_8256FA48);
PPC_FUNC_IMPL(__imp__sub_8256FA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8256FA58"))) PPC_WEAK_FUNC(sub_8256FA58);
PPC_FUNC_IMPL(__imp__sub_8256FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FA5C"))) PPC_WEAK_FUNC(sub_8256FA5C);
PPC_FUNC_IMPL(__imp__sub_8256FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FA60"))) PPC_WEAK_FUNC(sub_8256FA60);
PPC_FUNC_IMPL(__imp__sub_8256FA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8256FA70"))) PPC_WEAK_FUNC(sub_8256FA70);
PPC_FUNC_IMPL(__imp__sub_8256FA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FA74"))) PPC_WEAK_FUNC(sub_8256FA74);
PPC_FUNC_IMPL(__imp__sub_8256FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FA78"))) PPC_WEAK_FUNC(sub_8256FA78);
PPC_FUNC_IMPL(__imp__sub_8256FA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
}

__attribute__((alias("__imp__sub_8256FA7C"))) PPC_WEAK_FUNC(sub_8256FA7C);
PPC_FUNC_IMPL(__imp__sub_8256FA7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FA80"))) PPC_WEAK_FUNC(sub_8256FA80);
PPC_FUNC_IMPL(__imp__sub_8256FA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FA84"))) PPC_WEAK_FUNC(sub_8256FA84);
PPC_FUNC_IMPL(__imp__sub_8256FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FA88"))) PPC_WEAK_FUNC(sub_8256FA88);
PPC_FUNC_IMPL(__imp__sub_8256FA88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828ed070
	sub_828ED070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256FA98"))) PPC_WEAK_FUNC(sub_8256FA98);
PPC_FUNC_IMPL(__imp__sub_8256FA98) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8256fb38
	if (!cr6.gt) goto loc_8256FB38;
loc_8256FAD0:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256fb18
	if (cr6.eq) goto loc_8256FB18;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8256fb54
	if (!cr6.eq) goto loc_8256FB54;
loc_8256FB18:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x8256fad0
	if (cr6.lt) goto loc_8256FAD0;
loc_8256FB38:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8256FB54:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
}

__attribute__((alias("__imp__sub_8256FB6C"))) PPC_WEAK_FUNC(sub_8256FB6C);
PPC_FUNC_IMPL(__imp__sub_8256FB6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256fb3c
	// ERROR 8256FB3C
	return;
}

__attribute__((alias("__imp__sub_8256FB70"))) PPC_WEAK_FUNC(sub_8256FB70);
PPC_FUNC_IMPL(__imp__sub_8256FB70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FB74"))) PPC_WEAK_FUNC(sub_8256FB74);
PPC_FUNC_IMPL(__imp__sub_8256FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FB78"))) PPC_WEAK_FUNC(sub_8256FB78);
PPC_FUNC_IMPL(__imp__sub_8256FB78) {
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
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8256fbdc
	if (!cr6.gt) goto loc_8256FBDC;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
loc_8256FBB8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8256fbb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8256FBB8;
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8256FBDC:
	// stw r10,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256FBF0"))) PPC_WEAK_FUNC(sub_8256FBF0);
PPC_FUNC_IMPL(__imp__sub_8256FBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FBF4"))) PPC_WEAK_FUNC(sub_8256FBF4);
PPC_FUNC_IMPL(__imp__sub_8256FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FBF8"))) PPC_WEAK_FUNC(sub_8256FBF8);
PPC_FUNC_IMPL(__imp__sub_8256FBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FC08"))) PPC_WEAK_FUNC(sub_8256FC08);
PPC_FUNC_IMPL(__imp__sub_8256FC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FC28"))) PPC_WEAK_FUNC(sub_8256FC28);
PPC_FUNC_IMPL(__imp__sub_8256FC28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r29,-1
	r29.s64 = -1;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8256fca0
	if (!cr6.gt) goto loc_8256FCA0;
loc_8256FC5C:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8256fca0
	if (!cr6.eq) goto loc_8256FCA0;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x8256fc5c
	if (cr6.lt) goto loc_8256FC5C;
loc_8256FCA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256FCA8"))) PPC_WEAK_FUNC(sub_8256FCA8);
PPC_FUNC_IMPL(__imp__sub_8256FCA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256FCAC"))) PPC_WEAK_FUNC(sub_8256FCAC);
PPC_FUNC_IMPL(__imp__sub_8256FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FCB0"))) PPC_WEAK_FUNC(sub_8256FCB0);
PPC_FUNC_IMPL(__imp__sub_8256FCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-21012
	ctx.r5.s64 = r11.s64 + -21012;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
}

__attribute__((alias("__imp__sub_8256FCD4"))) PPC_WEAK_FUNC(sub_8256FCD4);
PPC_FUNC_IMPL(__imp__sub_8256FCD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256FCD8"))) PPC_WEAK_FUNC(sub_8256FCD8);
PPC_FUNC_IMPL(__imp__sub_8256FCD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FCDC"))) PPC_WEAK_FUNC(sub_8256FCDC);
PPC_FUNC_IMPL(__imp__sub_8256FCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FCE0"))) PPC_WEAK_FUNC(sub_8256FCE0);
PPC_FUNC_IMPL(__imp__sub_8256FCE0) {
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
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r7,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256FD20"))) PPC_WEAK_FUNC(sub_8256FD20);
PPC_FUNC_IMPL(__imp__sub_8256FD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FD24"))) PPC_WEAK_FUNC(sub_8256FD24);
PPC_FUNC_IMPL(__imp__sub_8256FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FD28"))) PPC_WEAK_FUNC(sub_8256FD28);
PPC_FUNC_IMPL(__imp__sub_8256FD28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8256fd94
	if (!cr6.gt) goto loc_8256FD94;
	// addi r31,r30,88
	r31.s64 = r30.s64 + 88;
loc_8256FD60:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpld cr6,r28,r3
	cr6.compare<uint64_t>(r28.u64, ctx.r3.u64, xer);
	// beq cr6,0x8256fda0
	if (cr6.eq) goto loc_8256FDA0;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8256fd60
	if (cr6.lt) goto loc_8256FD60;
loc_8256FD94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8256FDA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256FDA8"))) PPC_WEAK_FUNC(sub_8256FDA8);
PPC_FUNC_IMPL(__imp__sub_8256FDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256FDAC"))) PPC_WEAK_FUNC(sub_8256FDAC);
PPC_FUNC_IMPL(__imp__sub_8256FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FDB0"))) PPC_WEAK_FUNC(sub_8256FDB0);
PPC_FUNC_IMPL(__imp__sub_8256FDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_8256FDCC"))) PPC_WEAK_FUNC(sub_8256FDCC);
PPC_FUNC_IMPL(__imp__sub_8256FDCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FDD0"))) PPC_WEAK_FUNC(sub_8256FDD0);
PPC_FUNC_IMPL(__imp__sub_8256FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FDF0"))) PPC_WEAK_FUNC(sub_8256FDF0);
PPC_FUNC_IMPL(__imp__sub_8256FDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FE10"))) PPC_WEAK_FUNC(sub_8256FE10);
PPC_FUNC_IMPL(__imp__sub_8256FE10) {
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
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8256fe6c
	if (!cr6.gt) goto loc_8256FE6C;
	// addi r31,r3,88
	r31.s64 = ctx.r3.s64 + 88;
loc_8256FE38:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// beq cr6,0x8256fe78
	if (cr6.eq) goto loc_8256FE78;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8256fe38
	if (cr6.lt) goto loc_8256FE38;
loc_8256FE6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8256FE78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256FE80"))) PPC_WEAK_FUNC(sub_8256FE80);
PPC_FUNC_IMPL(__imp__sub_8256FE80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256FE84"))) PPC_WEAK_FUNC(sub_8256FE84);
PPC_FUNC_IMPL(__imp__sub_8256FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FE88"))) PPC_WEAK_FUNC(sub_8256FE88);
PPC_FUNC_IMPL(__imp__sub_8256FE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FEA8"))) PPC_WEAK_FUNC(sub_8256FEA8);
PPC_FUNC_IMPL(__imp__sub_8256FEA8) {
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
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8256fef8
	if (cr6.eq) goto loc_8256FEF8;
loc_8256FEF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FEF8:
	// lis r11,-15984
	r11.s64 = -1047527424;
	// ori r10,r11,47642
	ctx.r10.u64 = r11.u64 | 47642;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256ff10
	if (!cr6.eq) goto loc_8256FF10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FF10:
	// lis r11,18376
	r11.s64 = 1204289536;
	// ori r10,r11,38058
	ctx.r10.u64 = r11.u64 | 38058;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256fef0
	if (cr6.eq) goto loc_8256FEF0;
	// lis r11,-19946
	r11.s64 = -1307181056;
	// ori r10,r11,17097
	ctx.r10.u64 = r11.u64 | 17097;
	// mulhwu r9,r31,r10
	ctx.r9.u64 = (uint64_t(r31.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r7,r8,23
	ctx.r7.s64 = ctx.r8.s64 * 23;
	// subf r11,r7,r31
	r11.s64 = r31.s64 - ctx.r7.s64;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
loc_8256FF44:
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

__attribute__((alias("__imp__sub_8256FF58"))) PPC_WEAK_FUNC(sub_8256FF58);
PPC_FUNC_IMPL(__imp__sub_8256FF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FF5C"))) PPC_WEAK_FUNC(sub_8256FF5C);
PPC_FUNC_IMPL(__imp__sub_8256FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FF60"))) PPC_WEAK_FUNC(sub_8256FF60);
PPC_FUNC_IMPL(__imp__sub_8256FF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_8256FF7C"))) PPC_WEAK_FUNC(sub_8256FF7C);
PPC_FUNC_IMPL(__imp__sub_8256FF7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256FF80"))) PPC_WEAK_FUNC(sub_8256FF80);
PPC_FUNC_IMPL(__imp__sub_8256FF80) {
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
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,22593
	ctx.r7.s64 = 1480654848;
	// ori r6,r7,4702
	ctx.r6.u64 = ctx.r7.u64 | 4702;
	// subf r5,r3,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r3.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256FFCC"))) PPC_WEAK_FUNC(sub_8256FFCC);
PPC_FUNC_IMPL(__imp__sub_8256FFCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256FFD0"))) PPC_WEAK_FUNC(sub_8256FFD0);
PPC_FUNC_IMPL(__imp__sub_8256FFD0) {
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
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r30,r10,r31
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,22593
	ctx.r7.s64 = 1480654848;
	// ori r6,r7,4702
	ctx.r6.u64 = ctx.r7.u64 | 4702;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x82570084
	if (!cr6.eq) goto loc_82570084;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82570084
	if (cr6.eq) goto loc_82570084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256fa98
	sub_8256FA98(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82740c70
	sub_82740C70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82570088
	if (cr6.eq) goto loc_82570088;
loc_82570084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82570088:
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

__attribute__((alias("__imp__sub_8257009C"))) PPC_WEAK_FUNC(sub_8257009C);
PPC_FUNC_IMPL(__imp__sub_8257009C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825700A0"))) PPC_WEAK_FUNC(sub_825700A0);
PPC_FUNC_IMPL(__imp__sub_825700A0) {
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
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r7,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825700E0"))) PPC_WEAK_FUNC(sub_825700E0);
PPC_FUNC_IMPL(__imp__sub_825700E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825700E4"))) PPC_WEAK_FUNC(sub_825700E4);
PPC_FUNC_IMPL(__imp__sub_825700E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825700E8"))) PPC_WEAK_FUNC(sub_825700E8);
PPC_FUNC_IMPL(__imp__sub_825700E8) {
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
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82570124"))) PPC_WEAK_FUNC(sub_82570124);
PPC_FUNC_IMPL(__imp__sub_82570124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570128"))) PPC_WEAK_FUNC(sub_82570128);
PPC_FUNC_IMPL(__imp__sub_82570128) {
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
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,252
	r31.s64 = r31.s64 + 252;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x828ed3b8
	sub_828ED3B8(ctx, base);
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

__attribute__((alias("__imp__sub_82570184"))) PPC_WEAK_FUNC(sub_82570184);
PPC_FUNC_IMPL(__imp__sub_82570184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570188"))) PPC_WEAK_FUNC(sub_82570188);
PPC_FUNC_IMPL(__imp__sub_82570188) {
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
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825701e4
	if (!cr6.gt) goto loc_825701E4;
	// bl 0x8256fc28
	sub_8256FC28(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825701e4
	if (!cr6.gt) goto loc_825701E4;
	// addi r29,r30,84
	r29.s64 = r30.s64 + 84;
loc_825701BC:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwzu r4,4(r29)
	ea = 4 + r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// blt cr6,0x825701bc
	if (cr6.lt) goto loc_825701BC;
loc_825701E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825701E8"))) PPC_WEAK_FUNC(sub_825701E8);
PPC_FUNC_IMPL(__imp__sub_825701E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825701EC"))) PPC_WEAK_FUNC(sub_825701EC);
PPC_FUNC_IMPL(__imp__sub_825701EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825701F0"))) PPC_WEAK_FUNC(sub_825701F0);
PPC_FUNC_IMPL(__imp__sub_825701F0) {
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
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82570250
	if (!cr6.gt) goto loc_82570250;
	// addi r31,r3,88
	r31.s64 = ctx.r3.s64 + 88;
loc_82570214:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8257025c
	if (!cr6.eq) goto loc_8257025C;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82570214
	if (cr6.lt) goto loc_82570214;
loc_82570250:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8257025C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82570264"))) PPC_WEAK_FUNC(sub_82570264);
PPC_FUNC_IMPL(__imp__sub_82570264) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82570268"))) PPC_WEAK_FUNC(sub_82570268);
PPC_FUNC_IMPL(__imp__sub_82570268) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8257032c
	if (!cr6.gt) goto loc_8257032C;
loc_825702A8:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// beq cr6,0x825702f8
	if (cr6.eq) goto loc_825702F8;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x825702a8
	if (cr6.lt) goto loc_825702A8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_825702F8:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,220
	ctx.r4.s64 = r11.s64 + 220;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
loc_8257032C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82570338"))) PPC_WEAK_FUNC(sub_82570338);
PPC_FUNC_IMPL(__imp__sub_82570338) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257033C"))) PPC_WEAK_FUNC(sub_8257033C);
PPC_FUNC_IMPL(__imp__sub_8257033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570340"))) PPC_WEAK_FUNC(sub_82570340);
PPC_FUNC_IMPL(__imp__sub_82570340) {
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
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x8273ec40
	sub_8273EC40(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// addi r11,r31,220
	r11.s64 = r31.s64 + 220;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lwz r7,232(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// clrlwi r11,r9,3
	r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r3,r8,3
	ctx.r3.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// clrlwi r5,r6,3
	ctx.r5.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// clrlwi r4,r7,3
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFFFFFF;
	// stw r3,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r4,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r4.u32);
	// stw r5,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r5.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// stb r30,296(r31)
	PPC_STORE_U8(r31.u32 + 296, r30.u8);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825703e8
	if (cr6.eq) goto loc_825703E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825703e8
	if (cr6.eq) goto loc_825703E8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825703E8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8257040C"))) PPC_WEAK_FUNC(sub_8257040C);
PPC_FUNC_IMPL(__imp__sub_8257040C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570410"))) PPC_WEAK_FUNC(sub_82570410);
PPC_FUNC_IMPL(__imp__sub_82570410) {
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
	// addi r11,r4,22
	r11.s64 = ctx.r4.s64 + 22;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825704bc
	if (cr6.eq) goto loc_825704BC;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82570470
	if (cr6.eq) goto loc_82570470;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570474
	if (!cr6.eq) goto loc_82570474;
loc_82570470:
	// li r11,0
	r11.s64 = 0;
loc_82570474:
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825704a0
	if (!cr6.eq) goto loc_825704A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825704A0:
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// bl 0x8253d358
	sub_8253D358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825704BC:
	// subfic r11,r31,3
	xer.ca = r31.u32 <= 3;
	r11.s64 = 3 - r31.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825704D8"))) PPC_WEAK_FUNC(sub_825704D8);
PPC_FUNC_IMPL(__imp__sub_825704D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825704DC"))) PPC_WEAK_FUNC(sub_825704DC);
PPC_FUNC_IMPL(__imp__sub_825704DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825704E0"))) PPC_WEAK_FUNC(sub_825704E0);
PPC_FUNC_IMPL(__imp__sub_825704E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825701f0
	sub_825701F0(ctx, base);
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82570514"))) PPC_WEAK_FUNC(sub_82570514);
PPC_FUNC_IMPL(__imp__sub_82570514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570518"))) PPC_WEAK_FUNC(sub_82570518);
PPC_FUNC_IMPL(__imp__sub_82570518) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r3,220
	r28.s64 = ctx.r3.s64 + 220;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82570540:
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825705d4
	if (!cr6.gt) goto loc_825705D4;
loc_82570564:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// beq cr6,0x825705a8
	if (cr6.eq) goto loc_825705A8;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82570564
	if (cr6.lt) goto loc_82570564;
	// b 0x825705d4
	goto loc_825705D4;
loc_825705A8:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
loc_825705D4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x82570540
	if (cr6.lt) goto loc_82570540;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825705F0"))) PPC_WEAK_FUNC(sub_825705F0);
PPC_FUNC_IMPL(__imp__sub_825705F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825705F4"))) PPC_WEAK_FUNC(sub_825705F4);
PPC_FUNC_IMPL(__imp__sub_825705F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825705F8"))) PPC_WEAK_FUNC(sub_825705F8);
PPC_FUNC_IMPL(__imp__sub_825705F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// subfe r27,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r27.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x82570630
	if (!cr6.eq) goto loc_82570630;
	// li r11,0
	r11.s64 = 0;
	// std r11,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, r11.u64);
loc_82570630:
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
loc_82570638:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// beq cr6,0x825706e0
	if (cr6.eq) goto loc_825706E0;
	// rlwimi r11,r27,30,1,1
	r11.u64 = (__builtin_rotateleft32(r27.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// li r31,0
	r31.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825706e0
	if (!cr6.gt) goto loc_825706E0;
loc_82570670:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// beq cr6,0x825706b4
	if (cr6.eq) goto loc_825706B4;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82570670
	if (cr6.lt) goto loc_82570670;
	// b 0x825706e0
	goto loc_825706E0;
loc_825706B4:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825706E0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// blt cr6,0x82570638
	if (cr6.lt) goto loc_82570638;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825706FC"))) PPC_WEAK_FUNC(sub_825706FC);
PPC_FUNC_IMPL(__imp__sub_825706FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82570700"))) PPC_WEAK_FUNC(sub_82570700);
PPC_FUNC_IMPL(__imp__sub_82570700) {
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
	// lbz r11,296(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 296);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82570734
	if (cr6.eq) goto loc_82570734;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570734
	if (!cr6.eq) goto loc_82570734;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825705f8
	sub_825705F8(ctx, base);
loc_82570734:
	// stb r31,296(r28)
	PPC_STORE_U8(r28.u32 + 296, r31.u8);
	// clrlwi r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r28,224
	r31.s64 = r28.s64 + 224;
loc_82570744:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82570778
	if (cr6.eq) goto loc_82570778;
	// rlwimi r11,r30,29,2,2
	r11.u64 = (__builtin_rotateleft32(r30.u32, 29) & 0x20000000) | (r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x8257076c
	if (!cr6.eq) goto loc_8257076C;
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8257076C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82570268
	sub_82570268(ctx, base);
loc_82570778:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x82570744
	if (cr6.lt) goto loc_82570744;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257078C"))) PPC_WEAK_FUNC(sub_8257078C);
PPC_FUNC_IMPL(__imp__sub_8257078C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82570790"))) PPC_WEAK_FUNC(sub_82570790);
PPC_FUNC_IMPL(__imp__sub_82570790) {
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
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825707c0
	if (!cr6.eq) goto loc_825707C0;
	// std r11,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825705f8
	sub_825705F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_825707C0:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825707e0
	if (cr6.eq) goto loc_825707E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825707e4
	if (!cr6.eq) goto loc_825707E4;
loc_825707E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825707E4:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82573bf8
	sub_82573BF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8257080c
	if (cr6.eq) goto loc_8257080C;
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825705f8
	sub_825705F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8257080C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825701f0
	sub_825701F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x825708b8
	if (cr6.lt) goto loc_825708B8;
	// bl 0x8256fa98
	sub_8256FA98(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,22
	ctx.r10.s64 = r29.s64 + 22;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r29,r9,r31
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82740c70
	sub_82740C70(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825709e0
	if (cr6.eq) goto loc_825709E0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,280(r31)
	PPC_STORE_U64(r31.u32 + 280, ctx.r3.u64);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82740cc0
	sub_82740CC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825705f8
	sub_825705F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570700
	sub_82570700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_825708B8:
	// std r30,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825705f8
	sub_825705F8(ctx, base);
	// lwz r11,216(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r28,-1
	r28.s64 = -1;
	// li r27,-1
	r27.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825709e0
	if (!cr6.gt) goto loc_825709E0;
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
loc_825708DC:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x82570910
	if (!cr6.eq) goto loc_82570910;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r9,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82570910
	if (cr6.eq) goto loc_82570910;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82570910:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x82570944
	if (!cr6.eq) goto loc_82570944;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r9,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82570944
	if (cr6.eq) goto loc_82570944;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82570944:
	// lwz r11,216(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x825708dc
	if (cr6.lt) goto loc_825708DC;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82570968
	if (cr6.eq) goto loc_82570968;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82570974
	goto loc_82570974;
loc_82570968:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x825709e0
	if (cr6.eq) goto loc_825709E0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82570974:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825709e0
	if (cr6.eq) goto loc_825709E0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,22
	r11.s64 = r11.s64 + 22;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825709e0
	if (cr6.eq) goto loc_825709E0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r4,28
	ctx.r9.s64 = ctx.r4.s64 + 28;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stwx r7,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r7.u32);
	// bl 0x82570268
	sub_82570268(ctx, base);
loc_825709E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825709E4"))) PPC_WEAK_FUNC(sub_825709E4);
PPC_FUNC_IMPL(__imp__sub_825709E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825709E8"))) PPC_WEAK_FUNC(sub_825709E8);
PPC_FUNC_IMPL(__imp__sub_825709E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570790
	sub_82570790(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82570A08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82570268
	sub_82570268(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82570a08
	if (cr6.lt) goto loc_82570A08;
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

__attribute__((alias("__imp__sub_82570A34"))) PPC_WEAK_FUNC(sub_82570A34);
PPC_FUNC_IMPL(__imp__sub_82570A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570A38"))) PPC_WEAK_FUNC(sub_82570A38);
PPC_FUNC_IMPL(__imp__sub_82570A38) {
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
	// bl 0x8256fb78
	sub_8256FB78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570790
	sub_82570790(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-21012
	ctx.r5.s64 = r11.s64 + -21012;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
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

__attribute__((alias("__imp__sub_82570A84"))) PPC_WEAK_FUNC(sub_82570A84);
PPC_FUNC_IMPL(__imp__sub_82570A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570A88"))) PPC_WEAK_FUNC(sub_82570A88);
PPC_FUNC_IMPL(__imp__sub_82570A88) {
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
	// bl 0x8256fb78
	sub_8256FB78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570790
	sub_82570790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570188
	sub_82570188(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-21012
	ctx.r5.s64 = r11.s64 + -21012;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
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

__attribute__((alias("__imp__sub_82570ADC"))) PPC_WEAK_FUNC(sub_82570ADC);
PPC_FUNC_IMPL(__imp__sub_82570ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570AE0"))) PPC_WEAK_FUNC(sub_82570AE0);
PPC_FUNC_IMPL(__imp__sub_82570AE0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82570b24
	if (cr6.eq) goto loc_82570B24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570b28
	if (!cr6.eq) goto loc_82570B28;
loc_82570B24:
	// li r11,0
	r11.s64 = 0;
loc_82570B28:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19388(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19388);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570b7c
	if (!cr6.eq) goto loc_82570B7C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570b7c
	if (!cr6.eq) goto loc_82570B7C;
	// lwz r11,19388(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19388);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82570B7C:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82570b98
	if (cr6.eq) goto loc_82570B98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570b9c
	if (!cr6.eq) goto loc_82570B9C;
loc_82570B98:
	// li r11,0
	r11.s64 = 0;
loc_82570B9C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19392(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19392);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,56
	ctx.r4.s64 = r28.s64 + 56;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570bf0
	if (!cr6.eq) goto loc_82570BF0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570bf0
	if (!cr6.eq) goto loc_82570BF0;
	// lwz r11,19392(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19392);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82570BF0:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82570c0c
	if (cr6.eq) goto loc_82570C0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570c10
	if (!cr6.eq) goto loc_82570C10;
loc_82570C0C:
	// li r11,0
	r11.s64 = 0;
loc_82570C10:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19396);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570c64
	if (!cr6.eq) goto loc_82570C64;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82570c64
	if (!cr6.eq) goto loc_82570C64;
	// lwz r11,19396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19396);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82570C64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82570C68"))) PPC_WEAK_FUNC(sub_82570C68);
PPC_FUNC_IMPL(__imp__sub_82570C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82570C6C"))) PPC_WEAK_FUNC(sub_82570C6C);
PPC_FUNC_IMPL(__imp__sub_82570C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570C70"))) PPC_WEAK_FUNC(sub_82570C70);
PPC_FUNC_IMPL(__imp__sub_82570C70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r28,r11,2536
	r28.s64 = r11.s64 + 2536;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82570ca8
	if (cr6.eq) goto loc_82570CA8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570cac
	if (!cr6.eq) goto loc_82570CAC;
loc_82570CA8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82570CAC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,1880
	ctx.r3.s64 = ctx.r10.s64 + 1880;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19396(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19396);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,2616
	r28.s64 = r11.s64 + 2616;
	// beq cr6,0x82570d20
	if (cr6.eq) goto loc_82570D20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570d24
	if (!cr6.eq) goto loc_82570D24;
loc_82570D20:
	// li r11,0
	r11.s64 = 0;
loc_82570D24:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,1916
	ctx.r3.s64 = ctx.r10.s64 + 1916;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19392(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19392);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,2696
	r28.s64 = r11.s64 + 2696;
	// beq cr6,0x82570d90
	if (cr6.eq) goto loc_82570D90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82570d94
	if (!cr6.eq) goto loc_82570D94;
loc_82570D90:
	// li r11,0
	r11.s64 = 0;
loc_82570D94:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,1952
	ctx.r3.s64 = ctx.r10.s64 + 1952;
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
	// lwz r11,19388(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19388);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256fb78
	sub_8256FB78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82570790
	sub_82570790(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82570E04"))) PPC_WEAK_FUNC(sub_82570E04);
PPC_FUNC_IMPL(__imp__sub_82570E04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82570E08"))) PPC_WEAK_FUNC(sub_82570E08);
PPC_FUNC_IMPL(__imp__sub_82570E08) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c7aa8
	sub_826C7AA8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82570e7c
	if (!cr6.eq) goto loc_82570E7C;
	// li r11,1
	r11.s64 = 1;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
loc_82570E7C:
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

__attribute__((alias("__imp__sub_82570E90"))) PPC_WEAK_FUNC(sub_82570E90);
PPC_FUNC_IMPL(__imp__sub_82570E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570E94"))) PPC_WEAK_FUNC(sub_82570E94);
PPC_FUNC_IMPL(__imp__sub_82570E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570E98"))) PPC_WEAK_FUNC(sub_82570E98);
PPC_FUNC_IMPL(__imp__sub_82570E98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
}

__attribute__((alias("__imp__sub_82570E9C"))) PPC_WEAK_FUNC(sub_82570E9C);
PPC_FUNC_IMPL(__imp__sub_82570E9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ddd18
	sub_826DDD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82570EA0"))) PPC_WEAK_FUNC(sub_82570EA0);
PPC_FUNC_IMPL(__imp__sub_82570EA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
}

__attribute__((alias("__imp__sub_82570EA4"))) PPC_WEAK_FUNC(sub_82570EA4);
PPC_FUNC_IMPL(__imp__sub_82570EA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ddd18
	sub_826DDD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82570EA8"))) PPC_WEAK_FUNC(sub_82570EA8);
PPC_FUNC_IMPL(__imp__sub_82570EA8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-20984
	ctx.r9.s64 = ctx.r10.s64 + -20984;
	// stw r31,22264(r11)
	PPC_STORE_U32(r11.u32 + 22264, r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bl 0x826ddaa8
	sub_826DDAA8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bl 0x826ddaa8
	sub_826DDAA8(ctx, base);
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

__attribute__((alias("__imp__sub_82570F04"))) PPC_WEAK_FUNC(sub_82570F04);
PPC_FUNC_IMPL(__imp__sub_82570F04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82570F08"))) PPC_WEAK_FUNC(sub_82570F08);
PPC_FUNC_IMPL(__imp__sub_82570F08) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x826dde00
	sub_826DDE00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82570fa0
	if (cr6.eq) goto loc_82570FA0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stb r24,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r24.u8);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ddf28
	sub_826DDF28(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r31,1
	r31.s64 = 1;
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_82570FA0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r31,0
	r31.s64 = 0;
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82570FB4"))) PPC_WEAK_FUNC(sub_82570FB4);
PPC_FUNC_IMPL(__imp__sub_82570FB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82570FB8"))) PPC_WEAK_FUNC(sub_82570FB8);
PPC_FUNC_IMPL(__imp__sub_82570FB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x826ddc70
	sub_826DDC70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257104c
	if (cr6.eq) goto loc_8257104C;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stb r8,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r8.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r11,-16
	ctx.r7.s64 = r11.s64 + -16;
	// stw r7,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
loc_8257104C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8257105C"))) PPC_WEAK_FUNC(sub_8257105C);
PPC_FUNC_IMPL(__imp__sub_8257105C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82571060"))) PPC_WEAK_FUNC(sub_82571060);
PPC_FUNC_IMPL(__imp__sub_82571060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x826dde00
	sub_826DDE00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825710c8
	if (cr6.eq) goto loc_825710C8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ddf28
	sub_826DDF28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_825710C8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825710D0"))) PPC_WEAK_FUNC(sub_825710D0);
PPC_FUNC_IMPL(__imp__sub_825710D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825710D4"))) PPC_WEAK_FUNC(sub_825710D4);
PPC_FUNC_IMPL(__imp__sub_825710D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825710D8"))) PPC_WEAK_FUNC(sub_825710D8);
PPC_FUNC_IMPL(__imp__sub_825710D8) {
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x826ddc70
	sub_826DDC70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257113c
	if (cr6.eq) goto loc_8257113C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8257113C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82571144"))) PPC_WEAK_FUNC(sub_82571144);
PPC_FUNC_IMPL(__imp__sub_82571144) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82571148"))) PPC_WEAK_FUNC(sub_82571148);
PPC_FUNC_IMPL(__imp__sub_82571148) {
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
	// addi r9,r11,-20992
	ctx.r9.s64 = r11.s64 + -20992;
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
	// stw r11,22264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22264, r11.u32);
	// beq cr6,0x82571188
	if (cr6.eq) goto loc_82571188;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82571188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82571198"))) PPC_WEAK_FUNC(sub_82571198);
PPC_FUNC_IMPL(__imp__sub_82571198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257119C"))) PPC_WEAK_FUNC(sub_8257119C);
PPC_FUNC_IMPL(__imp__sub_8257119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825711A0"))) PPC_WEAK_FUNC(sub_825711A0);
PPC_FUNC_IMPL(__imp__sub_825711A0) {
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dd9d8
	sub_826DD9D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826dd9d8
	sub_826DD9D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-20992
	ctx.r9.s64 = r11.s64 + -20992;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,22264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22264, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x825711fc
	if (cr6.eq) goto loc_825711FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825711FC:
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

__attribute__((alias("__imp__sub_82571210"))) PPC_WEAK_FUNC(sub_82571210);
PPC_FUNC_IMPL(__imp__sub_82571210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571214"))) PPC_WEAK_FUNC(sub_82571214);
PPC_FUNC_IMPL(__imp__sub_82571214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571218"))) PPC_WEAK_FUNC(sub_82571218);
PPC_FUNC_IMPL(__imp__sub_82571218) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571220"))) PPC_WEAK_FUNC(sub_82571220);
PPC_FUNC_IMPL(__imp__sub_82571220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,200(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571238
	if (!cr6.eq) goto loc_82571238;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82571238:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,100
	r11.s64 = ctx.r9.s64 + 100;
loc_82571244:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82571260
	if (cr6.lt) goto loc_82571260;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,196(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82571274
	if (cr6.lt) goto loc_82571274;
loc_82571260:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82571244
	if (cr6.lt) goto loc_82571244;
	// blr 
	return;
loc_82571274:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82571278"))) PPC_WEAK_FUNC(sub_82571278);
PPC_FUNC_IMPL(__imp__sub_82571278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257127C"))) PPC_WEAK_FUNC(sub_8257127C);
PPC_FUNC_IMPL(__imp__sub_8257127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571280"))) PPC_WEAK_FUNC(sub_82571280);
PPC_FUNC_IMPL(__imp__sub_82571280) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x82571220
	sub_82571220(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825712a8
	if (cr6.eq) goto loc_825712A8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,200(r6)
	PPC_STORE_U8(ctx.r6.u32 + 200, r11.u8);
loc_825712A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825712B4"))) PPC_WEAK_FUNC(sub_825712B4);
PPC_FUNC_IMPL(__imp__sub_825712B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825712B8"))) PPC_WEAK_FUNC(sub_825712B8);
PPC_FUNC_IMPL(__imp__sub_825712B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x82573e20
	sub_82573E20(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,192(r30)
	PPC_STORE_U32(r30.u32 + 192, ctx.r3.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// ble cr6,0x82571314
	if (!cr6.gt) goto loc_82571314;
	// addi r29,r30,92
	r29.s64 = r30.s64 + 92;
loc_825712E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82573fa8
	sub_82573FA8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r28,8(r29)
	ea = 8 + r29.u32;
	PPC_STORE_U32(ea, r28.u32);
	r29.u32 = ea;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x825712e8
	if (cr6.lt) goto loc_825712E8;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(r31.u32, 12, xer);
	// bge cr6,0x82571338
	if (!cr6.lt) goto loc_82571338;
loc_82571314:
	// subfic r10,r31,12
	xer.ca = r31.u32 <= 12;
	ctx.r10.s64 = 12 - r31.s64;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,92
	r11.s64 = r11.s64 + 92;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8257132C:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stwu r28,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// bdnz 0x8257132c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257132C;
loc_82571338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257133C"))) PPC_WEAK_FUNC(sub_8257133C);
PPC_FUNC_IMPL(__imp__sub_8257133C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82571340"))) PPC_WEAK_FUNC(sub_82571340);
PPC_FUNC_IMPL(__imp__sub_82571340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r3,92
	r11.s64 = ctx.r3.s64 + 92;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82571350:
	// stwu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82571350
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82571350;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stb r10,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571364"))) PPC_WEAK_FUNC(sub_82571364);
PPC_FUNC_IMPL(__imp__sub_82571364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571368"))) PPC_WEAK_FUNC(sub_82571368);
PPC_FUNC_IMPL(__imp__sub_82571368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8257137C:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x82571390
	if (!cr6.eq) goto loc_82571390;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82571390:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x825713a0
	if (!cr6.eq) goto loc_825713A0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_825713A0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x825713b4
	if (!cr6.eq) goto loc_825713B4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_825713B4:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x825713c8
	if (!cr6.eq) goto loc_825713C8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_825713C8:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x825713dc
	if (!cr6.eq) goto loc_825713DC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_825713DC:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x825713f0
	if (!cr6.eq) goto loc_825713F0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_825713F0:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bdnz 0x8257137c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257137C;
}

__attribute__((alias("__imp__sub_825713F8"))) PPC_WEAK_FUNC(sub_825713F8);
PPC_FUNC_IMPL(__imp__sub_825713F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825713FC"))) PPC_WEAK_FUNC(sub_825713FC);
PPC_FUNC_IMPL(__imp__sub_825713FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571400"))) PPC_WEAK_FUNC(sub_82571400);
PPC_FUNC_IMPL(__imp__sub_82571400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8257140C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8257142c
	if (cr6.eq) goto loc_8257142C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// blt cr6,0x8257140c
	if (cr6.lt) goto loc_8257140C;
	// b 0x8257145c
	goto loc_8257145C;
loc_8257142C:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8257145c
	if (cr6.eq) goto loc_8257145C;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r3
	ctx.r6.u64 = r11.u64 + ctx.r3.u64;
	// stwx r8,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r9,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r9.u32);
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
loc_8257145C:
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r3,92
	r11.s64 = ctx.r3.s64 + 92;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82571468:
	// stwu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x82571468
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82571468;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// stb r9,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257147C"))) PPC_WEAK_FUNC(sub_8257147C);
PPC_FUNC_IMPL(__imp__sub_8257147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571480"))) PPC_WEAK_FUNC(sub_82571480);
PPC_FUNC_IMPL(__imp__sub_82571480) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82571220
	sub_82571220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82571488"))) PPC_WEAK_FUNC(sub_82571488);
PPC_FUNC_IMPL(__imp__sub_82571488) {
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
	// addi r6,r3,84
	ctx.r6.s64 = ctx.r3.s64 + 84;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82571220
	sub_82571220(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825714b4
	if (cr6.eq) goto loc_825714B4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,200(r6)
	PPC_STORE_U8(ctx.r6.u32 + 200, r11.u8);
loc_825714B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825714C0"))) PPC_WEAK_FUNC(sub_825714C0);
PPC_FUNC_IMPL(__imp__sub_825714C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825714C4"))) PPC_WEAK_FUNC(sub_825714C4);
PPC_FUNC_IMPL(__imp__sub_825714C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825714C8"))) PPC_WEAK_FUNC(sub_825714C8);
PPC_FUNC_IMPL(__imp__sub_825714C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x82571568
	if (cr6.gt) goto loc_82571568;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82571508
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82571508;
	// bdzf 4*cr6+eq,0x82571514
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82571514;
	// bdzf 4*cr6+eq,0x82571520
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82571520;
	// bdzf 4*cr6+eq,0x8257152c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257152C;
	// bdzf 4*cr6+eq,0x82571538
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82571538;
	// bdzf 4*cr6+eq,0x82571544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82571544;
	// bdzf 4*cr6+eq,0x82571550
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82571550;
	// bne cr6,0x8257155c
	if (!cr6.eq) goto loc_8257155C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20684
	ctx.r3.s64 = r11.s64 + -20684;
	// blr 
	return;
loc_82571508:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20712
	ctx.r3.s64 = r11.s64 + -20712;
	// blr 
	return;
loc_82571514:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20756
	ctx.r3.s64 = r11.s64 + -20756;
	// blr 
	return;
loc_82571520:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20792
	ctx.r3.s64 = r11.s64 + -20792;
	// blr 
	return;
loc_8257152C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20832
	ctx.r3.s64 = r11.s64 + -20832;
	// blr 
	return;
loc_82571538:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20860
	ctx.r3.s64 = r11.s64 + -20860;
	// blr 
	return;
loc_82571544:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20904
	ctx.r3.s64 = r11.s64 + -20904;
	// blr 
	return;
loc_82571550:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20940
	ctx.r3.s64 = r11.s64 + -20940;
	// blr 
	return;
loc_8257155C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-20976
	ctx.r3.s64 = r11.s64 + -20976;
	// blr 
	return;
loc_82571568:
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571570"))) PPC_WEAK_FUNC(sub_82571570);
PPC_FUNC_IMPL(__imp__sub_82571570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571574"))) PPC_WEAK_FUNC(sub_82571574);
PPC_FUNC_IMPL(__imp__sub_82571574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571578"))) PPC_WEAK_FUNC(sub_82571578);
PPC_FUNC_IMPL(__imp__sub_82571578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, r11.u8);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, r11.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, r11.u32);
	// stfs f0,296(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571598"))) PPC_WEAK_FUNC(sub_82571598);
PPC_FUNC_IMPL(__imp__sub_82571598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,77
	r11.s64 = ctx.r4.s64 + 77;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825715A8"))) PPC_WEAK_FUNC(sub_825715A8);
PPC_FUNC_IMPL(__imp__sub_825715A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,77
	r11.s64 = ctx.r4.s64 + 77;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825715B8"))) PPC_WEAK_FUNC(sub_825715B8);
PPC_FUNC_IMPL(__imp__sub_825715B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r4,77
	r11.s64 = ctx.r4.s64 + 77;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825715D8"))) PPC_WEAK_FUNC(sub_825715D8);
PPC_FUNC_IMPL(__imp__sub_825715D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82571638
	if (cr6.eq) goto loc_82571638;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82571638
	if (cr6.eq) goto loc_82571638;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// beq cr6,0x82571630
	if (cr6.eq) goto loc_82571630;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x82571630
	if (cr6.eq) goto loc_82571630;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// beq cr6,0x82571628
	if (cr6.eq) goto loc_82571628;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bne cr6,0x8257167c
	if (!cr6.eq) goto loc_8257167C;
loc_82571628:
	// lfs f1,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82571680
	goto loc_82571680;
loc_82571630:
	// lfs f1,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82571680
	goto loc_82571680;
loc_82571638:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82574768
	sub_82574768(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82571658
	if (cr6.eq) goto loc_82571658;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,6240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82571680
	goto loc_82571680;
loc_82571658:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82574be0
	sub_82574BE0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x82571680
	if (cr6.gt) goto loc_82571680;
	// addi r11,r3,77
	r11.s64 = ctx.r3.s64 + 77;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82571680
	goto loc_82571680;
loc_8257167C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82571680:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82571694"))) PPC_WEAK_FUNC(sub_82571694);
PPC_FUNC_IMPL(__imp__sub_82571694) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571698"))) PPC_WEAK_FUNC(sub_82571698);
PPC_FUNC_IMPL(__imp__sub_82571698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825716A8"))) PPC_WEAK_FUNC(sub_825716A8);
PPC_FUNC_IMPL(__imp__sub_825716A8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r4.u32);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82571718
	if (!cr6.eq) goto loc_82571718;
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x82574768
	sub_82574768(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8257173c
	if (cr6.eq) goto loc_8257173C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825715d8
	sub_825715D8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// stb r11,300(r31)
	PPC_STORE_U8(r31.u32 + 300, r11.u8);
	// stw r10,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r10.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82574fc8
	sub_82574FC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82571718:
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// bne cr6,0x8257173c
	if (!cr6.eq) goto loc_8257173C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825715d8
	sub_825715D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r10,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r10.u32);
	// b 0x82571740
	goto loc_82571740;
loc_8257173C:
	// li r11,0
	r11.s64 = 0;
loc_82571740:
	// stb r11,300(r31)
	PPC_STORE_U8(r31.u32 + 300, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82571754"))) PPC_WEAK_FUNC(sub_82571754);
PPC_FUNC_IMPL(__imp__sub_82571754) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571758"))) PPC_WEAK_FUNC(sub_82571758);
PPC_FUNC_IMPL(__imp__sub_82571758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,300(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825717e0
	if (cr6.eq) goto loc_825717E0;
	// lwz r4,292(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x825715d8
	sub_825715D8(ctx, base);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x825717d0
	if (!cr6.eq) goto loc_825717D0;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82573d68
	sub_82573D68(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// blt cr6,0x825717bc
	if (cr6.lt) goto loc_825717BC;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82573d68
	sub_82573D68(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x825717e0
	if (!cr6.lt) goto loc_825717E0;
loc_825717BC:
	// stfs f31,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82574fc8
	sub_82574FC8(ctx, base);
	// b 0x825717e0
	goto loc_825717E0;
loc_825717D0:
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x825717e0
	if (!cr6.lt) goto loc_825717E0;
	// stfs f31,296(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
loc_825717E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825717F4"))) PPC_WEAK_FUNC(sub_825717F4);
PPC_FUNC_IMPL(__imp__sub_825717F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825717F8"))) PPC_WEAK_FUNC(sub_825717F8);
PPC_FUNC_IMPL(__imp__sub_825717F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82571758
	sub_82571758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825717F8"))) PPC_WEAK_FUNC(sub_825717F8);
PPC_FUNC_IMPL(__imp__sub_825717F8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825717FC"))) PPC_WEAK_FUNC(sub_825717FC);
PPC_FUNC_IMPL(__imp__sub_825717FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571800"))) PPC_WEAK_FUNC(sub_82571800);
PPC_FUNC_IMPL(__imp__sub_82571800) {
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
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x82573bf8
	sub_82573BF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82571834
	if (!cr6.eq) goto loc_82571834;
	// li r11,6
	r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// stb r10,300(r31)
	PPC_STORE_U8(r31.u32 + 300, ctx.r10.u8);
loc_82571834:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82571844"))) PPC_WEAK_FUNC(sub_82571844);
PPC_FUNC_IMPL(__imp__sub_82571844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571848"))) PPC_WEAK_FUNC(sub_82571848);
PPC_FUNC_IMPL(__imp__sub_82571848) {
	PPC_FUNC_PROLOGUE();
	// b 0x82571758
	sub_82571758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82571848"))) PPC_WEAK_FUNC(sub_82571848);
PPC_FUNC_IMPL(__imp__sub_82571848) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8257184C"))) PPC_WEAK_FUNC(sub_8257184C);
PPC_FUNC_IMPL(__imp__sub_8257184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571850"))) PPC_WEAK_FUNC(sub_82571850);
PPC_FUNC_IMPL(__imp__sub_82571850) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x82571220
	sub_82571220(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82571880
	if (cr6.eq) goto loc_82571880;
	// lwz r11,92(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// lwz r3,88(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82571880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8257188C"))) PPC_WEAK_FUNC(sub_8257188C);
PPC_FUNC_IMPL(__imp__sub_8257188C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571890"))) PPC_WEAK_FUNC(sub_82571890);
PPC_FUNC_IMPL(__imp__sub_82571890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
loc_8257189C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x825718bc
	if (cr6.eq) goto loc_825718BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// blt cr6,0x8257189c
	if (cr6.lt) goto loc_8257189C;
	// b 0x825718f0
	goto loc_825718F0;
loc_825718BC:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825718f0
	if (cr6.eq) goto loc_825718F0;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// stw r6,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r6.u32);
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
loc_825718F0:
	// lbz r11,200(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82571940
	if (cr6.eq) goto loc_82571940;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,100
	r11.s64 = ctx.r3.s64 + 100;
loc_82571908:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82571924
	if (cr6.lt) goto loc_82571924;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,196(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82571938
	if (cr6.lt) goto loc_82571938;
loc_82571924:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82571908
	if (cr6.lt) goto loc_82571908;
	// b 0x8257193c
	goto loc_8257193C;
loc_82571938:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8257193C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82571940:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257195C"))) PPC_WEAK_FUNC(sub_8257195C);
PPC_FUNC_IMPL(__imp__sub_8257195C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571960"))) PPC_WEAK_FUNC(sub_82571960);
PPC_FUNC_IMPL(__imp__sub_82571960) {
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
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82571368
	sub_82571368(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825719ac
	if (cr6.eq) goto loc_825719AC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_825719AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82571220
	sub_82571220(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825719d0
	if (cr6.eq) goto loc_825719D0;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825719D0:
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

__attribute__((alias("__imp__sub_825719E4"))) PPC_WEAK_FUNC(sub_825719E4);
PPC_FUNC_IMPL(__imp__sub_825719E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825719E8"))) PPC_WEAK_FUNC(sub_825719E8);
PPC_FUNC_IMPL(__imp__sub_825719E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x825719fc
	if (cr6.eq) {
		sub_825719FC(ctx, base);
		return;
	}
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
}

__attribute__((alias("__imp__sub_825719FC"))) PPC_WEAK_FUNC(sub_825719FC);
PPC_FUNC_IMPL(__imp__sub_825719FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x825716a8
	sub_825716A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82571A00"))) PPC_WEAK_FUNC(sub_82571A00);
PPC_FUNC_IMPL(__imp__sub_82571A00) {
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
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x82574c50
	sub_82574C50(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82571a80
	if (!cr6.eq) goto loc_82571A80;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82571a3c
	if (cr6.eq) goto loc_82571A3C;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
loc_82571A3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825716a8
	sub_825716A8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-20644
	ctx.r5.s64 = r11.s64 + -20644;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82571220
	sub_82571220(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82571a80
	if (cr6.eq) goto loc_82571A80;
	// li r11,0
	r11.s64 = 0;
	// stb r11,200(r6)
	PPC_STORE_U8(ctx.r6.u32 + 200, r11.u8);
loc_82571A80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82571A90"))) PPC_WEAK_FUNC(sub_82571A90);
PPC_FUNC_IMPL(__imp__sub_82571A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82571A94"))) PPC_WEAK_FUNC(sub_82571A94);
PPC_FUNC_IMPL(__imp__sub_82571A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571A98"))) PPC_WEAK_FUNC(sub_82571A98);
PPC_FUNC_IMPL(__imp__sub_82571A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82571aac
	if (cr6.eq) {
		sub_82571AAC(ctx, base);
		return;
	}
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
}

__attribute__((alias("__imp__sub_82571AAC"))) PPC_WEAK_FUNC(sub_82571AAC);
PPC_FUNC_IMPL(__imp__sub_82571AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x825716a8
	sub_825716A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82571AB0"))) PPC_WEAK_FUNC(sub_82571AB0);
PPC_FUNC_IMPL(__imp__sub_82571AB0) {
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
	// lbz r11,200(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571b78
	if (!cr6.eq) goto loc_82571B78;
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r3,96
	r30.s64 = ctx.r3.s64 + 96;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stb r10,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r10.u8);
	// li r29,12
	r29.s64 = 12;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// li r28,20
	r28.s64 = 20;
loc_82571AEC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82571b48
	if (cr6.lt) goto loc_82571B48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x825740a8
	sub_825740A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82571b48
	if (cr6.eq) goto loc_82571B48;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82574128
	sub_82574128(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82574320
	sub_82574320(ctx, base);
loc_82571B48:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82571aec
	if (!cr0.eq) goto loc_82571AEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82571220
	sub_82571220(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82571b78
	if (cr6.eq) goto loc_82571B78;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82571B78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82571B7C"))) PPC_WEAK_FUNC(sub_82571B7C);
PPC_FUNC_IMPL(__imp__sub_82571B7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82571B80"))) PPC_WEAK_FUNC(sub_82571B80);
PPC_FUNC_IMPL(__imp__sub_82571B80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
}

__attribute__((alias("__imp__sub_82571B84"))) PPC_WEAK_FUNC(sub_82571B84);
PPC_FUNC_IMPL(__imp__sub_82571B84) {
	PPC_FUNC_PROLOGUE();
	// b 0x82571ab0
	sub_82571AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82571B88"))) PPC_WEAK_FUNC(sub_82571B88);
PPC_FUNC_IMPL(__imp__sub_82571B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,300(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82571c8c
	if (!cr6.eq) goto loc_82571C8C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// addi r29,r11,16564
	r29.s64 = r11.s64 + 16564;
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82571c18
	if (!cr6.eq) goto loc_82571C18;
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x82573d68
	sub_82573D68(ctx, base);
	// stfs f1,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x82571c24
	if (cr6.lt) goto loc_82571C24;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82573e20
	sub_82573E20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82571c24
	if (cr6.gt) goto loc_82571C24;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// lfs f1,-20596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20596);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,296(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// bl 0x82574fc8
	sub_82574FC8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r10,-20608
	ctx.r5.s64 = ctx.r10.s64 + -20608;
	// addi r4,r9,22032
	ctx.r4.s64 = ctx.r9.s64 + 22032;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x82571c24
	goto loc_82571C24;
loc_82571C18:
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f13,296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
loc_82571C24:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// lfs f0,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// beq cr6,0x82571c6c
	if (cr6.eq) goto loc_82571C6C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20624
	ctx.r5.s64 = r11.s64 + -20624;
	// addi r4,r10,15972
	ctx.r4.s64 = ctx.r10.s64 + 15972;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
loc_82571C6C:
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82571c8c
	if (!cr6.lt) goto loc_82571C8C;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82571c8c
	if (cr6.eq) goto loc_82571C8C;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82571ab0
	sub_82571AB0(ctx, base);
loc_82571C8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82571C94"))) PPC_WEAK_FUNC(sub_82571C94);
PPC_FUNC_IMPL(__imp__sub_82571C94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82571C98"))) PPC_WEAK_FUNC(sub_82571C98);
PPC_FUNC_IMPL(__imp__sub_82571C98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31970
	r26.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82571cc8
	if (cr6.eq) goto loc_82571CC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82571ccc
	if (!cr6.eq) goto loc_82571CCC;
loc_82571CC8:
	// li r11,0
	r11.s64 = 0;
loc_82571CCC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19364(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19364);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r27,56
	r25.s64 = r27.s64 + 56;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571d24
	if (!cr6.eq) goto loc_82571D24;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571d24
	if (!cr6.eq) goto loc_82571D24;
	// lwz r11,19364(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19364);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82571D24:
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82571d40
	if (cr6.eq) goto loc_82571D40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82571d44
	if (!cr6.eq) goto loc_82571D44;
loc_82571D40:
	// li r11,0
	r11.s64 = 0;
loc_82571D44:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19380);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,28
	r28.s64 = r27.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571d9c
	if (!cr6.eq) goto loc_82571D9C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571d9c
	if (!cr6.eq) goto loc_82571D9C;
	// lwz r11,19380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19380);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82571D9C:
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82571db8
	if (cr6.eq) goto loc_82571DB8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82571dbc
	if (!cr6.eq) goto loc_82571DBC;
loc_82571DB8:
	// li r11,0
	r11.s64 = 0;
loc_82571DBC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19384);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571e10
	if (!cr6.eq) goto loc_82571E10;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571e10
	if (!cr6.eq) goto loc_82571E10;
	// lwz r11,19384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19384);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82571E10:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82571E2C"))) PPC_WEAK_FUNC(sub_82571E2C);
PPC_FUNC_IMPL(__imp__sub_82571E2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82571E30"))) PPC_WEAK_FUNC(sub_82571E30);
PPC_FUNC_IMPL(__imp__sub_82571E30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31970
	r26.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82571e60
	if (cr6.eq) goto loc_82571E60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82571e64
	if (!cr6.eq) goto loc_82571E64;
loc_82571E60:
	// li r11,0
	r11.s64 = 0;
loc_82571E64:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19004(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19004);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r28,56
	r25.s64 = r28.s64 + 56;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571ebc
	if (!cr6.eq) goto loc_82571EBC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571ebc
	if (!cr6.eq) goto loc_82571EBC;
	// lwz r11,19004(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19004);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82571EBC:
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82571ed8
	if (cr6.eq) goto loc_82571ED8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82571edc
	if (!cr6.eq) goto loc_82571EDC;
loc_82571ED8:
	// li r11,0
	r11.s64 = 0;
loc_82571EDC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20240);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,28
	r27.s64 = r28.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571f34
	if (!cr6.eq) goto loc_82571F34;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571f34
	if (!cr6.eq) goto loc_82571F34;
	// lwz r11,20240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20240);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82571F34:
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82571f50
	if (cr6.eq) goto loc_82571F50;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82571f54
	if (!cr6.eq) goto loc_82571F54;
loc_82571F50:
	// li r11,0
	r11.s64 = 0;
loc_82571F54:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19384);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571fa8
	if (!cr6.eq) goto loc_82571FA8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82571fa8
	if (!cr6.eq) goto loc_82571FA8;
	// lwz r11,19384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19384);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82571FA8:
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x82571c98
	sub_82571C98(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82571FCC"))) PPC_WEAK_FUNC(sub_82571FCC);
PPC_FUNC_IMPL(__imp__sub_82571FCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82571FD0"))) PPC_WEAK_FUNC(sub_82571FD0);
PPC_FUNC_IMPL(__imp__sub_82571FD0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,28
	r26.s64 = r31.s64 + 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,56
	r25.s64 = r31.s64 + 56;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// addi r27,r10,5120
	r27.s64 = ctx.r10.s64 + 5120;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r28,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r28.u32);
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// stb r28,200(r31)
	PPC_STORE_U8(r31.u32 + 200, r28.u8);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257205c
	if (cr6.eq) goto loc_8257205C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572060
	if (!cr6.eq) goto loc_82572060;
loc_8257205C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82572060:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,1996
	ctx.r3.s64 = ctx.r10.s64 + 1996;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,19384(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19384);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,6288
	r27.s64 = r11.s64 + 6288;
	// beq cr6,0x825720d4
	if (cr6.eq) goto loc_825720D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825720d8
	if (!cr6.eq) goto loc_825720D8;
loc_825720D4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825720D8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r24,12(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,2044
	ctx.r3.s64 = ctx.r10.s64 + 2044;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,19380(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19380);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,6496
	r27.s64 = r11.s64 + 6496;
	// beq cr6,0x82572144
	if (cr6.eq) goto loc_82572144;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82572144
	if (cr6.eq) goto loc_82572144;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82572144:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r30,12(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,2228
	ctx.r3.s64 = r11.s64 + 2228;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19364(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19364);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825712b8
	sub_825712B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8257219C"))) PPC_WEAK_FUNC(sub_8257219C);
PPC_FUNC_IMPL(__imp__sub_8257219C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825721A0"))) PPC_WEAK_FUNC(sub_825721A0);
PPC_FUNC_IMPL(__imp__sub_825721A0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r27,r31,28
	r27.s64 = r31.s64 + 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,56
	r25.s64 = r31.s64 + 56;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,6656
	ctx.r10.s64 = r11.s64 + 6656;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82571fd0
	sub_82571FD0(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// stw r26,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r26.u32);
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r26,300(r31)
	PPC_STORE_U8(r31.u32 + 300, r26.u8);
	// stfs f0,296(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// stw r26,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r26.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// addi r28,r11,6136
	r28.s64 = r11.s64 + 6136;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257223c
	if (cr6.eq) goto loc_8257223C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572240
	if (!cr6.eq) goto loc_82572240;
loc_8257223C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82572240:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,1996
	ctx.r3.s64 = ctx.r10.s64 + 1996;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,19384(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19384);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,6144
	r28.s64 = r11.s64 + 6144;
	// beq cr6,0x825722b4
	if (cr6.eq) goto loc_825722B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825722b8
	if (!cr6.eq) goto loc_825722B8;
loc_825722B4:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_825722B8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r24,12(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,11036
	ctx.r3.s64 = ctx.r10.s64 + 11036;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20240);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,6216
	r28.s64 = r11.s64 + 6216;
	// beq cr6,0x82572324
	if (cr6.eq) goto loc_82572324;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572328
	if (!cr6.eq) goto loc_82572328;
loc_82572324:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82572328:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-4992
	ctx.r3.s64 = ctx.r10.s64 + -4992;
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
	// lwz r11,19004(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19004);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-20364
	ctx.r3.s64 = ctx.r8.s64 + -20364;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,21644(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21644);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-20388
	ctx.r3.s64 = ctx.r6.s64 + -20388;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r29,r11,20600
	r29.s64 = r11.s64 + 20600;
	// beq cr6,0x82572414
	if (cr6.eq) goto loc_82572414;
	// rotlwi r11,r5,0
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
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
	// beq cr6,0x82572414
	if (cr6.eq) goto loc_82572414;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572418
	if (!cr6.eq) goto loc_82572418;
loc_82572414:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82572418:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f31,6196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6196);
	f31.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,340(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 340, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-20412
	ctx.r3.s64 = ctx.r8.s64 + -20412;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825724ac
	if (cr6.eq) goto loc_825724AC;
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
	// beq cr6,0x825724ac
	if (cr6.eq) goto loc_825724AC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825724b0
	if (!cr6.eq) goto loc_825724B0;
loc_825724AC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825724B0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,336(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 336, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20436
	ctx.r3.s64 = ctx.r9.s64 + -20436;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257253c
	if (cr6.eq) goto loc_8257253C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x8257253c
	if (cr6.eq) goto loc_8257253C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572540
	if (!cr6.eq) goto loc_82572540;
loc_8257253C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82572540:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,332(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20460
	ctx.r3.s64 = ctx.r9.s64 + -20460;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825725cc
	if (cr6.eq) goto loc_825725CC;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825725cc
	if (cr6.eq) goto loc_825725CC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825725d0
	if (!cr6.eq) goto loc_825725D0;
loc_825725CC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825725D0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,328(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 328, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20484
	ctx.r3.s64 = ctx.r9.s64 + -20484;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257265c
	if (cr6.eq) goto loc_8257265C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x8257265c
	if (cr6.eq) goto loc_8257265C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572660
	if (!cr6.eq) goto loc_82572660;
loc_8257265C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82572660:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,324(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 324, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20508
	ctx.r3.s64 = ctx.r9.s64 + -20508;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825726ec
	if (cr6.eq) goto loc_825726EC;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825726ec
	if (cr6.eq) goto loc_825726EC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825726f0
	if (!cr6.eq) goto loc_825726F0;
loc_825726EC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825726F0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,320(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20532
	ctx.r3.s64 = ctx.r9.s64 + -20532;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257277c
	if (cr6.eq) goto loc_8257277C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x8257277c
	if (cr6.eq) goto loc_8257277C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572780
	if (!cr6.eq) goto loc_82572780;
loc_8257277C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82572780:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20552
	ctx.r3.s64 = ctx.r9.s64 + -20552;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257280c
	if (cr6.eq) goto loc_8257280C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x8257280c
	if (cr6.eq) goto loc_8257280C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572810
	if (!cr6.eq) goto loc_82572810;
loc_8257280C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82572810:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,312(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 312, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20564
	ctx.r3.s64 = ctx.r9.s64 + -20564;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257289c
	if (cr6.eq) goto loc_8257289C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x8257289c
	if (cr6.eq) goto loc_8257289C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825728a0
	if (!cr6.eq) goto loc_825728A0;
loc_8257289C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825728A0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,308(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 308, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20576
	ctx.r3.s64 = ctx.r9.s64 + -20576;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257292c
	if (cr6.eq) goto loc_8257292C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x8257292c
	if (cr6.eq) goto loc_8257292C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572930
	if (!cr6.eq) goto loc_82572930;
loc_8257292C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82572930:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,344(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 344, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-20592
	ctx.r3.s64 = ctx.r9.s64 + -20592;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825729bc
	if (cr6.eq) goto loc_825729BC;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825729bc
	if (cr6.eq) goto loc_825729BC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825729c0
	if (!cr6.eq) goto loc_825729C0;
loc_825729BC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825729C0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,348(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 348, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_825729F4"))) PPC_WEAK_FUNC(sub_825729F4);
PPC_FUNC_IMPL(__imp__sub_825729F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825729F8"))) PPC_WEAK_FUNC(sub_825729F8);
PPC_FUNC_IMPL(__imp__sub_825729F8) {
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
	// li r11,17
	r11.s64 = 17;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r9,r4,-1000
	ctx.r9.s64 = ctx.r4.s64 + -1000;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// divw r4,r9,r4
	ctx.r4.s32 = ctx.r9.s32 / ctx.r4.s32;
	// bl 0x82574320
	sub_82574320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82572A48"))) PPC_WEAK_FUNC(sub_82572A48);
PPC_FUNC_IMPL(__imp__sub_82572A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82572A4C"))) PPC_WEAK_FUNC(sub_82572A4C);
PPC_FUNC_IMPL(__imp__sub_82572A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82572A50"))) PPC_WEAK_FUNC(sub_82572A50);
PPC_FUNC_IMPL(__imp__sub_82572A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
}

__attribute__((alias("__imp__sub_82572A5C"))) PPC_WEAK_FUNC(sub_82572A5C);
PPC_FUNC_IMPL(__imp__sub_82572A5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82572A60"))) PPC_WEAK_FUNC(sub_82572A60);
PPC_FUNC_IMPL(__imp__sub_82572A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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
}

__attribute__((alias("__imp__sub_82572A7C"))) PPC_WEAK_FUNC(sub_82572A7C);
PPC_FUNC_IMPL(__imp__sub_82572A7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82572A80"))) PPC_WEAK_FUNC(sub_82572A80);
PPC_FUNC_IMPL(__imp__sub_82572A80) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822dfd88
	sub_822DFD88(ctx, base);
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

__attribute__((alias("__imp__sub_82572AC0"))) PPC_WEAK_FUNC(sub_82572AC0);
PPC_FUNC_IMPL(__imp__sub_82572AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82572AC4"))) PPC_WEAK_FUNC(sub_82572AC4);
PPC_FUNC_IMPL(__imp__sub_82572AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82572AC8"))) PPC_WEAK_FUNC(sub_82572AC8);
PPC_FUNC_IMPL(__imp__sub_82572AC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1672
	ctx.r3.s64 = ctx.r3.s64 + 1672;
}

__attribute__((alias("__imp__sub_82572ACC"))) PPC_WEAK_FUNC(sub_82572ACC);
PPC_FUNC_IMPL(__imp__sub_82572ACC) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dfb50
	sub_822DFB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82572AD0"))) PPC_WEAK_FUNC(sub_82572AD0);
PPC_FUNC_IMPL(__imp__sub_82572AD0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// bl 0x8253b5b8
	sub_8253B5B8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,112
	ctx.r6.s64 = 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825742b8
	sub_825742B8(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82572B48"))) PPC_WEAK_FUNC(sub_82572B48);
PPC_FUNC_IMPL(__imp__sub_82572B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82572B4C"))) PPC_WEAK_FUNC(sub_82572B4C);
PPC_FUNC_IMPL(__imp__sub_82572B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82572B50"))) PPC_WEAK_FUNC(sub_82572B50);
PPC_FUNC_IMPL(__imp__sub_82572B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r24,r11,-20332
	r24.s64 = r11.s64 + -20332;
	// addi r9,r1,360
	ctx.r9.s64 = ctx.r1.s64 + 360;
	// li r22,12
	r22.s64 = 12;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// li r23,1
	r23.s64 = 1;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r30.u32);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r30.u64);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r24.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r22,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r22.u32);
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r23.u32);
	// stw r8,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r8.u32);
	// bl 0x82573270
	sub_82573270(ctx, base);
	// lwz r7,340(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 340);
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82572c34
	if (!cr6.gt) goto loc_82572C34;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r28,r26,424
	r28.s64 = r26.s64 + 424;
	// lis r25,-31970
	r25.s64 = -2095185920;
loc_82572BCC:
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// stdx r10,r29,r11
	PPC_STORE_U64(r29.u32 + r11.u32, ctx.r10.u64);
	// lwz r3,-14756(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x82572c00
	if (cr6.eq) goto loc_82572C00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572c04
	if (!cr6.eq) goto loc_82572C04;
loc_82572C00:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82572C04:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// bl 0x8255ca68
	sub_8255CA68(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r11,340(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 340);
	// addi r28,r28,88
	r28.s64 = r28.s64 + 88;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82572bcc
	if (cr6.lt) goto loc_82572BCC;
loc_82572C34:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r28,92(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x82573788
	sub_82573788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82572cb8
	if (cr6.eq) goto loc_82572CB8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-20308
	ctx.r9.s64 = ctx.r10.s64 + -20308;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r24.u32);
	// stw r22,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r22.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r23.u32);
	// bl 0x82573340
	sub_82573340(ctx, base);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82572CB8:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// stw r24,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82572ce4
	if (!cr6.gt) goto loc_82572CE4;
loc_82572CCC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x82572ccc
	if (cr6.gt) goto loc_82572CCC;
loc_82572CE4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r10,-20344
	ctx.r8.s64 = ctx.r10.s64 + -20344;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// ble cr6,0x82572d14
	if (!cr6.gt) goto loc_82572D14;
loc_82572CFC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x82572cfc
	if (cr6.gt) goto loc_82572CFC;
loc_82572D14:
	// lwz r3,552(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
}

__attribute__((alias("__imp__sub_82572D20"))) PPC_WEAK_FUNC(sub_82572D20);
PPC_FUNC_IMPL(__imp__sub_82572D20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82572D24"))) PPC_WEAK_FUNC(sub_82572D24);
PPC_FUNC_IMPL(__imp__sub_82572D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82572D28"))) PPC_WEAK_FUNC(sub_82572D28);
PPC_FUNC_IMPL(__imp__sub_82572D28) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-3984(r1)
	ea = -3984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,3896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3896, ctx.r9.u32);
	// blt cr6,0x82572f58
	if (cr6.lt) goto loc_82572F58;
	// beq cr6,0x82572ec0
	if (cr6.eq) goto loc_82572EC0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82573054
	if (!cr6.lt) goto loc_82573054;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r3,r1,2072
	ctx.r3.s64 = ctx.r1.s64 + 2072;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r9.u32);
	// lwz r11,20220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20220);
	// stw r11,2064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2064, r11.u32);
	// bl 0x822dfd88
	sub_822DFD88(ctx, base);
	// li r5,1824
	ctx.r5.s64 = 1824;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,2072
	ctx.r3.s64 = ctx.r1.s64 + 2072;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r11,2412(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82572e54
	if (!cr6.gt) goto loc_82572E54;
	// mr r24,r11
	r24.u64 = r11.u64;
	// lis r11,4194
	r11.s64 = 274857984;
	// addi r27,r1,2424
	r27.s64 = ctx.r1.s64 + 2424;
	// li r25,1000
	r25.s64 = 1000;
	// ori r30,r11,19923
	r30.u64 = r11.u64 | 19923;
loc_82572DB4:
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r28,-1
	r28.s64 = -1;
	// mulhw r9,r11,r30
	ctx.r9.s64 = (int64_t(r11.s32) * int64_t(r30.s32)) >> 32;
	// srawi r9,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// addi r31,r11,-1000
	r31.s64 = r11.s64 + -1000;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// divw r4,r31,r25
	ctx.r4.s32 = r31.s32 / r25.s32;
	// mulli r5,r6,1000
	ctx.r5.s64 = ctx.r6.s64 * 1000;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r9,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 31;
	// subfc r8,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// adde r11,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// bl 0x825740a8
	sub_825740A8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82572e34
	if (cr6.eq) goto loc_82572E34;
	// mulhw r11,r31,r30
	r11.s64 = (int64_t(r31.s32) * int64_t(r30.s32)) >> 32;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mulli r6,r7,1000
	ctx.r6.s64 = ctx.r7.s64 * 1000;
	// subf r11,r6,r31
	r11.s64 = r31.s64 - ctx.r6.s64;
	// addi r28,r11,-100
	r28.s64 = r11.s64 + -100;
	// b 0x82572e44
	goto loc_82572E44;
loc_82572E34:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
loc_82572E44:
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stwu r28,88(r27)
	ea = 88 + r27.u32;
	PPC_STORE_U32(ea, r28.u32);
	r27.u32 = ea;
	// bne 0x82572db4
	if (!cr0.eq) goto loc_82572DB4;
loc_82572E54:
	// addi r4,r1,2072
	ctx.r4.s64 = ctx.r1.s64 + 2072;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82572b50
	sub_82572B50(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r4,r1,2072
	ctx.r4.s64 = ctx.r1.s64 + 2072;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82572ea8
	if (cr6.lt) goto loc_82572EA8;
	// lwz r11,2064(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2064);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822dfe90
	sub_822DFE90(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,20992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x825738a8
	sub_825738A8(ctx, base);
	// lwz r3,3896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3896);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,3984
	ctx.r1.s64 = ctx.r1.s64 + 3984;
	// b 0x828e9458
	return;
loc_82572EA8:
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// bl 0x825734a0
	sub_825734A0(ctx, base);
	// lwz r3,3896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3896);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,3984
	ctx.r1.s64 = ctx.r1.s64 + 3984;
	// b 0x828e9458
	return;
loc_82572EC0:
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lwz r11,19376(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19376);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82572f0c
	if (cr6.eq) goto loc_82572F0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82572f10
	if (!cr6.eq) goto loc_82572F10;
loc_82572F0C:
	// li r11,0
	r11.s64 = 0;
loc_82572F10:
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
	// beq cr6,0x82573054
	if (cr6.eq) goto loc_82573054;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82573054
	if (!cr6.eq) goto loc_82573054;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x8257304c
	goto loc_8257304C;
loc_82572F58:
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x8253b518
	sub_8253B518(ctx, base);
	// addi r11,r30,-8
	r11.s64 = r30.s64 + -8;
	// li r10,104
	ctx.r10.s64 = 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,104
	cr6.compare<uint32_t>(r11.u32, 104, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82572f80
	if (cr6.gt) goto loc_82572F80;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82572F80:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// cmplwi cr6,r30,112
	cr6.compare<uint32_t>(r30.u32, 112, xer);
	// bge cr6,0x82572fa4
	if (!cr6.lt) goto loc_82572FA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82576dd0
	sub_82576DD0(ctx, base);
loc_82572FA4:
	// lis r10,4194
	ctx.r10.s64 = 274857984;
	// lwz r11,1968(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1968);
	// ori r9,r10,19923
	ctx.r9.u64 = ctx.r10.u64 | 19923;
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r8,6
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,1000
	ctx.r6.s64 = ctx.r7.s64 * 1000;
	// subf r5,r6,r11
	ctx.r5.s64 = r11.s64 - ctx.r6.s64;
	// li r11,2
	r11.s64 = 2;
	// cmpwi cr6,r5,100
	cr6.compare<int32_t>(ctx.r5.s32, 100, xer);
	// bge cr6,0x82572fd8
	if (!cr6.lt) goto loc_82572FD8;
	// li r11,3
	r11.s64 = 3;
loc_82572FD8:
	// stw r11,1956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1956, r11.u32);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,1964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1964, ctx.r10.u32);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82573004
	if (cr6.eq) goto loc_82573004;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82573008
	if (!cr6.eq) goto loc_82573008;
loc_82573004:
	// li r11,0
	r11.s64 = 0;
loc_82573008:
	// lwz r10,1952(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1952);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82573054
	if (cr6.eq) goto loc_82573054;
	// addi r4,r1,1952
	ctx.r4.s64 = ctx.r1.s64 + 1952;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82573054
	if (!cr6.eq) goto loc_82573054;
	// lwz r11,1952(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1952);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_8257304C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82573054:
	// lwz r3,3896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3896);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,3984
	ctx.r1.s64 = ctx.r1.s64 + 3984;
}

__attribute__((alias("__imp__sub_82573060"))) PPC_WEAK_FUNC(sub_82573060);
PPC_FUNC_IMPL(__imp__sub_82573060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82573064"))) PPC_WEAK_FUNC(sub_82573064);
PPC_FUNC_IMPL(__imp__sub_82573064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573068"))) PPC_WEAK_FUNC(sub_82573068);
PPC_FUNC_IMPL(__imp__sub_82573068) {
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
	// stwu r1,-3792(r1)
	ea = -3792 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,3752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3752, ctx.r10.u32);
	// bl 0x825744c0
	sub_825744C0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82573124
	if (cr6.eq) goto loc_82573124;
	// li r11,17
	r11.s64 = 17;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,1920(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1920, r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,1921(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1921, ctx.r10.u8);
	// addi r3,r1,1928
	ctx.r3.s64 = ctx.r1.s64 + 1928;
	// bl 0x822dfe90
	sub_822DFE90(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1832
	ctx.r6.s64 = 1832;
	// addi r5,r1,1920
	ctx.r5.s64 = ctx.r1.s64 + 1920;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825742b8
	sub_825742B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82572b50
	sub_82572B50(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,20220(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20220);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822dfd88
	sub_822DFD88(ctx, base);
	// li r5,1824
	ctx.r5.s64 = 1824;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20992(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x825738a8
	sub_825738A8(ctx, base);
	// b 0x82573194
	goto loc_82573194;
loc_82573124:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82573188
	if (cr6.lt) goto loc_82573188;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82572b50
	sub_82572B50(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,20220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20220);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822dfd88
	sub_822DFD88(ctx, base);
	// li r5,1824
	ctx.r5.s64 = 1824;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x825738a8
	sub_825738A8(ctx, base);
	// b 0x82573194
	goto loc_82573194;
loc_82573188:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x825734a0
	sub_825734A0(ctx, base);
loc_82573194:
	// lwz r3,3752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3752);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,3792
	ctx.r1.s64 = ctx.r1.s64 + 3792;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825731B0"))) PPC_WEAK_FUNC(sub_825731B0);
PPC_FUNC_IMPL(__imp__sub_825731B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825731B4"))) PPC_WEAK_FUNC(sub_825731B4);
PPC_FUNC_IMPL(__imp__sub_825731B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825731B8"))) PPC_WEAK_FUNC(sub_825731B8);
PPC_FUNC_IMPL(__imp__sub_825731B8) {
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
	// stwu r1,-3792(r1)
	ea = -3792 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r6,24192(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r3,r1,1928
	ctx.r3.s64 = ctx.r1.s64 + 1928;
	// stb r9,1920(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1920, ctx.r9.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r7,1921(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1921, ctx.r7.u8);
	// stw r6,3752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3752, ctx.r6.u32);
	// bl 0x822dfe90
	sub_822DFE90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82572b50
	sub_82572B50(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,20220(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20220);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822dfd88
	sub_822DFD88(ctx, base);
	// li r5,1824
	ctx.r5.s64 = 1824;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20992(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x825738a8
	sub_825738A8(ctx, base);
	// lwz r3,3752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3752);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,3792
	ctx.r1.s64 = ctx.r1.s64 + 3792;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82573268"))) PPC_WEAK_FUNC(sub_82573268);
PPC_FUNC_IMPL(__imp__sub_82573268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257326C"))) PPC_WEAK_FUNC(sub_8257326C);
PPC_FUNC_IMPL(__imp__sub_8257326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573270"))) PPC_WEAK_FUNC(sub_82573270);
PPC_FUNC_IMPL(__imp__sub_82573270) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825732a4
	if (!cr6.gt) goto loc_825732A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825732A4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82573310
	if (!cr6.lt) goto loc_82573310;
loc_825732B0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825732d8
	if (!cr6.gt) goto loc_825732D8;
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
loc_825732D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573304
	if (cr0.eq) goto loc_82573304;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
loc_82573304:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x825732b0
	if (cr6.lt) goto loc_825732B0;
loc_82573310:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x82573334
	if (!cr6.gt) goto loc_82573334;
loc_8257331C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bgt cr6,0x8257331c
	if (cr6.gt) goto loc_8257331C;
loc_82573334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82573338"))) PPC_WEAK_FUNC(sub_82573338);
PPC_FUNC_IMPL(__imp__sub_82573338) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257333C"))) PPC_WEAK_FUNC(sub_8257333C);
PPC_FUNC_IMPL(__imp__sub_8257333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573340"))) PPC_WEAK_FUNC(sub_82573340);
PPC_FUNC_IMPL(__imp__sub_82573340) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82573378
	if (!cr6.gt) goto loc_82573378;
loc_82573360:
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
	// bgt cr6,0x82573360
	if (cr6.gt) goto loc_82573360;
loc_82573378:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8257339c
	if (!cr6.gt) goto loc_8257339C;
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
loc_8257339C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82573424
	if (cr6.eq) goto loc_82573424;
loc_825733B4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825733dc
	if (!cr6.gt) goto loc_825733DC;
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
loc_825733DC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82573408
	if (cr0.eq) goto loc_82573408;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
loc_82573408:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825733b4
	if (!cr6.eq) goto loc_825733B4;
loc_82573424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82573428"))) PPC_WEAK_FUNC(sub_82573428);
PPC_FUNC_IMPL(__imp__sub_82573428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257342C"))) PPC_WEAK_FUNC(sub_8257342C);
PPC_FUNC_IMPL(__imp__sub_8257342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573430"))) PPC_WEAK_FUNC(sub_82573430);
PPC_FUNC_IMPL(__imp__sub_82573430) {
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
	// addi r9,r11,-20344
	ctx.r9.s64 = r11.s64 + -20344;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82573474
	if (!cr6.gt) goto loc_82573474;
loc_8257345C:
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
	// bgt cr6,0x8257345c
	if (cr6.gt) goto loc_8257345C;
loc_82573474:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257348c
	if (cr6.eq) goto loc_8257348C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257348C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257349C"))) PPC_WEAK_FUNC(sub_8257349C);
PPC_FUNC_IMPL(__imp__sub_8257349C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825734A0"))) PPC_WEAK_FUNC(sub_825734A0);
PPC_FUNC_IMPL(__imp__sub_825734A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,260
	ctx.r10.s64 = 260;
	// addi r9,r4,40
	ctx.r9.s64 = ctx.r4.s64 + 40;
	// addi r8,r3,40
	ctx.r8.s64 = ctx.r3.s64 + 40;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// li r11,0
	r11.s64 = 0;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_82573528:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82573528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82573528;
	// li r10,40
	ctx.r10.s64 = 40;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r30,300
	ctx.r9.s64 = r30.s64 + 300;
	// addi r8,r31,300
	ctx.r8.s64 = r31.s64 + 300;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8257354C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8257354c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257354C;
	// lwz r11,340(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// addi r29,r31,360
	r29.s64 = r31.s64 + 360;
	// subf r27,r31,r30
	r27.s64 = r30.s64 - r31.s64;
	// li r28,12
	r28.s64 = 12;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// lwz r10,344(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// stw r10,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// lwz r9,348(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// stw r9,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r9.u32);
	// lwz r8,352(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 352);
	// stw r8,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r8.u32);
	// lwz r7,356(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// stw r7,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r7.u32);
loc_82573590:
	// add r4,r27,r29
	ctx.r4.u64 = r27.u64 + r29.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,88
	r29.s64 = r29.s64 + 88;
	// bne 0x82573590
	if (!cr0.eq) goto loc_82573590;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r30,1412
	ctx.r10.s64 = r30.s64 + 1412;
	// addi r11,r31,1424
	r11.s64 = r31.s64 + 1424;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825735BC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(r27.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f7,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r7,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r7.u32);
	// lfs f6,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f5,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f4,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f3,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r6,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r6.u32);
	// lfs f2,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// lfs f1,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// lfs f13,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// lwz r5,84(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r5,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r5.u32);
	// lfs f12,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 76, temp.u32);
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lfs f10,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// lfs f9,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// lwz r4,104(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r4,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r4.u32);
	// lfs f8,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,96(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lfs f7,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,100(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lfs f6,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,104(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// lfsu f0,120(r10)
	ea = 120 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 108, temp.u32);
	// addi r11,r11,120
	r11.s64 = r11.s64 + 120;
	// bdnz 0x825735bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825735BC;
	// addi r4,r30,1656
	ctx.r4.s64 = r30.s64 + 1656;
	// addi r3,r31,1656
	ctx.r3.s64 = r31.s64 + 1656;
	// bl 0x8254c480
	sub_8254C480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825736C8"))) PPC_WEAK_FUNC(sub_825736C8);
PPC_FUNC_IMPL(__imp__sub_825736C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825736CC"))) PPC_WEAK_FUNC(sub_825736CC);
PPC_FUNC_IMPL(__imp__sub_825736CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825736D0"))) PPC_WEAK_FUNC(sub_825736D0);
PPC_FUNC_IMPL(__imp__sub_825736D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-20332
	ctx.r9.s64 = r11.s64 + -20332;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82573700
	if (!cr6.gt) goto loc_82573700;
loc_825736E8:
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
	// bgt cr6,0x825736e8
	if (cr6.gt) goto loc_825736E8;
loc_82573700:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-20344
	ctx.r9.s64 = r11.s64 + -20344;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_82573718:
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
	// bgt cr6,0x82573718
	if (cr6.gt) goto loc_82573718;
}

__attribute__((alias("__imp__sub_82573730"))) PPC_WEAK_FUNC(sub_82573730);
PPC_FUNC_IMPL(__imp__sub_82573730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573734"))) PPC_WEAK_FUNC(sub_82573734);
PPC_FUNC_IMPL(__imp__sub_82573734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573738"))) PPC_WEAK_FUNC(sub_82573738);
PPC_FUNC_IMPL(__imp__sub_82573738) {
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
	// bl 0x825736d0
	sub_825736D0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82573770
	if (cr6.eq) goto loc_82573770;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82573770:
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

__attribute__((alias("__imp__sub_82573784"))) PPC_WEAK_FUNC(sub_82573784);
PPC_FUNC_IMPL(__imp__sub_82573784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573788"))) PPC_WEAK_FUNC(sub_82573788);
PPC_FUNC_IMPL(__imp__sub_82573788) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,29488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29488);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// addi r8,r10,-20332
	ctx.r8.s64 = ctx.r10.s64 + -20332;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// bl 0x82573270
	sub_82573270(ctx, base);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ble cr6,0x82573834
	if (!cr6.gt) goto loc_82573834;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82573800:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82573800
	if (cr6.lt) goto loc_82573800;
loc_82573834:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257383C"))) PPC_WEAK_FUNC(sub_8257383C);
PPC_FUNC_IMPL(__imp__sub_8257383C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82573840"))) PPC_WEAK_FUNC(sub_82573840);
PPC_FUNC_IMPL(__imp__sub_82573840) {
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
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82573870
	if (cr6.eq) goto loc_82573870;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82573874
	if (!cr6.eq) goto loc_82573874;
loc_82573870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82573874:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82573890
	if (cr6.eq) goto loc_82573890;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,1852(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1852);
	// lwz r5,1848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1848);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_82573890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825738A0"))) PPC_WEAK_FUNC(sub_825738A0);
PPC_FUNC_IMPL(__imp__sub_825738A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825738A4"))) PPC_WEAK_FUNC(sub_825738A4);
PPC_FUNC_IMPL(__imp__sub_825738A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825738A8"))) PPC_WEAK_FUNC(sub_825738A8);
PPC_FUNC_IMPL(__imp__sub_825738A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1856
	ctx.r4.s64 = 1856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257390c
	if (cr6.eq) goto loc_8257390C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-20320
	ctx.r9.s64 = ctx.r10.s64 + -20320;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// bl 0x822dfe90
	sub_822DFE90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,1848(r31)
	PPC_STORE_U32(r31.u32 + 1848, r11.u32);
	// stw r11,1852(r31)
	PPC_STORE_U32(r31.u32 + 1852, r11.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8257390C:
	// addi r3,r30,1664
	ctx.r3.s64 = r30.s64 + 1664;
	// bl 0x822dfb50
	sub_822DFB50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82573918"))) PPC_WEAK_FUNC(sub_82573918);
PPC_FUNC_IMPL(__imp__sub_82573918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257391C"))) PPC_WEAK_FUNC(sub_8257391C);
PPC_FUNC_IMPL(__imp__sub_8257391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82573920"))) PPC_WEAK_FUNC(sub_82573920);
PPC_FUNC_IMPL(__imp__sub_82573920) {
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
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82573950
	if (cr6.eq) goto loc_82573950;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82573954
	if (!cr6.eq) goto loc_82573954;
loc_82573950:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82573954:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82573970
	if (cr6.eq) goto loc_82573970;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_82573970:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82573980"))) PPC_WEAK_FUNC(sub_82573980);
PPC_FUNC_IMPL(__imp__sub_82573980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82573984"))) PPC_WEAK_FUNC(sub_82573984);
PPC_FUNC_IMPL(__imp__sub_82573984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

