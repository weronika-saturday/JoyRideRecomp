#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824303FC"))) PPC_WEAK_FUNC(sub_824303FC);
PPC_FUNC_IMPL(__imp__sub_824303FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430400"))) PPC_WEAK_FUNC(sub_82430400);
PPC_FUNC_IMPL(__imp__sub_82430400) {
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
	// bl 0x8242c908
	sub_8242C908(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82430438
	if (cr6.eq) goto loc_82430438;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82430438:
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

__attribute__((alias("__imp__sub_8243044C"))) PPC_WEAK_FUNC(sub_8243044C);
PPC_FUNC_IMPL(__imp__sub_8243044C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430450"))) PPC_WEAK_FUNC(sub_82430450);
PPC_FUNC_IMPL(__imp__sub_82430450) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,26252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26252);
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
	// bne cr6,0x824304b0
	if (!cr6.eq) goto loc_824304B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824304b0
	if (!cr6.eq) goto loc_824304B0;
	// lwz r11,26252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 26252);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824304B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824304B4"))) PPC_WEAK_FUNC(sub_824304B4);
PPC_FUNC_IMPL(__imp__sub_824304B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824304B8"))) PPC_WEAK_FUNC(sub_824304B8);
PPC_FUNC_IMPL(__imp__sub_824304B8) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,19296(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19296);
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
	// bne cr6,0x82430518
	if (!cr6.eq) goto loc_82430518;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82430518
	if (!cr6.eq) goto loc_82430518;
	// lwz r11,19296(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82430518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8243051C"))) PPC_WEAK_FUNC(sub_8243051C);
PPC_FUNC_IMPL(__imp__sub_8243051C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82430520"))) PPC_WEAK_FUNC(sub_82430520);
PPC_FUNC_IMPL(__imp__sub_82430520) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,17904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17904);
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
	// bne cr6,0x82430580
	if (!cr6.eq) goto loc_82430580;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82430580
	if (!cr6.eq) goto loc_82430580;
	// lwz r11,17904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17904);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82430580:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82430584"))) PPC_WEAK_FUNC(sub_82430584);
PPC_FUNC_IMPL(__imp__sub_82430584) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82430588"))) PPC_WEAK_FUNC(sub_82430588);
PPC_FUNC_IMPL(__imp__sub_82430588) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,17908(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17908);
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
	// bne cr6,0x824305e8
	if (!cr6.eq) goto loc_824305E8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824305e8
	if (!cr6.eq) goto loc_824305E8;
	// lwz r11,17908(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17908);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824305E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824305EC"))) PPC_WEAK_FUNC(sub_824305EC);
PPC_FUNC_IMPL(__imp__sub_824305EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824305F0"))) PPC_WEAK_FUNC(sub_824305F0);
PPC_FUNC_IMPL(__imp__sub_824305F0) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,19156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19156);
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
	// bne cr6,0x82430650
	if (!cr6.eq) goto loc_82430650;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82430650
	if (!cr6.eq) goto loc_82430650;
	// lwz r11,19156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82430650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82430654"))) PPC_WEAK_FUNC(sub_82430654);
PPC_FUNC_IMPL(__imp__sub_82430654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82430658"))) PPC_WEAK_FUNC(sub_82430658);
PPC_FUNC_IMPL(__imp__sub_82430658) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,17664(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17664);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824306c0
	if (cr6.eq) goto loc_824306C0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824306c0
	if (!cr6.eq) goto loc_824306C0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824306C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824306E0"))) PPC_WEAK_FUNC(sub_824306E0);
PPC_FUNC_IMPL(__imp__sub_824306E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824306E4"))) PPC_WEAK_FUNC(sub_824306E4);
PPC_FUNC_IMPL(__imp__sub_824306E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824306E8"))) PPC_WEAK_FUNC(sub_824306E8);
PPC_FUNC_IMPL(__imp__sub_824306E8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,17660(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17660);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82430770
	if (cr6.eq) goto loc_82430770;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82430770
	if (!cr6.eq) goto loc_82430770;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82430770:
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

__attribute__((alias("__imp__sub_82430784"))) PPC_WEAK_FUNC(sub_82430784);
PPC_FUNC_IMPL(__imp__sub_82430784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430788"))) PPC_WEAK_FUNC(sub_82430788);
PPC_FUNC_IMPL(__imp__sub_82430788) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,23460
	ctx.r3.s64 = ctx.r10.s64 + 23460;
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
	// lwz r11,26252(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26252);
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

__attribute__((alias("__imp__sub_824307F8"))) PPC_WEAK_FUNC(sub_824307F8);
PPC_FUNC_IMPL(__imp__sub_824307F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824307FC"))) PPC_WEAK_FUNC(sub_824307FC);
PPC_FUNC_IMPL(__imp__sub_824307FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430800"))) PPC_WEAK_FUNC(sub_82430800);
PPC_FUNC_IMPL(__imp__sub_82430800) {
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
	// addi r3,r10,3124
	ctx.r3.s64 = ctx.r10.s64 + 3124;
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
	// lwz r11,19296(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19296);
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

__attribute__((alias("__imp__sub_82430870"))) PPC_WEAK_FUNC(sub_82430870);
PPC_FUNC_IMPL(__imp__sub_82430870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82430874"))) PPC_WEAK_FUNC(sub_82430874);
PPC_FUNC_IMPL(__imp__sub_82430874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430878"))) PPC_WEAK_FUNC(sub_82430878);
PPC_FUNC_IMPL(__imp__sub_82430878) {
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
	// addi r3,r10,-12384
	ctx.r3.s64 = ctx.r10.s64 + -12384;
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
	// lwz r11,17908(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17908);
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

__attribute__((alias("__imp__sub_824308E8"))) PPC_WEAK_FUNC(sub_824308E8);
PPC_FUNC_IMPL(__imp__sub_824308E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824308EC"))) PPC_WEAK_FUNC(sub_824308EC);
PPC_FUNC_IMPL(__imp__sub_824308EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824308F0"))) PPC_WEAK_FUNC(sub_824308F0);
PPC_FUNC_IMPL(__imp__sub_824308F0) {
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
	// addi r3,r10,-12332
	ctx.r3.s64 = ctx.r10.s64 + -12332;
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
	// lwz r11,17904(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17904);
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

__attribute__((alias("__imp__sub_82430960"))) PPC_WEAK_FUNC(sub_82430960);
PPC_FUNC_IMPL(__imp__sub_82430960) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82430964"))) PPC_WEAK_FUNC(sub_82430964);
PPC_FUNC_IMPL(__imp__sub_82430964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430968"))) PPC_WEAK_FUNC(sub_82430968);
PPC_FUNC_IMPL(__imp__sub_82430968) {
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
	// addi r3,r10,4948
	ctx.r3.s64 = ctx.r10.s64 + 4948;
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
	// lwz r11,19156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19156);
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

__attribute__((alias("__imp__sub_824309D8"))) PPC_WEAK_FUNC(sub_824309D8);
PPC_FUNC_IMPL(__imp__sub_824309D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824309DC"))) PPC_WEAK_FUNC(sub_824309DC);
PPC_FUNC_IMPL(__imp__sub_824309DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824309E0"))) PPC_WEAK_FUNC(sub_824309E0);
PPC_FUNC_IMPL(__imp__sub_824309E0) {
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
	// beq cr6,0x82430a54
	if (cr6.eq) goto loc_82430A54;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-30108
	ctx.r8.s64 = ctx.r9.s64 + -30108;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r6,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r6.u32);
	// lbz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stb r5,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r5.u8);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82430A54:
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

__attribute__((alias("__imp__sub_82430A68"))) PPC_WEAK_FUNC(sub_82430A68);
PPC_FUNC_IMPL(__imp__sub_82430A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430A6C"))) PPC_WEAK_FUNC(sub_82430A6C);
PPC_FUNC_IMPL(__imp__sub_82430A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430A70"))) PPC_WEAK_FUNC(sub_82430A70);
PPC_FUNC_IMPL(__imp__sub_82430A70) {
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
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-29644
	ctx.r9.s64 = r11.s64 + -29644;
	// addi r8,r10,-29652
	ctx.r8.s64 = ctx.r10.s64 + -29652;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// beq cr6,0x82430ac4
	if (cr6.eq) goto loc_82430AC4;
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
	// stw r9,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r9.u32);
loc_82430AC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c908
	sub_8242C908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82430ADC"))) PPC_WEAK_FUNC(sub_82430ADC);
PPC_FUNC_IMPL(__imp__sub_82430ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430AE0"))) PPC_WEAK_FUNC(sub_82430AE0);
PPC_FUNC_IMPL(__imp__sub_82430AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430AE4"))) PPC_WEAK_FUNC(sub_82430AE4);
PPC_FUNC_IMPL(__imp__sub_82430AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430AE8"))) PPC_WEAK_FUNC(sub_82430AE8);
PPC_FUNC_IMPL(__imp__sub_82430AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430AEC"))) PPC_WEAK_FUNC(sub_82430AEC);
PPC_FUNC_IMPL(__imp__sub_82430AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430AF0"))) PPC_WEAK_FUNC(sub_82430AF0);
PPC_FUNC_IMPL(__imp__sub_82430AF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242f410
	sub_8242F410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430AF4"))) PPC_WEAK_FUNC(sub_82430AF4);
PPC_FUNC_IMPL(__imp__sub_82430AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430AF8"))) PPC_WEAK_FUNC(sub_82430AF8);
PPC_FUNC_IMPL(__imp__sub_82430AF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242ca48
	sub_8242CA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430AF8"))) PPC_WEAK_FUNC(sub_82430AF8);
PPC_FUNC_IMPL(__imp__sub_82430AF8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82430AFC"))) PPC_WEAK_FUNC(sub_82430AFC);
PPC_FUNC_IMPL(__imp__sub_82430AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430B00"))) PPC_WEAK_FUNC(sub_82430B00);
PPC_FUNC_IMPL(__imp__sub_82430B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242d6f0
	sub_8242D6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430B04"))) PPC_WEAK_FUNC(sub_82430B04);
PPC_FUNC_IMPL(__imp__sub_82430B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430B08"))) PPC_WEAK_FUNC(sub_82430B08);
PPC_FUNC_IMPL(__imp__sub_82430B08) {
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
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// bl 0x824791e0
	sub_824791E0(ctx, base);
	// addi r11,r3,-33
	r11.s64 = ctx.r3.s64 + -33;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82430B38"))) PPC_WEAK_FUNC(sub_82430B38);
PPC_FUNC_IMPL(__imp__sub_82430B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430B3C"))) PPC_WEAK_FUNC(sub_82430B3C);
PPC_FUNC_IMPL(__imp__sub_82430B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430B40"))) PPC_WEAK_FUNC(sub_82430B40);
PPC_FUNC_IMPL(__imp__sub_82430B40) {
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
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// bl 0x824791e0
	sub_824791E0(ctx, base);
	// addi r11,r3,-35
	r11.s64 = ctx.r3.s64 + -35;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82430B70"))) PPC_WEAK_FUNC(sub_82430B70);
PPC_FUNC_IMPL(__imp__sub_82430B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430B74"))) PPC_WEAK_FUNC(sub_82430B74);
PPC_FUNC_IMPL(__imp__sub_82430B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430B78"))) PPC_WEAK_FUNC(sub_82430B78);
PPC_FUNC_IMPL(__imp__sub_82430B78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8242cb08
	sub_8242CB08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,-29652
	ctx.r8.s64 = ctx.r10.s64 + -29652;
	// addi r9,r11,-29644
	ctx.r9.s64 = r11.s64 + -29644;
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// li r8,45
	ctx.r8.s64 = 45;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r7,r7,-29544
	ctx.r7.s64 = ctx.r7.s64 + -29544;
	// li r3,636
	ctx.r3.s64 = 636;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82430bf8
	if (cr6.eq) goto loc_82430BF8;
	// bl 0x82479790
	sub_82479790(ctx, base);
	// b 0x82430bfc
	goto loc_82430BFC;
loc_82430BF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82430BFC:
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x824791f8
	sub_824791F8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,35
	ctx.r5.s64 = 35;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82424fa8
	sub_82424FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82430D6C"))) PPC_WEAK_FUNC(sub_82430D6C);
PPC_FUNC_IMPL(__imp__sub_82430D6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82430D70"))) PPC_WEAK_FUNC(sub_82430D70);
PPC_FUNC_IMPL(__imp__sub_82430D70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82430D74"))) PPC_WEAK_FUNC(sub_82430D74);
PPC_FUNC_IMPL(__imp__sub_82430D74) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82430d78
	goto loc_82430D78;
loc_82430D78:
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
	// bl 0x82430a70
	sub_82430A70(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82430db0
	if (cr6.eq) goto loc_82430DB0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82430DB0:
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

__attribute__((alias("__imp__sub_82430D78"))) PPC_WEAK_FUNC(sub_82430D78);
PPC_FUNC_IMPL(__imp__sub_82430D78) {
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
	// bl 0x82430a70
	sub_82430A70(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82430db0
	if (cr6.eq) goto loc_82430DB0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82430DB0:
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

__attribute__((alias("__imp__sub_82430DC8"))) PPC_WEAK_FUNC(sub_82430DC8);
PPC_FUNC_IMPL(__imp__sub_82430DC8) {
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
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-29484
	ctx.r9.s64 = r11.s64 + -29484;
	// addi r8,r10,-29492
	ctx.r8.s64 = ctx.r10.s64 + -29492;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// beq cr6,0x82430e1c
	if (cr6.eq) goto loc_82430E1C;
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
	// stw r9,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r9.u32);
loc_82430E1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c908
	sub_8242C908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82430E34"))) PPC_WEAK_FUNC(sub_82430E34);
PPC_FUNC_IMPL(__imp__sub_82430E34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430E38"))) PPC_WEAK_FUNC(sub_82430E38);
PPC_FUNC_IMPL(__imp__sub_82430E38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430E3C"))) PPC_WEAK_FUNC(sub_82430E3C);
PPC_FUNC_IMPL(__imp__sub_82430E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E40"))) PPC_WEAK_FUNC(sub_82430E40);
PPC_FUNC_IMPL(__imp__sub_82430E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430E44"))) PPC_WEAK_FUNC(sub_82430E44);
PPC_FUNC_IMPL(__imp__sub_82430E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E48"))) PPC_WEAK_FUNC(sub_82430E48);
PPC_FUNC_IMPL(__imp__sub_82430E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242f410
	sub_8242F410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430E4C"))) PPC_WEAK_FUNC(sub_82430E4C);
PPC_FUNC_IMPL(__imp__sub_82430E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E50"))) PPC_WEAK_FUNC(sub_82430E50);
PPC_FUNC_IMPL(__imp__sub_82430E50) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82430E50"))) PPC_WEAK_FUNC(sub_82430E50);
PPC_FUNC_IMPL(__imp__sub_82430E50) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242ca48
	sub_8242CA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430E54"))) PPC_WEAK_FUNC(sub_82430E54);
PPC_FUNC_IMPL(__imp__sub_82430E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E58"))) PPC_WEAK_FUNC(sub_82430E58);
PPC_FUNC_IMPL(__imp__sub_82430E58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242d6f0
	sub_8242D6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430E5C"))) PPC_WEAK_FUNC(sub_82430E5C);
PPC_FUNC_IMPL(__imp__sub_82430E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E60"))) PPC_WEAK_FUNC(sub_82430E60);
PPC_FUNC_IMPL(__imp__sub_82430E60) {
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
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// bl 0x824791e0
	sub_824791E0(ctx, base);
	// addi r11,r3,-33
	r11.s64 = ctx.r3.s64 + -33;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82430E90"))) PPC_WEAK_FUNC(sub_82430E90);
PPC_FUNC_IMPL(__imp__sub_82430E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430E94"))) PPC_WEAK_FUNC(sub_82430E94);
PPC_FUNC_IMPL(__imp__sub_82430E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E98"))) PPC_WEAK_FUNC(sub_82430E98);
PPC_FUNC_IMPL(__imp__sub_82430E98) {
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
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// bl 0x824791e0
	sub_824791E0(ctx, base);
	// addi r11,r3,-35
	r11.s64 = ctx.r3.s64 + -35;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82430EC8"))) PPC_WEAK_FUNC(sub_82430EC8);
PPC_FUNC_IMPL(__imp__sub_82430EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82430ECC"))) PPC_WEAK_FUNC(sub_82430ECC);
PPC_FUNC_IMPL(__imp__sub_82430ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430ED0"))) PPC_WEAK_FUNC(sub_82430ED0);
PPC_FUNC_IMPL(__imp__sub_82430ED0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8242cb08
	sub_8242CB08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r11,-29484
	ctx.r8.s64 = r11.s64 + -29484;
	// addi r7,r9,-29492
	ctx.r7.s64 = ctx.r9.s64 + -29492;
	// stw r10,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r7,r6,-29384
	ctx.r7.s64 = ctx.r6.s64 + -29384;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r3,636
	ctx.r3.s64 = 636;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82430f54
	if (cr6.eq) goto loc_82430F54;
	// bl 0x82479790
	sub_82479790(ctx, base);
	// b 0x82430f58
	goto loc_82430F58;
loc_82430F54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82430F58:
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x824791f8
	sub_824791F8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,35
	ctx.r5.s64 = 35;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82424fa8
	sub_82424FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824310C8"))) PPC_WEAK_FUNC(sub_824310C8);
PPC_FUNC_IMPL(__imp__sub_824310C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824310CC"))) PPC_WEAK_FUNC(sub_824310CC);
PPC_FUNC_IMPL(__imp__sub_824310CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824310D0"))) PPC_WEAK_FUNC(sub_824310D0);
PPC_FUNC_IMPL(__imp__sub_824310D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_824310D4"))) PPC_WEAK_FUNC(sub_824310D4);
PPC_FUNC_IMPL(__imp__sub_824310D4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824310d8
	goto loc_824310D8;
loc_824310D8:
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
	// bl 0x82430dc8
	sub_82430DC8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82431110
	if (cr6.eq) goto loc_82431110;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82431110:
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

__attribute__((alias("__imp__sub_824310D8"))) PPC_WEAK_FUNC(sub_824310D8);
PPC_FUNC_IMPL(__imp__sub_824310D8) {
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
	// bl 0x82430dc8
	sub_82430DC8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82431110
	if (cr6.eq) goto loc_82431110;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82431110:
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

__attribute__((alias("__imp__sub_82431128"))) PPC_WEAK_FUNC(sub_82431128);
PPC_FUNC_IMPL(__imp__sub_82431128) {
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
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-29316
	ctx.r9.s64 = r11.s64 + -29316;
	// addi r8,r10,-29328
	ctx.r8.s64 = ctx.r10.s64 + -29328;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// beq cr6,0x8243117c
	if (cr6.eq) goto loc_8243117C;
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
	// stw r9,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r9.u32);
loc_8243117C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c908
	sub_8242C908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82431194"))) PPC_WEAK_FUNC(sub_82431194);
PPC_FUNC_IMPL(__imp__sub_82431194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431198"))) PPC_WEAK_FUNC(sub_82431198);
PPC_FUNC_IMPL(__imp__sub_82431198) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242f410
	sub_8242F410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243119C"))) PPC_WEAK_FUNC(sub_8243119C);
PPC_FUNC_IMPL(__imp__sub_8243119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824311A0"))) PPC_WEAK_FUNC(sub_824311A0);
PPC_FUNC_IMPL(__imp__sub_824311A0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824311A0"))) PPC_WEAK_FUNC(sub_824311A0);
PPC_FUNC_IMPL(__imp__sub_824311A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242ca48
	sub_8242CA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824311A4"))) PPC_WEAK_FUNC(sub_824311A4);
PPC_FUNC_IMPL(__imp__sub_824311A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824311A8"))) PPC_WEAK_FUNC(sub_824311A8);
PPC_FUNC_IMPL(__imp__sub_824311A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242d6f0
	sub_8242D6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824311AC"))) PPC_WEAK_FUNC(sub_824311AC);
PPC_FUNC_IMPL(__imp__sub_824311AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824311B0"))) PPC_WEAK_FUNC(sub_824311B0);
PPC_FUNC_IMPL(__imp__sub_824311B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824311B8"))) PPC_WEAK_FUNC(sub_824311B8);
PPC_FUNC_IMPL(__imp__sub_824311B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824311C0"))) PPC_WEAK_FUNC(sub_824311C0);
PPC_FUNC_IMPL(__imp__sub_824311C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8242cb08
	sub_8242CB08(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,2
	r11.s64 = 2;
	// addi r8,r10,-29316
	ctx.r8.s64 = ctx.r10.s64 + -29316;
	// addi r7,r9,-29328
	ctx.r7.s64 = ctx.r9.s64 + -29328;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// addi r7,r6,-29216
	ctx.r7.s64 = ctx.r6.s64 + -29216;
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r3,636
	ctx.r3.s64 = 636;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82431240
	if (cr6.eq) goto loc_82431240;
	// bl 0x82479790
	sub_82479790(ctx, base);
	// b 0x82431244
	goto loc_82431244;
loc_82431240:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82431244:
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x824791f8
	sub_824791F8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,29
	ctx.r5.s64 = 29;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82424fa8
	sub_82424FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8243135C"))) PPC_WEAK_FUNC(sub_8243135C);
PPC_FUNC_IMPL(__imp__sub_8243135C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82431360"))) PPC_WEAK_FUNC(sub_82431360);
PPC_FUNC_IMPL(__imp__sub_82431360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82431364"))) PPC_WEAK_FUNC(sub_82431364);
PPC_FUNC_IMPL(__imp__sub_82431364) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82431368
	goto loc_82431368;
loc_82431368:
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
	// bl 0x82431128
	sub_82431128(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824313a0
	if (cr6.eq) goto loc_824313A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824313A0:
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

__attribute__((alias("__imp__sub_82431368"))) PPC_WEAK_FUNC(sub_82431368);
PPC_FUNC_IMPL(__imp__sub_82431368) {
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
	// bl 0x82431128
	sub_82431128(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824313a0
	if (cr6.eq) goto loc_824313A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824313A0:
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

__attribute__((alias("__imp__sub_824313B8"))) PPC_WEAK_FUNC(sub_824313B8);
PPC_FUNC_IMPL(__imp__sub_824313B8) {
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
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-29148
	ctx.r9.s64 = r11.s64 + -29148;
	// addi r8,r10,-29156
	ctx.r8.s64 = ctx.r10.s64 + -29156;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// beq cr6,0x8243140c
	if (cr6.eq) goto loc_8243140C;
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
	// stw r9,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r9.u32);
loc_8243140C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c908
	sub_8242C908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82431424"))) PPC_WEAK_FUNC(sub_82431424);
PPC_FUNC_IMPL(__imp__sub_82431424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431428"))) PPC_WEAK_FUNC(sub_82431428);
PPC_FUNC_IMPL(__imp__sub_82431428) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242f410
	sub_8242F410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243142C"))) PPC_WEAK_FUNC(sub_8243142C);
PPC_FUNC_IMPL(__imp__sub_8243142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431430"))) PPC_WEAK_FUNC(sub_82431430);
PPC_FUNC_IMPL(__imp__sub_82431430) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242ca48
	sub_8242CA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82431430"))) PPC_WEAK_FUNC(sub_82431430);
PPC_FUNC_IMPL(__imp__sub_82431430) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82431434"))) PPC_WEAK_FUNC(sub_82431434);
PPC_FUNC_IMPL(__imp__sub_82431434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431438"))) PPC_WEAK_FUNC(sub_82431438);
PPC_FUNC_IMPL(__imp__sub_82431438) {
	PPC_FUNC_PROLOGUE();
	// b 0x8242d6f0
	sub_8242D6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243143C"))) PPC_WEAK_FUNC(sub_8243143C);
PPC_FUNC_IMPL(__imp__sub_8243143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431440"))) PPC_WEAK_FUNC(sub_82431440);
PPC_FUNC_IMPL(__imp__sub_82431440) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431448"))) PPC_WEAK_FUNC(sub_82431448);
PPC_FUNC_IMPL(__imp__sub_82431448) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431450"))) PPC_WEAK_FUNC(sub_82431450);
PPC_FUNC_IMPL(__imp__sub_82431450) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8242cb08
	sub_8242CB08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r8,r11,-29148
	ctx.r8.s64 = r11.s64 + -29148;
	// addi r7,r9,-29156
	ctx.r7.s64 = ctx.r9.s64 + -29156;
	// stw r10,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r7,r6,-29048
	ctx.r7.s64 = ctx.r6.s64 + -29048;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r3,636
	ctx.r3.s64 = 636;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824314d4
	if (cr6.eq) goto loc_824314D4;
	// bl 0x82479790
	sub_82479790(ctx, base);
	// b 0x824314d8
	goto loc_824314D8;
loc_824314D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824314D8:
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479508
	sub_82479508(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x824791f8
	sub_824791F8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,29
	ctx.r5.s64 = 29;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82479128
	sub_82479128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82424fa8
	sub_82424FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82431608"))) PPC_WEAK_FUNC(sub_82431608);
PPC_FUNC_IMPL(__imp__sub_82431608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8243160C"))) PPC_WEAK_FUNC(sub_8243160C);
PPC_FUNC_IMPL(__imp__sub_8243160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431610"))) PPC_WEAK_FUNC(sub_82431610);
PPC_FUNC_IMPL(__imp__sub_82431610) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431618"))) PPC_WEAK_FUNC(sub_82431618);
PPC_FUNC_IMPL(__imp__sub_82431618) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8243161C"))) PPC_WEAK_FUNC(sub_8243161C);
PPC_FUNC_IMPL(__imp__sub_8243161C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82431620
	goto loc_82431620;
loc_82431620:
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
	// bl 0x824313b8
	sub_824313B8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82431658
	if (cr6.eq) goto loc_82431658;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82431658:
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

__attribute__((alias("__imp__sub_82431620"))) PPC_WEAK_FUNC(sub_82431620);
PPC_FUNC_IMPL(__imp__sub_82431620) {
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
	// bl 0x824313b8
	sub_824313B8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82431658
	if (cr6.eq) goto loc_82431658;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82431658:
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

__attribute__((alias("__imp__sub_82431670"))) PPC_WEAK_FUNC(sub_82431670);
PPC_FUNC_IMPL(__imp__sub_82431670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243167C"))) PPC_WEAK_FUNC(sub_8243167C);
PPC_FUNC_IMPL(__imp__sub_8243167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431680"))) PPC_WEAK_FUNC(sub_82431680);
PPC_FUNC_IMPL(__imp__sub_82431680) {
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
	// bl 0x826e7e88
	sub_826E7E88(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824316b8
	if (cr6.eq) goto loc_824316B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824316B8:
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

__attribute__((alias("__imp__sub_824316CC"))) PPC_WEAK_FUNC(sub_824316CC);
PPC_FUNC_IMPL(__imp__sub_824316CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824316D0"))) PPC_WEAK_FUNC(sub_824316D0);
PPC_FUNC_IMPL(__imp__sub_824316D0) {
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
	// bl 0x826ebd08
	sub_826EBD08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-28376
	ctx.r10.s64 = r11.s64 + -28376;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826ebbb8
	sub_826EBBB8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-30024
	ctx.r3.s64 = ctx.r9.s64 + -30024;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,-30872
	ctx.r3.s64 = ctx.r8.s64 + -30872;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r7,-28388
	ctx.r3.s64 = ctx.r7.s64 + -28388;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82431740"))) PPC_WEAK_FUNC(sub_82431740);
PPC_FUNC_IMPL(__imp__sub_82431740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431744"))) PPC_WEAK_FUNC(sub_82431744);
PPC_FUNC_IMPL(__imp__sub_82431744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431748"))) PPC_WEAK_FUNC(sub_82431748);
PPC_FUNC_IMPL(__imp__sub_82431748) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r5,r11,-28536
	ctx.r5.s64 = r11.s64 + -28536;
	// addi r4,r10,27140
	ctx.r4.s64 = ctx.r10.s64 + 27140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,-28540
	ctx.r5.s64 = ctx.r9.s64 + -28540;
	// addi r4,r8,-29828
	ctx.r4.s64 = ctx.r8.s64 + -29828;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r7,-28544
	ctx.r5.s64 = ctx.r7.s64 + -28544;
	// addi r4,r6,-29864
	ctx.r4.s64 = ctx.r6.s64 + -29864;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r5,17744
	ctx.r5.s64 = ctx.r5.s64 + 17744;
	// addi r4,r4,-28516
	ctx.r4.s64 = ctx.r4.s64 + -28516;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-28548
	ctx.r5.s64 = r11.s64 + -28548;
	// addi r4,r10,-28732
	ctx.r4.s64 = ctx.r10.s64 + -28732;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,-28556
	ctx.r5.s64 = ctx.r9.s64 + -28556;
	// addi r4,r8,-29792
	ctx.r4.s64 = ctx.r8.s64 + -29792;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r7,-28564
	ctx.r5.s64 = ctx.r7.s64 + -28564;
	// addi r4,r6,-29916
	ctx.r4.s64 = ctx.r6.s64 + -29916;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r5,18044
	ctx.r5.s64 = ctx.r5.s64 + 18044;
	// addi r4,r4,18004
	ctx.r4.s64 = ctx.r4.s64 + 18004;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,18040
	ctx.r5.s64 = r11.s64 + 18040;
	// addi r4,r10,18000
	ctx.r4.s64 = ctx.r10.s64 + 18000;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,-28576
	ctx.r5.s64 = ctx.r9.s64 + -28576;
	// addi r4,r8,27104
	ctx.r4.s64 = ctx.r8.s64 + 27104;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r7,18036
	ctx.r5.s64 = ctx.r7.s64 + 18036;
	// addi r4,r6,17996
	ctx.r4.s64 = ctx.r6.s64 + 17996;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r5,18032
	ctx.r5.s64 = ctx.r5.s64 + 18032;
	// addi r4,r4,17992
	ctx.r4.s64 = ctx.r4.s64 + 17992;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r3,18028
	ctx.r5.s64 = ctx.r3.s64 + 18028;
	// addi r4,r11,17984
	ctx.r4.s64 = r11.s64 + 17984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r5,r10,18048
	ctx.r5.s64 = ctx.r10.s64 + 18048;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,18008
	ctx.r4.s64 = ctx.r9.s64 + 18008;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r8,18060
	ctx.r5.s64 = ctx.r8.s64 + 18060;
	// addi r4,r7,-29904
	ctx.r4.s64 = ctx.r7.s64 + -29904;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r6,18056
	ctx.r5.s64 = ctx.r6.s64 + 18056;
	// addi r4,r4,-29908
	ctx.r4.s64 = ctx.r4.s64 + -29908;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,18052
	ctx.r5.s64 = r11.s64 + 18052;
	// addi r4,r10,-29900
	ctx.r4.s64 = ctx.r10.s64 + -29900;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,-28608
	ctx.r5.s64 = ctx.r9.s64 + -28608;
	// addi r4,r8,-29988
	ctx.r4.s64 = ctx.r8.s64 + -29988;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r7,-28612
	ctx.r5.s64 = ctx.r7.s64 + -28612;
	// addi r4,r6,-28728
	ctx.r4.s64 = ctx.r6.s64 + -28728;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r5,-28616
	ctx.r5.s64 = ctx.r5.s64 + -28616;
	// addi r4,r4,-29772
	ctx.r4.s64 = ctx.r4.s64 + -29772;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,18024
	ctx.r5.s64 = r11.s64 + 18024;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,18080
	ctx.r5.s64 = ctx.r9.s64 + 18080;
	// addi r4,r8,-28532
	ctx.r4.s64 = ctx.r8.s64 + -28532;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r7,18020
	ctx.r5.s64 = ctx.r7.s64 + 18020;
	// addi r4,r6,-29912
	ctx.r4.s64 = ctx.r6.s64 + -29912;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r5,18016
	ctx.r5.s64 = ctx.r5.s64 + 18016;
	// addi r4,r4,-28528
	ctx.r4.s64 = ctx.r4.s64 + -28528;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,18012
	ctx.r5.s64 = r11.s64 + 18012;
	// addi r4,r10,17988
	ctx.r4.s64 = ctx.r10.s64 + 17988;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,-28624
	ctx.r5.s64 = ctx.r9.s64 + -28624;
	// addi r4,r8,-28520
	ctx.r4.s64 = ctx.r8.s64 + -28520;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// addi r5,r7,-28628
	ctx.r5.s64 = ctx.r7.s64 + -28628;
	// addi r4,r6,-28904
	ctx.r4.s64 = ctx.r6.s64 + -28904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// addi r5,r5,-28632
	ctx.r5.s64 = ctx.r5.s64 + -28632;
	// addi r4,r4,-28524
	ctx.r4.s64 = ctx.r4.s64 + -28524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ebc78
	sub_826EBC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82431A08"))) PPC_WEAK_FUNC(sub_82431A08);
PPC_FUNC_IMPL(__imp__sub_82431A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431A0C"))) PPC_WEAK_FUNC(sub_82431A0C);
PPC_FUNC_IMPL(__imp__sub_82431A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431A10"))) PPC_WEAK_FUNC(sub_82431A10);
PPC_FUNC_IMPL(__imp__sub_82431A10) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r9,r11,11400
	ctx.r9.s64 = r11.s64 + 11400;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,11400
	r11.s64 = ctx.r5.s64 + 11400;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r9,27140
	ctx.r4.s64 = ctx.r9.s64 + 27140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r8,11536
	ctx.r6.s64 = ctx.r8.s64 + 11536;
	// addi r5,r7,20280
	ctx.r5.s64 = ctx.r7.s64 + 20280;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,11536
	ctx.r8.s64 = ctx.r10.s64 + 11536;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r7.u32);
	// addi r5,r1,504
	ctx.r5.s64 = ctx.r1.s64 + 504;
	// addi r4,r6,-29828
	ctx.r4.s64 = ctx.r6.s64 + -29828;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r5,11672
	r11.s64 = ctx.r5.s64 + 11672;
	// addi r10,r4,20280
	ctx.r10.s64 = ctx.r4.s64 + 20280;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,11672
	ctx.r5.s64 = ctx.r7.s64 + 11672;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-29864
	ctx.r4.s64 = r11.s64 + -29864;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r10,11808
	ctx.r8.s64 = ctx.r10.s64 + 11808;
	// addi r7,r9,20280
	ctx.r7.s64 = ctx.r9.s64 + 20280;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,11808
	ctx.r10.s64 = ctx.r4.s64 + 11808;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r9.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// addi r4,r8,-28516
	ctx.r4.s64 = ctx.r8.s64 + -28516;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,11944
	ctx.r5.s64 = ctx.r7.s64 + 11944;
	// addi r4,r6,20280
	ctx.r4.s64 = ctx.r6.s64 + 20280;
	// subfic r3,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r5.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,11944
	ctx.r8.s64 = ctx.r10.s64 + 11944;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r6,-28732
	ctx.r4.s64 = ctx.r6.s64 + -28732;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r11,r5,12080
	r11.s64 = ctx.r5.s64 + 12080;
	// addi r10,r4,20280
	ctx.r10.s64 = ctx.r4.s64 + 20280;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,12080
	ctx.r5.s64 = ctx.r7.s64 + 12080;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r4.u32);
	// addi r5,r1,632
	ctx.r5.s64 = ctx.r1.s64 + 632;
	// addi r4,r11,-29792
	ctx.r4.s64 = r11.s64 + -29792;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r10,12216
	ctx.r8.s64 = ctx.r10.s64 + 12216;
	// addi r7,r9,20280
	ctx.r7.s64 = ctx.r9.s64 + 20280;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,12216
	ctx.r10.s64 = ctx.r4.s64 + 12216;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r8,-29916
	ctx.r4.s64 = ctx.r8.s64 + -29916;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r7,12352
	ctx.r5.s64 = ctx.r7.s64 + 12352;
	// addi r4,r6,20280
	ctx.r4.s64 = ctx.r6.s64 + 20280;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,12352
	ctx.r7.s64 = ctx.r9.s64 + 12352;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r7.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r6,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// addi r5,r1,392
	ctx.r5.s64 = ctx.r1.s64 + 392;
	// addi r4,r4,18004
	ctx.r4.s64 = ctx.r4.s64 + 18004;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,12520
	ctx.r9.s64 = r11.s64 + 12520;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,12520
	r11.s64 = ctx.r5.s64 + 12520;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r9,18000
	ctx.r4.s64 = ctx.r9.s64 + 18000;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,12688
	ctx.r6.s64 = ctx.r8.s64 + 12688;
	// addi r11,r7,20280
	r11.s64 = ctx.r7.s64 + 20280;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r5,12688
	ctx.r9.s64 = ctx.r5.s64 + 12688;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & r11.u64;
	// stw r9,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r9.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r8,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// addi r5,r1,520
	ctx.r5.s64 = ctx.r1.s64 + 520;
	// addi r4,r7,27104
	ctx.r4.s64 = ctx.r7.s64 + 27104;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r4,r6,12824
	ctx.r4.s64 = ctx.r6.s64 + 12824;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// addi r11,r5,20280
	r11.s64 = ctx.r5.s64 + 20280;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,12824
	ctx.r6.s64 = ctx.r8.s64 + 12824;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r4,17996
	ctx.r4.s64 = ctx.r4.s64 + 17996;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,12992
	ctx.r9.s64 = r11.s64 + 12992;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,12992
	r11.s64 = ctx.r5.s64 + 12992;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r11.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r10,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// addi r4,r9,17992
	ctx.r4.s64 = ctx.r9.s64 + 17992;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r8,13160
	ctx.r6.s64 = ctx.r8.s64 + 13160;
	// addi r5,r7,20280
	ctx.r5.s64 = ctx.r7.s64 + 20280;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,13160
	ctx.r8.s64 = ctx.r10.s64 + 13160;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r6,17984
	ctx.r4.s64 = ctx.r6.s64 + 17984;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r5,13328
	r11.s64 = ctx.r5.s64 + 13328;
	// addi r10,r4,20280
	ctx.r10.s64 = ctx.r4.s64 + 20280;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,13328
	ctx.r5.s64 = ctx.r7.s64 + 13328;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r5.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r4,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r4.u32);
	// addi r5,r1,584
	ctx.r5.s64 = ctx.r1.s64 + 584;
	// addi r4,r11,18008
	ctx.r4.s64 = r11.s64 + 18008;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r10,13496
	ctx.r8.s64 = ctx.r10.s64 + 13496;
	// addi r7,r9,20280
	ctx.r7.s64 = ctx.r9.s64 + 20280;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,13496
	ctx.r9.s64 = r11.s64 + 13496;
	// and r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r8,-29904
	ctx.r4.s64 = ctx.r8.s64 + -29904;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,13664
	ctx.r5.s64 = ctx.r7.s64 + 13664;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r6,20280
	ctx.r4.s64 = ctx.r6.s64 + 20280;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,13664
	ctx.r7.s64 = ctx.r9.s64 + 13664;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// addi r5,r1,424
	ctx.r5.s64 = ctx.r1.s64 + 424;
	// addi r4,r4,-29908
	ctx.r4.s64 = ctx.r4.s64 + -29908;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,13832
	ctx.r9.s64 = r11.s64 + 13832;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,13832
	r11.s64 = ctx.r5.s64 + 13832;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// addi r4,r9,-29900
	ctx.r4.s64 = ctx.r9.s64 + -29900;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r8,14000
	ctx.r6.s64 = ctx.r8.s64 + 14000;
	// addi r5,r7,20280
	ctx.r5.s64 = ctx.r7.s64 + 20280;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,14000
	ctx.r8.s64 = ctx.r10.s64 + 14000;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r7.u32);
	// addi r5,r1,536
	ctx.r5.s64 = ctx.r1.s64 + 536;
	// addi r4,r6,-29988
	ctx.r4.s64 = ctx.r6.s64 + -29988;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r5,14136
	r11.s64 = ctx.r5.s64 + 14136;
	// addi r10,r4,20280
	ctx.r10.s64 = ctx.r4.s64 + 20280;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,14136
	ctx.r5.s64 = ctx.r7.s64 + 14136;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r11,-28728
	ctx.r4.s64 = r11.s64 + -28728;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r10,14272
	ctx.r9.s64 = ctx.r10.s64 + 14272;
	// addi r5,r8,20280
	ctx.r5.s64 = ctx.r8.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,14272
	ctx.r9.s64 = r11.s64 + 14272;
	// and r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stw r9,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r9.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// addi r5,r1,440
	ctx.r5.s64 = ctx.r1.s64 + 440;
	// addi r4,r8,-29772
	ctx.r4.s64 = ctx.r8.s64 + -29772;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,14440
	ctx.r5.s64 = ctx.r7.s64 + 14440;
	// addi r4,r6,20280
	ctx.r4.s64 = ctx.r6.s64 + 20280;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,14440
	ctx.r7.s64 = ctx.r9.s64 + 14440;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// addi r4,r4,-28520
	ctx.r4.s64 = ctx.r4.s64 + -28520;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,14576
	ctx.r9.s64 = r11.s64 + 14576;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,14576
	r11.s64 = ctx.r5.s64 + 14576;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r10.u32);
	// addi r5,r1,616
	ctx.r5.s64 = ctx.r1.s64 + 616;
	// addi r4,r9,-28904
	ctx.r4.s64 = ctx.r9.s64 + -28904;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r8,14712
	ctx.r6.s64 = ctx.r8.s64 + 14712;
	// addi r5,r7,20280
	ctx.r5.s64 = ctx.r7.s64 + 20280;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,14712
	ctx.r8.s64 = ctx.r10.s64 + 14712;
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
	// addi r4,r6,-28524
	ctx.r4.s64 = ctx.r6.s64 + -28524;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r3,r5,14848
	ctx.r3.s64 = ctx.r5.s64 + 14848;
	// addi r11,r4,20280
	r11.s64 = ctx.r4.s64 + 20280;
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,14848
	ctx.r6.s64 = ctx.r8.s64 + 14848;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r5.u32);
	// addi r5,r1,456
	ctx.r5.s64 = ctx.r1.s64 + 456;
	// addi r4,r4,-28736
	ctx.r4.s64 = ctx.r4.s64 + -28736;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,15016
	ctx.r9.s64 = r11.s64 + 15016;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,15016
	r11.s64 = ctx.r5.s64 + 15016;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// addi r4,r9,-29912
	ctx.r4.s64 = ctx.r9.s64 + -29912;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,15184
	ctx.r6.s64 = ctx.r8.s64 + 15184;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// addi r5,r7,20280
	ctx.r5.s64 = ctx.r7.s64 + 20280;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,15184
	ctx.r8.s64 = ctx.r10.s64 + 15184;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r7.u32);
	// addi r5,r1,552
	ctx.r5.s64 = ctx.r1.s64 + 552;
	// addi r4,r6,-28528
	ctx.r4.s64 = ctx.r6.s64 + -28528;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r5,15352
	r11.s64 = ctx.r5.s64 + 15352;
	// addi r10,r4,20280
	ctx.r10.s64 = ctx.r4.s64 + 20280;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,15352
	ctx.r5.s64 = ctx.r7.s64 + 15352;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,-28532
	ctx.r4.s64 = r11.s64 + -28532;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r10,15520
	ctx.r8.s64 = ctx.r10.s64 + 15520;
	// addi r7,r9,20280
	ctx.r7.s64 = ctx.r9.s64 + 20280;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,15520
	ctx.r10.s64 = ctx.r4.s64 + 15520;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r10.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r9,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// addi r5,r1,472
	ctx.r5.s64 = ctx.r1.s64 + 472;
	// addi r4,r8,17988
	ctx.r4.s64 = ctx.r8.s64 + 17988;
	// bl 0x826ec388
	sub_826EC388(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r5,r7,15688
	ctx.r5.s64 = ctx.r7.s64 + 15688;
	// addi r9,r4,20288
	ctx.r9.s64 = ctx.r4.s64 + 20288;
	// subfic r3,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r5.s64;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// subfe r8,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r6,15688
	ctx.r10.s64 = ctx.r6.s64 + 15688;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// addi r5,r1,312
	ctx.r5.s64 = ctx.r1.s64 + 312;
	// addi r4,r6,-28536
	ctx.r4.s64 = ctx.r6.s64 + -28536;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,15824
	r11.s64 = ctx.r5.s64 + 15824;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,15824
	ctx.r5.s64 = ctx.r7.s64 + 15824;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// addi r5,r1,600
	ctx.r5.s64 = ctx.r1.s64 + 600;
	// addi r4,r11,-28540
	ctx.r4.s64 = r11.s64 + -28540;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,15960
	ctx.r8.s64 = ctx.r10.s64 + 15960;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,15960
	ctx.r10.s64 = ctx.r4.s64 + 15960;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// addi r4,r8,-28544
	ctx.r4.s64 = ctx.r8.s64 + -28544;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r7,16096
	ctx.r5.s64 = ctx.r7.s64 + 16096;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,16096
	ctx.r7.s64 = ctx.r9.s64 + 16096;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r7.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r6,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// addi r5,r1,488
	ctx.r5.s64 = ctx.r1.s64 + 488;
	// addi r4,r4,17744
	ctx.r4.s64 = ctx.r4.s64 + 17744;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,16232
	ctx.r9.s64 = r11.s64 + 16232;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,16232
	r11.s64 = ctx.r5.s64 + 16232;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// addi r4,r9,-28548
	ctx.r4.s64 = ctx.r9.s64 + -28548;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,16368
	ctx.r6.s64 = ctx.r8.s64 + 16368;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,16368
	ctx.r8.s64 = ctx.r10.s64 + 16368;
	// and r9,r11,r5
	ctx.r9.u64 = r11.u64 & ctx.r5.u64;
	// stw r8,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r8.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r9,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r9.u32);
	// addi r5,r1,568
	ctx.r5.s64 = ctx.r1.s64 + 568;
	// addi r4,r7,-28552
	ctx.r4.s64 = ctx.r7.s64 + -28552;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r6,16504
	ctx.r4.s64 = ctx.r6.s64 + 16504;
	// addi r11,r5,20288
	r11.s64 = ctx.r5.s64 + 20288;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,16504
	ctx.r6.s64 = ctx.r8.s64 + 16504;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r5.u32);
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r4,-28556
	ctx.r4.s64 = ctx.r4.s64 + -28556;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,16640
	ctx.r9.s64 = r11.s64 + 16640;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// addi r11,r5,16640
	r11.s64 = ctx.r5.s64 + 16640;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-28560
	ctx.r4.s64 = ctx.r9.s64 + -28560;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,16776
	ctx.r6.s64 = ctx.r8.s64 + 16776;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,16776
	ctx.r8.s64 = ctx.r10.s64 + 16776;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r6,-28564
	ctx.r4.s64 = ctx.r6.s64 + -28564;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,17928
	r11.s64 = ctx.r5.s64 + 17928;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,17928
	ctx.r5.s64 = ctx.r7.s64 + 17928;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,18044
	ctx.r4.s64 = r11.s64 + 18044;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,23352
	ctx.r8.s64 = ctx.r10.s64 + 23352;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,23352
	ctx.r10.s64 = ctx.r4.s64 + 23352;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r8,-28568
	ctx.r4.s64 = ctx.r8.s64 + -28568;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r7,18096
	ctx.r5.s64 = ctx.r7.s64 + 18096;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,18096
	ctx.r7.s64 = ctx.r9.s64 + 18096;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r4,18040
	ctx.r4.s64 = ctx.r4.s64 + 18040;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,23496
	ctx.r9.s64 = r11.s64 + 23496;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,23496
	r11.s64 = ctx.r5.s64 + 23496;
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
	// addi r4,r9,-28572
	ctx.r4.s64 = ctx.r9.s64 + -28572;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,16912
	ctx.r6.s64 = ctx.r8.s64 + 16912;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,16912
	ctx.r8.s64 = ctx.r10.s64 + 16912;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r6,-28576
	ctx.r4.s64 = ctx.r6.s64 + -28576;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r3,r5,18264
	ctx.r3.s64 = ctx.r5.s64 + 18264;
	// addi r11,r4,20288
	r11.s64 = ctx.r4.s64 + 20288;
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,18264
	ctx.r6.s64 = ctx.r8.s64 + 18264;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r4,18036
	ctx.r4.s64 = ctx.r4.s64 + 18036;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,23640
	ctx.r9.s64 = r11.s64 + 23640;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,23640
	r11.s64 = ctx.r5.s64 + 23640;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r9,-28580
	ctx.r4.s64 = ctx.r9.s64 + -28580;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,18432
	ctx.r6.s64 = ctx.r8.s64 + 18432;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,18432
	ctx.r8.s64 = ctx.r10.s64 + 18432;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r6,18032
	ctx.r4.s64 = ctx.r6.s64 + 18032;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,23784
	r11.s64 = ctx.r5.s64 + 23784;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,23784
	ctx.r5.s64 = ctx.r7.s64 + 23784;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r4.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-28584
	ctx.r4.s64 = r11.s64 + -28584;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,18600
	ctx.r8.s64 = ctx.r10.s64 + 18600;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,18600
	ctx.r10.s64 = ctx.r4.s64 + 18600;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r8,18028
	ctx.r4.s64 = ctx.r8.s64 + 18028;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,23928
	ctx.r5.s64 = ctx.r7.s64 + 23928;
	// addi r10,r6,20288
	ctx.r10.s64 = ctx.r6.s64 + 20288;
	// subfic r3,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r5.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r4,23928
	ctx.r8.s64 = ctx.r4.s64 + 23928;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r6,-28588
	ctx.r4.s64 = ctx.r6.s64 + -28588;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,18768
	r11.s64 = ctx.r5.s64 + 18768;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,18768
	ctx.r5.s64 = ctx.r7.s64 + 18768;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r5.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r4,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r4.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,18048
	ctx.r4.s64 = r11.s64 + 18048;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,24072
	ctx.r8.s64 = ctx.r10.s64 + 24072;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,24072
	ctx.r10.s64 = ctx.r4.s64 + 24072;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r8,-28592
	ctx.r4.s64 = ctx.r8.s64 + -28592;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r7,18936
	ctx.r5.s64 = ctx.r7.s64 + 18936;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,18936
	ctx.r7.s64 = ctx.r9.s64 + 18936;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r7.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r4,18060
	ctx.r4.s64 = ctx.r4.s64 + 18060;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,24216
	ctx.r9.s64 = r11.s64 + 24216;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,24216
	r11.s64 = ctx.r5.s64 + 24216;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r9,-28596
	ctx.r4.s64 = ctx.r9.s64 + -28596;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r6,r8,19104
	ctx.r6.s64 = ctx.r8.s64 + 19104;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,19104
	ctx.r9.s64 = r11.s64 + 19104;
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r8,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r8.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r7,18052
	ctx.r4.s64 = ctx.r7.s64 + 18052;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r6,24360
	ctx.r4.s64 = ctx.r6.s64 + 24360;
	// addi r11,r5,20288
	r11.s64 = ctx.r5.s64 + 20288;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,24360
	ctx.r6.s64 = ctx.r8.s64 + 24360;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r4,-28600
	ctx.r4.s64 = ctx.r4.s64 + -28600;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,19272
	ctx.r9.s64 = r11.s64 + 19272;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,19272
	r11.s64 = ctx.r5.s64 + 19272;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r9,18056
	ctx.r4.s64 = ctx.r9.s64 + 18056;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,24504
	ctx.r6.s64 = ctx.r8.s64 + 24504;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,24504
	ctx.r8.s64 = ctx.r10.s64 + 24504;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r6,-28604
	ctx.r4.s64 = ctx.r6.s64 + -28604;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,17048
	r11.s64 = ctx.r5.s64 + 17048;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,17048
	ctx.r5.s64 = ctx.r7.s64 + 17048;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r4.u32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-28608
	ctx.r4.s64 = r11.s64 + -28608;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,17184
	ctx.r8.s64 = ctx.r10.s64 + 17184;
	// addi r5,r9,20288
	ctx.r5.s64 = ctx.r9.s64 + 20288;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// lis r11,-32189
	r11.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,17184
	ctx.r9.s64 = r11.s64 + 17184;
	// and r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stw r9,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r9.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r10.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r8,-28612
	ctx.r4.s64 = ctx.r8.s64 + -28612;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r7,23112
	ctx.r5.s64 = ctx.r7.s64 + 23112;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,23112
	ctx.r7.s64 = ctx.r9.s64 + 23112;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r6,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r4,-28616
	ctx.r4.s64 = ctx.r4.s64 + -28616;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,17320
	ctx.r9.s64 = r11.s64 + 17320;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,17320
	r11.s64 = ctx.r5.s64 + 17320;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r9,-28620
	ctx.r4.s64 = ctx.r9.s64 + -28620;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,17456
	ctx.r6.s64 = ctx.r8.s64 + 17456;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,17456
	ctx.r8.s64 = ctx.r10.s64 + 17456;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r8.u32);
	// stw r7,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r7.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r4,r6,-28624
	ctx.r4.s64 = ctx.r6.s64 + -28624;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,17592
	r11.s64 = ctx.r5.s64 + 17592;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,17592
	ctx.r5.s64 = ctx.r7.s64 + 17592;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r5.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r4.u32);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-28628
	ctx.r4.s64 = r11.s64 + -28628;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,17728
	ctx.r8.s64 = ctx.r10.s64 + 17728;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,17728
	ctx.r10.s64 = ctx.r4.s64 + 17728;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r9.u32);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r8,-28632
	ctx.r4.s64 = ctx.r8.s64 + -28632;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r7,19440
	ctx.r5.s64 = ctx.r7.s64 + 19440;
	// addi r4,r6,20288
	ctx.r4.s64 = ctx.r6.s64 + 20288;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r9,19440
	ctx.r7.s64 = ctx.r9.s64 + 19440;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r7,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r7.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r6,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r6.u32);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r4,18024
	ctx.r4.s64 = ctx.r4.s64 + 18024;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,24648
	ctx.r9.s64 = r11.s64 + 24648;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,24648
	r11.s64 = ctx.r5.s64 + 24648;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r10.u32);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r9,-28636
	ctx.r4.s64 = ctx.r9.s64 + -28636;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,19608
	ctx.r6.s64 = ctx.r8.s64 + 19608;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,19608
	ctx.r8.s64 = ctx.r10.s64 + 19608;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r8.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// stw r7,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r7.u32);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r6,18020
	ctx.r4.s64 = ctx.r6.s64 + 18020;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// addi r3,r5,24792
	ctx.r3.s64 = ctx.r5.s64 + 24792;
	// addi r11,r4,20288
	r11.s64 = ctx.r4.s64 + 20288;
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,24792
	ctx.r6.s64 = ctx.r8.s64 + 24792;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// addi r4,r4,-28640
	ctx.r4.s64 = ctx.r4.s64 + -28640;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r11,-32189
	r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,19776
	ctx.r9.s64 = r11.s64 + 19776;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,19776
	r11.s64 = ctx.r5.s64 + 19776;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r11.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r10,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r10.u32);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r9,18016
	ctx.r4.s64 = ctx.r9.s64 + 18016;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r8,19944
	ctx.r6.s64 = ctx.r8.s64 + 19944;
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,19944
	ctx.r8.s64 = ctx.r10.s64 + 19944;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r8.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// stw r7,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r7.u32);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r6,18080
	ctx.r4.s64 = ctx.r6.s64 + 18080;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r5,20112
	r11.s64 = ctx.r5.s64 + 20112;
	// addi r10,r4,20288
	ctx.r10.s64 = ctx.r4.s64 + 20288;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,20112
	ctx.r5.s64 = ctx.r7.s64 + 20112;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r5.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r4,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r4.u32);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,18012
	ctx.r4.s64 = r11.s64 + 18012;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,24952
	ctx.r8.s64 = ctx.r10.s64 + 24952;
	// addi r7,r9,20288
	ctx.r7.s64 = ctx.r9.s64 + 20288;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r4,24952
	ctx.r10.s64 = ctx.r4.s64 + 24952;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r9.u32);
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// addi r4,r8,-28644
	ctx.r4.s64 = ctx.r8.s64 + -28644;
	// bl 0x826ec638
	sub_826EC638(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432BF4"))) PPC_WEAK_FUNC(sub_82432BF4);
PPC_FUNC_IMPL(__imp__sub_82432BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432BF8"))) PPC_WEAK_FUNC(sub_82432BF8);
PPC_FUNC_IMPL(__imp__sub_82432BF8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28376
	ctx.r10.s64 = r11.s64 + -28376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826ebe00
	sub_826EBE00(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82432c3c
	if (cr6.eq) goto loc_82432C3C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82432C3C:
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

__attribute__((alias("__imp__sub_82432C50"))) PPC_WEAK_FUNC(sub_82432C50);
PPC_FUNC_IMPL(__imp__sub_82432C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432C54"))) PPC_WEAK_FUNC(sub_82432C54);
PPC_FUNC_IMPL(__imp__sub_82432C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82432C58"))) PPC_WEAK_FUNC(sub_82432C58);
PPC_FUNC_IMPL(__imp__sub_82432C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432C70"))) PPC_WEAK_FUNC(sub_82432C70);
PPC_FUNC_IMPL(__imp__sub_82432C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432C88"))) PPC_WEAK_FUNC(sub_82432C88);
PPC_FUNC_IMPL(__imp__sub_82432C88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82432cf8
	if (cr6.eq) goto loc_82432CF8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,27140
	ctx.r4.s64 = r11.s64 + 27140;
	// bl 0x824366b0
	sub_824366B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82432CF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432D0C"))) PPC_WEAK_FUNC(sub_82432D0C);
PPC_FUNC_IMPL(__imp__sub_82432D0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432D10"))) PPC_WEAK_FUNC(sub_82432D10);
PPC_FUNC_IMPL(__imp__sub_82432D10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82432d80
	if (cr6.eq) goto loc_82432D80;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29828
	ctx.r4.s64 = r11.s64 + -29828;
	// bl 0x824373e0
	sub_824373E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82432D80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432D94"))) PPC_WEAK_FUNC(sub_82432D94);
PPC_FUNC_IMPL(__imp__sub_82432D94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432D98"))) PPC_WEAK_FUNC(sub_82432D98);
PPC_FUNC_IMPL(__imp__sub_82432D98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82432e08
	if (cr6.eq) goto loc_82432E08;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29864
	ctx.r4.s64 = r11.s64 + -29864;
	// bl 0x82437608
	sub_82437608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82432E08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432E1C"))) PPC_WEAK_FUNC(sub_82432E1C);
PPC_FUNC_IMPL(__imp__sub_82432E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432E20"))) PPC_WEAK_FUNC(sub_82432E20);
PPC_FUNC_IMPL(__imp__sub_82432E20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82432e90
	if (cr6.eq) goto loc_82432E90;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28516
	ctx.r4.s64 = r11.s64 + -28516;
	// bl 0x822b0120
	sub_822B0120(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82432E90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432EA4"))) PPC_WEAK_FUNC(sub_82432EA4);
PPC_FUNC_IMPL(__imp__sub_82432EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432EA8"))) PPC_WEAK_FUNC(sub_82432EA8);
PPC_FUNC_IMPL(__imp__sub_82432EA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82432f18
	if (cr6.eq) goto loc_82432F18;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28732
	ctx.r4.s64 = r11.s64 + -28732;
	// bl 0x82437d68
	sub_82437D68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82432F18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432F2C"))) PPC_WEAK_FUNC(sub_82432F2C);
PPC_FUNC_IMPL(__imp__sub_82432F2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432F30"))) PPC_WEAK_FUNC(sub_82432F30);
PPC_FUNC_IMPL(__imp__sub_82432F30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82432fa0
	if (cr6.eq) goto loc_82432FA0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29792
	ctx.r4.s64 = r11.s64 + -29792;
	// bl 0x82437e90
	sub_82437E90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82432FA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82432FB4"))) PPC_WEAK_FUNC(sub_82432FB4);
PPC_FUNC_IMPL(__imp__sub_82432FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82432FB8"))) PPC_WEAK_FUNC(sub_82432FB8);
PPC_FUNC_IMPL(__imp__sub_82432FB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433028
	if (cr6.eq) goto loc_82433028;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29916
	ctx.r4.s64 = r11.s64 + -29916;
	// bl 0x82437c08
	sub_82437C08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82433028:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8243303C"))) PPC_WEAK_FUNC(sub_8243303C);
PPC_FUNC_IMPL(__imp__sub_8243303C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433040"))) PPC_WEAK_FUNC(sub_82433040);
PPC_FUNC_IMPL(__imp__sub_82433040) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824330c8
	if (cr6.eq) goto loc_824330C8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,18004
	ctx.r4.s64 = r11.s64 + 18004;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28744
	ctx.r8.s64 = ctx.r9.s64 + -28744;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x824330cc
	goto loc_824330CC;
loc_824330C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824330CC:
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

__attribute__((alias("__imp__sub_824330E0"))) PPC_WEAK_FUNC(sub_824330E0);
PPC_FUNC_IMPL(__imp__sub_824330E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824330E4"))) PPC_WEAK_FUNC(sub_824330E4);
PPC_FUNC_IMPL(__imp__sub_824330E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824330E8"))) PPC_WEAK_FUNC(sub_824330E8);
PPC_FUNC_IMPL(__imp__sub_824330E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433170
	if (cr6.eq) goto loc_82433170;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,18000
	ctx.r4.s64 = r11.s64 + 18000;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28704
	ctx.r8.s64 = ctx.r9.s64 + -28704;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433174
	goto loc_82433174;
loc_82433170:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433174:
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

__attribute__((alias("__imp__sub_82433188"))) PPC_WEAK_FUNC(sub_82433188);
PPC_FUNC_IMPL(__imp__sub_82433188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243318C"))) PPC_WEAK_FUNC(sub_8243318C);
PPC_FUNC_IMPL(__imp__sub_8243318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433190"))) PPC_WEAK_FUNC(sub_82433190);
PPC_FUNC_IMPL(__imp__sub_82433190) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433200
	if (cr6.eq) goto loc_82433200;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,27104
	ctx.r4.s64 = r11.s64 + 27104;
	// bl 0x82438098
	sub_82438098(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82433200:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82433214"))) PPC_WEAK_FUNC(sub_82433214);
PPC_FUNC_IMPL(__imp__sub_82433214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433218"))) PPC_WEAK_FUNC(sub_82433218);
PPC_FUNC_IMPL(__imp__sub_82433218) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824332a0
	if (cr6.eq) goto loc_824332A0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,17996
	ctx.r4.s64 = r11.s64 + 17996;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28664
	ctx.r8.s64 = ctx.r9.s64 + -28664;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x824332a4
	goto loc_824332A4;
loc_824332A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824332A4:
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

__attribute__((alias("__imp__sub_824332B8"))) PPC_WEAK_FUNC(sub_824332B8);
PPC_FUNC_IMPL(__imp__sub_824332B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824332BC"))) PPC_WEAK_FUNC(sub_824332BC);
PPC_FUNC_IMPL(__imp__sub_824332BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824332C0"))) PPC_WEAK_FUNC(sub_824332C0);
PPC_FUNC_IMPL(__imp__sub_824332C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433348
	if (cr6.eq) goto loc_82433348;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,17992
	ctx.r4.s64 = r11.s64 + 17992;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28624
	ctx.r8.s64 = ctx.r9.s64 + -28624;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x8243334c
	goto loc_8243334C;
loc_82433348:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8243334C:
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

__attribute__((alias("__imp__sub_82433360"))) PPC_WEAK_FUNC(sub_82433360);
PPC_FUNC_IMPL(__imp__sub_82433360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433364"))) PPC_WEAK_FUNC(sub_82433364);
PPC_FUNC_IMPL(__imp__sub_82433364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433368"))) PPC_WEAK_FUNC(sub_82433368);
PPC_FUNC_IMPL(__imp__sub_82433368) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824333f0
	if (cr6.eq) goto loc_824333F0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,17984
	ctx.r4.s64 = r11.s64 + 17984;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28584
	ctx.r8.s64 = ctx.r9.s64 + -28584;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x824333f4
	goto loc_824333F4;
loc_824333F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824333F4:
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

__attribute__((alias("__imp__sub_82433408"))) PPC_WEAK_FUNC(sub_82433408);
PPC_FUNC_IMPL(__imp__sub_82433408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243340C"))) PPC_WEAK_FUNC(sub_8243340C);
PPC_FUNC_IMPL(__imp__sub_8243340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433410"))) PPC_WEAK_FUNC(sub_82433410);
PPC_FUNC_IMPL(__imp__sub_82433410) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433498
	if (cr6.eq) goto loc_82433498;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,18008
	ctx.r4.s64 = r11.s64 + 18008;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28784
	ctx.r8.s64 = ctx.r9.s64 + -28784;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x8243349c
	goto loc_8243349C;
loc_82433498:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8243349C:
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

__attribute__((alias("__imp__sub_824334B0"))) PPC_WEAK_FUNC(sub_824334B0);
PPC_FUNC_IMPL(__imp__sub_824334B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824334B4"))) PPC_WEAK_FUNC(sub_824334B4);
PPC_FUNC_IMPL(__imp__sub_824334B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824334B8"))) PPC_WEAK_FUNC(sub_824334B8);
PPC_FUNC_IMPL(__imp__sub_824334B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433540
	if (cr6.eq) goto loc_82433540;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29904
	ctx.r4.s64 = r11.s64 + -29904;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28904
	ctx.r8.s64 = ctx.r9.s64 + -28904;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433544
	goto loc_82433544;
loc_82433540:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433544:
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

__attribute__((alias("__imp__sub_82433558"))) PPC_WEAK_FUNC(sub_82433558);
PPC_FUNC_IMPL(__imp__sub_82433558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243355C"))) PPC_WEAK_FUNC(sub_8243355C);
PPC_FUNC_IMPL(__imp__sub_8243355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433560"))) PPC_WEAK_FUNC(sub_82433560);
PPC_FUNC_IMPL(__imp__sub_82433560) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824335e8
	if (cr6.eq) goto loc_824335E8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29908
	ctx.r4.s64 = r11.s64 + -29908;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28864
	ctx.r8.s64 = ctx.r9.s64 + -28864;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x824335ec
	goto loc_824335EC;
loc_824335E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824335EC:
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

__attribute__((alias("__imp__sub_82433600"))) PPC_WEAK_FUNC(sub_82433600);
PPC_FUNC_IMPL(__imp__sub_82433600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433604"))) PPC_WEAK_FUNC(sub_82433604);
PPC_FUNC_IMPL(__imp__sub_82433604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433608"))) PPC_WEAK_FUNC(sub_82433608);
PPC_FUNC_IMPL(__imp__sub_82433608) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433690
	if (cr6.eq) goto loc_82433690;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29900
	ctx.r4.s64 = r11.s64 + -29900;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28824
	ctx.r8.s64 = ctx.r9.s64 + -28824;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433694
	goto loc_82433694;
loc_82433690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433694:
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

__attribute__((alias("__imp__sub_824336A8"))) PPC_WEAK_FUNC(sub_824336A8);
PPC_FUNC_IMPL(__imp__sub_824336A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824336AC"))) PPC_WEAK_FUNC(sub_824336AC);
PPC_FUNC_IMPL(__imp__sub_824336AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824336B0"))) PPC_WEAK_FUNC(sub_824336B0);
PPC_FUNC_IMPL(__imp__sub_824336B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433720
	if (cr6.eq) goto loc_82433720;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29988
	ctx.r4.s64 = r11.s64 + -29988;
	// bl 0x82437fb0
	sub_82437FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82433720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82433734"))) PPC_WEAK_FUNC(sub_82433734);
PPC_FUNC_IMPL(__imp__sub_82433734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433738"))) PPC_WEAK_FUNC(sub_82433738);
PPC_FUNC_IMPL(__imp__sub_82433738) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824337a8
	if (cr6.eq) goto loc_824337A8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28728
	ctx.r4.s64 = r11.s64 + -28728;
	// bl 0x824370d8
	sub_824370D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824337A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824337BC"))) PPC_WEAK_FUNC(sub_824337BC);
PPC_FUNC_IMPL(__imp__sub_824337BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824337C0"))) PPC_WEAK_FUNC(sub_824337C0);
PPC_FUNC_IMPL(__imp__sub_824337C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433848
	if (cr6.eq) goto loc_82433848;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29772
	ctx.r4.s64 = r11.s64 + -29772;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28984
	ctx.r8.s64 = ctx.r9.s64 + -28984;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x8243384c
	goto loc_8243384C;
loc_82433848:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8243384C:
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

__attribute__((alias("__imp__sub_82433860"))) PPC_WEAK_FUNC(sub_82433860);
PPC_FUNC_IMPL(__imp__sub_82433860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433864"))) PPC_WEAK_FUNC(sub_82433864);
PPC_FUNC_IMPL(__imp__sub_82433864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433868"))) PPC_WEAK_FUNC(sub_82433868);
PPC_FUNC_IMPL(__imp__sub_82433868) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824338d8
	if (cr6.eq) goto loc_824338D8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28520
	ctx.r4.s64 = r11.s64 + -28520;
	// bl 0x82438330
	sub_82438330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824338D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824338EC"))) PPC_WEAK_FUNC(sub_824338EC);
PPC_FUNC_IMPL(__imp__sub_824338EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824338F0"))) PPC_WEAK_FUNC(sub_824338F0);
PPC_FUNC_IMPL(__imp__sub_824338F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433960
	if (cr6.eq) goto loc_82433960;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28904
	ctx.r4.s64 = r11.s64 + -28904;
	// bl 0x82438258
	sub_82438258(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82433960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82433974"))) PPC_WEAK_FUNC(sub_82433974);
PPC_FUNC_IMPL(__imp__sub_82433974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433978"))) PPC_WEAK_FUNC(sub_82433978);
PPC_FUNC_IMPL(__imp__sub_82433978) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824339e8
	if (cr6.eq) goto loc_824339E8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28524
	ctx.r4.s64 = r11.s64 + -28524;
	// bl 0x82438180
	sub_82438180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824339E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824339FC"))) PPC_WEAK_FUNC(sub_824339FC);
PPC_FUNC_IMPL(__imp__sub_824339FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433A00"))) PPC_WEAK_FUNC(sub_82433A00);
PPC_FUNC_IMPL(__imp__sub_82433A00) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433a88
	if (cr6.eq) goto loc_82433A88;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28736
	ctx.r4.s64 = r11.s64 + -28736;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28544
	ctx.r8.s64 = ctx.r9.s64 + -28544;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433a8c
	goto loc_82433A8C;
loc_82433A88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433A8C:
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

__attribute__((alias("__imp__sub_82433AA0"))) PPC_WEAK_FUNC(sub_82433AA0);
PPC_FUNC_IMPL(__imp__sub_82433AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433AA4"))) PPC_WEAK_FUNC(sub_82433AA4);
PPC_FUNC_IMPL(__imp__sub_82433AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433AA8"))) PPC_WEAK_FUNC(sub_82433AA8);
PPC_FUNC_IMPL(__imp__sub_82433AA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433b30
	if (cr6.eq) goto loc_82433B30;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-29912
	ctx.r4.s64 = r11.s64 + -29912;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28504
	ctx.r8.s64 = ctx.r9.s64 + -28504;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433b34
	goto loc_82433B34;
loc_82433B30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433B34:
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

__attribute__((alias("__imp__sub_82433B48"))) PPC_WEAK_FUNC(sub_82433B48);
PPC_FUNC_IMPL(__imp__sub_82433B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433B4C"))) PPC_WEAK_FUNC(sub_82433B4C);
PPC_FUNC_IMPL(__imp__sub_82433B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433B50"))) PPC_WEAK_FUNC(sub_82433B50);
PPC_FUNC_IMPL(__imp__sub_82433B50) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433bd8
	if (cr6.eq) goto loc_82433BD8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28528
	ctx.r4.s64 = r11.s64 + -28528;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28464
	ctx.r8.s64 = ctx.r9.s64 + -28464;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433bdc
	goto loc_82433BDC;
loc_82433BD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433BDC:
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

__attribute__((alias("__imp__sub_82433BF0"))) PPC_WEAK_FUNC(sub_82433BF0);
PPC_FUNC_IMPL(__imp__sub_82433BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433BF4"))) PPC_WEAK_FUNC(sub_82433BF4);
PPC_FUNC_IMPL(__imp__sub_82433BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433BF8"))) PPC_WEAK_FUNC(sub_82433BF8);
PPC_FUNC_IMPL(__imp__sub_82433BF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433c80
	if (cr6.eq) goto loc_82433C80;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-28532
	ctx.r4.s64 = r11.s64 + -28532;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28944
	ctx.r8.s64 = ctx.r9.s64 + -28944;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433c84
	goto loc_82433C84;
loc_82433C80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433C84:
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

__attribute__((alias("__imp__sub_82433C98"))) PPC_WEAK_FUNC(sub_82433C98);
PPC_FUNC_IMPL(__imp__sub_82433C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433C9C"))) PPC_WEAK_FUNC(sub_82433C9C);
PPC_FUNC_IMPL(__imp__sub_82433C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433CA0"))) PPC_WEAK_FUNC(sub_82433CA0);
PPC_FUNC_IMPL(__imp__sub_82433CA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-28360
	ctx.r7.s64 = ctx.r10.s64 + -28360;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82433d28
	if (cr6.eq) goto loc_82433D28;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,17988
	ctx.r4.s64 = r11.s64 + 17988;
	// bl 0x826e7dd8
	sub_826E7DD8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28424
	ctx.r8.s64 = ctx.r9.s64 + -28424;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x82433d2c
	goto loc_82433D2C;
loc_82433D28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82433D2C:
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

__attribute__((alias("__imp__sub_82433D40"))) PPC_WEAK_FUNC(sub_82433D40);
PPC_FUNC_IMPL(__imp__sub_82433D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433D44"))) PPC_WEAK_FUNC(sub_82433D44);
PPC_FUNC_IMPL(__imp__sub_82433D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433D48"))) PPC_WEAK_FUNC(sub_82433D48);
PPC_FUNC_IMPL(__imp__sub_82433D48) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,36
	ctx.r3.s64 = 36;
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
	// beq cr6,0x82433db4
	if (cr6.eq) goto loc_82433DB4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28536
	ctx.r4.s64 = r11.s64 + -28536;
	// bl 0x82438428
	sub_82438428(ctx, base);
	// b 0x82433db8
	goto loc_82433DB8;
loc_82433DB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82433DB8:
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

__attribute__((alias("__imp__sub_82433DCC"))) PPC_WEAK_FUNC(sub_82433DCC);
PPC_FUNC_IMPL(__imp__sub_82433DCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433DD0"))) PPC_WEAK_FUNC(sub_82433DD0);
PPC_FUNC_IMPL(__imp__sub_82433DD0) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,36
	ctx.r3.s64 = 36;
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
	// beq cr6,0x82433e3c
	if (cr6.eq) goto loc_82433E3C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28540
	ctx.r4.s64 = r11.s64 + -28540;
	// bl 0x824387d8
	sub_824387D8(ctx, base);
	// b 0x82433e40
	goto loc_82433E40;
loc_82433E3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82433E40:
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

__attribute__((alias("__imp__sub_82433E54"))) PPC_WEAK_FUNC(sub_82433E54);
PPC_FUNC_IMPL(__imp__sub_82433E54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433E58"))) PPC_WEAK_FUNC(sub_82433E58);
PPC_FUNC_IMPL(__imp__sub_82433E58) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,104
	ctx.r3.s64 = 104;
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
	// beq cr6,0x82433ec4
	if (cr6.eq) goto loc_82433EC4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28544
	ctx.r4.s64 = r11.s64 + -28544;
	// bl 0x82438cc0
	sub_82438CC0(ctx, base);
	// b 0x82433ec8
	goto loc_82433EC8;
loc_82433EC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82433EC8:
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

__attribute__((alias("__imp__sub_82433EDC"))) PPC_WEAK_FUNC(sub_82433EDC);
PPC_FUNC_IMPL(__imp__sub_82433EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433EE0"))) PPC_WEAK_FUNC(sub_82433EE0);
PPC_FUNC_IMPL(__imp__sub_82433EE0) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,36
	ctx.r3.s64 = 36;
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
	// beq cr6,0x82433f4c
	if (cr6.eq) goto loc_82433F4C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,17744
	ctx.r4.s64 = r11.s64 + 17744;
	// bl 0x822b0440
	sub_822B0440(ctx, base);
	// b 0x82433f50
	goto loc_82433F50;
loc_82433F4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82433F50:
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

__attribute__((alias("__imp__sub_82433F64"))) PPC_WEAK_FUNC(sub_82433F64);
PPC_FUNC_IMPL(__imp__sub_82433F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433F68"))) PPC_WEAK_FUNC(sub_82433F68);
PPC_FUNC_IMPL(__imp__sub_82433F68) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x82433fd4
	if (cr6.eq) goto loc_82433FD4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28548
	ctx.r4.s64 = r11.s64 + -28548;
	// bl 0x82439128
	sub_82439128(ctx, base);
	// b 0x82433fd8
	goto loc_82433FD8;
loc_82433FD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82433FD8:
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

__attribute__((alias("__imp__sub_82433FEC"))) PPC_WEAK_FUNC(sub_82433FEC);
PPC_FUNC_IMPL(__imp__sub_82433FEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82433FF0"))) PPC_WEAK_FUNC(sub_82433FF0);
PPC_FUNC_IMPL(__imp__sub_82433FF0) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,132
	ctx.r3.s64 = 132;
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
	// beq cr6,0x8243405c
	if (cr6.eq) goto loc_8243405C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28552
	ctx.r4.s64 = r11.s64 + -28552;
	// bl 0x8243a0f8
	sub_8243A0F8(ctx, base);
	// b 0x82434060
	goto loc_82434060;
loc_8243405C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434060:
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

__attribute__((alias("__imp__sub_82434074"))) PPC_WEAK_FUNC(sub_82434074);
PPC_FUNC_IMPL(__imp__sub_82434074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434078"))) PPC_WEAK_FUNC(sub_82434078);
PPC_FUNC_IMPL(__imp__sub_82434078) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,48
	ctx.r3.s64 = 48;
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
	// beq cr6,0x824340e4
	if (cr6.eq) goto loc_824340E4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28556
	ctx.r4.s64 = r11.s64 + -28556;
	// bl 0x82439288
	sub_82439288(ctx, base);
	// b 0x824340e8
	goto loc_824340E8;
loc_824340E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824340E8:
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

__attribute__((alias("__imp__sub_824340FC"))) PPC_WEAK_FUNC(sub_824340FC);
PPC_FUNC_IMPL(__imp__sub_824340FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434100"))) PPC_WEAK_FUNC(sub_82434100);
PPC_FUNC_IMPL(__imp__sub_82434100) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,140
	ctx.r3.s64 = 140;
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
	// beq cr6,0x8243416c
	if (cr6.eq) goto loc_8243416C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28560
	ctx.r4.s64 = r11.s64 + -28560;
	// bl 0x8243a6d8
	sub_8243A6D8(ctx, base);
	// b 0x82434170
	goto loc_82434170;
loc_8243416C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434170:
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

__attribute__((alias("__imp__sub_82434184"))) PPC_WEAK_FUNC(sub_82434184);
PPC_FUNC_IMPL(__imp__sub_82434184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434188"))) PPC_WEAK_FUNC(sub_82434188);
PPC_FUNC_IMPL(__imp__sub_82434188) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,36
	ctx.r3.s64 = 36;
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
	// beq cr6,0x824341f4
	if (cr6.eq) goto loc_824341F4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28564
	ctx.r4.s64 = r11.s64 + -28564;
	// bl 0x82438f48
	sub_82438F48(ctx, base);
	// b 0x824341f8
	goto loc_824341F8;
loc_824341F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824341F8:
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

__attribute__((alias("__imp__sub_8243420C"))) PPC_WEAK_FUNC(sub_8243420C);
PPC_FUNC_IMPL(__imp__sub_8243420C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434210"))) PPC_WEAK_FUNC(sub_82434210);
PPC_FUNC_IMPL(__imp__sub_82434210) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
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
	// beq cr6,0x8243427c
	if (cr6.eq) goto loc_8243427C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28576
	ctx.r4.s64 = r11.s64 + -28576;
	// bl 0x82439918
	sub_82439918(ctx, base);
	// b 0x82434280
	goto loc_82434280;
loc_8243427C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434280:
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

__attribute__((alias("__imp__sub_82434294"))) PPC_WEAK_FUNC(sub_82434294);
PPC_FUNC_IMPL(__imp__sub_82434294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434298"))) PPC_WEAK_FUNC(sub_82434298);
PPC_FUNC_IMPL(__imp__sub_82434298) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
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
	// beq cr6,0x82434304
	if (cr6.eq) goto loc_82434304;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28608
	ctx.r4.s64 = r11.s64 + -28608;
	// bl 0x82439748
	sub_82439748(ctx, base);
	// b 0x82434308
	goto loc_82434308;
loc_82434304:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434308:
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

__attribute__((alias("__imp__sub_8243431C"))) PPC_WEAK_FUNC(sub_8243431C);
PPC_FUNC_IMPL(__imp__sub_8243431C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434320"))) PPC_WEAK_FUNC(sub_82434320);
PPC_FUNC_IMPL(__imp__sub_82434320) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
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
	// beq cr6,0x8243438c
	if (cr6.eq) goto loc_8243438C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28612
	ctx.r4.s64 = r11.s64 + -28612;
	// bl 0x824386c0
	sub_824386C0(ctx, base);
	// b 0x82434390
	goto loc_82434390;
loc_8243438C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434390:
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

__attribute__((alias("__imp__sub_824343A4"))) PPC_WEAK_FUNC(sub_824343A4);
PPC_FUNC_IMPL(__imp__sub_824343A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824343A8"))) PPC_WEAK_FUNC(sub_824343A8);
PPC_FUNC_IMPL(__imp__sub_824343A8) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,124
	ctx.r3.s64 = 124;
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
	// beq cr6,0x82434414
	if (cr6.eq) goto loc_82434414;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28620
	ctx.r4.s64 = r11.s64 + -28620;
	// bl 0x8243a3b0
	sub_8243A3B0(ctx, base);
	// b 0x82434418
	goto loc_82434418;
loc_82434414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434418:
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

__attribute__((alias("__imp__sub_8243442C"))) PPC_WEAK_FUNC(sub_8243442C);
PPC_FUNC_IMPL(__imp__sub_8243442C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434430"))) PPC_WEAK_FUNC(sub_82434430);
PPC_FUNC_IMPL(__imp__sub_82434430) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x8243449c
	if (cr6.eq) goto loc_8243449C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28624
	ctx.r4.s64 = r11.s64 + -28624;
	// bl 0x82439dd0
	sub_82439DD0(ctx, base);
	// b 0x824344a0
	goto loc_824344A0;
loc_8243449C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824344A0:
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

__attribute__((alias("__imp__sub_824344B4"))) PPC_WEAK_FUNC(sub_824344B4);
PPC_FUNC_IMPL(__imp__sub_824344B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824344B8"))) PPC_WEAK_FUNC(sub_824344B8);
PPC_FUNC_IMPL(__imp__sub_824344B8) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x82434524
	if (cr6.eq) goto loc_82434524;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28628
	ctx.r4.s64 = r11.s64 + -28628;
	// bl 0x82439c60
	sub_82439C60(ctx, base);
	// b 0x82434528
	goto loc_82434528;
loc_82434524:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82434528:
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

__attribute__((alias("__imp__sub_8243453C"))) PPC_WEAK_FUNC(sub_8243453C);
PPC_FUNC_IMPL(__imp__sub_8243453C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434540"))) PPC_WEAK_FUNC(sub_82434540);
PPC_FUNC_IMPL(__imp__sub_82434540) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x824345ac
	if (cr6.eq) goto loc_824345AC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28632
	ctx.r4.s64 = r11.s64 + -28632;
	// bl 0x82439af0
	sub_82439AF0(ctx, base);
	// b 0x824345b0
	goto loc_824345B0;
loc_824345AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824345B0:
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

__attribute__((alias("__imp__sub_824345C4"))) PPC_WEAK_FUNC(sub_824345C4);
PPC_FUNC_IMPL(__imp__sub_824345C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824345C8"))) PPC_WEAK_FUNC(sub_824345C8);
PPC_FUNC_IMPL(__imp__sub_824345C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824345E4"))) PPC_WEAK_FUNC(sub_824345E4);
PPC_FUNC_IMPL(__imp__sub_824345E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824345E8"))) PPC_WEAK_FUNC(sub_824345E8);
PPC_FUNC_IMPL(__imp__sub_824345E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434604"))) PPC_WEAK_FUNC(sub_82434604);
PPC_FUNC_IMPL(__imp__sub_82434604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434608"))) PPC_WEAK_FUNC(sub_82434608);
PPC_FUNC_IMPL(__imp__sub_82434608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824346a0
	if (cr6.eq) goto loc_824346A0;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,18044
	ctx.r4.s64 = r30.s64 + 18044;
	// bl 0x826e8350
	sub_826E8350(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,3100
	ctx.r9.s64 = ctx.r10.s64 + 3100;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,18044(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18044);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_824346A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824346A8"))) PPC_WEAK_FUNC(sub_824346A8);
PPC_FUNC_IMPL(__imp__sub_824346A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824346AC"))) PPC_WEAK_FUNC(sub_824346AC);
PPC_FUNC_IMPL(__imp__sub_824346AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824346B0"))) PPC_WEAK_FUNC(sub_824346B0);
PPC_FUNC_IMPL(__imp__sub_824346B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82434748
	if (cr6.eq) goto loc_82434748;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,18040
	ctx.r4.s64 = r30.s64 + 18040;
	// bl 0x826e8350
	sub_826E8350(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,3132
	ctx.r9.s64 = ctx.r10.s64 + 3132;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,18040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18040);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_82434748:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82434750"))) PPC_WEAK_FUNC(sub_82434750);
PPC_FUNC_IMPL(__imp__sub_82434750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82434754"))) PPC_WEAK_FUNC(sub_82434754);
PPC_FUNC_IMPL(__imp__sub_82434754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434758"))) PPC_WEAK_FUNC(sub_82434758);
PPC_FUNC_IMPL(__imp__sub_82434758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824347f0
	if (cr6.eq) goto loc_824347F0;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,18036
	ctx.r4.s64 = r30.s64 + 18036;
	// bl 0x826e8350
	sub_826E8350(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,3164
	ctx.r9.s64 = ctx.r10.s64 + 3164;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,18036(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18036);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_824347F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824347F8"))) PPC_WEAK_FUNC(sub_824347F8);
PPC_FUNC_IMPL(__imp__sub_824347F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824347FC"))) PPC_WEAK_FUNC(sub_824347FC);
PPC_FUNC_IMPL(__imp__sub_824347FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434800"))) PPC_WEAK_FUNC(sub_82434800);
PPC_FUNC_IMPL(__imp__sub_82434800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82434898
	if (cr6.eq) goto loc_82434898;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,18032
	ctx.r4.s64 = r30.s64 + 18032;
	// bl 0x826e8350
	sub_826E8350(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,3196
	ctx.r9.s64 = ctx.r10.s64 + 3196;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,18032(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18032);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_82434898:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824348A0"))) PPC_WEAK_FUNC(sub_824348A0);
PPC_FUNC_IMPL(__imp__sub_824348A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824348A4"))) PPC_WEAK_FUNC(sub_824348A4);
PPC_FUNC_IMPL(__imp__sub_824348A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824348A8"))) PPC_WEAK_FUNC(sub_824348A8);
PPC_FUNC_IMPL(__imp__sub_824348A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-28216
	ctx.r7.s64 = ctx.r10.s64 + -28216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82434940
	if (cr6.eq) goto loc_82434940;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,18028
	ctx.r4.s64 = r30.s64 + 18028;
	// bl 0x826e8350
	sub_826E8350(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,3228
	ctx.r9.s64 = ctx.r10.s64 + 3228;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,18028(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 18028);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_82434940:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

