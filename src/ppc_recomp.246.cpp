#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8273897C"))) PPC_WEAK_FUNC(sub_8273897C);
PPC_FUNC_IMPL(__imp__sub_8273897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738980"))) PPC_WEAK_FUNC(sub_82738980);
PPC_FUNC_IMPL(__imp__sub_82738980) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827389e8
	if (!cr6.eq) goto loc_827389E8;
	// lwz r3,1172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x827389c0
	if (cr6.eq) goto loc_827389C0;
	// bl 0x82bbb0a8
	sub_82BBB0A8(ctx, base);
	// lwz r3,1172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1172);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,1172(r31)
	PPC_STORE_U32(r31.u32 + 1172, r11.u32);
loc_827389C0:
	// addi r3,r31,1180
	ctx.r3.s64 = r31.s64 + 1180;
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// li r10,-5
	ctx.r10.s64 = -5;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r10,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, ctx.r10.u32);
	// stw r9,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r9.u32);
loc_827389E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827389FC"))) PPC_WEAK_FUNC(sub_827389FC);
PPC_FUNC_IMPL(__imp__sub_827389FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738A00"))) PPC_WEAK_FUNC(sub_82738A00);
PPC_FUNC_IMPL(__imp__sub_82738A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82739178
	sub_82739178(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-32076
	ctx.r10.s64 = r11.s64 + -32076;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r30.u32);
	// stw r30,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r30.u32);
	// stw r30,1164(r31)
	PPC_STORE_U32(r31.u32 + 1164, r30.u32);
	// stw r30,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, r30.u32);
	// stw r30,1176(r31)
	PPC_STORE_U32(r31.u32 + 1176, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,1172(r31)
	PPC_STORE_U32(r31.u32 + 1172, ctx.r9.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,1228(r31)
	PPC_STORE_U32(r31.u32 + 1228, ctx.r3.u32);
	// addi r11,r31,1176
	r11.s64 = r31.s64 + 1176;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82738A5C:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x82738a5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82738A5C;
	// stw r30,1208(r31)
	PPC_STORE_U32(r31.u32 + 1208, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,1212(r31)
	PPC_STORE_U32(r31.u32 + 1212, r30.u32);
	// stw r30,1216(r31)
	PPC_STORE_U32(r31.u32 + 1216, r30.u32);
	// stw r30,1220(r31)
	PPC_STORE_U32(r31.u32 + 1220, r30.u32);
	// stw r30,1224(r31)
	PPC_STORE_U32(r31.u32 + 1224, r30.u32);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82738aa8
	if (!cr6.eq) goto loc_82738AA8;
	// lbz r11,1069(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1069);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,26,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF83F;
	// addi r8,r11,3000
	ctx.r8.s64 = r11.s64 + 3000;
	// stw r8,1164(r31)
	PPC_STORE_U32(r31.u32 + 1164, ctx.r8.u32);
loc_82738AA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82738AAC"))) PPC_WEAK_FUNC(sub_82738AAC);
PPC_FUNC_IMPL(__imp__sub_82738AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82738AB0"))) PPC_WEAK_FUNC(sub_82738AB0);
PPC_FUNC_IMPL(__imp__sub_82738AB0) {
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
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,1152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-31544
	ctx.r5.s64 = ctx.r8.s64 + -31544;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1140);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82738B10"))) PPC_WEAK_FUNC(sub_82738B10);
PPC_FUNC_IMPL(__imp__sub_82738B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738B14"))) PPC_WEAK_FUNC(sub_82738B14);
PPC_FUNC_IMPL(__imp__sub_82738B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738B18"))) PPC_WEAK_FUNC(sub_82738B18);
PPC_FUNC_IMPL(__imp__sub_82738B18) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// stw r3,1228(r31)
	PPC_STORE_U32(r31.u32 + 1228, ctx.r3.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1136);
	// addi r9,r10,-31544
	ctx.r9.s64 = ctx.r10.s64 + -31544;
	// lwz r8,1140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// addi r6,r31,64
	ctx.r6.s64 = r31.s64 + 64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r9,1152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82738B88"))) PPC_WEAK_FUNC(sub_82738B88);
PPC_FUNC_IMPL(__imp__sub_82738B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738B8C"))) PPC_WEAK_FUNC(sub_82738B8C);
PPC_FUNC_IMPL(__imp__sub_82738B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738B90"))) PPC_WEAK_FUNC(sub_82738B90);
PPC_FUNC_IMPL(__imp__sub_82738B90) {
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
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,1152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-31544
	ctx.r5.s64 = ctx.r8.s64 + -31544;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1140);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82738BF0"))) PPC_WEAK_FUNC(sub_82738BF0);
PPC_FUNC_IMPL(__imp__sub_82738BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738BF4"))) PPC_WEAK_FUNC(sub_82738BF4);
PPC_FUNC_IMPL(__imp__sub_82738BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738BF8"))) PPC_WEAK_FUNC(sub_82738BF8);
PPC_FUNC_IMPL(__imp__sub_82738BF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,1228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1228);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82738c24
	if (cr6.lt) goto loc_82738C24;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82738c30
	goto loc_82738C30;
loc_82738C24:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82738C30:
	// lwz r10,1164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1164);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82738c7c
	if (cr6.lt) goto loc_82738C7C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r10,1140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-31544
	ctx.r5.s64 = r11.s64 + -31544;
	// lwz r9,1152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// addi r6,r31,64
	ctx.r6.s64 = r31.s64 + 64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1136);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// stw r4,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r4.u32);
loc_82738C7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82738C90"))) PPC_WEAK_FUNC(sub_82738C90);
PPC_FUNC_IMPL(__imp__sub_82738C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738C94"))) PPC_WEAK_FUNC(sub_82738C94);
PPC_FUNC_IMPL(__imp__sub_82738C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738C98"))) PPC_WEAK_FUNC(sub_82738C98);
PPC_FUNC_IMPL(__imp__sub_82738C98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-32208
	ctx.r6.s64 = ctx.r9.s64 + -32208;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1232
	ctx.r3.s64 = 1232;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82738d28
	if (cr6.eq) goto loc_82738D28;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82738a00
	sub_82738A00(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_82738D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82738D30"))) PPC_WEAK_FUNC(sub_82738D30);
PPC_FUNC_IMPL(__imp__sub_82738D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82738D34"))) PPC_WEAK_FUNC(sub_82738D34);
PPC_FUNC_IMPL(__imp__sub_82738D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738D38"))) PPC_WEAK_FUNC(sub_82738D38);
PPC_FUNC_IMPL(__imp__sub_82738D38) {
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
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82738d60
	if (!cr6.eq) goto loc_82738D60;
	// lwz r11,1148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82738d64
	if (cr6.eq) goto loc_82738D64;
loc_82738D60:
	// li r11,0
	r11.s64 = 0;
loc_82738D64:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82738d90
	if (!cr6.eq) goto loc_82738D90;
	// lwz r11,1148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// lwz r7,1152(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,1160(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// lwz r3,1144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82738D90:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82738DA0"))) PPC_WEAK_FUNC(sub_82738DA0);
PPC_FUNC_IMPL(__imp__sub_82738DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738DA4"))) PPC_WEAK_FUNC(sub_82738DA4);
PPC_FUNC_IMPL(__imp__sub_82738DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738DA8"))) PPC_WEAK_FUNC(sub_82738DA8);
PPC_FUNC_IMPL(__imp__sub_82738DA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,1124(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r11,0
	r11.s64 = 0;
	// lbz r8,1132(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1132);
	// lwz r3,1120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r29,r6,32360
	r29.s64 = ctx.r6.s64 + 32360;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// addi r28,r5,-31328
	r28.s64 = ctx.r5.s64 + -31328;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lwz r7,1152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8273c008
	sub_8273C008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// stw r9,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82738E78"))) PPC_WEAK_FUNC(sub_82738E78);
PPC_FUNC_IMPL(__imp__sub_82738E78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82738E7C"))) PPC_WEAK_FUNC(sub_82738E7C);
PPC_FUNC_IMPL(__imp__sub_82738E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738E80"))) PPC_WEAK_FUNC(sub_82738E80);
PPC_FUNC_IMPL(__imp__sub_82738E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r11,1156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// bgt cr6,0x82739160
	if (cr6.gt) goto loc_82739160;
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29000
	r12.s64 = r12.s64 + -29000;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82738F14;
	case 1:
		goto loc_82738F1C;
	case 2:
		goto loc_82738F38;
	case 3:
		goto loc_827390C0;
	case 4:
		goto loc_82738F54;
	case 5:
		goto loc_827390C0;
	case 6:
		goto loc_82738F70;
	case 7:
		goto loc_82738F8C;
	case 8:
		goto loc_82738FA8;
	case 9:
		goto loc_82738FC4;
	case 10:
		goto loc_82738FE0;
	case 11:
		goto loc_82738FFC;
	case 12:
		goto loc_82739018;
	case 13:
		goto loc_82739034;
	case 14:
		goto loc_82739050;
	case 15:
		goto loc_8273906C;
	case 16:
		goto loc_82739088;
	case 17:
		goto loc_827390A4;
	case 18:
		goto loc_827390D8;
	case 19:
		goto loc_8273910C;
	case 20:
		goto loc_827390C0;
	case 21:
		goto loc_82739128;
	case 22:
		goto loc_82739144;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-28908(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28908);
	// lwz r19,-28900(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28900);
	// lwz r19,-28872(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28872);
	// lwz r19,-28480(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28480);
	// lwz r19,-28844(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28844);
	// lwz r19,-28480(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28480);
	// lwz r19,-28816(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28816);
	// lwz r19,-28788(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28788);
	// lwz r19,-28760(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28760);
	// lwz r19,-28732(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28732);
	// lwz r19,-28704(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28704);
	// lwz r19,-28676(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28676);
	// lwz r19,-28648(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28648);
	// lwz r19,-28620(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28620);
	// lwz r19,-28592(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28592);
	// lwz r19,-28564(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28564);
	// lwz r19,-28536(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28536);
	// lwz r19,-28508(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28508);
	// lwz r19,-28456(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28456);
	// lwz r19,-28404(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28404);
	// lwz r19,-28480(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28480);
	// lwz r19,-28376(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28376);
	// lwz r19,-28348(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -28348);
loc_82738F14:
	// li r11,1
	r11.s64 = 1;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
loc_82738F1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82737e10
	sub_82737E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738F38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738da8
	sub_82738DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738F54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738ab0
	sub_82738AB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738F70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738b18
	sub_82738B18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738F8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738280
	sub_82738280(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738FA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82737ea0
	sub_82737EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738FC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738370
	sub_82738370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738FE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82737f80
	sub_82737F80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82738FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827385b0
	sub_827385B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739018:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827387a8
	sub_827387A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739034:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738068
	sub_82738068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739050:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827380d8
	sub_827380D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273906C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738460
	sub_82738460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739088:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738bf8
	sub_82738BF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827390A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738068
	sub_82738068(ctx, base);
	// lwz r11,1156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// bne cr6,0x827390c0
	if (!cr6.eq) goto loc_827390C0;
	// li r11,18
	r11.s64 = 18;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
loc_827390C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827390D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827380d8
	sub_827380D8(ctx, base);
	// lwz r11,1156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// bne cr6,0x827390f4
	if (!cr6.eq) goto loc_827390F4;
	// li r11,19
	r11.s64 = 19;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
loc_827390F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273910C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738b90
	sub_82738B90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739128:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738980
	sub_82738980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739144:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82738d38
	sub_82738D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739160:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82739174"))) PPC_WEAK_FUNC(sub_82739174);
PPC_FUNC_IMPL(__imp__sub_82739174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739178"))) PPC_WEAK_FUNC(sub_82739178);
PPC_FUNC_IMPL(__imp__sub_82739178) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r10,r11,-32224
	ctx.r10.s64 = r11.s64 + -32224;
	// li r5,1072
	ctx.r5.s64 = 1072;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,1136
	ctx.r10.s64 = r31.s64 + 1136;
	// stw r11,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, r11.u32);
	// addi r10,r31,1144
	ctx.r10.s64 = r31.s64 + 1144;
	// stw r11,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r8,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, ctx.r8.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r7,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r6,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r6.u32);
	// stw r27,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82739200"))) PPC_WEAK_FUNC(sub_82739200);
PPC_FUNC_IMPL(__imp__sub_82739200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82739204"))) PPC_WEAK_FUNC(sub_82739204);
PPC_FUNC_IMPL(__imp__sub_82739204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739208"))) PPC_WEAK_FUNC(sub_82739208);
PPC_FUNC_IMPL(__imp__sub_82739208) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32224
	ctx.r10.s64 = r11.s64 + -32224;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273924c
	if (cr6.eq) goto loc_8273924C;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273924C:
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

__attribute__((alias("__imp__sub_82739260"))) PPC_WEAK_FUNC(sub_82739260);
PPC_FUNC_IMPL(__imp__sub_82739260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739264"))) PPC_WEAK_FUNC(sub_82739264);
PPC_FUNC_IMPL(__imp__sub_82739264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739268"))) PPC_WEAK_FUNC(sub_82739268);
PPC_FUNC_IMPL(__imp__sub_82739268) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32060
	ctx.r10.s64 = r11.s64 + -32060;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827392ac
	if (cr6.eq) goto loc_827392AC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827392AC:
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

__attribute__((alias("__imp__sub_827392C0"))) PPC_WEAK_FUNC(sub_827392C0);
PPC_FUNC_IMPL(__imp__sub_827392C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827392C4"))) PPC_WEAK_FUNC(sub_827392C4);
PPC_FUNC_IMPL(__imp__sub_827392C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827392C8"))) PPC_WEAK_FUNC(sub_827392C8);
PPC_FUNC_IMPL(__imp__sub_827392C8) {
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
	// lwz r3,1124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-32044
	ctx.r10.s64 = r11.s64 + -32044;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82739300
	if (cr6.eq) goto loc_82739300;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, r11.u32);
loc_82739300:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-32060
	ctx.r10.s64 = r11.s64 + -32060;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82739324"))) PPC_WEAK_FUNC(sub_82739324);
PPC_FUNC_IMPL(__imp__sub_82739324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739328"))) PPC_WEAK_FUNC(sub_82739328);
PPC_FUNC_IMPL(__imp__sub_82739328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,16
	r11.s64 = 16;
	// stw r11,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739334"))) PPC_WEAK_FUNC(sub_82739334);
PPC_FUNC_IMPL(__imp__sub_82739334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739338"))) PPC_WEAK_FUNC(sub_82739338);
PPC_FUNC_IMPL(__imp__sub_82739338) {
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
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82737200
	sub_82737200(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,17
	r11.s64 = 17;
	// bne cr6,0x82739370
	if (!cr6.eq) goto loc_82739370;
	// li r11,2
	r11.s64 = 2;
loc_82739370:
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82739384"))) PPC_WEAK_FUNC(sub_82739384);
PPC_FUNC_IMPL(__imp__sub_82739384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739388"))) PPC_WEAK_FUNC(sub_82739388);
PPC_FUNC_IMPL(__imp__sub_82739388) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739390"))) PPC_WEAK_FUNC(sub_82739390);
PPC_FUNC_IMPL(__imp__sub_82739390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-5
	cr6.compare<int32_t>(ctx.r4.s32, -5, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827393b0
	if (cr6.eq) goto loc_827393B0;
	// li r11,6
	r11.s64 = 6;
	// stw r5,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, ctx.r5.u32);
	// stw r11,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, r11.u32);
	// blr 
	return;
loc_827393B0:
	// li r11,4
	r11.s64 = 4;
	// stw r11,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827393BC"))) PPC_WEAK_FUNC(sub_827393BC);
PPC_FUNC_IMPL(__imp__sub_827393BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827393C0"))) PPC_WEAK_FUNC(sub_827393C0);
PPC_FUNC_IMPL(__imp__sub_827393C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827393C8"))) PPC_WEAK_FUNC(sub_827393C8);
PPC_FUNC_IMPL(__imp__sub_827393C8) {
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
	// lwz r11,1176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,1176
	r30.s64 = ctx.r3.s64 + 1176;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x82739484
	if (cr6.eq) goto loc_82739484;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82739414
	if (cr6.lt) goto loc_82739414;
	// lwz r11,1160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82739454
	if (cr6.eq) goto loc_82739454;
	// li r11,8
	r11.s64 = 8;
	// b 0x8273946c
	goto loc_8273946C;
loc_82739414:
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82739434
	if (!cr6.eq) goto loc_82739434;
	// li r11,-4
	r11.s64 = -4;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x82739470
	goto loc_82739470;
loc_82739434:
	// li r12,1392
	r12.s64 = 1392;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,1392
	cr6.compare<int32_t>(r11.s32, 1392, xer);
	// beq cr6,0x82739468
	if (cr6.eq) goto loc_82739468;
	// li r12,1393
	r12.s64 = 1393;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,1393
	cr6.compare<int32_t>(r11.s32, 1393, xer);
	// beq cr6,0x82739468
	if (cr6.eq) goto loc_82739468;
loc_82739454:
	// li r11,-1
	r11.s64 = -1;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x82739470
	goto loc_82739470;
loc_82739468:
	// li r11,14
	r11.s64 = 14;
loc_8273946C:
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_82739470:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_82739484:
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
}

__attribute__((alias("__imp__sub_8273949C"))) PPC_WEAK_FUNC(sub_8273949C);
PPC_FUNC_IMPL(__imp__sub_8273949C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827394A0"))) PPC_WEAK_FUNC(sub_827394A0);
PPC_FUNC_IMPL(__imp__sub_827394A0) {
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
	// lwz r11,1176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,1176
	r30.s64 = ctx.r3.s64 + 1176;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x82739560
	if (cr6.eq) goto loc_82739560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x827394f0
	if (!cr6.eq) goto loc_827394F0;
	// li r11,-4
	r11.s64 = -4;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x8273954c
	goto loc_8273954C;
loc_827394F0:
	// li r12,1392
	r12.s64 = 1392;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,1392
	cr6.compare<int32_t>(r11.s32, 1392, xer);
	// beq cr6,0x82739544
	if (cr6.eq) goto loc_82739544;
	// li r12,1393
	r12.s64 = 1393;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,1393
	cr6.compare<int32_t>(r11.s32, 1393, xer);
	// beq cr6,0x82739544
	if (cr6.eq) goto loc_82739544;
	// li r12,183
	r12.s64 = 183;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,183
	cr6.compare<int32_t>(r11.s32, 183, xer);
	// beq cr6,0x82739528
	if (cr6.eq) goto loc_82739528;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273953c
	if (!cr6.lt) goto loc_8273953C;
loc_82739528:
	// li r11,-1
	r11.s64 = -1;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x8273954c
	goto loc_8273954C;
loc_8273953C:
	// li r11,10
	r11.s64 = 10;
	// b 0x82739548
	goto loc_82739548;
loc_82739544:
	// li r11,14
	r11.s64 = 14;
loc_82739548:
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_8273954C:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_82739560:
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
}

__attribute__((alias("__imp__sub_82739578"))) PPC_WEAK_FUNC(sub_82739578);
PPC_FUNC_IMPL(__imp__sub_82739578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273957C"))) PPC_WEAK_FUNC(sub_8273957C);
PPC_FUNC_IMPL(__imp__sub_8273957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739580"))) PPC_WEAK_FUNC(sub_82739580);
PPC_FUNC_IMPL(__imp__sub_82739580) {
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
	// lwz r11,1204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,259
	cr6.compare<uint32_t>(r11.u32, 259, xer);
	// beq cr6,0x82739610
	if (cr6.eq) goto loc_82739610;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// li r12,1392
	r12.s64 = 1392;
	// li r30,-1
	r30.s64 = -1;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmplwi cr6,r11,1392
	cr6.compare<uint32_t>(r11.u32, 1392, xer);
	// beq cr6,0x827395e4
	if (cr6.eq) goto loc_827395E4;
	// li r12,1393
	r12.s64 = 1393;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmplwi cr6,r11,1393
	cr6.compare<uint32_t>(r11.u32, 1393, xer);
	// beq cr6,0x827395e4
	if (cr6.eq) goto loc_827395E4;
	// li r11,12
	r11.s64 = 12;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// bge cr6,0x827395ec
	if (!cr6.lt) goto loc_827395EC;
	// stw r30,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r30.u32);
	// b 0x827395ec
	goto loc_827395EC;
loc_827395E4:
	// li r11,14
	r11.s64 = 14;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_827395EC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,1204(r31)
	PPC_STORE_U32(r31.u32 + 1204, r11.u32);
	// stw r11,1208(r31)
	PPC_STORE_U32(r31.u32 + 1208, r11.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(r31.u32 + 1212, r11.u32);
	// stw r11,1216(r31)
	PPC_STORE_U32(r31.u32 + 1216, r11.u32);
	// stw r11,1220(r31)
	PPC_STORE_U32(r31.u32 + 1220, r11.u32);
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1168);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// stw r30,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, r30.u32);
loc_82739610:
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
}

__attribute__((alias("__imp__sub_82739628"))) PPC_WEAK_FUNC(sub_82739628);
PPC_FUNC_IMPL(__imp__sub_82739628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273962C"))) PPC_WEAK_FUNC(sub_8273962C);
PPC_FUNC_IMPL(__imp__sub_8273962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739630"))) PPC_WEAK_FUNC(sub_82739630);
PPC_FUNC_IMPL(__imp__sub_82739630) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,1176
	ctx.r4.s64 = ctx.r3.s64 + 1176;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82739684
	if (cr6.eq) goto loc_82739684;
	// li r11,-1
	r11.s64 = -1;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739684:
	// li r11,13
	r11.s64 = 13;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273969C"))) PPC_WEAK_FUNC(sub_8273969C);
PPC_FUNC_IMPL(__imp__sub_8273969C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827396A0"))) PPC_WEAK_FUNC(sub_827396A0);
PPC_FUNC_IMPL(__imp__sub_827396A0) {
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
	// lwz r11,1176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,1176
	r31.s64 = ctx.r3.s64 + 1176;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x82739708
	if (cr6.eq) goto loc_82739708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x827396ec
	if (!cr6.lt) goto loc_827396EC;
	// li r11,-1
	r11.s64 = -1;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r30)
	PPC_STORE_U32(r30.u32 + 1156, r11.u32);
	// stw r10,1152(r30)
	PPC_STORE_U32(r30.u32 + 1152, ctx.r10.u32);
	// b 0x827396f4
	goto loc_827396F4;
loc_827396EC:
	// li r11,17
	r11.s64 = 17;
	// stw r11,1152(r30)
	PPC_STORE_U32(r30.u32 + 1152, r11.u32);
loc_827396F4:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82739708:
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
}

__attribute__((alias("__imp__sub_82739720"))) PPC_WEAK_FUNC(sub_82739720);
PPC_FUNC_IMPL(__imp__sub_82739720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739724"))) PPC_WEAK_FUNC(sub_82739724);
PPC_FUNC_IMPL(__imp__sub_82739724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739728"))) PPC_WEAK_FUNC(sub_82739728);
PPC_FUNC_IMPL(__imp__sub_82739728) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739730"))) PPC_WEAK_FUNC(sub_82739730);
PPC_FUNC_IMPL(__imp__sub_82739730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82739750
	if (cr6.lt) goto loc_82739750;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,1120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1120, r11.u8);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// blr 
	return;
loc_82739750:
	// li r11,0
	r11.s64 = 0;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, r11.u32);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739764"))) PPC_WEAK_FUNC(sub_82739764);
PPC_FUNC_IMPL(__imp__sub_82739764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739768"))) PPC_WEAK_FUNC(sub_82739768);
PPC_FUNC_IMPL(__imp__sub_82739768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273978c
	if (cr6.lt) goto loc_8273978C;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1120, ctx.r10.u8);
	// stw r9,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r9.u32);
	// blr 
	return;
loc_8273978C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,17
	ctx.r9.s64 = 17;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1152(r11)
	PPC_STORE_U32(r11.u32 + 1152, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_827397A8"))) PPC_WEAK_FUNC(sub_827397A8);
PPC_FUNC_IMPL(__imp__sub_827397A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827397AC"))) PPC_WEAK_FUNC(sub_827397AC);
PPC_FUNC_IMPL(__imp__sub_827397AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827397B0"))) PPC_WEAK_FUNC(sub_827397B0);
PPC_FUNC_IMPL(__imp__sub_827397B0) {
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
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,336
	ctx.r5.s64 = ctx.r3.s64 + 336;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,1232
	ctx.r3.s64 = ctx.r3.s64 + 1232;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r31,1488
	ctx.r3.s64 = r31.s64 + 1488;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1172);
	// lbz r9,1121(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1121);
	// li r11,1
	r11.s64 = 1;
	// addi r4,r31,1224
	ctx.r4.s64 = r31.s64 + 1224;
	// stw r11,1228(r31)
	PPC_STORE_U32(r31.u32 + 1228, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r10,1224(r31)
	PPC_STORE_U32(r31.u32 + 1224, ctx.r10.u32);
	// bne cr6,0x8273981c
	if (!cr6.eq) goto loc_8273981C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
loc_8273981C:
	// addi r7,r31,1176
	ctx.r7.s64 = r31.s64 + 1176;
	// addi r6,r31,1536
	ctx.r6.s64 = r31.s64 + 1536;
	// addi r5,r31,1160
	ctx.r5.s64 = r31.s64 + 1160;
	// bl 0x82605110
	sub_82605110(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8273984c
	if (cr6.eq) goto loc_8273984C;
	// li r11,-1
	r11.s64 = -1;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x82739854
	goto loc_82739854;
loc_8273984C:
	// li r11,7
	r11.s64 = 7;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_82739854:
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

__attribute__((alias("__imp__sub_82739868"))) PPC_WEAK_FUNC(sub_82739868);
PPC_FUNC_IMPL(__imp__sub_82739868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273986C"))) PPC_WEAK_FUNC(sub_8273986C);
PPC_FUNC_IMPL(__imp__sub_8273986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739870"))) PPC_WEAK_FUNC(sub_82739870);
PPC_FUNC_IMPL(__imp__sub_82739870) {
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
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,336
	ctx.r5.s64 = ctx.r3.s64 + 336;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,1232
	ctx.r3.s64 = ctx.r3.s64 + 1232;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r31,1488
	ctx.r3.s64 = r31.s64 + 1488;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1172);
	// lbz r9,1121(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1121);
	// li r11,1
	r11.s64 = 1;
	// addi r5,r31,1224
	ctx.r5.s64 = r31.s64 + 1224;
	// stw r11,1228(r31)
	PPC_STORE_U32(r31.u32 + 1228, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r10,1224(r31)
	PPC_STORE_U32(r31.u32 + 1224, ctx.r10.u32);
	// bne cr6,0x827398dc
	if (!cr6.eq) goto loc_827398DC;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
loc_827398DC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r31,1176
	ctx.r9.s64 = r31.s64 + 1176;
	// addi r4,r11,-32212
	ctx.r4.s64 = r11.s64 + -32212;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x826051b8
	sub_826051B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82739918
	if (cr6.eq) goto loc_82739918;
	// li r11,-1
	r11.s64 = -1;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x82739920
	goto loc_82739920;
loc_82739918:
	// li r11,9
	r11.s64 = 9;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_82739920:
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

__attribute__((alias("__imp__sub_82739934"))) PPC_WEAK_FUNC(sub_82739934);
PPC_FUNC_IMPL(__imp__sub_82739934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739938"))) PPC_WEAK_FUNC(sub_82739938);
PPC_FUNC_IMPL(__imp__sub_82739938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r10,1152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26268
	r12.s64 = r12.s64 + -26268;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82739994
		return;
	case 1:
		// ERROR: 0x82739994
		return;
	case 2:
		// ERROR: 0x827399EC
		return;
	case 3:
		// ERROR: 0x827399EC
		return;
	case 4:
		// ERROR: 0x827399EC
		return;
	case 5:
		// ERROR: 0x827399EC
		return;
	case 6:
		// ERROR: 0x827399EC
		return;
	case 7:
		// ERROR: 0x827399EC
		return;
	case 8:
		// ERROR: 0x827399EC
		return;
	case 9:
		// ERROR: 0x827399EC
		return;
	case 10:
		// ERROR: 0x827399D4
		return;
	case 11:
		// ERROR: 0x827399D4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82739964"))) PPC_WEAK_FUNC(sub_82739964);
PPC_FUNC_IMPL(__imp__sub_82739964) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-26220(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26220);
	// lwz r19,-26220(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26220);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26132);
	// lwz r19,-26156(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26156);
	// lwz r19,-26156(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -26156);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x827399b4
	if (cr6.lt) goto loc_827399B4;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1120(r11)
	PPC_STORE_U8(r11.u32 + 1120, ctx.r10.u8);
	// stw r9,1152(r11)
	PPC_STORE_U32(r11.u32 + 1152, ctx.r9.u32);
	// blr 
	return;
loc_827399B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,17
	ctx.r9.s64 = 17;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1152(r11)
	PPC_STORE_U32(r11.u32 + 1152, ctx.r9.u32);
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827399D4"))) PPC_WEAK_FUNC(sub_827399D4);
PPC_FUNC_IMPL(__imp__sub_827399D4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bge cr6,0x8273999c
	if (!cr6.lt) {
		// ERROR 8273999C
		return;
	}
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r10,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r10.u32);
	// stw r9,1152(r11)
	PPC_STORE_U32(r11.u32 + 1152, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827399F0"))) PPC_WEAK_FUNC(sub_827399F0);
PPC_FUNC_IMPL(__imp__sub_827399F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,1136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// lwz r3,1132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82739A00"))) PPC_WEAK_FUNC(sub_82739A00);
PPC_FUNC_IMPL(__imp__sub_82739A00) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r9,31856
	ctx.r5.s64 = ctx.r9.s64 + 31856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r9,r3,856
	ctx.r9.s64 = ctx.r3.s64 + 856;
	// addi r6,r10,-32212
	ctx.r6.s64 = ctx.r10.s64 + -32212;
	// li r8,92
	ctx.r8.s64 = 92;
	// li r7,58
	ctx.r7.s64 = 58;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r11.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_82739A54:
	// addi r11,r1,113
	r11.s64 = ctx.r1.s64 + 113;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82739b08
	if (cr6.eq) goto loc_82739B08;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x82739a78
	if (!cr6.eq) goto loc_82739A78;
	// li r10,92
	ctx.r10.s64 = 92;
loc_82739A78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82739b08
	if (cr6.eq) goto loc_82739B08;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x82739a98
	if (!cr6.eq) goto loc_82739A98;
	// li r9,92
	ctx.r9.s64 = 92;
loc_82739A98:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82739b08
	if (cr6.eq) goto loc_82739B08;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x82739ab8
	if (!cr6.eq) goto loc_82739AB8;
	// li r10,92
	ctx.r10.s64 = 92;
loc_82739AB8:
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82739b08
	if (cr6.eq) goto loc_82739B08;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x82739ad8
	if (!cr6.eq) goto loc_82739AD8;
	// li r10,92
	ctx.r10.s64 = 92;
loc_82739AD8:
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82739b08
	if (cr6.eq) goto loc_82739B08;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x82739af8
	if (!cr6.eq) goto loc_82739AF8;
	// li r10,92
	ctx.r10.s64 = 92;
loc_82739AF8:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// cmplwi cr6,r8,260
	cr6.compare<uint32_t>(ctx.r8.u32, 260, xer);
	// blt cr6,0x82739a54
	if (cr6.lt) goto loc_82739A54;
loc_82739B08:
	// stb r30,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, r30.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82607590
	sub_82607590(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, ctx.r3.u32);
	// bne cr6,0x82739b64
	if (!cr6.eq) goto loc_82739B64;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// li r12,1392
	r12.s64 = 1392;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmplwi cr6,r11,1392
	cr6.compare<uint32_t>(r11.u32, 1392, xer);
	// beq cr6,0x82739b5c
	if (cr6.eq) goto loc_82739B5C;
	// li r12,1393
	r12.s64 = 1393;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmplwi cr6,r11,1393
	cr6.compare<uint32_t>(r11.u32, 1393, xer);
	// bne cr6,0x82739bf0
	if (!cr6.eq) goto loc_82739BF0;
loc_82739B5C:
	// li r11,14
	r11.s64 = 14;
	// b 0x82739c08
	goto loc_82739C08;
loc_82739B64:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bb9730
	sub_82BB9730(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,1128(r31)
	PPC_STORE_U32(r31.u32 + 1128, ctx.r3.u32);
	// beq cr6,0x82739bf0
	if (cr6.eq) goto loc_82739BF0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-31904
	ctx.r7.s64 = ctx.r10.s64 + -31904;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r8,366
	ctx.r8.s64 = 366;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// stw r3,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,1128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1128);
	// addi r7,r31,1204
	ctx.r7.s64 = r31.s64 + 1204;
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1168);
	// addi r6,r31,1164
	ctx.r6.s64 = r31.s64 + 1164;
	// bl 0x82bb9798
	sub_82BB9798(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82739c04
	if (!cr6.eq) goto loc_82739C04;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// li r12,1392
	r12.s64 = 1392;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmplwi cr6,r11,1392
	cr6.compare<uint32_t>(r11.u32, 1392, xer);
	// beq cr6,0x82739b5c
	if (cr6.eq) goto loc_82739B5C;
	// li r12,1393
	r12.s64 = 1393;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmplwi cr6,r11,1393
	cr6.compare<uint32_t>(r11.u32, 1393, xer);
	// beq cr6,0x82739b5c
	if (cr6.eq) goto loc_82739B5C;
loc_82739BF0:
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r10.u32);
	// b 0x82739c0c
	goto loc_82739C0C;
loc_82739C04:
	// li r11,11
	r11.s64 = 11;
loc_82739C08:
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_82739C0C:
	// lwz r3,376(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82739C2C"))) PPC_WEAK_FUNC(sub_82739C2C);
PPC_FUNC_IMPL(__imp__sub_82739C2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739C30"))) PPC_WEAK_FUNC(sub_82739C30);
PPC_FUNC_IMPL(__imp__sub_82739C30) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82739c78
	if (!cr6.eq) goto loc_82739C78;
	// addi r3,r3,1176
	ctx.r3.s64 = ctx.r3.s64 + 1176;
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// li r10,-5
	ctx.r10.s64 = -5;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r10,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r10.u32);
	// stw r9,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r9.u32);
loc_82739C78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82739C8C"))) PPC_WEAK_FUNC(sub_82739C8C);
PPC_FUNC_IMPL(__imp__sub_82739C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739C90"))) PPC_WEAK_FUNC(sub_82739C90);
PPC_FUNC_IMPL(__imp__sub_82739C90) {
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
	// bl 0x8273a148
	sub_8273A148(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-32044
	ctx.r10.s64 = r11.s64 + -32044;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,1224
	ctx.r3.s64 = r31.s64 + 1224;
	// stw r30,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r30.u32);
	// li r5,308
	ctx.r5.s64 = 308;
	// stw r30,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1164(r31)
	PPC_STORE_U32(r31.u32 + 1164, r30.u32);
	// stw r9,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, ctx.r9.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(r31.u32 + 1172, r30.u32);
	// std r30,1176(r31)
	PPC_STORE_U64(r31.u32 + 1176, r30.u64);
	// std r30,1184(r31)
	PPC_STORE_U64(r31.u32 + 1184, r30.u64);
	// std r30,1192(r31)
	PPC_STORE_U64(r31.u32 + 1192, r30.u64);
	// stw r30,1200(r31)
	PPC_STORE_U32(r31.u32 + 1200, r30.u32);
	// stw r30,1204(r31)
	PPC_STORE_U32(r31.u32 + 1204, r30.u32);
	// stw r30,1208(r31)
	PPC_STORE_U32(r31.u32 + 1208, r30.u32);
	// stw r30,1212(r31)
	PPC_STORE_U32(r31.u32 + 1212, r30.u32);
	// stw r30,1216(r31)
	PPC_STORE_U32(r31.u32 + 1216, r30.u32);
	// stw r30,1220(r31)
	PPC_STORE_U32(r31.u32 + 1220, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// std r30,1536(r31)
	PPC_STORE_U64(r31.u32 + 1536, r30.u64);
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

__attribute__((alias("__imp__sub_82739D28"))) PPC_WEAK_FUNC(sub_82739D28);
PPC_FUNC_IMPL(__imp__sub_82739D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739D2C"))) PPC_WEAK_FUNC(sub_82739D2C);
PPC_FUNC_IMPL(__imp__sub_82739D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739D30"))) PPC_WEAK_FUNC(sub_82739D30);
PPC_FUNC_IMPL(__imp__sub_82739D30) {
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
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,1148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-26312
	ctx.r5.s64 = ctx.r8.s64 + -26312;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1136);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82739D90"))) PPC_WEAK_FUNC(sub_82739D90);
PPC_FUNC_IMPL(__imp__sub_82739D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739D94"))) PPC_WEAK_FUNC(sub_82739D94);
PPC_FUNC_IMPL(__imp__sub_82739D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739D98"))) PPC_WEAK_FUNC(sub_82739D98);
PPC_FUNC_IMPL(__imp__sub_82739D98) {
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
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r9,1148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-26312
	ctx.r5.s64 = ctx.r8.s64 + -26312;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1136);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82739DF8"))) PPC_WEAK_FUNC(sub_82739DF8);
PPC_FUNC_IMPL(__imp__sub_82739DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739DFC"))) PPC_WEAK_FUNC(sub_82739DFC);
PPC_FUNC_IMPL(__imp__sub_82739DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739E00"))) PPC_WEAK_FUNC(sub_82739E00);
PPC_FUNC_IMPL(__imp__sub_82739E00) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-32032
	ctx.r6.s64 = ctx.r9.s64 + -32032;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1544
	ctx.r3.s64 = 1544;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82739e90
	if (cr6.eq) goto loc_82739E90;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82739c90
	sub_82739C90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_82739E90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82739E98"))) PPC_WEAK_FUNC(sub_82739E98);
PPC_FUNC_IMPL(__imp__sub_82739E98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82739E9C"))) PPC_WEAK_FUNC(sub_82739E9C);
PPC_FUNC_IMPL(__imp__sub_82739E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739EA0"))) PPC_WEAK_FUNC(sub_82739EA0);
PPC_FUNC_IMPL(__imp__sub_82739EA0) {
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
	// lwz r11,1140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82739ed0
	if (!cr6.eq) goto loc_82739ED0;
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82739ed4
	if (cr6.eq) goto loc_82739ED4;
loc_82739ED0:
	// li r11,0
	r11.s64 = 0;
loc_82739ED4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82739f00
	if (!cr6.eq) goto loc_82739F00;
	// lwz r11,1144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1144);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// lwz r7,1148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1148);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r4,1156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// lwz r3,1140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82739F00:
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82739f18
	if (cr6.eq) goto loc_82739F18;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, r11.u32);
loc_82739F18:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82739F2C"))) PPC_WEAK_FUNC(sub_82739F2C);
PPC_FUNC_IMPL(__imp__sub_82739F2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739F30"))) PPC_WEAK_FUNC(sub_82739F30);
PPC_FUNC_IMPL(__imp__sub_82739F30) {
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,1116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lbz r8,1120(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// addi r30,r6,-27760
	r30.s64 = ctx.r6.s64 + -27760;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// addi r29,r5,-26128
	r29.s64 = ctx.r5.s64 + -26128;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r7,1148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1148);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8273c008
	sub_8273C008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// stw r9,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82739FFC"))) PPC_WEAK_FUNC(sub_82739FFC);
PPC_FUNC_IMPL(__imp__sub_82739FFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273A000"))) PPC_WEAK_FUNC(sub_8273A000);
PPC_FUNC_IMPL(__imp__sub_8273A000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,1152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgt cr6,0x8273a0b4
	if (cr6.gt) {
		sub_8273A0B4(ctx, base);
		return;
	}
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24540
	r12.s64 = r12.s64 + -24540;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x8273A06C
		return;
	case 1:
		// ERROR: 0x8273A074
		return;
	case 2:
		// ERROR: 0x8273A078
		return;
	case 3:
		// ERROR: 0x8273A07C
		return;
	case 4:
		// ERROR: 0x8273A084
		return;
	case 5:
		// ERROR: 0x8273A07C
		return;
	case 6:
		// ERROR: 0x8273A088
		return;
	case 7:
		// ERROR: 0x8273A08C
		return;
	case 8:
		// ERROR: 0x8273A090
		return;
	case 9:
		// ERROR: 0x8273A094
		return;
	case 10:
		// ERROR: 0x8273A098
		return;
	case 11:
		// ERROR: 0x8273A09C
		return;
	case 12:
		// ERROR: 0x8273A0A0
		return;
	case 13:
		// ERROR: 0x8273A0A4
		return;
	case 14:
		// ERROR: 0x8273A0A8
		return;
	case 15:
		// ERROR: 0x8273A07C
		return;
	case 16:
		// ERROR: 0x8273A0AC
		return;
	case 17:
		// ERROR: 0x8273A0B0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8273A024"))) PPC_WEAK_FUNC(sub_8273A024);
PPC_FUNC_IMPL(__imp__sub_8273A024) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-24468(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24468);
	// lwz r19,-24460(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24460);
	// lwz r19,-24456(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24456);
	// lwz r19,-24452(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24452);
	// lwz r19,-24444(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24444);
	// lwz r19,-24452(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24452);
	// lwz r19,-24440(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24440);
	// lwz r19,-24436(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24436);
	// lwz r19,-24432(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24432);
	// lwz r19,-24428(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24428);
	// lwz r19,-24424(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24424);
	// lwz r19,-24420(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24420);
	// lwz r19,-24416(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24416);
	// lwz r19,-24412(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24412);
	// lwz r19,-24408(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24408);
	// lwz r19,-24452(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24452);
	// lwz r19,-24404(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24404);
	// lwz r19,-24400(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -24400);
	// li r11,1
	r11.s64 = 1;
	// stw r11,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, r11.u32);
	// b 0x82739338
	sub_82739338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A078"))) PPC_WEAK_FUNC(sub_8273A078);
PPC_FUNC_IMPL(__imp__sub_8273A078) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739f30
	sub_82739F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A07C"))) PPC_WEAK_FUNC(sub_8273A07C);
PPC_FUNC_IMPL(__imp__sub_8273A07C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A084"))) PPC_WEAK_FUNC(sub_8273A084);
PPC_FUNC_IMPL(__imp__sub_8273A084) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739d30
	sub_82739D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A088"))) PPC_WEAK_FUNC(sub_8273A088);
PPC_FUNC_IMPL(__imp__sub_8273A088) {
	PPC_FUNC_PROLOGUE();
	// b 0x827397b0
	sub_827397B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A08C"))) PPC_WEAK_FUNC(sub_8273A08C);
PPC_FUNC_IMPL(__imp__sub_8273A08C) {
	PPC_FUNC_PROLOGUE();
	// b 0x827393c8
	sub_827393C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A090"))) PPC_WEAK_FUNC(sub_8273A090);
PPC_FUNC_IMPL(__imp__sub_8273A090) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739870
	sub_82739870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A094"))) PPC_WEAK_FUNC(sub_8273A094);
PPC_FUNC_IMPL(__imp__sub_8273A094) {
	PPC_FUNC_PROLOGUE();
	// b 0x827394a0
	sub_827394A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A098"))) PPC_WEAK_FUNC(sub_8273A098);
PPC_FUNC_IMPL(__imp__sub_8273A098) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739a00
	sub_82739A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A09C"))) PPC_WEAK_FUNC(sub_8273A09C);
PPC_FUNC_IMPL(__imp__sub_8273A09C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739580
	sub_82739580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A0A0"))) PPC_WEAK_FUNC(sub_8273A0A0);
PPC_FUNC_IMPL(__imp__sub_8273A0A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739630
	sub_82739630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A0A4"))) PPC_WEAK_FUNC(sub_8273A0A4);
PPC_FUNC_IMPL(__imp__sub_8273A0A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x827396a0
	sub_827396A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A0A8"))) PPC_WEAK_FUNC(sub_8273A0A8);
PPC_FUNC_IMPL(__imp__sub_8273A0A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739d98
	sub_82739D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A0AC"))) PPC_WEAK_FUNC(sub_8273A0AC);
PPC_FUNC_IMPL(__imp__sub_8273A0AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739c30
	sub_82739C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A0B0"))) PPC_WEAK_FUNC(sub_8273A0B0);
PPC_FUNC_IMPL(__imp__sub_8273A0B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82739ea0
	sub_82739EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A0B4"))) PPC_WEAK_FUNC(sub_8273A0B4);
PPC_FUNC_IMPL(__imp__sub_8273A0B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A0BC"))) PPC_WEAK_FUNC(sub_8273A0BC);
PPC_FUNC_IMPL(__imp__sub_8273A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A0C0"))) PPC_WEAK_FUNC(sub_8273A0C0);
PPC_FUNC_IMPL(__imp__sub_8273A0C0) {
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
	// lwz r3,1124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-32044
	ctx.r10.s64 = r11.s64 + -32044;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8273a100
	if (cr6.eq) goto loc_8273A100;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, r11.u32);
loc_8273A100:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-32060
	ctx.r10.s64 = r11.s64 + -32060;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273a12c
	if (cr6.eq) goto loc_8273A12C;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273A12C:
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

__attribute__((alias("__imp__sub_8273A140"))) PPC_WEAK_FUNC(sub_8273A140);
PPC_FUNC_IMPL(__imp__sub_8273A140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A144"))) PPC_WEAK_FUNC(sub_8273A144);
PPC_FUNC_IMPL(__imp__sub_8273A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A148"))) PPC_WEAK_FUNC(sub_8273A148);
PPC_FUNC_IMPL(__imp__sub_8273A148) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r10,r11,-32060
	ctx.r10.s64 = r11.s64 + -32060;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,1132
	ctx.r10.s64 = r31.s64 + 1132;
	// stw r11,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, r11.u32);
	// addi r10,r31,1140
	ctx.r10.s64 = r31.s64 + 1140;
	// stw r11,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r8,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, ctx.r8.u32);
	// stw r11,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, r11.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r7,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r6,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, ctx.r6.u32);
	// stw r27,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273A1D0"))) PPC_WEAK_FUNC(sub_8273A1D0);
PPC_FUNC_IMPL(__imp__sub_8273A1D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8273A1D4"))) PPC_WEAK_FUNC(sub_8273A1D4);
PPC_FUNC_IMPL(__imp__sub_8273A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A1D8"))) PPC_WEAK_FUNC(sub_8273A1D8);
PPC_FUNC_IMPL(__imp__sub_8273A1D8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31828
	ctx.r10.s64 = r11.s64 + -31828;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273a21c
	if (cr6.eq) goto loc_8273A21C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273A21C:
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

__attribute__((alias("__imp__sub_8273A230"))) PPC_WEAK_FUNC(sub_8273A230);
PPC_FUNC_IMPL(__imp__sub_8273A230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A234"))) PPC_WEAK_FUNC(sub_8273A234);
PPC_FUNC_IMPL(__imp__sub_8273A234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A238"))) PPC_WEAK_FUNC(sub_8273A238);
PPC_FUNC_IMPL(__imp__sub_8273A238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-31828
	ctx.r10.s64 = r11.s64 + -31828;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82737a48
	sub_82737A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A248"))) PPC_WEAK_FUNC(sub_8273A248);
PPC_FUNC_IMPL(__imp__sub_8273A248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,14
	r11.s64 = 14;
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A254"))) PPC_WEAK_FUNC(sub_8273A254);
PPC_FUNC_IMPL(__imp__sub_8273A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A258"))) PPC_WEAK_FUNC(sub_8273A258);
PPC_FUNC_IMPL(__imp__sub_8273A258) {
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
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82737200
	sub_82737200(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,15
	r11.s64 = 15;
	// bne cr6,0x8273a290
	if (!cr6.eq) goto loc_8273A290;
	// li r11,2
	r11.s64 = 2;
loc_8273A290:
	// stw r11,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273A2A4"))) PPC_WEAK_FUNC(sub_8273A2A4);
PPC_FUNC_IMPL(__imp__sub_8273A2A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A2A8"))) PPC_WEAK_FUNC(sub_8273A2A8);
PPC_FUNC_IMPL(__imp__sub_8273A2A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A2B0"))) PPC_WEAK_FUNC(sub_8273A2B0);
PPC_FUNC_IMPL(__imp__sub_8273A2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-5
	cr6.compare<int32_t>(ctx.r4.s32, -5, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8273a2d0
	if (cr6.eq) goto loc_8273A2D0;
	// li r11,6
	r11.s64 = 6;
	// stw r5,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r5.u32);
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, r11.u32);
	// blr 
	return;
loc_8273A2D0:
	// li r11,4
	r11.s64 = 4;
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A2DC"))) PPC_WEAK_FUNC(sub_8273A2DC);
PPC_FUNC_IMPL(__imp__sub_8273A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A2E0"))) PPC_WEAK_FUNC(sub_8273A2E0);
PPC_FUNC_IMPL(__imp__sub_8273A2E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A2E8"))) PPC_WEAK_FUNC(sub_8273A2E8);
PPC_FUNC_IMPL(__imp__sub_8273A2E8) {
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
	// lwz r11,1420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,1420
	r30.s64 = ctx.r3.s64 + 1420;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273a378
	if (cr6.eq) goto loc_8273A378;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// li r12,183
	r12.s64 = 183;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,183
	cr6.compare<int32_t>(r11.s32, 183, xer);
	// bne cr6,0x8273a33c
	if (!cr6.eq) goto loc_8273A33C;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, r11.u32);
	// stw r10,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r10.u32);
	// b 0x8273a360
	goto loc_8273A360;
loc_8273A33C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273a358
	if (!cr6.lt) goto loc_8273A358;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, r11.u32);
	// stw r10,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r10.u32);
	// b 0x8273a360
	goto loc_8273A360;
loc_8273A358:
	// li r11,9
	r11.s64 = 9;
	// stw r11,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, r11.u32);
loc_8273A360:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273A370:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8273a370
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273A370;
loc_8273A378:
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
}

__attribute__((alias("__imp__sub_8273A390"))) PPC_WEAK_FUNC(sub_8273A390);
PPC_FUNC_IMPL(__imp__sub_8273A390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A394"))) PPC_WEAK_FUNC(sub_8273A394);
PPC_FUNC_IMPL(__imp__sub_8273A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A398"))) PPC_WEAK_FUNC(sub_8273A398);
PPC_FUNC_IMPL(__imp__sub_8273A398) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,1420
	ctx.r4.s64 = ctx.r3.s64 + 1420;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8273a3ec
	if (cr6.eq) goto loc_8273A3EC;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, r11.u32);
	// stw r10,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273A3EC:
	// li r11,11
	r11.s64 = 11;
	// stw r11,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273A404"))) PPC_WEAK_FUNC(sub_8273A404);
PPC_FUNC_IMPL(__imp__sub_8273A404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A408"))) PPC_WEAK_FUNC(sub_8273A408);
PPC_FUNC_IMPL(__imp__sub_8273A408) {
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
	// lwz r11,1420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,1420
	r31.s64 = ctx.r3.s64 + 1420;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273a474
	if (cr6.eq) goto loc_8273A474;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273a454
	if (!cr6.lt) goto loc_8273A454;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1408(r30)
	PPC_STORE_U32(r30.u32 + 1408, r11.u32);
	// stw r10,1404(r30)
	PPC_STORE_U32(r30.u32 + 1404, ctx.r10.u32);
	// b 0x8273a45c
	goto loc_8273A45C;
loc_8273A454:
	// li r11,12
	r11.s64 = 12;
	// stw r11,1404(r30)
	PPC_STORE_U32(r30.u32 + 1404, r11.u32);
loc_8273A45C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273A46C:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8273a46c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273A46C;
loc_8273A474:
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
}

__attribute__((alias("__imp__sub_8273A48C"))) PPC_WEAK_FUNC(sub_8273A48C);
PPC_FUNC_IMPL(__imp__sub_8273A48C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A490"))) PPC_WEAK_FUNC(sub_8273A490);
PPC_FUNC_IMPL(__imp__sub_8273A490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273a4b4
	if (cr6.lt) goto loc_8273A4B4;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1380, ctx.r10.u8);
	// stw r9,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r9.u32);
	// blr 
	return;
loc_8273A4B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1404(r11)
	PPC_STORE_U32(r11.u32 + 1404, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8273A4D0"))) PPC_WEAK_FUNC(sub_8273A4D0);
PPC_FUNC_IMPL(__imp__sub_8273A4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A4D4"))) PPC_WEAK_FUNC(sub_8273A4D4);
PPC_FUNC_IMPL(__imp__sub_8273A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A4D8"))) PPC_WEAK_FUNC(sub_8273A4D8);
PPC_FUNC_IMPL(__imp__sub_8273A4D8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r8,1416(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// lbz r7,1382(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bne cr6,0x8273a55c
	if (!cr6.eq) goto loc_8273A55C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
loc_8273A55C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r31,1420
	ctx.r9.s64 = r31.s64 + 1420;
	// addi r4,r11,-32212
	ctx.r4.s64 = r11.s64 + -32212;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826051b8
	sub_826051B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8273a598
	if (cr6.eq) goto loc_8273A598;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, r11.u32);
	// stw r10,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r10.u32);
	// b 0x8273a5a0
	goto loc_8273A5A0;
loc_8273A598:
	// li r11,8
	r11.s64 = 8;
	// stw r11,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, r11.u32);
loc_8273A5A0:
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273A5C0"))) PPC_WEAK_FUNC(sub_8273A5C0);
PPC_FUNC_IMPL(__imp__sub_8273A5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A5C4"))) PPC_WEAK_FUNC(sub_8273A5C4);
PPC_FUNC_IMPL(__imp__sub_8273A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A5C8"))) PPC_WEAK_FUNC(sub_8273A5C8);
PPC_FUNC_IMPL(__imp__sub_8273A5C8) {
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
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,1448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1448);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8273a5f4
	if (cr6.lt) goto loc_8273A5F4;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8273a600
	goto loc_8273A600;
loc_8273A5F4:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8273A600:
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(r11.u32, 1000, xer);
	// blt cr6,0x8273a610
	if (cr6.lt) goto loc_8273A610;
	// li r11,3000
	r11.s64 = 3000;
	// stw r11,1412(r31)
	PPC_STORE_U32(r31.u32 + 1412, r11.u32);
loc_8273A610:
	// li r11,13
	r11.s64 = 13;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273A62C"))) PPC_WEAK_FUNC(sub_8273A62C);
PPC_FUNC_IMPL(__imp__sub_8273A62C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A630"))) PPC_WEAK_FUNC(sub_8273A630);
PPC_FUNC_IMPL(__imp__sub_8273A630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273a668
	if (cr6.lt) goto loc_8273A668;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1380, ctx.r10.u8);
	// stw r9,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r9.u32);
	// blr 
	return;
loc_8273A668:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1404(r11)
	PPC_STORE_U32(r11.u32 + 1404, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8273A684"))) PPC_WEAK_FUNC(sub_8273A684);
PPC_FUNC_IMPL(__imp__sub_8273A684) {
	PPC_FUNC_PROLOGUE();
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A688"))) PPC_WEAK_FUNC(sub_8273A688);
PPC_FUNC_IMPL(__imp__sub_8273A688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,1388(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	// lwz r3,1384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8273A698"))) PPC_WEAK_FUNC(sub_8273A698);
PPC_FUNC_IMPL(__imp__sub_8273A698) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r31,r10,-32212
	r31.s64 = ctx.r10.s64 + -32212;
	// lwz r3,24192(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// addi r30,r11,31856
	r30.s64 = r11.s64 + 31856;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r9,r29,856
	ctx.r9.s64 = r29.s64 + 856;
	// li r8,92
	ctx.r8.s64 = 92;
	// stw r3,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r3.u32);
	// li r7,58
	ctx.r7.s64 = 58;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8273A6EC:
	// addi r11,r1,353
	r11.s64 = ctx.r1.s64 + 353;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a7a0
	if (cr6.eq) goto loc_8273A7A0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a710
	if (!cr6.eq) goto loc_8273A710;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A710:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273a7a0
	if (cr6.eq) goto loc_8273A7A0;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x8273a730
	if (!cr6.eq) goto loc_8273A730;
	// li r9,92
	ctx.r9.s64 = 92;
loc_8273A730:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a7a0
	if (cr6.eq) goto loc_8273A7A0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a750
	if (!cr6.eq) goto loc_8273A750;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A750:
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a7a0
	if (cr6.eq) goto loc_8273A7A0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a770
	if (!cr6.eq) goto loc_8273A770;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A770:
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a7a0
	if (cr6.eq) goto loc_8273A7A0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a790
	if (!cr6.eq) goto loc_8273A790;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A790:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// cmplwi cr6,r8,260
	cr6.compare<uint32_t>(ctx.r8.u32, 260, xer);
	// blt cr6,0x8273a6ec
	if (cr6.lt) goto loc_8273A6EC;
loc_8273A7A0:
	// stb r28,612(r1)
	PPC_STORE_U8(ctx.r1.u32 + 612, r28.u8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r9,r29,1116
	ctx.r9.s64 = r29.s64 + 1116;
	// li r8,92
	ctx.r8.s64 = 92;
	// li r7,58
	ctx.r7.s64 = 58;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8273A7C8:
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a87c
	if (cr6.eq) goto loc_8273A87C;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a7ec
	if (!cr6.eq) goto loc_8273A7EC;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A7EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273a87c
	if (cr6.eq) goto loc_8273A87C;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x8273a80c
	if (!cr6.eq) goto loc_8273A80C;
	// li r9,92
	ctx.r9.s64 = 92;
loc_8273A80C:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a87c
	if (cr6.eq) goto loc_8273A87C;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a82c
	if (!cr6.eq) goto loc_8273A82C;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A82C:
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a87c
	if (cr6.eq) goto loc_8273A87C;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a84c
	if (!cr6.eq) goto loc_8273A84C;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A84C:
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273a87c
	if (cr6.eq) goto loc_8273A87C;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273a86c
	if (!cr6.eq) goto loc_8273A86C;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273A86C:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// cmplwi cr6,r8,260
	cr6.compare<uint32_t>(ctx.r8.u32, 260, xer);
	// blt cr6,0x8273a7c8
	if (cr6.lt) goto loc_8273A7C8;
loc_8273A87C:
	// stb r28,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82bbaa80
	sub_82BBAA80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273a89c
	if (!cr6.eq) goto loc_8273A89C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,1408(r29)
	PPC_STORE_U32(r29.u32 + 1408, r11.u32);
loc_8273A89C:
	// li r11,10
	r11.s64 = 10;
	// lwz r3,616(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r11,1404(r29)
	PPC_STORE_U32(r29.u32 + 1404, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
}

__attribute__((alias("__imp__sub_8273A8B4"))) PPC_WEAK_FUNC(sub_8273A8B4);
PPC_FUNC_IMPL(__imp__sub_8273A8B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8273A8B8"))) PPC_WEAK_FUNC(sub_8273A8B8);
PPC_FUNC_IMPL(__imp__sub_8273A8B8) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273a900
	if (!cr6.eq) goto loc_8273A900;
	// addi r3,r3,1420
	ctx.r3.s64 = ctx.r3.s64 + 1420;
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// li r10,-5
	ctx.r10.s64 = -5;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, ctx.r10.u32);
	// stw r9,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r9.u32);
loc_8273A900:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273A914"))) PPC_WEAK_FUNC(sub_8273A914);
PPC_FUNC_IMPL(__imp__sub_8273A914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A918"))) PPC_WEAK_FUNC(sub_8273A918);
PPC_FUNC_IMPL(__imp__sub_8273A918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8273adb8
	sub_8273ADB8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-31684
	ctx.r10.s64 = r11.s64 + -31684;
	// stw r30,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, r30.u32);
	// stw r30,1412(r31)
	PPC_STORE_U32(r31.u32 + 1412, r30.u32);
	// stw r30,1416(r31)
	PPC_STORE_U32(r31.u32 + 1416, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,1448(r31)
	PPC_STORE_U32(r31.u32 + 1448, ctx.r3.u32);
	// addi r11,r31,1416
	r11.s64 = r31.s64 + 1416;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273A964:
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// bdnz 0x8273a964
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273A964;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8273a99c
	if (!cr6.eq) goto loc_8273A99C;
	// lbz r11,1317(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1317);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,26,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF83F;
	// addi r8,r11,3000
	ctx.r8.s64 = r11.s64 + 3000;
	// stw r8,1412(r31)
	PPC_STORE_U32(r31.u32 + 1412, ctx.r8.u32);
loc_8273A99C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8273A9A0"))) PPC_WEAK_FUNC(sub_8273A9A0);
PPC_FUNC_IMPL(__imp__sub_8273A9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273A9A4"))) PPC_WEAK_FUNC(sub_8273A9A4);
PPC_FUNC_IMPL(__imp__sub_8273A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273A9A8"))) PPC_WEAK_FUNC(sub_8273A9A8);
PPC_FUNC_IMPL(__imp__sub_8273A9A8) {
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
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,1400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-22992
	ctx.r5.s64 = ctx.r8.s64 + -22992;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1388);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273AA08"))) PPC_WEAK_FUNC(sub_8273AA08);
PPC_FUNC_IMPL(__imp__sub_8273AA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AA0C"))) PPC_WEAK_FUNC(sub_8273AA0C);
PPC_FUNC_IMPL(__imp__sub_8273AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AA10"))) PPC_WEAK_FUNC(sub_8273AA10);
PPC_FUNC_IMPL(__imp__sub_8273AA10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,1388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// addi r5,r11,-22992
	ctx.r5.s64 = r11.s64 + -22992;
	// lwz r9,1400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r4,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r4.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,1448(r31)
	PPC_STORE_U32(r31.u32 + 1448, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273AA80"))) PPC_WEAK_FUNC(sub_8273AA80);
PPC_FUNC_IMPL(__imp__sub_8273AA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AA84"))) PPC_WEAK_FUNC(sub_8273AA84);
PPC_FUNC_IMPL(__imp__sub_8273AA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AA88"))) PPC_WEAK_FUNC(sub_8273AA88);
PPC_FUNC_IMPL(__imp__sub_8273AA88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,1448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1448);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8273aab4
	if (cr6.lt) goto loc_8273AAB4;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8273aac0
	goto loc_8273AAC0;
loc_8273AAB4:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8273AAC0:
	// lwz r10,1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1412);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8273ab0c
	if (cr6.lt) goto loc_8273AB0C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r10,1388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1388);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22992
	ctx.r5.s64 = r11.s64 + -22992;
	// lwz r9,1400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1400);
	// addi r6,r31,64
	ctx.r6.s64 = r31.s64 + 64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,1384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r4,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r4.u32);
loc_8273AB0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273AB20"))) PPC_WEAK_FUNC(sub_8273AB20);
PPC_FUNC_IMPL(__imp__sub_8273AB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AB24"))) PPC_WEAK_FUNC(sub_8273AB24);
PPC_FUNC_IMPL(__imp__sub_8273AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AB28"))) PPC_WEAK_FUNC(sub_8273AB28);
PPC_FUNC_IMPL(__imp__sub_8273AB28) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-31816
	ctx.r6.s64 = ctx.r9.s64 + -31816;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1452
	ctx.r3.s64 = 1452;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273abb8
	if (cr6.eq) goto loc_8273ABB8;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8273a918
	sub_8273A918(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_8273ABB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8273ABC0"))) PPC_WEAK_FUNC(sub_8273ABC0);
PPC_FUNC_IMPL(__imp__sub_8273ABC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8273ABC4"))) PPC_WEAK_FUNC(sub_8273ABC4);
PPC_FUNC_IMPL(__imp__sub_8273ABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273ABC8"))) PPC_WEAK_FUNC(sub_8273ABC8);
PPC_FUNC_IMPL(__imp__sub_8273ABC8) {
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
	// lwz r11,1392(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273abf0
	if (!cr6.eq) goto loc_8273ABF0;
	// lwz r11,1396(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273abf4
	if (cr6.eq) goto loc_8273ABF4;
loc_8273ABF0:
	// li r11,0
	r11.s64 = 0;
loc_8273ABF4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273ac20
	if (!cr6.eq) goto loc_8273AC20;
	// lwz r11,1396(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// lwz r7,1400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,1408(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r3,1392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273AC20:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273AC30"))) PPC_WEAK_FUNC(sub_8273AC30);
PPC_FUNC_IMPL(__imp__sub_8273AC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AC34"))) PPC_WEAK_FUNC(sub_8273AC34);
PPC_FUNC_IMPL(__imp__sub_8273AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AC38"))) PPC_WEAK_FUNC(sub_8273AC38);
PPC_FUNC_IMPL(__imp__sub_8273AC38) {
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,1376(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lbz r8,1380(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1380);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// addi r30,r6,-23888
	r30.s64 = ctx.r6.s64 + -23888;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// addi r29,r5,-22904
	r29.s64 = ctx.r5.s64 + -22904;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r7,1400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1400);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8273c008
	sub_8273C008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// stw r9,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8273AD04"))) PPC_WEAK_FUNC(sub_8273AD04);
PPC_FUNC_IMPL(__imp__sub_8273AD04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273AD08"))) PPC_WEAK_FUNC(sub_8273AD08);
PPC_FUNC_IMPL(__imp__sub_8273AD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,1404(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x8273adb0
	if (cr6.gt) {
		sub_8273ADB0(ctx, base);
		return;
	}
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21204
	r12.s64 = r12.s64 + -21204;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x8273AD6C
		return;
	case 1:
		// ERROR: 0x8273AD74
		return;
	case 2:
		// ERROR: 0x8273AD78
		return;
	case 3:
		// ERROR: 0x8273AD7C
		return;
	case 4:
		// ERROR: 0x8273AD84
		return;
	case 5:
		// ERROR: 0x8273AD7C
		return;
	case 6:
		// ERROR: 0x8273AD88
		return;
	case 7:
		// ERROR: 0x8273AD8C
		return;
	case 8:
		// ERROR: 0x8273AD90
		return;
	case 9:
		// ERROR: 0x8273AD94
		return;
	case 10:
		// ERROR: 0x8273AD98
		return;
	case 11:
		// ERROR: 0x8273AD9C
		return;
	case 12:
		// ERROR: 0x8273ADA0
		return;
	case 13:
		// ERROR: 0x8273ADA4
		return;
	case 14:
		// ERROR: 0x8273ADA8
		return;
	case 15:
		// ERROR: 0x8273ADAC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8273AD2C"))) PPC_WEAK_FUNC(sub_8273AD2C);
PPC_FUNC_IMPL(__imp__sub_8273AD2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-21140(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21140);
	// lwz r19,-21132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21132);
	// lwz r19,-21128(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21128);
	// lwz r19,-21124(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21124);
	// lwz r19,-21116(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21116);
	// lwz r19,-21124(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21124);
	// lwz r19,-21112(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21112);
	// lwz r19,-21108(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21108);
	// lwz r19,-21104(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21104);
	// lwz r19,-21100(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21100);
	// lwz r19,-21096(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21096);
	// lwz r19,-21092(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21092);
	// lwz r19,-21088(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21088);
	// lwz r19,-21084(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21084);
	// lwz r19,-21080(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21080);
	// lwz r19,-21076(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -21076);
	// li r11,1
	r11.s64 = 1;
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, r11.u32);
	// b 0x8273a258
	sub_8273A258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD78"))) PPC_WEAK_FUNC(sub_8273AD78);
PPC_FUNC_IMPL(__imp__sub_8273AD78) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273ac38
	sub_8273AC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD7C"))) PPC_WEAK_FUNC(sub_8273AD7C);
PPC_FUNC_IMPL(__imp__sub_8273AD7C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AD84"))) PPC_WEAK_FUNC(sub_8273AD84);
PPC_FUNC_IMPL(__imp__sub_8273AD84) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a9a8
	sub_8273A9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD88"))) PPC_WEAK_FUNC(sub_8273AD88);
PPC_FUNC_IMPL(__imp__sub_8273AD88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273aa10
	sub_8273AA10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD8C"))) PPC_WEAK_FUNC(sub_8273AD8C);
PPC_FUNC_IMPL(__imp__sub_8273AD8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a4d8
	sub_8273A4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD90"))) PPC_WEAK_FUNC(sub_8273AD90);
PPC_FUNC_IMPL(__imp__sub_8273AD90) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a2e8
	sub_8273A2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD94"))) PPC_WEAK_FUNC(sub_8273AD94);
PPC_FUNC_IMPL(__imp__sub_8273AD94) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a698
	sub_8273A698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD98"))) PPC_WEAK_FUNC(sub_8273AD98);
PPC_FUNC_IMPL(__imp__sub_8273AD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a398
	sub_8273A398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD9C"))) PPC_WEAK_FUNC(sub_8273AD9C);
PPC_FUNC_IMPL(__imp__sub_8273AD9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a408
	sub_8273A408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273ADA0"))) PPC_WEAK_FUNC(sub_8273ADA0);
PPC_FUNC_IMPL(__imp__sub_8273ADA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a5c8
	sub_8273A5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273ADA4"))) PPC_WEAK_FUNC(sub_8273ADA4);
PPC_FUNC_IMPL(__imp__sub_8273ADA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273aa88
	sub_8273AA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273ADA8"))) PPC_WEAK_FUNC(sub_8273ADA8);
PPC_FUNC_IMPL(__imp__sub_8273ADA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273a8b8
	sub_8273A8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273ADAC"))) PPC_WEAK_FUNC(sub_8273ADAC);
PPC_FUNC_IMPL(__imp__sub_8273ADAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273abc8
	sub_8273ABC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273ADB0"))) PPC_WEAK_FUNC(sub_8273ADB0);
PPC_FUNC_IMPL(__imp__sub_8273ADB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273ADB8"))) PPC_WEAK_FUNC(sub_8273ADB8);
PPC_FUNC_IMPL(__imp__sub_8273ADB8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r10,r11,-31828
	ctx.r10.s64 = r11.s64 + -31828;
	// li r5,1320
	ctx.r5.s64 = 1320;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,1384
	ctx.r10.s64 = r31.s64 + 1384;
	// stw r11,1384(r31)
	PPC_STORE_U32(r31.u32 + 1384, r11.u32);
	// addi r10,r31,1392
	ctx.r10.s64 = r31.s64 + 1392;
	// stw r11,1388(r31)
	PPC_STORE_U32(r31.u32 + 1388, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,1388(r31)
	PPC_STORE_U32(r31.u32 + 1388, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r8,1384(r31)
	PPC_STORE_U32(r31.u32 + 1384, ctx.r8.u32);
	// stw r11,1392(r31)
	PPC_STORE_U32(r31.u32 + 1392, r11.u32);
	// stw r11,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r7,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r6,1392(r31)
	PPC_STORE_U32(r31.u32 + 1392, ctx.r6.u32);
	// stw r27,1400(r31)
	PPC_STORE_U32(r31.u32 + 1400, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273AE40"))) PPC_WEAK_FUNC(sub_8273AE40);
PPC_FUNC_IMPL(__imp__sub_8273AE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8273AE44"))) PPC_WEAK_FUNC(sub_8273AE44);
PPC_FUNC_IMPL(__imp__sub_8273AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AE48"))) PPC_WEAK_FUNC(sub_8273AE48);
PPC_FUNC_IMPL(__imp__sub_8273AE48) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31828
	ctx.r10.s64 = r11.s64 + -31828;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273ae8c
	if (cr6.eq) goto loc_8273AE8C;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273AE8C:
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

__attribute__((alias("__imp__sub_8273AEA0"))) PPC_WEAK_FUNC(sub_8273AEA0);
PPC_FUNC_IMPL(__imp__sub_8273AEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AEA4"))) PPC_WEAK_FUNC(sub_8273AEA4);
PPC_FUNC_IMPL(__imp__sub_8273AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AEA8"))) PPC_WEAK_FUNC(sub_8273AEA8);
PPC_FUNC_IMPL(__imp__sub_8273AEA8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31668
	ctx.r10.s64 = r11.s64 + -31668;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273aeec
	if (cr6.eq) goto loc_8273AEEC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273AEEC:
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

__attribute__((alias("__imp__sub_8273AF00"))) PPC_WEAK_FUNC(sub_8273AF00);
PPC_FUNC_IMPL(__imp__sub_8273AF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF04"))) PPC_WEAK_FUNC(sub_8273AF04);
PPC_FUNC_IMPL(__imp__sub_8273AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AF08"))) PPC_WEAK_FUNC(sub_8273AF08);
PPC_FUNC_IMPL(__imp__sub_8273AF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-31668
	ctx.r10.s64 = r11.s64 + -31668;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82737a48
	sub_82737A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AF18"))) PPC_WEAK_FUNC(sub_8273AF18);
PPC_FUNC_IMPL(__imp__sub_8273AF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,14
	r11.s64 = 14;
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF24"))) PPC_WEAK_FUNC(sub_8273AF24);
PPC_FUNC_IMPL(__imp__sub_8273AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AF28"))) PPC_WEAK_FUNC(sub_8273AF28);
PPC_FUNC_IMPL(__imp__sub_8273AF28) {
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
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82737200
	sub_82737200(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,15
	r11.s64 = 15;
	// bne cr6,0x8273af60
	if (!cr6.eq) goto loc_8273AF60;
	// li r11,2
	r11.s64 = 2;
loc_8273AF60:
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273AF74"))) PPC_WEAK_FUNC(sub_8273AF74);
PPC_FUNC_IMPL(__imp__sub_8273AF74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF78"))) PPC_WEAK_FUNC(sub_8273AF78);
PPC_FUNC_IMPL(__imp__sub_8273AF78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF80"))) PPC_WEAK_FUNC(sub_8273AF80);
PPC_FUNC_IMPL(__imp__sub_8273AF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-5
	cr6.compare<int32_t>(ctx.r4.s32, -5, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8273afa0
	if (cr6.eq) goto loc_8273AFA0;
	// li r11,6
	r11.s64 = 6;
	// stw r5,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r5.u32);
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, r11.u32);
	// blr 
	return;
loc_8273AFA0:
	// li r11,4
	r11.s64 = 4;
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AFAC"))) PPC_WEAK_FUNC(sub_8273AFAC);
PPC_FUNC_IMPL(__imp__sub_8273AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AFB0"))) PPC_WEAK_FUNC(sub_8273AFB0);
PPC_FUNC_IMPL(__imp__sub_8273AFB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AFB8"))) PPC_WEAK_FUNC(sub_8273AFB8);
PPC_FUNC_IMPL(__imp__sub_8273AFB8) {
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
	// lwz r11,1160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,1160
	r30.s64 = ctx.r3.s64 + 1160;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273b048
	if (cr6.eq) goto loc_8273B048;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// li r12,183
	r12.s64 = 183;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,183
	cr6.compare<int32_t>(r11.s32, 183, xer);
	// bne cr6,0x8273b00c
	if (!cr6.eq) goto loc_8273B00C;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
	// stw r10,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r10.u32);
	// b 0x8273b030
	goto loc_8273B030;
loc_8273B00C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273b028
	if (!cr6.lt) goto loc_8273B028;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
	// stw r10,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r10.u32);
	// b 0x8273b030
	goto loc_8273B030;
loc_8273B028:
	// li r11,9
	r11.s64 = 9;
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
loc_8273B030:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273B040:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8273b040
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273B040;
loc_8273B048:
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
}

__attribute__((alias("__imp__sub_8273B060"))) PPC_WEAK_FUNC(sub_8273B060);
PPC_FUNC_IMPL(__imp__sub_8273B060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B064"))) PPC_WEAK_FUNC(sub_8273B064);
PPC_FUNC_IMPL(__imp__sub_8273B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B068"))) PPC_WEAK_FUNC(sub_8273B068);
PPC_FUNC_IMPL(__imp__sub_8273B068) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,1160
	ctx.r4.s64 = ctx.r3.s64 + 1160;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8273b0bc
	if (cr6.eq) goto loc_8273B0BC;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
	// stw r10,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273B0BC:
	// li r11,11
	r11.s64 = 11;
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B0D4"))) PPC_WEAK_FUNC(sub_8273B0D4);
PPC_FUNC_IMPL(__imp__sub_8273B0D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B0D8"))) PPC_WEAK_FUNC(sub_8273B0D8);
PPC_FUNC_IMPL(__imp__sub_8273B0D8) {
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
	// lwz r11,1160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,1160
	r31.s64 = ctx.r3.s64 + 1160;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273b144
	if (cr6.eq) goto loc_8273B144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273b124
	if (!cr6.lt) goto loc_8273B124;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1148(r30)
	PPC_STORE_U32(r30.u32 + 1148, r11.u32);
	// stw r10,1144(r30)
	PPC_STORE_U32(r30.u32 + 1144, ctx.r10.u32);
	// b 0x8273b12c
	goto loc_8273B12C;
loc_8273B124:
	// li r11,12
	r11.s64 = 12;
	// stw r11,1144(r30)
	PPC_STORE_U32(r30.u32 + 1144, r11.u32);
loc_8273B12C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273B13C:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8273b13c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273B13C;
loc_8273B144:
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
}

__attribute__((alias("__imp__sub_8273B15C"))) PPC_WEAK_FUNC(sub_8273B15C);
PPC_FUNC_IMPL(__imp__sub_8273B15C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B160"))) PPC_WEAK_FUNC(sub_8273B160);
PPC_FUNC_IMPL(__imp__sub_8273B160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273b184
	if (cr6.lt) goto loc_8273B184;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1120, ctx.r10.u8);
	// stw r9,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r9.u32);
	// blr 
	return;
loc_8273B184:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1148(r11)
	PPC_STORE_U32(r11.u32 + 1148, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1144(r11)
	PPC_STORE_U32(r11.u32 + 1144, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8273B1A0"))) PPC_WEAK_FUNC(sub_8273B1A0);
PPC_FUNC_IMPL(__imp__sub_8273B1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B1A4"))) PPC_WEAK_FUNC(sub_8273B1A4);
PPC_FUNC_IMPL(__imp__sub_8273B1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B1A8"))) PPC_WEAK_FUNC(sub_8273B1A8);
PPC_FUNC_IMPL(__imp__sub_8273B1A8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r8,1156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// lbz r7,1122(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1122);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bne cr6,0x8273b22c
	if (!cr6.eq) goto loc_8273B22C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
loc_8273B22C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r31,1160
	ctx.r9.s64 = r31.s64 + 1160;
	// addi r4,r11,-32212
	ctx.r4.s64 = r11.s64 + -32212;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826051b8
	sub_826051B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8273b268
	if (cr6.eq) goto loc_8273B268;
	// li r11,-1
	r11.s64 = -1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
	// stw r10,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r10.u32);
	// b 0x8273b270
	goto loc_8273B270;
loc_8273B268:
	// li r11,8
	r11.s64 = 8;
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
loc_8273B270:
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B290"))) PPC_WEAK_FUNC(sub_8273B290);
PPC_FUNC_IMPL(__imp__sub_8273B290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B294"))) PPC_WEAK_FUNC(sub_8273B294);
PPC_FUNC_IMPL(__imp__sub_8273B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B298"))) PPC_WEAK_FUNC(sub_8273B298);
PPC_FUNC_IMPL(__imp__sub_8273B298) {
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
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,1188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1188);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8273b2c4
	if (cr6.lt) goto loc_8273B2C4;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8273b2d0
	goto loc_8273B2D0;
loc_8273B2C4:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8273B2D0:
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(r11.u32, 1000, xer);
	// blt cr6,0x8273b2e0
	if (cr6.lt) goto loc_8273B2E0;
	// li r11,3000
	r11.s64 = 3000;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
loc_8273B2E0:
	// li r11,13
	r11.s64 = 13;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B2FC"))) PPC_WEAK_FUNC(sub_8273B2FC);
PPC_FUNC_IMPL(__imp__sub_8273B2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B300"))) PPC_WEAK_FUNC(sub_8273B300);
PPC_FUNC_IMPL(__imp__sub_8273B300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,1144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273b338
	if (cr6.lt) goto loc_8273B338;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1120, ctx.r10.u8);
	// stw r9,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r9.u32);
	// blr 
	return;
loc_8273B338:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1148(r11)
	PPC_STORE_U32(r11.u32 + 1148, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1144(r11)
	PPC_STORE_U32(r11.u32 + 1144, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8273B354"))) PPC_WEAK_FUNC(sub_8273B354);
PPC_FUNC_IMPL(__imp__sub_8273B354) {
	PPC_FUNC_PROLOGUE();
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B358"))) PPC_WEAK_FUNC(sub_8273B358);
PPC_FUNC_IMPL(__imp__sub_8273B358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,1128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// lwz r3,1124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8273B368"))) PPC_WEAK_FUNC(sub_8273B368);
PPC_FUNC_IMPL(__imp__sub_8273B368) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r9,31856
	ctx.r5.s64 = ctx.r9.s64 + 31856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r9,r3,856
	ctx.r9.s64 = ctx.r3.s64 + 856;
	// addi r6,r10,-32212
	ctx.r6.s64 = ctx.r10.s64 + -32212;
	// li r8,92
	ctx.r8.s64 = 92;
	// li r7,58
	ctx.r7.s64 = 58;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r11.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8273B3B4:
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273b468
	if (cr6.eq) goto loc_8273B468;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273b3d8
	if (!cr6.eq) goto loc_8273B3D8;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273B3D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273b468
	if (cr6.eq) goto loc_8273B468;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x8273b3f8
	if (!cr6.eq) goto loc_8273B3F8;
	// li r9,92
	ctx.r9.s64 = 92;
loc_8273B3F8:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273b468
	if (cr6.eq) goto loc_8273B468;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273b418
	if (!cr6.eq) goto loc_8273B418;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273B418:
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273b468
	if (cr6.eq) goto loc_8273B468;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273b438
	if (!cr6.eq) goto loc_8273B438;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273B438:
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273b468
	if (cr6.eq) goto loc_8273B468;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273b458
	if (!cr6.eq) goto loc_8273B458;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273B458:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// cmplwi cr6,r8,260
	cr6.compare<uint32_t>(ctx.r8.u32, 260, xer);
	// blt cr6,0x8273b3b4
	if (cr6.lt) goto loc_8273B3B4;
loc_8273B468:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, r11.u8);
	// bl 0x826074d8
	sub_826074D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273b488
	if (!cr6.eq) goto loc_8273B488;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
loc_8273B488:
	// li r11,10
	r11.s64 = 10;
	// lwz r3,344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B4AC"))) PPC_WEAK_FUNC(sub_8273B4AC);
PPC_FUNC_IMPL(__imp__sub_8273B4AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B4B0"))) PPC_WEAK_FUNC(sub_8273B4B0);
PPC_FUNC_IMPL(__imp__sub_8273B4B0) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273b4f8
	if (!cr6.eq) goto loc_8273B4F8;
	// addi r3,r3,1160
	ctx.r3.s64 = ctx.r3.s64 + 1160;
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// li r10,-5
	ctx.r10.s64 = -5;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, ctx.r10.u32);
	// stw r9,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r9.u32);
loc_8273B4F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B50C"))) PPC_WEAK_FUNC(sub_8273B50C);
PPC_FUNC_IMPL(__imp__sub_8273B50C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B510"))) PPC_WEAK_FUNC(sub_8273B510);
PPC_FUNC_IMPL(__imp__sub_8273B510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8273b9a8
	sub_8273B9A8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-31520
	ctx.r10.s64 = r11.s64 + -31520;
	// stw r30,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r30.u32);
	// stw r30,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r30.u32);
	// stw r30,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r30.u32);
	// stw r30,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,1188(r31)
	PPC_STORE_U32(r31.u32 + 1188, ctx.r3.u32);
	// addi r11,r31,1156
	r11.s64 = r31.s64 + 1156;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273B55C:
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// bdnz 0x8273b55c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273B55C;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8273b594
	if (!cr6.eq) goto loc_8273B594;
	// lbz r11,1057(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1057);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,26,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF83F;
	// addi r8,r11,3000
	ctx.r8.s64 = r11.s64 + 3000;
	// stw r8,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, ctx.r8.u32);
loc_8273B594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8273B598"))) PPC_WEAK_FUNC(sub_8273B598);
PPC_FUNC_IMPL(__imp__sub_8273B598) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273B59C"))) PPC_WEAK_FUNC(sub_8273B59C);
PPC_FUNC_IMPL(__imp__sub_8273B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B5A0"))) PPC_WEAK_FUNC(sub_8273B5A0);
PPC_FUNC_IMPL(__imp__sub_8273B5A0) {
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
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,1140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-19712
	ctx.r5.s64 = ctx.r8.s64 + -19712;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,1128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1128);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273B600"))) PPC_WEAK_FUNC(sub_8273B600);
PPC_FUNC_IMPL(__imp__sub_8273B600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B604"))) PPC_WEAK_FUNC(sub_8273B604);
PPC_FUNC_IMPL(__imp__sub_8273B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B608"))) PPC_WEAK_FUNC(sub_8273B608);
PPC_FUNC_IMPL(__imp__sub_8273B608) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,1188(r31)
	PPC_STORE_U32(r31.u32 + 1188, ctx.r3.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1124);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-19712
	ctx.r10.s64 = r11.s64 + -19712;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r6,r31,64
	ctx.r6.s64 = r31.s64 + 64;
	// lwz r11,1128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1128);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B678"))) PPC_WEAK_FUNC(sub_8273B678);
PPC_FUNC_IMPL(__imp__sub_8273B678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B67C"))) PPC_WEAK_FUNC(sub_8273B67C);
PPC_FUNC_IMPL(__imp__sub_8273B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B680"))) PPC_WEAK_FUNC(sub_8273B680);
PPC_FUNC_IMPL(__imp__sub_8273B680) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,1188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1188);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8273b6ac
	if (cr6.lt) goto loc_8273B6AC;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8273b6b8
	goto loc_8273B6B8;
loc_8273B6AC:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8273B6B8:
	// lwz r10,1152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8273b704
	if (cr6.lt) goto loc_8273B704;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r10,1128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1128);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-19712
	ctx.r5.s64 = r11.s64 + -19712;
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// addi r6,r31,64
	ctx.r6.s64 = r31.s64 + 64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1124);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r4,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r4.u32);
loc_8273B704:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B718"))) PPC_WEAK_FUNC(sub_8273B718);
PPC_FUNC_IMPL(__imp__sub_8273B718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B71C"))) PPC_WEAK_FUNC(sub_8273B71C);
PPC_FUNC_IMPL(__imp__sub_8273B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B720"))) PPC_WEAK_FUNC(sub_8273B720);
PPC_FUNC_IMPL(__imp__sub_8273B720) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-31656
	ctx.r6.s64 = ctx.r9.s64 + -31656;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1192
	ctx.r3.s64 = 1192;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273b7b0
	if (cr6.eq) goto loc_8273B7B0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8273b510
	sub_8273B510(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_8273B7B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8273B7B8"))) PPC_WEAK_FUNC(sub_8273B7B8);
PPC_FUNC_IMPL(__imp__sub_8273B7B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8273B7BC"))) PPC_WEAK_FUNC(sub_8273B7BC);
PPC_FUNC_IMPL(__imp__sub_8273B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B7C0"))) PPC_WEAK_FUNC(sub_8273B7C0);
PPC_FUNC_IMPL(__imp__sub_8273B7C0) {
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
	// lwz r11,1132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273b7e8
	if (!cr6.eq) goto loc_8273B7E8;
	// lwz r11,1136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273b7ec
	if (cr6.eq) goto loc_8273B7EC;
loc_8273B7E8:
	// li r11,0
	r11.s64 = 0;
loc_8273B7EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273b818
	if (!cr6.eq) goto loc_8273B818;
	// lwz r11,1136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// lwz r7,1140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,1148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// lwz r3,1132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273B818:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273B828"))) PPC_WEAK_FUNC(sub_8273B828);
PPC_FUNC_IMPL(__imp__sub_8273B828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B82C"))) PPC_WEAK_FUNC(sub_8273B82C);
PPC_FUNC_IMPL(__imp__sub_8273B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B830"))) PPC_WEAK_FUNC(sub_8273B830);
PPC_FUNC_IMPL(__imp__sub_8273B830) {
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
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// lwz r4,1116(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// lbz r8,1120(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r9,-20608
	ctx.r3.s64 = ctx.r9.s64 + -20608;
	// li r11,0
	r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r9,r7,-19624
	ctx.r9.s64 = ctx.r7.s64 + -19624;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r7,1140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8273c008
	sub_8273C008(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r31.u32);
	// stw r7,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273B8F4"))) PPC_WEAK_FUNC(sub_8273B8F4);
PPC_FUNC_IMPL(__imp__sub_8273B8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B8F8"))) PPC_WEAK_FUNC(sub_8273B8F8);
PPC_FUNC_IMPL(__imp__sub_8273B8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x8273b9a0
	if (cr6.gt) {
		sub_8273B9A0(ctx, base);
		return;
	}
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18148
	r12.s64 = r12.s64 + -18148;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x8273B95C
		return;
	case 1:
		// ERROR: 0x8273B964
		return;
	case 2:
		// ERROR: 0x8273B968
		return;
	case 3:
		// ERROR: 0x8273B96C
		return;
	case 4:
		// ERROR: 0x8273B974
		return;
	case 5:
		// ERROR: 0x8273B96C
		return;
	case 6:
		// ERROR: 0x8273B978
		return;
	case 7:
		// ERROR: 0x8273B97C
		return;
	case 8:
		// ERROR: 0x8273B980
		return;
	case 9:
		// ERROR: 0x8273B984
		return;
	case 10:
		// ERROR: 0x8273B988
		return;
	case 11:
		// ERROR: 0x8273B98C
		return;
	case 12:
		// ERROR: 0x8273B990
		return;
	case 13:
		// ERROR: 0x8273B994
		return;
	case 14:
		// ERROR: 0x8273B998
		return;
	case 15:
		// ERROR: 0x8273B99C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8273B91C"))) PPC_WEAK_FUNC(sub_8273B91C);
PPC_FUNC_IMPL(__imp__sub_8273B91C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-18084(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18084);
	// lwz r19,-18076(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18076);
	// lwz r19,-18072(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18072);
	// lwz r19,-18068(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18068);
	// lwz r19,-18060(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18060);
	// lwz r19,-18068(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18068);
	// lwz r19,-18056(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18056);
	// lwz r19,-18052(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18052);
	// lwz r19,-18048(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18048);
	// lwz r19,-18044(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18044);
	// lwz r19,-18040(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18040);
	// lwz r19,-18036(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18036);
	// lwz r19,-18032(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18032);
	// lwz r19,-18028(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18028);
	// lwz r19,-18024(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18024);
	// lwz r19,-18020(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -18020);
	// li r11,1
	r11.s64 = 1;
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, r11.u32);
	// b 0x8273af28
	sub_8273AF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B968"))) PPC_WEAK_FUNC(sub_8273B968);
PPC_FUNC_IMPL(__imp__sub_8273B968) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b830
	sub_8273B830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B96C"))) PPC_WEAK_FUNC(sub_8273B96C);
PPC_FUNC_IMPL(__imp__sub_8273B96C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B974"))) PPC_WEAK_FUNC(sub_8273B974);
PPC_FUNC_IMPL(__imp__sub_8273B974) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b5a0
	sub_8273B5A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B978"))) PPC_WEAK_FUNC(sub_8273B978);
PPC_FUNC_IMPL(__imp__sub_8273B978) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b608
	sub_8273B608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B97C"))) PPC_WEAK_FUNC(sub_8273B97C);
PPC_FUNC_IMPL(__imp__sub_8273B97C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b1a8
	sub_8273B1A8(ctx, base);
	return;
}

