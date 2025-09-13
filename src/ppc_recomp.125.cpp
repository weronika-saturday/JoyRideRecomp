#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824FCEB4"))) PPC_WEAK_FUNC(sub_824FCEB4);
PPC_FUNC_IMPL(__imp__sub_824FCEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCEB8"))) PPC_WEAK_FUNC(sub_824FCEB8);
PPC_FUNC_IMPL(__imp__sub_824FCEB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fcef0
	if (!cr6.eq) goto loc_824FCEF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fcf1c
	if (cr6.eq) goto loc_824FCF1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fcf1c
	goto loc_824FCF1C;
loc_824FCEF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fcf1c
	if (cr6.eq) goto loc_824FCF1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28304
	ctx.r4.s64 = r11.s64 + 28304;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FCF1C:
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

__attribute__((alias("__imp__sub_824FCF30"))) PPC_WEAK_FUNC(sub_824FCF30);
PPC_FUNC_IMPL(__imp__sub_824FCF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCF34"))) PPC_WEAK_FUNC(sub_824FCF34);
PPC_FUNC_IMPL(__imp__sub_824FCF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCF38"))) PPC_WEAK_FUNC(sub_824FCF38);
PPC_FUNC_IMPL(__imp__sub_824FCF38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fcf70
	if (!cr6.eq) goto loc_824FCF70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fcf9c
	if (cr6.eq) goto loc_824FCF9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fcf9c
	goto loc_824FCF9C;
loc_824FCF70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fcf9c
	if (cr6.eq) goto loc_824FCF9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28424
	ctx.r4.s64 = r11.s64 + 28424;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FCF9C:
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

__attribute__((alias("__imp__sub_824FCFB0"))) PPC_WEAK_FUNC(sub_824FCFB0);
PPC_FUNC_IMPL(__imp__sub_824FCFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCFB4"))) PPC_WEAK_FUNC(sub_824FCFB4);
PPC_FUNC_IMPL(__imp__sub_824FCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCFB8"))) PPC_WEAK_FUNC(sub_824FCFB8);
PPC_FUNC_IMPL(__imp__sub_824FCFB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fcff0
	if (!cr6.eq) goto loc_824FCFF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd01c
	if (cr6.eq) goto loc_824FD01C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd01c
	goto loc_824FD01C;
loc_824FCFF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd01c
	if (cr6.eq) goto loc_824FD01C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28544
	ctx.r4.s64 = r11.s64 + 28544;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD01C:
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

__attribute__((alias("__imp__sub_824FD030"))) PPC_WEAK_FUNC(sub_824FD030);
PPC_FUNC_IMPL(__imp__sub_824FD030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD034"))) PPC_WEAK_FUNC(sub_824FD034);
PPC_FUNC_IMPL(__imp__sub_824FD034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD038"))) PPC_WEAK_FUNC(sub_824FD038);
PPC_FUNC_IMPL(__imp__sub_824FD038) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd070
	if (!cr6.eq) goto loc_824FD070;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd09c
	if (cr6.eq) goto loc_824FD09C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd09c
	goto loc_824FD09C;
loc_824FD070:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd09c
	if (cr6.eq) goto loc_824FD09C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28672
	ctx.r4.s64 = r11.s64 + 28672;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD09C:
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

__attribute__((alias("__imp__sub_824FD0B0"))) PPC_WEAK_FUNC(sub_824FD0B0);
PPC_FUNC_IMPL(__imp__sub_824FD0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD0B4"))) PPC_WEAK_FUNC(sub_824FD0B4);
PPC_FUNC_IMPL(__imp__sub_824FD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD0B8"))) PPC_WEAK_FUNC(sub_824FD0B8);
PPC_FUNC_IMPL(__imp__sub_824FD0B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd0f0
	if (!cr6.eq) goto loc_824FD0F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd11c
	if (cr6.eq) goto loc_824FD11C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd11c
	goto loc_824FD11C;
loc_824FD0F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd11c
	if (cr6.eq) goto loc_824FD11C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28800
	ctx.r4.s64 = r11.s64 + 28800;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD11C:
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

__attribute__((alias("__imp__sub_824FD130"))) PPC_WEAK_FUNC(sub_824FD130);
PPC_FUNC_IMPL(__imp__sub_824FD130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD134"))) PPC_WEAK_FUNC(sub_824FD134);
PPC_FUNC_IMPL(__imp__sub_824FD134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD138"))) PPC_WEAK_FUNC(sub_824FD138);
PPC_FUNC_IMPL(__imp__sub_824FD138) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd170
	if (!cr6.eq) goto loc_824FD170;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd19c
	if (cr6.eq) goto loc_824FD19C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd19c
	goto loc_824FD19C;
loc_824FD170:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd19c
	if (cr6.eq) goto loc_824FD19C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28928
	ctx.r4.s64 = r11.s64 + 28928;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD19C:
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

__attribute__((alias("__imp__sub_824FD1B0"))) PPC_WEAK_FUNC(sub_824FD1B0);
PPC_FUNC_IMPL(__imp__sub_824FD1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD1B4"))) PPC_WEAK_FUNC(sub_824FD1B4);
PPC_FUNC_IMPL(__imp__sub_824FD1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD1B8"))) PPC_WEAK_FUNC(sub_824FD1B8);
PPC_FUNC_IMPL(__imp__sub_824FD1B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd1f0
	if (!cr6.eq) goto loc_824FD1F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd21c
	if (cr6.eq) goto loc_824FD21C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd21c
	goto loc_824FD21C;
loc_824FD1F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd21c
	if (cr6.eq) goto loc_824FD21C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29056
	ctx.r4.s64 = r11.s64 + 29056;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD21C:
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

__attribute__((alias("__imp__sub_824FD230"))) PPC_WEAK_FUNC(sub_824FD230);
PPC_FUNC_IMPL(__imp__sub_824FD230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD234"))) PPC_WEAK_FUNC(sub_824FD234);
PPC_FUNC_IMPL(__imp__sub_824FD234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD238"))) PPC_WEAK_FUNC(sub_824FD238);
PPC_FUNC_IMPL(__imp__sub_824FD238) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd270
	if (!cr6.eq) goto loc_824FD270;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd29c
	if (cr6.eq) goto loc_824FD29C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd29c
	goto loc_824FD29C;
loc_824FD270:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd29c
	if (cr6.eq) goto loc_824FD29C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29184
	ctx.r4.s64 = r11.s64 + 29184;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD29C:
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

__attribute__((alias("__imp__sub_824FD2B0"))) PPC_WEAK_FUNC(sub_824FD2B0);
PPC_FUNC_IMPL(__imp__sub_824FD2B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD2B4"))) PPC_WEAK_FUNC(sub_824FD2B4);
PPC_FUNC_IMPL(__imp__sub_824FD2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD2B8"))) PPC_WEAK_FUNC(sub_824FD2B8);
PPC_FUNC_IMPL(__imp__sub_824FD2B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd2f0
	if (!cr6.eq) goto loc_824FD2F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd31c
	if (cr6.eq) goto loc_824FD31C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd31c
	goto loc_824FD31C;
loc_824FD2F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd31c
	if (cr6.eq) goto loc_824FD31C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29312
	ctx.r4.s64 = r11.s64 + 29312;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD31C:
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

__attribute__((alias("__imp__sub_824FD330"))) PPC_WEAK_FUNC(sub_824FD330);
PPC_FUNC_IMPL(__imp__sub_824FD330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD334"))) PPC_WEAK_FUNC(sub_824FD334);
PPC_FUNC_IMPL(__imp__sub_824FD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD338"))) PPC_WEAK_FUNC(sub_824FD338);
PPC_FUNC_IMPL(__imp__sub_824FD338) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd370
	if (!cr6.eq) goto loc_824FD370;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd39c
	if (cr6.eq) goto loc_824FD39C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd39c
	goto loc_824FD39C;
loc_824FD370:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd39c
	if (cr6.eq) goto loc_824FD39C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29456
	ctx.r4.s64 = r11.s64 + 29456;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD39C:
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

__attribute__((alias("__imp__sub_824FD3B0"))) PPC_WEAK_FUNC(sub_824FD3B0);
PPC_FUNC_IMPL(__imp__sub_824FD3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD3B4"))) PPC_WEAK_FUNC(sub_824FD3B4);
PPC_FUNC_IMPL(__imp__sub_824FD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD3B8"))) PPC_WEAK_FUNC(sub_824FD3B8);
PPC_FUNC_IMPL(__imp__sub_824FD3B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd3f0
	if (!cr6.eq) goto loc_824FD3F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd41c
	if (cr6.eq) goto loc_824FD41C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd41c
	goto loc_824FD41C;
loc_824FD3F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd41c
	if (cr6.eq) goto loc_824FD41C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29600
	ctx.r4.s64 = r11.s64 + 29600;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD41C:
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

__attribute__((alias("__imp__sub_824FD430"))) PPC_WEAK_FUNC(sub_824FD430);
PPC_FUNC_IMPL(__imp__sub_824FD430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD434"))) PPC_WEAK_FUNC(sub_824FD434);
PPC_FUNC_IMPL(__imp__sub_824FD434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD438"))) PPC_WEAK_FUNC(sub_824FD438);
PPC_FUNC_IMPL(__imp__sub_824FD438) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd470
	if (!cr6.eq) goto loc_824FD470;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd49c
	if (cr6.eq) goto loc_824FD49C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd49c
	goto loc_824FD49C;
loc_824FD470:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd49c
	if (cr6.eq) goto loc_824FD49C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29728
	ctx.r4.s64 = r11.s64 + 29728;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD49C:
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

__attribute__((alias("__imp__sub_824FD4B0"))) PPC_WEAK_FUNC(sub_824FD4B0);
PPC_FUNC_IMPL(__imp__sub_824FD4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD4B4"))) PPC_WEAK_FUNC(sub_824FD4B4);
PPC_FUNC_IMPL(__imp__sub_824FD4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD4B8"))) PPC_WEAK_FUNC(sub_824FD4B8);
PPC_FUNC_IMPL(__imp__sub_824FD4B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd4f0
	if (!cr6.eq) goto loc_824FD4F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd51c
	if (cr6.eq) goto loc_824FD51C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd51c
	goto loc_824FD51C;
loc_824FD4F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd51c
	if (cr6.eq) goto loc_824FD51C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29856
	ctx.r4.s64 = r11.s64 + 29856;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD51C:
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

__attribute__((alias("__imp__sub_824FD530"))) PPC_WEAK_FUNC(sub_824FD530);
PPC_FUNC_IMPL(__imp__sub_824FD530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD534"))) PPC_WEAK_FUNC(sub_824FD534);
PPC_FUNC_IMPL(__imp__sub_824FD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD538"))) PPC_WEAK_FUNC(sub_824FD538);
PPC_FUNC_IMPL(__imp__sub_824FD538) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd570
	if (!cr6.eq) goto loc_824FD570;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd59c
	if (cr6.eq) goto loc_824FD59C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd59c
	goto loc_824FD59C;
loc_824FD570:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd59c
	if (cr6.eq) goto loc_824FD59C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,29976
	ctx.r4.s64 = r11.s64 + 29976;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD59C:
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

__attribute__((alias("__imp__sub_824FD5B0"))) PPC_WEAK_FUNC(sub_824FD5B0);
PPC_FUNC_IMPL(__imp__sub_824FD5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD5B4"))) PPC_WEAK_FUNC(sub_824FD5B4);
PPC_FUNC_IMPL(__imp__sub_824FD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD5B8"))) PPC_WEAK_FUNC(sub_824FD5B8);
PPC_FUNC_IMPL(__imp__sub_824FD5B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd5f0
	if (!cr6.eq) goto loc_824FD5F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd61c
	if (cr6.eq) goto loc_824FD61C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd61c
	goto loc_824FD61C;
loc_824FD5F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd61c
	if (cr6.eq) goto loc_824FD61C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30096
	ctx.r4.s64 = r11.s64 + 30096;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD61C:
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

__attribute__((alias("__imp__sub_824FD630"))) PPC_WEAK_FUNC(sub_824FD630);
PPC_FUNC_IMPL(__imp__sub_824FD630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD634"))) PPC_WEAK_FUNC(sub_824FD634);
PPC_FUNC_IMPL(__imp__sub_824FD634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD638"))) PPC_WEAK_FUNC(sub_824FD638);
PPC_FUNC_IMPL(__imp__sub_824FD638) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd670
	if (!cr6.eq) goto loc_824FD670;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd69c
	if (cr6.eq) goto loc_824FD69C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd69c
	goto loc_824FD69C;
loc_824FD670:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd69c
	if (cr6.eq) goto loc_824FD69C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30216
	ctx.r4.s64 = r11.s64 + 30216;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD69C:
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

__attribute__((alias("__imp__sub_824FD6B0"))) PPC_WEAK_FUNC(sub_824FD6B0);
PPC_FUNC_IMPL(__imp__sub_824FD6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD6B4"))) PPC_WEAK_FUNC(sub_824FD6B4);
PPC_FUNC_IMPL(__imp__sub_824FD6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD6B8"))) PPC_WEAK_FUNC(sub_824FD6B8);
PPC_FUNC_IMPL(__imp__sub_824FD6B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd6f0
	if (!cr6.eq) goto loc_824FD6F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd71c
	if (cr6.eq) goto loc_824FD71C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd71c
	goto loc_824FD71C;
loc_824FD6F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd71c
	if (cr6.eq) goto loc_824FD71C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30344
	ctx.r4.s64 = r11.s64 + 30344;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD71C:
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

__attribute__((alias("__imp__sub_824FD730"))) PPC_WEAK_FUNC(sub_824FD730);
PPC_FUNC_IMPL(__imp__sub_824FD730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD734"))) PPC_WEAK_FUNC(sub_824FD734);
PPC_FUNC_IMPL(__imp__sub_824FD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD738"))) PPC_WEAK_FUNC(sub_824FD738);
PPC_FUNC_IMPL(__imp__sub_824FD738) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd770
	if (!cr6.eq) goto loc_824FD770;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd79c
	if (cr6.eq) goto loc_824FD79C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd79c
	goto loc_824FD79C;
loc_824FD770:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd79c
	if (cr6.eq) goto loc_824FD79C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30472
	ctx.r4.s64 = r11.s64 + 30472;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD79C:
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

__attribute__((alias("__imp__sub_824FD7B0"))) PPC_WEAK_FUNC(sub_824FD7B0);
PPC_FUNC_IMPL(__imp__sub_824FD7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD7B4"))) PPC_WEAK_FUNC(sub_824FD7B4);
PPC_FUNC_IMPL(__imp__sub_824FD7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD7B8"))) PPC_WEAK_FUNC(sub_824FD7B8);
PPC_FUNC_IMPL(__imp__sub_824FD7B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd7f0
	if (!cr6.eq) goto loc_824FD7F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd81c
	if (cr6.eq) goto loc_824FD81C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd81c
	goto loc_824FD81C;
loc_824FD7F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd81c
	if (cr6.eq) goto loc_824FD81C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30600
	ctx.r4.s64 = r11.s64 + 30600;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD81C:
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

__attribute__((alias("__imp__sub_824FD830"))) PPC_WEAK_FUNC(sub_824FD830);
PPC_FUNC_IMPL(__imp__sub_824FD830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD834"))) PPC_WEAK_FUNC(sub_824FD834);
PPC_FUNC_IMPL(__imp__sub_824FD834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD838"))) PPC_WEAK_FUNC(sub_824FD838);
PPC_FUNC_IMPL(__imp__sub_824FD838) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd870
	if (!cr6.eq) goto loc_824FD870;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd89c
	if (cr6.eq) goto loc_824FD89C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd89c
	goto loc_824FD89C;
loc_824FD870:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd89c
	if (cr6.eq) goto loc_824FD89C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30720
	ctx.r4.s64 = r11.s64 + 30720;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD89C:
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

__attribute__((alias("__imp__sub_824FD8B0"))) PPC_WEAK_FUNC(sub_824FD8B0);
PPC_FUNC_IMPL(__imp__sub_824FD8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD8B4"))) PPC_WEAK_FUNC(sub_824FD8B4);
PPC_FUNC_IMPL(__imp__sub_824FD8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD8B8"))) PPC_WEAK_FUNC(sub_824FD8B8);
PPC_FUNC_IMPL(__imp__sub_824FD8B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd8f0
	if (!cr6.eq) goto loc_824FD8F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd91c
	if (cr6.eq) goto loc_824FD91C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd91c
	goto loc_824FD91C;
loc_824FD8F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd91c
	if (cr6.eq) goto loc_824FD91C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30848
	ctx.r4.s64 = r11.s64 + 30848;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD91C:
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

__attribute__((alias("__imp__sub_824FD930"))) PPC_WEAK_FUNC(sub_824FD930);
PPC_FUNC_IMPL(__imp__sub_824FD930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD934"))) PPC_WEAK_FUNC(sub_824FD934);
PPC_FUNC_IMPL(__imp__sub_824FD934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD938"))) PPC_WEAK_FUNC(sub_824FD938);
PPC_FUNC_IMPL(__imp__sub_824FD938) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd970
	if (!cr6.eq) goto loc_824FD970;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fd99c
	if (cr6.eq) goto loc_824FD99C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fd99c
	goto loc_824FD99C;
loc_824FD970:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fd99c
	if (cr6.eq) goto loc_824FD99C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,30976
	ctx.r4.s64 = r11.s64 + 30976;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FD99C:
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

__attribute__((alias("__imp__sub_824FD9B0"))) PPC_WEAK_FUNC(sub_824FD9B0);
PPC_FUNC_IMPL(__imp__sub_824FD9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FD9B4"))) PPC_WEAK_FUNC(sub_824FD9B4);
PPC_FUNC_IMPL(__imp__sub_824FD9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD9B8"))) PPC_WEAK_FUNC(sub_824FD9B8);
PPC_FUNC_IMPL(__imp__sub_824FD9B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fd9f0
	if (!cr6.eq) goto loc_824FD9F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fda1c
	if (cr6.eq) goto loc_824FDA1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fda1c
	goto loc_824FDA1C;
loc_824FD9F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fda1c
	if (cr6.eq) goto loc_824FDA1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31104
	ctx.r4.s64 = r11.s64 + 31104;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDA1C:
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

__attribute__((alias("__imp__sub_824FDA30"))) PPC_WEAK_FUNC(sub_824FDA30);
PPC_FUNC_IMPL(__imp__sub_824FDA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDA34"))) PPC_WEAK_FUNC(sub_824FDA34);
PPC_FUNC_IMPL(__imp__sub_824FDA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDA38"))) PPC_WEAK_FUNC(sub_824FDA38);
PPC_FUNC_IMPL(__imp__sub_824FDA38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fda70
	if (!cr6.eq) goto loc_824FDA70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fda9c
	if (cr6.eq) goto loc_824FDA9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fda9c
	goto loc_824FDA9C;
loc_824FDA70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fda9c
	if (cr6.eq) goto loc_824FDA9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31224
	ctx.r4.s64 = r11.s64 + 31224;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDA9C:
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

__attribute__((alias("__imp__sub_824FDAB0"))) PPC_WEAK_FUNC(sub_824FDAB0);
PPC_FUNC_IMPL(__imp__sub_824FDAB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDAB4"))) PPC_WEAK_FUNC(sub_824FDAB4);
PPC_FUNC_IMPL(__imp__sub_824FDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDAB8"))) PPC_WEAK_FUNC(sub_824FDAB8);
PPC_FUNC_IMPL(__imp__sub_824FDAB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdaf0
	if (!cr6.eq) goto loc_824FDAF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdb1c
	if (cr6.eq) goto loc_824FDB1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdb1c
	goto loc_824FDB1C;
loc_824FDAF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdb1c
	if (cr6.eq) goto loc_824FDB1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31352
	ctx.r4.s64 = r11.s64 + 31352;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDB1C:
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

__attribute__((alias("__imp__sub_824FDB30"))) PPC_WEAK_FUNC(sub_824FDB30);
PPC_FUNC_IMPL(__imp__sub_824FDB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDB34"))) PPC_WEAK_FUNC(sub_824FDB34);
PPC_FUNC_IMPL(__imp__sub_824FDB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDB38"))) PPC_WEAK_FUNC(sub_824FDB38);
PPC_FUNC_IMPL(__imp__sub_824FDB38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdb70
	if (!cr6.eq) goto loc_824FDB70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdb9c
	if (cr6.eq) goto loc_824FDB9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdb9c
	goto loc_824FDB9C;
loc_824FDB70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdb9c
	if (cr6.eq) goto loc_824FDB9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31472
	ctx.r4.s64 = r11.s64 + 31472;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDB9C:
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

__attribute__((alias("__imp__sub_824FDBB0"))) PPC_WEAK_FUNC(sub_824FDBB0);
PPC_FUNC_IMPL(__imp__sub_824FDBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDBB4"))) PPC_WEAK_FUNC(sub_824FDBB4);
PPC_FUNC_IMPL(__imp__sub_824FDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDBB8"))) PPC_WEAK_FUNC(sub_824FDBB8);
PPC_FUNC_IMPL(__imp__sub_824FDBB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdbf0
	if (!cr6.eq) goto loc_824FDBF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdc1c
	if (cr6.eq) goto loc_824FDC1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdc1c
	goto loc_824FDC1C;
loc_824FDBF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdc1c
	if (cr6.eq) goto loc_824FDC1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31600
	ctx.r4.s64 = r11.s64 + 31600;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDC1C:
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

__attribute__((alias("__imp__sub_824FDC30"))) PPC_WEAK_FUNC(sub_824FDC30);
PPC_FUNC_IMPL(__imp__sub_824FDC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDC34"))) PPC_WEAK_FUNC(sub_824FDC34);
PPC_FUNC_IMPL(__imp__sub_824FDC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDC38"))) PPC_WEAK_FUNC(sub_824FDC38);
PPC_FUNC_IMPL(__imp__sub_824FDC38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdc70
	if (!cr6.eq) goto loc_824FDC70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdc9c
	if (cr6.eq) goto loc_824FDC9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdc9c
	goto loc_824FDC9C;
loc_824FDC70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdc9c
	if (cr6.eq) goto loc_824FDC9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31720
	ctx.r4.s64 = r11.s64 + 31720;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDC9C:
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

__attribute__((alias("__imp__sub_824FDCB0"))) PPC_WEAK_FUNC(sub_824FDCB0);
PPC_FUNC_IMPL(__imp__sub_824FDCB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDCB4"))) PPC_WEAK_FUNC(sub_824FDCB4);
PPC_FUNC_IMPL(__imp__sub_824FDCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDCB8"))) PPC_WEAK_FUNC(sub_824FDCB8);
PPC_FUNC_IMPL(__imp__sub_824FDCB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdcf0
	if (!cr6.eq) goto loc_824FDCF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdd1c
	if (cr6.eq) goto loc_824FDD1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdd1c
	goto loc_824FDD1C;
loc_824FDCF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdd1c
	if (cr6.eq) goto loc_824FDD1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31840
	ctx.r4.s64 = r11.s64 + 31840;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDD1C:
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

__attribute__((alias("__imp__sub_824FDD30"))) PPC_WEAK_FUNC(sub_824FDD30);
PPC_FUNC_IMPL(__imp__sub_824FDD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDD34"))) PPC_WEAK_FUNC(sub_824FDD34);
PPC_FUNC_IMPL(__imp__sub_824FDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDD38"))) PPC_WEAK_FUNC(sub_824FDD38);
PPC_FUNC_IMPL(__imp__sub_824FDD38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdd70
	if (!cr6.eq) goto loc_824FDD70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdd9c
	if (cr6.eq) goto loc_824FDD9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdd9c
	goto loc_824FDD9C;
loc_824FDD70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdd9c
	if (cr6.eq) goto loc_824FDD9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,31960
	ctx.r4.s64 = r11.s64 + 31960;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDD9C:
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

__attribute__((alias("__imp__sub_824FDDB0"))) PPC_WEAK_FUNC(sub_824FDDB0);
PPC_FUNC_IMPL(__imp__sub_824FDDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDDB4"))) PPC_WEAK_FUNC(sub_824FDDB4);
PPC_FUNC_IMPL(__imp__sub_824FDDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDDB8"))) PPC_WEAK_FUNC(sub_824FDDB8);
PPC_FUNC_IMPL(__imp__sub_824FDDB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fddf0
	if (!cr6.eq) goto loc_824FDDF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fde1c
	if (cr6.eq) goto loc_824FDE1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fde1c
	goto loc_824FDE1C;
loc_824FDDF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fde1c
	if (cr6.eq) goto loc_824FDE1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,32088
	ctx.r4.s64 = r11.s64 + 32088;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDE1C:
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

__attribute__((alias("__imp__sub_824FDE30"))) PPC_WEAK_FUNC(sub_824FDE30);
PPC_FUNC_IMPL(__imp__sub_824FDE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDE34"))) PPC_WEAK_FUNC(sub_824FDE34);
PPC_FUNC_IMPL(__imp__sub_824FDE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDE38"))) PPC_WEAK_FUNC(sub_824FDE38);
PPC_FUNC_IMPL(__imp__sub_824FDE38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fde70
	if (!cr6.eq) goto loc_824FDE70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fde9c
	if (cr6.eq) goto loc_824FDE9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fde9c
	goto loc_824FDE9C;
loc_824FDE70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fde9c
	if (cr6.eq) goto loc_824FDE9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,32216
	ctx.r4.s64 = r11.s64 + 32216;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDE9C:
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

__attribute__((alias("__imp__sub_824FDEB0"))) PPC_WEAK_FUNC(sub_824FDEB0);
PPC_FUNC_IMPL(__imp__sub_824FDEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDEB4"))) PPC_WEAK_FUNC(sub_824FDEB4);
PPC_FUNC_IMPL(__imp__sub_824FDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDEB8"))) PPC_WEAK_FUNC(sub_824FDEB8);
PPC_FUNC_IMPL(__imp__sub_824FDEB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdef0
	if (!cr6.eq) goto loc_824FDEF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdf1c
	if (cr6.eq) goto loc_824FDF1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdf1c
	goto loc_824FDF1C;
loc_824FDEF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdf1c
	if (cr6.eq) goto loc_824FDF1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,32344
	ctx.r4.s64 = r11.s64 + 32344;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDF1C:
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

__attribute__((alias("__imp__sub_824FDF30"))) PPC_WEAK_FUNC(sub_824FDF30);
PPC_FUNC_IMPL(__imp__sub_824FDF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDF34"))) PPC_WEAK_FUNC(sub_824FDF34);
PPC_FUNC_IMPL(__imp__sub_824FDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDF38"))) PPC_WEAK_FUNC(sub_824FDF38);
PPC_FUNC_IMPL(__imp__sub_824FDF38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdf70
	if (!cr6.eq) goto loc_824FDF70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fdf9c
	if (cr6.eq) goto loc_824FDF9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fdf9c
	goto loc_824FDF9C;
loc_824FDF70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fdf9c
	if (cr6.eq) goto loc_824FDF9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,32464
	ctx.r4.s64 = r11.s64 + 32464;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FDF9C:
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

__attribute__((alias("__imp__sub_824FDFB0"))) PPC_WEAK_FUNC(sub_824FDFB0);
PPC_FUNC_IMPL(__imp__sub_824FDFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FDFB4"))) PPC_WEAK_FUNC(sub_824FDFB4);
PPC_FUNC_IMPL(__imp__sub_824FDFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FDFB8"))) PPC_WEAK_FUNC(sub_824FDFB8);
PPC_FUNC_IMPL(__imp__sub_824FDFB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fdff0
	if (!cr6.eq) goto loc_824FDFF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe01c
	if (cr6.eq) goto loc_824FE01C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe01c
	goto loc_824FE01C;
loc_824FDFF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe01c
	if (cr6.eq) goto loc_824FE01C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,32592
	ctx.r4.s64 = r11.s64 + 32592;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE01C:
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

__attribute__((alias("__imp__sub_824FE030"))) PPC_WEAK_FUNC(sub_824FE030);
PPC_FUNC_IMPL(__imp__sub_824FE030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE034"))) PPC_WEAK_FUNC(sub_824FE034);
PPC_FUNC_IMPL(__imp__sub_824FE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE038"))) PPC_WEAK_FUNC(sub_824FE038);
PPC_FUNC_IMPL(__imp__sub_824FE038) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe070
	if (!cr6.eq) goto loc_824FE070;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe09c
	if (cr6.eq) goto loc_824FE09C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe09c
	goto loc_824FE09C;
loc_824FE070:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe09c
	if (cr6.eq) goto loc_824FE09C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,32712
	ctx.r4.s64 = r11.s64 + 32712;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE09C:
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

__attribute__((alias("__imp__sub_824FE0B0"))) PPC_WEAK_FUNC(sub_824FE0B0);
PPC_FUNC_IMPL(__imp__sub_824FE0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE0B4"))) PPC_WEAK_FUNC(sub_824FE0B4);
PPC_FUNC_IMPL(__imp__sub_824FE0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE0B8"))) PPC_WEAK_FUNC(sub_824FE0B8);
PPC_FUNC_IMPL(__imp__sub_824FE0B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe0f0
	if (!cr6.eq) goto loc_824FE0F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe11c
	if (cr6.eq) goto loc_824FE11C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe11c
	goto loc_824FE11C;
loc_824FE0F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe11c
	if (cr6.eq) goto loc_824FE11C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-32704
	ctx.r4.s64 = r11.s64 + -32704;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE11C:
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

__attribute__((alias("__imp__sub_824FE130"))) PPC_WEAK_FUNC(sub_824FE130);
PPC_FUNC_IMPL(__imp__sub_824FE130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE134"))) PPC_WEAK_FUNC(sub_824FE134);
PPC_FUNC_IMPL(__imp__sub_824FE134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE138"))) PPC_WEAK_FUNC(sub_824FE138);
PPC_FUNC_IMPL(__imp__sub_824FE138) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe170
	if (!cr6.eq) goto loc_824FE170;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe19c
	if (cr6.eq) goto loc_824FE19C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe19c
	goto loc_824FE19C;
loc_824FE170:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe19c
	if (cr6.eq) goto loc_824FE19C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-32584
	ctx.r4.s64 = r11.s64 + -32584;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE19C:
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

__attribute__((alias("__imp__sub_824FE1B0"))) PPC_WEAK_FUNC(sub_824FE1B0);
PPC_FUNC_IMPL(__imp__sub_824FE1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE1B4"))) PPC_WEAK_FUNC(sub_824FE1B4);
PPC_FUNC_IMPL(__imp__sub_824FE1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE1B8"))) PPC_WEAK_FUNC(sub_824FE1B8);
PPC_FUNC_IMPL(__imp__sub_824FE1B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe1f0
	if (!cr6.eq) goto loc_824FE1F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe21c
	if (cr6.eq) goto loc_824FE21C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe21c
	goto loc_824FE21C;
loc_824FE1F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe21c
	if (cr6.eq) goto loc_824FE21C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-32464
	ctx.r4.s64 = r11.s64 + -32464;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE21C:
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

__attribute__((alias("__imp__sub_824FE230"))) PPC_WEAK_FUNC(sub_824FE230);
PPC_FUNC_IMPL(__imp__sub_824FE230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE234"))) PPC_WEAK_FUNC(sub_824FE234);
PPC_FUNC_IMPL(__imp__sub_824FE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE238"))) PPC_WEAK_FUNC(sub_824FE238);
PPC_FUNC_IMPL(__imp__sub_824FE238) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe270
	if (!cr6.eq) goto loc_824FE270;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe29c
	if (cr6.eq) goto loc_824FE29C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe29c
	goto loc_824FE29C;
loc_824FE270:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe29c
	if (cr6.eq) goto loc_824FE29C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-32344
	ctx.r4.s64 = r11.s64 + -32344;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE29C:
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

__attribute__((alias("__imp__sub_824FE2B0"))) PPC_WEAK_FUNC(sub_824FE2B0);
PPC_FUNC_IMPL(__imp__sub_824FE2B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE2B4"))) PPC_WEAK_FUNC(sub_824FE2B4);
PPC_FUNC_IMPL(__imp__sub_824FE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE2B8"))) PPC_WEAK_FUNC(sub_824FE2B8);
PPC_FUNC_IMPL(__imp__sub_824FE2B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe2f0
	if (!cr6.eq) goto loc_824FE2F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe31c
	if (cr6.eq) goto loc_824FE31C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe31c
	goto loc_824FE31C;
loc_824FE2F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe31c
	if (cr6.eq) goto loc_824FE31C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-32224
	ctx.r4.s64 = r11.s64 + -32224;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE31C:
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

__attribute__((alias("__imp__sub_824FE330"))) PPC_WEAK_FUNC(sub_824FE330);
PPC_FUNC_IMPL(__imp__sub_824FE330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE334"))) PPC_WEAK_FUNC(sub_824FE334);
PPC_FUNC_IMPL(__imp__sub_824FE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE338"))) PPC_WEAK_FUNC(sub_824FE338);
PPC_FUNC_IMPL(__imp__sub_824FE338) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe370
	if (!cr6.eq) goto loc_824FE370;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe39c
	if (cr6.eq) goto loc_824FE39C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe39c
	goto loc_824FE39C;
loc_824FE370:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe39c
	if (cr6.eq) goto loc_824FE39C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-32104
	ctx.r4.s64 = r11.s64 + -32104;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE39C:
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

__attribute__((alias("__imp__sub_824FE3B0"))) PPC_WEAK_FUNC(sub_824FE3B0);
PPC_FUNC_IMPL(__imp__sub_824FE3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE3B4"))) PPC_WEAK_FUNC(sub_824FE3B4);
PPC_FUNC_IMPL(__imp__sub_824FE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE3B8"))) PPC_WEAK_FUNC(sub_824FE3B8);
PPC_FUNC_IMPL(__imp__sub_824FE3B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe3f0
	if (!cr6.eq) goto loc_824FE3F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe41c
	if (cr6.eq) goto loc_824FE41C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe41c
	goto loc_824FE41C;
loc_824FE3F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe41c
	if (cr6.eq) goto loc_824FE41C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31984
	ctx.r4.s64 = r11.s64 + -31984;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE41C:
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

__attribute__((alias("__imp__sub_824FE430"))) PPC_WEAK_FUNC(sub_824FE430);
PPC_FUNC_IMPL(__imp__sub_824FE430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE434"))) PPC_WEAK_FUNC(sub_824FE434);
PPC_FUNC_IMPL(__imp__sub_824FE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE438"))) PPC_WEAK_FUNC(sub_824FE438);
PPC_FUNC_IMPL(__imp__sub_824FE438) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe470
	if (!cr6.eq) goto loc_824FE470;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe49c
	if (cr6.eq) goto loc_824FE49C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe49c
	goto loc_824FE49C;
loc_824FE470:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe49c
	if (cr6.eq) goto loc_824FE49C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31856
	ctx.r4.s64 = r11.s64 + -31856;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE49C:
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

__attribute__((alias("__imp__sub_824FE4B0"))) PPC_WEAK_FUNC(sub_824FE4B0);
PPC_FUNC_IMPL(__imp__sub_824FE4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE4B4"))) PPC_WEAK_FUNC(sub_824FE4B4);
PPC_FUNC_IMPL(__imp__sub_824FE4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE4B8"))) PPC_WEAK_FUNC(sub_824FE4B8);
PPC_FUNC_IMPL(__imp__sub_824FE4B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe4f0
	if (!cr6.eq) goto loc_824FE4F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe51c
	if (cr6.eq) goto loc_824FE51C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe51c
	goto loc_824FE51C;
loc_824FE4F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe51c
	if (cr6.eq) goto loc_824FE51C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31728
	ctx.r4.s64 = r11.s64 + -31728;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE51C:
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

__attribute__((alias("__imp__sub_824FE530"))) PPC_WEAK_FUNC(sub_824FE530);
PPC_FUNC_IMPL(__imp__sub_824FE530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE534"))) PPC_WEAK_FUNC(sub_824FE534);
PPC_FUNC_IMPL(__imp__sub_824FE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE538"))) PPC_WEAK_FUNC(sub_824FE538);
PPC_FUNC_IMPL(__imp__sub_824FE538) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe570
	if (!cr6.eq) goto loc_824FE570;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe59c
	if (cr6.eq) goto loc_824FE59C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe59c
	goto loc_824FE59C;
loc_824FE570:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe59c
	if (cr6.eq) goto loc_824FE59C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31608
	ctx.r4.s64 = r11.s64 + -31608;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE59C:
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

__attribute__((alias("__imp__sub_824FE5B0"))) PPC_WEAK_FUNC(sub_824FE5B0);
PPC_FUNC_IMPL(__imp__sub_824FE5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE5B4"))) PPC_WEAK_FUNC(sub_824FE5B4);
PPC_FUNC_IMPL(__imp__sub_824FE5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE5B8"))) PPC_WEAK_FUNC(sub_824FE5B8);
PPC_FUNC_IMPL(__imp__sub_824FE5B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe5f0
	if (!cr6.eq) goto loc_824FE5F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe61c
	if (cr6.eq) goto loc_824FE61C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe61c
	goto loc_824FE61C;
loc_824FE5F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe61c
	if (cr6.eq) goto loc_824FE61C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31488
	ctx.r4.s64 = r11.s64 + -31488;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE61C:
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

__attribute__((alias("__imp__sub_824FE630"))) PPC_WEAK_FUNC(sub_824FE630);
PPC_FUNC_IMPL(__imp__sub_824FE630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE634"))) PPC_WEAK_FUNC(sub_824FE634);
PPC_FUNC_IMPL(__imp__sub_824FE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE638"))) PPC_WEAK_FUNC(sub_824FE638);
PPC_FUNC_IMPL(__imp__sub_824FE638) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe670
	if (!cr6.eq) goto loc_824FE670;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe69c
	if (cr6.eq) goto loc_824FE69C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe69c
	goto loc_824FE69C;
loc_824FE670:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe69c
	if (cr6.eq) goto loc_824FE69C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31368
	ctx.r4.s64 = r11.s64 + -31368;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE69C:
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

__attribute__((alias("__imp__sub_824FE6B0"))) PPC_WEAK_FUNC(sub_824FE6B0);
PPC_FUNC_IMPL(__imp__sub_824FE6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE6B4"))) PPC_WEAK_FUNC(sub_824FE6B4);
PPC_FUNC_IMPL(__imp__sub_824FE6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE6B8"))) PPC_WEAK_FUNC(sub_824FE6B8);
PPC_FUNC_IMPL(__imp__sub_824FE6B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe6f0
	if (!cr6.eq) goto loc_824FE6F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe71c
	if (cr6.eq) goto loc_824FE71C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe71c
	goto loc_824FE71C;
loc_824FE6F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe71c
	if (cr6.eq) goto loc_824FE71C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31240
	ctx.r4.s64 = r11.s64 + -31240;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE71C:
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

__attribute__((alias("__imp__sub_824FE730"))) PPC_WEAK_FUNC(sub_824FE730);
PPC_FUNC_IMPL(__imp__sub_824FE730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE734"))) PPC_WEAK_FUNC(sub_824FE734);
PPC_FUNC_IMPL(__imp__sub_824FE734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE738"))) PPC_WEAK_FUNC(sub_824FE738);
PPC_FUNC_IMPL(__imp__sub_824FE738) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe770
	if (!cr6.eq) goto loc_824FE770;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe79c
	if (cr6.eq) goto loc_824FE79C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe79c
	goto loc_824FE79C;
loc_824FE770:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe79c
	if (cr6.eq) goto loc_824FE79C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-31120
	ctx.r4.s64 = r11.s64 + -31120;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE79C:
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

__attribute__((alias("__imp__sub_824FE7B0"))) PPC_WEAK_FUNC(sub_824FE7B0);
PPC_FUNC_IMPL(__imp__sub_824FE7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE7B4"))) PPC_WEAK_FUNC(sub_824FE7B4);
PPC_FUNC_IMPL(__imp__sub_824FE7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE7B8"))) PPC_WEAK_FUNC(sub_824FE7B8);
PPC_FUNC_IMPL(__imp__sub_824FE7B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe7f0
	if (!cr6.eq) goto loc_824FE7F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe81c
	if (cr6.eq) goto loc_824FE81C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe81c
	goto loc_824FE81C;
loc_824FE7F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe81c
	if (cr6.eq) goto loc_824FE81C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30992
	ctx.r4.s64 = r11.s64 + -30992;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE81C:
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

__attribute__((alias("__imp__sub_824FE830"))) PPC_WEAK_FUNC(sub_824FE830);
PPC_FUNC_IMPL(__imp__sub_824FE830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE834"))) PPC_WEAK_FUNC(sub_824FE834);
PPC_FUNC_IMPL(__imp__sub_824FE834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE838"))) PPC_WEAK_FUNC(sub_824FE838);
PPC_FUNC_IMPL(__imp__sub_824FE838) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe870
	if (!cr6.eq) goto loc_824FE870;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe89c
	if (cr6.eq) goto loc_824FE89C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe89c
	goto loc_824FE89C;
loc_824FE870:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe89c
	if (cr6.eq) goto loc_824FE89C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30872
	ctx.r4.s64 = r11.s64 + -30872;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE89C:
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

__attribute__((alias("__imp__sub_824FE8B0"))) PPC_WEAK_FUNC(sub_824FE8B0);
PPC_FUNC_IMPL(__imp__sub_824FE8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE8B4"))) PPC_WEAK_FUNC(sub_824FE8B4);
PPC_FUNC_IMPL(__imp__sub_824FE8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE8B8"))) PPC_WEAK_FUNC(sub_824FE8B8);
PPC_FUNC_IMPL(__imp__sub_824FE8B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe8f0
	if (!cr6.eq) goto loc_824FE8F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe91c
	if (cr6.eq) goto loc_824FE91C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe91c
	goto loc_824FE91C;
loc_824FE8F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe91c
	if (cr6.eq) goto loc_824FE91C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30752
	ctx.r4.s64 = r11.s64 + -30752;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE91C:
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

__attribute__((alias("__imp__sub_824FE930"))) PPC_WEAK_FUNC(sub_824FE930);
PPC_FUNC_IMPL(__imp__sub_824FE930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE934"))) PPC_WEAK_FUNC(sub_824FE934);
PPC_FUNC_IMPL(__imp__sub_824FE934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE938"))) PPC_WEAK_FUNC(sub_824FE938);
PPC_FUNC_IMPL(__imp__sub_824FE938) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe970
	if (!cr6.eq) goto loc_824FE970;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fe99c
	if (cr6.eq) goto loc_824FE99C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fe99c
	goto loc_824FE99C;
loc_824FE970:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fe99c
	if (cr6.eq) goto loc_824FE99C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30632
	ctx.r4.s64 = r11.s64 + -30632;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FE99C:
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

__attribute__((alias("__imp__sub_824FE9B0"))) PPC_WEAK_FUNC(sub_824FE9B0);
PPC_FUNC_IMPL(__imp__sub_824FE9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FE9B4"))) PPC_WEAK_FUNC(sub_824FE9B4);
PPC_FUNC_IMPL(__imp__sub_824FE9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FE9B8"))) PPC_WEAK_FUNC(sub_824FE9B8);
PPC_FUNC_IMPL(__imp__sub_824FE9B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fe9f0
	if (!cr6.eq) goto loc_824FE9F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fea1c
	if (cr6.eq) goto loc_824FEA1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fea1c
	goto loc_824FEA1C;
loc_824FE9F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fea1c
	if (cr6.eq) goto loc_824FEA1C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30512
	ctx.r4.s64 = r11.s64 + -30512;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FEA1C:
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

__attribute__((alias("__imp__sub_824FEA30"))) PPC_WEAK_FUNC(sub_824FEA30);
PPC_FUNC_IMPL(__imp__sub_824FEA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FEA34"))) PPC_WEAK_FUNC(sub_824FEA34);
PPC_FUNC_IMPL(__imp__sub_824FEA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FEA38"))) PPC_WEAK_FUNC(sub_824FEA38);
PPC_FUNC_IMPL(__imp__sub_824FEA38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fea70
	if (!cr6.eq) goto loc_824FEA70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fea9c
	if (cr6.eq) goto loc_824FEA9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fea9c
	goto loc_824FEA9C;
loc_824FEA70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fea9c
	if (cr6.eq) goto loc_824FEA9C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30392
	ctx.r4.s64 = r11.s64 + -30392;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FEA9C:
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

__attribute__((alias("__imp__sub_824FEAB0"))) PPC_WEAK_FUNC(sub_824FEAB0);
PPC_FUNC_IMPL(__imp__sub_824FEAB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FEAB4"))) PPC_WEAK_FUNC(sub_824FEAB4);
PPC_FUNC_IMPL(__imp__sub_824FEAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FEAB8"))) PPC_WEAK_FUNC(sub_824FEAB8);
PPC_FUNC_IMPL(__imp__sub_824FEAB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824feaf0
	if (!cr6.eq) goto loc_824FEAF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824feb1c
	if (cr6.eq) goto loc_824FEB1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824feb1c
	goto loc_824FEB1C;
loc_824FEAF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824feb1c
	if (cr6.eq) goto loc_824FEB1C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30272
	ctx.r4.s64 = r11.s64 + -30272;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FEB1C:
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

__attribute__((alias("__imp__sub_824FEB30"))) PPC_WEAK_FUNC(sub_824FEB30);
PPC_FUNC_IMPL(__imp__sub_824FEB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FEB34"))) PPC_WEAK_FUNC(sub_824FEB34);
PPC_FUNC_IMPL(__imp__sub_824FEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FEB38"))) PPC_WEAK_FUNC(sub_824FEB38);
PPC_FUNC_IMPL(__imp__sub_824FEB38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824feb70
	if (!cr6.eq) goto loc_824FEB70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824feb9c
	if (cr6.eq) goto loc_824FEB9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824feb9c
	goto loc_824FEB9C;
loc_824FEB70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824feb9c
	if (cr6.eq) goto loc_824FEB9C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30152
	ctx.r4.s64 = r11.s64 + -30152;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FEB9C:
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

__attribute__((alias("__imp__sub_824FEBB0"))) PPC_WEAK_FUNC(sub_824FEBB0);
PPC_FUNC_IMPL(__imp__sub_824FEBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FEBB4"))) PPC_WEAK_FUNC(sub_824FEBB4);
PPC_FUNC_IMPL(__imp__sub_824FEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FEBB8"))) PPC_WEAK_FUNC(sub_824FEBB8);
PPC_FUNC_IMPL(__imp__sub_824FEBB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824febf0
	if (!cr6.eq) goto loc_824FEBF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fec1c
	if (cr6.eq) goto loc_824FEC1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fec1c
	goto loc_824FEC1C;
loc_824FEBF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fec1c
	if (cr6.eq) goto loc_824FEC1C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-30032
	ctx.r4.s64 = r11.s64 + -30032;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FEC1C:
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

__attribute__((alias("__imp__sub_824FEC30"))) PPC_WEAK_FUNC(sub_824FEC30);
PPC_FUNC_IMPL(__imp__sub_824FEC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FEC34"))) PPC_WEAK_FUNC(sub_824FEC34);
PPC_FUNC_IMPL(__imp__sub_824FEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FEC38"))) PPC_WEAK_FUNC(sub_824FEC38);
PPC_FUNC_IMPL(__imp__sub_824FEC38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x824fec70
	if (!cr6.eq) goto loc_824FEC70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fec9c
	if (cr6.eq) goto loc_824FEC9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fec9c
	goto loc_824FEC9C;
loc_824FEC70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fec9c
	if (cr6.eq) goto loc_824FEC9C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-29912
	ctx.r4.s64 = r11.s64 + -29912;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_824FEC9C:
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

__attribute__((alias("__imp__sub_824FECB0"))) PPC_WEAK_FUNC(sub_824FECB0);
PPC_FUNC_IMPL(__imp__sub_824FECB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FECB4"))) PPC_WEAK_FUNC(sub_824FECB4);
PPC_FUNC_IMPL(__imp__sub_824FECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FECB8"))) PPC_WEAK_FUNC(sub_824FECB8);
PPC_FUNC_IMPL(__imp__sub_824FECB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82577e10
	sub_82577E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FECBC"))) PPC_WEAK_FUNC(sub_824FECBC);
PPC_FUNC_IMPL(__imp__sub_824FECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FECC0"))) PPC_WEAK_FUNC(sub_824FECC0);
PPC_FUNC_IMPL(__imp__sub_824FECC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82571e30
	sub_82571E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FECC4"))) PPC_WEAK_FUNC(sub_824FECC4);
PPC_FUNC_IMPL(__imp__sub_824FECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FECC8"))) PPC_WEAK_FUNC(sub_824FECC8);
PPC_FUNC_IMPL(__imp__sub_824FECC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256f970
	sub_8256F970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FECC8"))) PPC_WEAK_FUNC(sub_824FECC8);
PPC_FUNC_IMPL(__imp__sub_824FECC8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824FECCC"))) PPC_WEAK_FUNC(sub_824FECCC);
PPC_FUNC_IMPL(__imp__sub_824FECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FECD0"))) PPC_WEAK_FUNC(sub_824FECD0);
PPC_FUNC_IMPL(__imp__sub_824FECD0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fecf8
	if (cr6.eq) goto loc_824FECF8;
	// bl 0x82577e10
	sub_82577E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824FECF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824FED08"))) PPC_WEAK_FUNC(sub_824FED08);
PPC_FUNC_IMPL(__imp__sub_824FED08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FED0C"))) PPC_WEAK_FUNC(sub_824FED0C);
PPC_FUNC_IMPL(__imp__sub_824FED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FED10"))) PPC_WEAK_FUNC(sub_824FED10);
PPC_FUNC_IMPL(__imp__sub_824FED10) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fed38
	if (cr6.eq) goto loc_824FED38;
	// bl 0x82571e30
	sub_82571E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824FED38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824FED48"))) PPC_WEAK_FUNC(sub_824FED48);
PPC_FUNC_IMPL(__imp__sub_824FED48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FED4C"))) PPC_WEAK_FUNC(sub_824FED4C);
PPC_FUNC_IMPL(__imp__sub_824FED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FED50"))) PPC_WEAK_FUNC(sub_824FED50);
PPC_FUNC_IMPL(__imp__sub_824FED50) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fed78
	if (cr6.eq) goto loc_824FED78;
	// bl 0x8256f970
	sub_8256F970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824FED78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824FED88"))) PPC_WEAK_FUNC(sub_824FED88);
PPC_FUNC_IMPL(__imp__sub_824FED88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FED8C"))) PPC_WEAK_FUNC(sub_824FED8C);
PPC_FUNC_IMPL(__imp__sub_824FED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FED90"))) PPC_WEAK_FUNC(sub_824FED90);
PPC_FUNC_IMPL(__imp__sub_824FED90) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824fee24
	if (!cr6.eq) goto loc_824FEE24;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r31,r11,-29788
	r31.s64 = r11.s64 + -29788;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a2768
	sub_826A2768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824fede8
	if (!cr6.eq) goto loc_824FEDE8;
loc_824FEDE0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824feec8
	goto loc_824FEEC8;
loc_824FEDE8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824fee08
	if (cr6.eq) goto loc_824FEE08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824feec8
	goto loc_824FEEC8;
loc_824FEE08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824feec8
	goto loc_824FEEC8;
loc_824FEE24:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fede0
	if (cr6.eq) goto loc_824FEDE0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r11,-29788
	r30.s64 = r11.s64 + -29788;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824fee70
	if (cr6.eq) goto loc_824FEE70;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824feec8
	goto loc_824FEEC8;
loc_824FEE70:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fee9c
	if (cr6.eq) goto loc_824FEE9C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// b 0x824feec8
	goto loc_824FEEC8;
loc_824FEE9C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824fede0
	if (cr6.eq) goto loc_824FEDE0;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_824FEEC8:
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

__attribute__((alias("__imp__sub_824FEEDC"))) PPC_WEAK_FUNC(sub_824FEEDC);
PPC_FUNC_IMPL(__imp__sub_824FEEDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FEEE0"))) PPC_WEAK_FUNC(sub_824FEEE0);
PPC_FUNC_IMPL(__imp__sub_824FEEE0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824fef74
	if (!cr6.eq) goto loc_824FEF74;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r31,r11,-29692
	r31.s64 = r11.s64 + -29692;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a2768
	sub_826A2768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824fef38
	if (!cr6.eq) goto loc_824FEF38;
loc_824FEF30:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824ff018
	goto loc_824FF018;
loc_824FEF38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824fef58
	if (cr6.eq) goto loc_824FEF58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ff018
	goto loc_824FF018;
loc_824FEF58:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff018
	goto loc_824FF018;
loc_824FEF74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fef30
	if (cr6.eq) goto loc_824FEF30;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r11,-29692
	r30.s64 = r11.s64 + -29692;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824fefc0
	if (cr6.eq) goto loc_824FEFC0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff018
	goto loc_824FF018;
loc_824FEFC0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fefec
	if (cr6.eq) goto loc_824FEFEC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// b 0x824ff018
	goto loc_824FF018;
loc_824FEFEC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824fef30
	if (cr6.eq) goto loc_824FEF30;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_824FF018:
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

__attribute__((alias("__imp__sub_824FF02C"))) PPC_WEAK_FUNC(sub_824FF02C);
PPC_FUNC_IMPL(__imp__sub_824FF02C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF030"))) PPC_WEAK_FUNC(sub_824FF030);
PPC_FUNC_IMPL(__imp__sub_824FF030) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x824ff108
	if (cr6.eq) goto loc_824FF108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ff07c
	if (!cr6.eq) goto loc_824FF07C;
loc_824FF074:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824ff108
	goto loc_824FF108;
loc_824FF07C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824ff074
	if (!cr6.eq) goto loc_824FF074;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-29788
	r30.s64 = r11.s64 + -29788;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824ff0c4
	if (cr6.eq) goto loc_824FF0C4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff108
	goto loc_824FF108;
loc_824FF0C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824ff0f4
	if (cr6.eq) goto loc_824FF0F4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff108
	goto loc_824FF108;
loc_824FF0F4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
loc_824FF108:
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

__attribute__((alias("__imp__sub_824FF11C"))) PPC_WEAK_FUNC(sub_824FF11C);
PPC_FUNC_IMPL(__imp__sub_824FF11C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF120"))) PPC_WEAK_FUNC(sub_824FF120);
PPC_FUNC_IMPL(__imp__sub_824FF120) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x824ff1f8
	if (cr6.eq) goto loc_824FF1F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ff16c
	if (!cr6.eq) goto loc_824FF16C;
loc_824FF164:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824ff1f8
	goto loc_824FF1F8;
loc_824FF16C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824ff164
	if (!cr6.eq) goto loc_824FF164;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-29740
	r30.s64 = r11.s64 + -29740;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824ff1b4
	if (cr6.eq) goto loc_824FF1B4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff1f8
	goto loc_824FF1F8;
loc_824FF1B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824ff1e4
	if (cr6.eq) goto loc_824FF1E4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff1f8
	goto loc_824FF1F8;
loc_824FF1E4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
loc_824FF1F8:
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

__attribute__((alias("__imp__sub_824FF20C"))) PPC_WEAK_FUNC(sub_824FF20C);
PPC_FUNC_IMPL(__imp__sub_824FF20C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF210"))) PPC_WEAK_FUNC(sub_824FF210);
PPC_FUNC_IMPL(__imp__sub_824FF210) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x824ff2e8
	if (cr6.eq) goto loc_824FF2E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ff25c
	if (!cr6.eq) goto loc_824FF25C;
loc_824FF254:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824ff2e8
	goto loc_824FF2E8;
loc_824FF25C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824ff254
	if (!cr6.eq) goto loc_824FF254;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-29692
	r30.s64 = r11.s64 + -29692;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824ff2a4
	if (cr6.eq) goto loc_824FF2A4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff2e8
	goto loc_824FF2E8;
loc_824FF2A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824ff2d4
	if (cr6.eq) goto loc_824FF2D4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x824ff2e8
	goto loc_824FF2E8;
loc_824FF2D4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
loc_824FF2E8:
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

__attribute__((alias("__imp__sub_824FF2FC"))) PPC_WEAK_FUNC(sub_824FF2FC);
PPC_FUNC_IMPL(__imp__sub_824FF2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF300"))) PPC_WEAK_FUNC(sub_824FF300);
PPC_FUNC_IMPL(__imp__sub_824FF300) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff338
	if (cr6.eq) goto loc_824FF338;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fccb8
	sub_824FCCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF338:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,27816
	ctx.r10.s64 = r11.s64 + 27816;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF350"))) PPC_WEAK_FUNC(sub_824FF350);
PPC_FUNC_IMPL(__imp__sub_824FF350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF354"))) PPC_WEAK_FUNC(sub_824FF354);
PPC_FUNC_IMPL(__imp__sub_824FF354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF358"))) PPC_WEAK_FUNC(sub_824FF358);
PPC_FUNC_IMPL(__imp__sub_824FF358) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff390
	if (cr6.eq) goto loc_824FF390;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fcd38
	sub_824FCD38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF390:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,27936
	ctx.r10.s64 = r11.s64 + 27936;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF3A8"))) PPC_WEAK_FUNC(sub_824FF3A8);
PPC_FUNC_IMPL(__imp__sub_824FF3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF3AC"))) PPC_WEAK_FUNC(sub_824FF3AC);
PPC_FUNC_IMPL(__imp__sub_824FF3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF3B0"))) PPC_WEAK_FUNC(sub_824FF3B0);
PPC_FUNC_IMPL(__imp__sub_824FF3B0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff3e8
	if (cr6.eq) goto loc_824FF3E8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fcdb8
	sub_824FCDB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF3E8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28056
	ctx.r10.s64 = r11.s64 + 28056;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF400"))) PPC_WEAK_FUNC(sub_824FF400);
PPC_FUNC_IMPL(__imp__sub_824FF400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF404"))) PPC_WEAK_FUNC(sub_824FF404);
PPC_FUNC_IMPL(__imp__sub_824FF404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF408"))) PPC_WEAK_FUNC(sub_824FF408);
PPC_FUNC_IMPL(__imp__sub_824FF408) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff440
	if (cr6.eq) goto loc_824FF440;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fce38
	sub_824FCE38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF440:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28176
	ctx.r10.s64 = r11.s64 + 28176;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF458"))) PPC_WEAK_FUNC(sub_824FF458);
PPC_FUNC_IMPL(__imp__sub_824FF458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF45C"))) PPC_WEAK_FUNC(sub_824FF45C);
PPC_FUNC_IMPL(__imp__sub_824FF45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF460"))) PPC_WEAK_FUNC(sub_824FF460);
PPC_FUNC_IMPL(__imp__sub_824FF460) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff498
	if (cr6.eq) goto loc_824FF498;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fceb8
	sub_824FCEB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF498:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28304
	ctx.r10.s64 = r11.s64 + 28304;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF4B0"))) PPC_WEAK_FUNC(sub_824FF4B0);
PPC_FUNC_IMPL(__imp__sub_824FF4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF4B4"))) PPC_WEAK_FUNC(sub_824FF4B4);
PPC_FUNC_IMPL(__imp__sub_824FF4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF4B8"))) PPC_WEAK_FUNC(sub_824FF4B8);
PPC_FUNC_IMPL(__imp__sub_824FF4B8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff4f0
	if (cr6.eq) goto loc_824FF4F0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fcf38
	sub_824FCF38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF4F0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28424
	ctx.r10.s64 = r11.s64 + 28424;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF508"))) PPC_WEAK_FUNC(sub_824FF508);
PPC_FUNC_IMPL(__imp__sub_824FF508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF50C"))) PPC_WEAK_FUNC(sub_824FF50C);
PPC_FUNC_IMPL(__imp__sub_824FF50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF510"))) PPC_WEAK_FUNC(sub_824FF510);
PPC_FUNC_IMPL(__imp__sub_824FF510) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff548
	if (cr6.eq) goto loc_824FF548;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fcfb8
	sub_824FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF548:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28544
	ctx.r10.s64 = r11.s64 + 28544;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF560"))) PPC_WEAK_FUNC(sub_824FF560);
PPC_FUNC_IMPL(__imp__sub_824FF560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF564"))) PPC_WEAK_FUNC(sub_824FF564);
PPC_FUNC_IMPL(__imp__sub_824FF564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF568"))) PPC_WEAK_FUNC(sub_824FF568);
PPC_FUNC_IMPL(__imp__sub_824FF568) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff5a0
	if (cr6.eq) goto loc_824FF5A0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd038
	sub_824FD038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF5A0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28672
	ctx.r10.s64 = r11.s64 + 28672;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF5B8"))) PPC_WEAK_FUNC(sub_824FF5B8);
PPC_FUNC_IMPL(__imp__sub_824FF5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF5BC"))) PPC_WEAK_FUNC(sub_824FF5BC);
PPC_FUNC_IMPL(__imp__sub_824FF5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF5C0"))) PPC_WEAK_FUNC(sub_824FF5C0);
PPC_FUNC_IMPL(__imp__sub_824FF5C0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff5f8
	if (cr6.eq) goto loc_824FF5F8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd0b8
	sub_824FD0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF5F8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28800
	ctx.r10.s64 = r11.s64 + 28800;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF610"))) PPC_WEAK_FUNC(sub_824FF610);
PPC_FUNC_IMPL(__imp__sub_824FF610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF614"))) PPC_WEAK_FUNC(sub_824FF614);
PPC_FUNC_IMPL(__imp__sub_824FF614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF618"))) PPC_WEAK_FUNC(sub_824FF618);
PPC_FUNC_IMPL(__imp__sub_824FF618) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff650
	if (cr6.eq) goto loc_824FF650;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd138
	sub_824FD138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF650:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,28928
	ctx.r10.s64 = r11.s64 + 28928;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF668"))) PPC_WEAK_FUNC(sub_824FF668);
PPC_FUNC_IMPL(__imp__sub_824FF668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF66C"))) PPC_WEAK_FUNC(sub_824FF66C);
PPC_FUNC_IMPL(__imp__sub_824FF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF670"))) PPC_WEAK_FUNC(sub_824FF670);
PPC_FUNC_IMPL(__imp__sub_824FF670) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff6a8
	if (cr6.eq) goto loc_824FF6A8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd1b8
	sub_824FD1B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF6A8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29056
	ctx.r10.s64 = r11.s64 + 29056;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF6C0"))) PPC_WEAK_FUNC(sub_824FF6C0);
PPC_FUNC_IMPL(__imp__sub_824FF6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF6C4"))) PPC_WEAK_FUNC(sub_824FF6C4);
PPC_FUNC_IMPL(__imp__sub_824FF6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF6C8"))) PPC_WEAK_FUNC(sub_824FF6C8);
PPC_FUNC_IMPL(__imp__sub_824FF6C8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff700
	if (cr6.eq) goto loc_824FF700;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd238
	sub_824FD238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF700:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29184
	ctx.r10.s64 = r11.s64 + 29184;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF718"))) PPC_WEAK_FUNC(sub_824FF718);
PPC_FUNC_IMPL(__imp__sub_824FF718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF71C"))) PPC_WEAK_FUNC(sub_824FF71C);
PPC_FUNC_IMPL(__imp__sub_824FF71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF720"))) PPC_WEAK_FUNC(sub_824FF720);
PPC_FUNC_IMPL(__imp__sub_824FF720) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff758
	if (cr6.eq) goto loc_824FF758;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd2b8
	sub_824FD2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF758:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29312
	ctx.r10.s64 = r11.s64 + 29312;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF770"))) PPC_WEAK_FUNC(sub_824FF770);
PPC_FUNC_IMPL(__imp__sub_824FF770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF774"))) PPC_WEAK_FUNC(sub_824FF774);
PPC_FUNC_IMPL(__imp__sub_824FF774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF778"))) PPC_WEAK_FUNC(sub_824FF778);
PPC_FUNC_IMPL(__imp__sub_824FF778) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff7b0
	if (cr6.eq) goto loc_824FF7B0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd338
	sub_824FD338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF7B0:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29456
	ctx.r10.s64 = r11.s64 + 29456;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF7C8"))) PPC_WEAK_FUNC(sub_824FF7C8);
PPC_FUNC_IMPL(__imp__sub_824FF7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF7CC"))) PPC_WEAK_FUNC(sub_824FF7CC);
PPC_FUNC_IMPL(__imp__sub_824FF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF7D0"))) PPC_WEAK_FUNC(sub_824FF7D0);
PPC_FUNC_IMPL(__imp__sub_824FF7D0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff808
	if (cr6.eq) goto loc_824FF808;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd3b8
	sub_824FD3B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF808:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29600
	ctx.r10.s64 = r11.s64 + 29600;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF820"))) PPC_WEAK_FUNC(sub_824FF820);
PPC_FUNC_IMPL(__imp__sub_824FF820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF824"))) PPC_WEAK_FUNC(sub_824FF824);
PPC_FUNC_IMPL(__imp__sub_824FF824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF828"))) PPC_WEAK_FUNC(sub_824FF828);
PPC_FUNC_IMPL(__imp__sub_824FF828) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff860
	if (cr6.eq) goto loc_824FF860;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd438
	sub_824FD438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF860:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29728
	ctx.r10.s64 = r11.s64 + 29728;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824FF878"))) PPC_WEAK_FUNC(sub_824FF878);
PPC_FUNC_IMPL(__imp__sub_824FF878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FF87C"))) PPC_WEAK_FUNC(sub_824FF87C);
PPC_FUNC_IMPL(__imp__sub_824FF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FF880"))) PPC_WEAK_FUNC(sub_824FF880);
PPC_FUNC_IMPL(__imp__sub_824FF880) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x824ff8b8
	if (cr6.eq) goto loc_824FF8B8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824fd4b8
	sub_824FD4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_824FF8B8:
	// lis r11,-31966
	r11.s64 = -2094923776;
	// addi r10,r11,29856
	ctx.r10.s64 = r11.s64 + 29856;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

