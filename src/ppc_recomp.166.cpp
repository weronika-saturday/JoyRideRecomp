#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825C2508"))) PPC_WEAK_FUNC(sub_825C2508);
PPC_FUNC_IMPL(__imp__sub_825C2508) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// lwz r11,20036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20036);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x825c255c
	if (cr6.eq) goto loc_825C255C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2560
	if (!cr6.eq) goto loc_825C2560;
loc_825C255C:
	// li r11,0
	r11.s64 = 0;
loc_825C2560:
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
	// beq cr6,0x825c25ac
	if (cr6.eq) goto loc_825C25AC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c25ac
	if (!cr6.eq) goto loc_825C25AC;
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
loc_825C25AC:
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

__attribute__((alias("__imp__sub_825C25C0"))) PPC_WEAK_FUNC(sub_825C25C0);
PPC_FUNC_IMPL(__imp__sub_825C25C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C25C4"))) PPC_WEAK_FUNC(sub_825C25C4);
PPC_FUNC_IMPL(__imp__sub_825C25C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C25C8"))) PPC_WEAK_FUNC(sub_825C25C8);
PPC_FUNC_IMPL(__imp__sub_825C25C8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,20036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20036);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c261c
	if (cr6.eq) goto loc_825C261C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2620
	if (!cr6.eq) goto loc_825C2620;
loc_825C261C:
	// li r11,0
	r11.s64 = 0;
loc_825C2620:
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
	// beq cr6,0x825c266c
	if (cr6.eq) goto loc_825C266C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c266c
	if (!cr6.eq) goto loc_825C266C;
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
loc_825C266C:
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

__attribute__((alias("__imp__sub_825C2680"))) PPC_WEAK_FUNC(sub_825C2680);
PPC_FUNC_IMPL(__imp__sub_825C2680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2684"))) PPC_WEAK_FUNC(sub_825C2684);
PPC_FUNC_IMPL(__imp__sub_825C2684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2688"))) PPC_WEAK_FUNC(sub_825C2688);
PPC_FUNC_IMPL(__imp__sub_825C2688) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// lwz r11,20028(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20028);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x825c26d8
	if (cr6.eq) goto loc_825C26D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c26dc
	if (!cr6.eq) goto loc_825C26DC;
loc_825C26D8:
	// li r11,0
	r11.s64 = 0;
loc_825C26DC:
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
	// beq cr6,0x825c2728
	if (cr6.eq) goto loc_825C2728;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2728
	if (!cr6.eq) goto loc_825C2728;
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
loc_825C2728:
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

__attribute__((alias("__imp__sub_825C273C"))) PPC_WEAK_FUNC(sub_825C273C);
PPC_FUNC_IMPL(__imp__sub_825C273C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2740"))) PPC_WEAK_FUNC(sub_825C2740);
PPC_FUNC_IMPL(__imp__sub_825C2740) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,20028(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20028);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c2798
	if (cr6.eq) goto loc_825C2798;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c279c
	if (!cr6.eq) goto loc_825C279C;
loc_825C2798:
	// li r11,0
	r11.s64 = 0;
loc_825C279C:
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
	// beq cr6,0x825c27e8
	if (cr6.eq) goto loc_825C27E8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c27e8
	if (!cr6.eq) goto loc_825C27E8;
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
loc_825C27E8:
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

__attribute__((alias("__imp__sub_825C27FC"))) PPC_WEAK_FUNC(sub_825C27FC);
PPC_FUNC_IMPL(__imp__sub_825C27FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2800"))) PPC_WEAK_FUNC(sub_825C2800);
PPC_FUNC_IMPL(__imp__sub_825C2800) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lwz r11,20044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20044);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x825c2850
	if (cr6.eq) goto loc_825C2850;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2854
	if (!cr6.eq) goto loc_825C2854;
loc_825C2850:
	// li r11,0
	r11.s64 = 0;
loc_825C2854:
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
	// beq cr6,0x825c28a0
	if (cr6.eq) goto loc_825C28A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c28a0
	if (!cr6.eq) goto loc_825C28A0;
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
loc_825C28A0:
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

__attribute__((alias("__imp__sub_825C28B4"))) PPC_WEAK_FUNC(sub_825C28B4);
PPC_FUNC_IMPL(__imp__sub_825C28B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C28B8"))) PPC_WEAK_FUNC(sub_825C28B8);
PPC_FUNC_IMPL(__imp__sub_825C28B8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,20044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20044);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c291c
	if (cr6.eq) goto loc_825C291C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2920
	if (!cr6.eq) goto loc_825C2920;
loc_825C291C:
	// li r11,0
	r11.s64 = 0;
loc_825C2920:
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
	// beq cr6,0x825c296c
	if (cr6.eq) goto loc_825C296C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c296c
	if (!cr6.eq) goto loc_825C296C;
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
loc_825C296C:
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

__attribute__((alias("__imp__sub_825C2980"))) PPC_WEAK_FUNC(sub_825C2980);
PPC_FUNC_IMPL(__imp__sub_825C2980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2984"))) PPC_WEAK_FUNC(sub_825C2984);
PPC_FUNC_IMPL(__imp__sub_825C2984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2988"))) PPC_WEAK_FUNC(sub_825C2988);
PPC_FUNC_IMPL(__imp__sub_825C2988) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r11,20048(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20048);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825c29d4
	if (cr6.eq) goto loc_825C29D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c29d8
	if (!cr6.eq) goto loc_825C29D8;
loc_825C29D4:
	// li r11,0
	r11.s64 = 0;
loc_825C29D8:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// beq cr6,0x825c2a24
	if (cr6.eq) goto loc_825C2A24;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2a24
	if (!cr6.eq) goto loc_825C2A24;
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
loc_825C2A24:
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

__attribute__((alias("__imp__sub_825C2A38"))) PPC_WEAK_FUNC(sub_825C2A38);
PPC_FUNC_IMPL(__imp__sub_825C2A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2A3C"))) PPC_WEAK_FUNC(sub_825C2A3C);
PPC_FUNC_IMPL(__imp__sub_825C2A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2A40"))) PPC_WEAK_FUNC(sub_825C2A40);
PPC_FUNC_IMPL(__imp__sub_825C2A40) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,20048(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20048);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c2a94
	if (cr6.eq) goto loc_825C2A94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2a98
	if (!cr6.eq) goto loc_825C2A98;
loc_825C2A94:
	// li r11,0
	r11.s64 = 0;
loc_825C2A98:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// beq cr6,0x825c2ae4
	if (cr6.eq) goto loc_825C2AE4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2ae4
	if (!cr6.eq) goto loc_825C2AE4;
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
loc_825C2AE4:
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

__attribute__((alias("__imp__sub_825C2AF8"))) PPC_WEAK_FUNC(sub_825C2AF8);
PPC_FUNC_IMPL(__imp__sub_825C2AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2AFC"))) PPC_WEAK_FUNC(sub_825C2AFC);
PPC_FUNC_IMPL(__imp__sub_825C2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2B00"))) PPC_WEAK_FUNC(sub_825C2B00);
PPC_FUNC_IMPL(__imp__sub_825C2B00) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r11,20020(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20020);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825c2b4c
	if (cr6.eq) goto loc_825C2B4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2b50
	if (!cr6.eq) goto loc_825C2B50;
loc_825C2B4C:
	// li r11,0
	r11.s64 = 0;
loc_825C2B50:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// beq cr6,0x825c2b9c
	if (cr6.eq) goto loc_825C2B9C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2b9c
	if (!cr6.eq) goto loc_825C2B9C;
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
loc_825C2B9C:
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

__attribute__((alias("__imp__sub_825C2BB0"))) PPC_WEAK_FUNC(sub_825C2BB0);
PPC_FUNC_IMPL(__imp__sub_825C2BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2BB4"))) PPC_WEAK_FUNC(sub_825C2BB4);
PPC_FUNC_IMPL(__imp__sub_825C2BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2BB8"))) PPC_WEAK_FUNC(sub_825C2BB8);
PPC_FUNC_IMPL(__imp__sub_825C2BB8) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C2C0C"))) PPC_WEAK_FUNC(sub_825C2C0C);
PPC_FUNC_IMPL(__imp__sub_825C2C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C10"))) PPC_WEAK_FUNC(sub_825C2C10);
PPC_FUNC_IMPL(__imp__sub_825C2C10) {
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
	// bl 0x825c1ee0
	sub_825C1EE0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_825C2C54"))) PPC_WEAK_FUNC(sub_825C2C54);
PPC_FUNC_IMPL(__imp__sub_825C2C54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C58"))) PPC_WEAK_FUNC(sub_825C2C58);
PPC_FUNC_IMPL(__imp__sub_825C2C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(f0.f64 - ctx.f10.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f0,-2924(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2924);
	f0.f64 = double(temp.f32);
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f13,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fabs f4,f12
	ctx.f4.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f12,f7
	ctx.f12.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f11,f5
	ctx.f11.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - f0.f64));
	// fcmpu cr6,f3,f13
	cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bgt cr6,0x825c2cc8
	if (cr6.gt) goto loc_825C2CC8;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x825c2cc8
	if (cr6.gt) goto loc_825C2CC8;
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825c2ccc
	if (!cr6.gt) goto loc_825C2CCC;
loc_825C2CC8:
	// li r11,0
	r11.s64 = 0;
loc_825C2CCC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c2d3c
	if (cr6.eq) goto loc_825C2D3C;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f0,-2892(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -2892);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f8,f8,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f12,f5,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f2,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x825c2d30
	if (cr6.lt) goto loc_825C2D30;
	// li r11,0
	r11.s64 = 0;
loc_825C2D30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825C2D3C:
	// stfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_825C2D80"))) PPC_WEAK_FUNC(sub_825C2D80);
PPC_FUNC_IMPL(__imp__sub_825C2D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c2128
	sub_825C2128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C2D84"))) PPC_WEAK_FUNC(sub_825C2D84);
PPC_FUNC_IMPL(__imp__sub_825C2D84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2D88"))) PPC_WEAK_FUNC(sub_825C2D88);
PPC_FUNC_IMPL(__imp__sub_825C2D88) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
}

__attribute__((alias("__imp__sub_825C2D8C"))) PPC_WEAK_FUNC(sub_825C2D8C);
PPC_FUNC_IMPL(__imp__sub_825C2D8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c2348
	sub_825C2348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C2D90"))) PPC_WEAK_FUNC(sub_825C2D90);
PPC_FUNC_IMPL(__imp__sub_825C2D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
}

__attribute__((alias("__imp__sub_825C2D94"))) PPC_WEAK_FUNC(sub_825C2D94);
PPC_FUNC_IMPL(__imp__sub_825C2D94) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c2508
	sub_825C2508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C2D98"))) PPC_WEAK_FUNC(sub_825C2D98);
PPC_FUNC_IMPL(__imp__sub_825C2D98) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c2dec
	if (cr6.eq) goto loc_825C2DEC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825C2DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C2E00"))) PPC_WEAK_FUNC(sub_825C2E00);
PPC_FUNC_IMPL(__imp__sub_825C2E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E04"))) PPC_WEAK_FUNC(sub_825C2E04);
PPC_FUNC_IMPL(__imp__sub_825C2E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2E08"))) PPC_WEAK_FUNC(sub_825C2E08);
PPC_FUNC_IMPL(__imp__sub_825C2E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c2e64
	if (cr6.eq) goto loc_825C2E64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c2e64
	if (cr6.eq) goto loc_825C2E64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825c2688
	sub_825C2688(ctx, base);
loc_825C2E64:
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

__attribute__((alias("__imp__sub_825C2E78"))) PPC_WEAK_FUNC(sub_825C2E78);
PPC_FUNC_IMPL(__imp__sub_825C2E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E7C"))) PPC_WEAK_FUNC(sub_825C2E7C);
PPC_FUNC_IMPL(__imp__sub_825C2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2E80"))) PPC_WEAK_FUNC(sub_825C2E80);
PPC_FUNC_IMPL(__imp__sub_825C2E80) {
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
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C2ED4"))) PPC_WEAK_FUNC(sub_825C2ED4);
PPC_FUNC_IMPL(__imp__sub_825C2ED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2ED8"))) PPC_WEAK_FUNC(sub_825C2ED8);
PPC_FUNC_IMPL(__imp__sub_825C2ED8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c2f30
	if (cr6.eq) goto loc_825C2F30;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825C2F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C2F44"))) PPC_WEAK_FUNC(sub_825C2F44);
PPC_FUNC_IMPL(__imp__sub_825C2F44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2F48"))) PPC_WEAK_FUNC(sub_825C2F48);
PPC_FUNC_IMPL(__imp__sub_825C2F48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c2f9c
	if (cr6.eq) goto loc_825C2F9C;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c2f9c
	if (cr6.eq) goto loc_825C2F9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c2508
	sub_825C2508(ctx, base);
loc_825C2F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C2FAC"))) PPC_WEAK_FUNC(sub_825C2FAC);
PPC_FUNC_IMPL(__imp__sub_825C2FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2FB0"))) PPC_WEAK_FUNC(sub_825C2FB0);
PPC_FUNC_IMPL(__imp__sub_825C2FB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c3008
	if (cr6.eq) goto loc_825C3008;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825C3008:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C301C"))) PPC_WEAK_FUNC(sub_825C301C);
PPC_FUNC_IMPL(__imp__sub_825C301C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3020"))) PPC_WEAK_FUNC(sub_825C3020);
PPC_FUNC_IMPL(__imp__sub_825C3020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c3080
	if (cr6.eq) goto loc_825C3080;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c3080
	if (cr6.eq) goto loc_825C3080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825c2688
	sub_825C2688(ctx, base);
loc_825C3080:
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

__attribute__((alias("__imp__sub_825C3094"))) PPC_WEAK_FUNC(sub_825C3094);
PPC_FUNC_IMPL(__imp__sub_825C3094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3098"))) PPC_WEAK_FUNC(sub_825C3098);
PPC_FUNC_IMPL(__imp__sub_825C3098) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r4,r3,68
	ctx.r4.s64 = ctx.r3.s64 + 68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x825c42f8
	sub_825C42F8(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c3120
	if (cr6.eq) goto loc_825C3120;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825c3120
	if (cr6.eq) goto loc_825C3120;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_825C3120:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C3128"))) PPC_WEAK_FUNC(sub_825C3128);
PPC_FUNC_IMPL(__imp__sub_825C3128) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C312C"))) PPC_WEAK_FUNC(sub_825C312C);
PPC_FUNC_IMPL(__imp__sub_825C312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3130"))) PPC_WEAK_FUNC(sub_825C3130);
PPC_FUNC_IMPL(__imp__sub_825C3130) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x825c3098
	sub_825C3098(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c3184
	if (cr6.eq) goto loc_825C3184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825c2800
	sub_825C2800(ctx, base);
loc_825C3184:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C3194"))) PPC_WEAK_FUNC(sub_825C3194);
PPC_FUNC_IMPL(__imp__sub_825C3194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3198"))) PPC_WEAK_FUNC(sub_825C3198);
PPC_FUNC_IMPL(__imp__sub_825C3198) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c3098
	sub_825C3098(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C31E8"))) PPC_WEAK_FUNC(sub_825C31E8);
PPC_FUNC_IMPL(__imp__sub_825C31E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C31EC"))) PPC_WEAK_FUNC(sub_825C31EC);
PPC_FUNC_IMPL(__imp__sub_825C31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C31F0"))) PPC_WEAK_FUNC(sub_825C31F0);
PPC_FUNC_IMPL(__imp__sub_825C31F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c3098
	sub_825C3098(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c3254
	if (cr6.eq) goto loc_825C3254;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825c2800
	sub_825C2800(ctx, base);
loc_825C3254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C3258"))) PPC_WEAK_FUNC(sub_825C3258);
PPC_FUNC_IMPL(__imp__sub_825C3258) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C325C"))) PPC_WEAK_FUNC(sub_825C325C);
PPC_FUNC_IMPL(__imp__sub_825C325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3260"))) PPC_WEAK_FUNC(sub_825C3260);
PPC_FUNC_IMPL(__imp__sub_825C3260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x825c33a8
	if (cr6.eq) goto loc_825C33A8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r25,r11,22388
	r25.s64 = r11.s64 + 22388;
	// addi r27,r10,-4244
	r27.s64 = ctx.r10.s64 + -4244;
loc_825C32B0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826cb298
	sub_826CB298(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,22392(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 22392);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c32ec
	if (!cr6.eq) goto loc_825C32EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stw r11,22392(r28)
	PPC_STORE_U32(r28.u32 + 22392, r11.u32);
	// addi r3,r10,-31968
	ctx.r3.s64 = ctx.r10.s64 + -31968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_825C32EC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c3340
	if (cr6.eq) goto loc_825C3340;
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
	// beq cr6,0x825c3340
	if (cr6.eq) goto loc_825C3340;
	// bl 0x8231a840
	sub_8231A840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c3344
	if (!cr6.eq) goto loc_825C3344;
loc_825C3340:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825C3344:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c3370
	if (cr0.eq) goto loc_825C3370;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_825C3370:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c32b0
	if (!cr6.eq) goto loc_825C32B0;
loc_825C33A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825C33AC"))) PPC_WEAK_FUNC(sub_825C33AC);
PPC_FUNC_IMPL(__imp__sub_825C33AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825C33B0"))) PPC_WEAK_FUNC(sub_825C33B0);
PPC_FUNC_IMPL(__imp__sub_825C33B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x825c34f8
	if (cr6.eq) goto loc_825C34F8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r25,r11,22388
	r25.s64 = r11.s64 + 22388;
	// addi r27,r10,-9920
	r27.s64 = ctx.r10.s64 + -9920;
loc_825C3400:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826cb298
	sub_826CB298(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,22392(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 22392);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c343c
	if (!cr6.eq) goto loc_825C343C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stw r11,22392(r28)
	PPC_STORE_U32(r28.u32 + 22392, r11.u32);
	// addi r3,r10,-31968
	ctx.r3.s64 = ctx.r10.s64 + -31968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_825C343C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c3490
	if (cr6.eq) goto loc_825C3490;
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
	// beq cr6,0x825c3490
	if (cr6.eq) goto loc_825C3490;
	// bl 0x8231a840
	sub_8231A840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c3494
	if (!cr6.eq) goto loc_825C3494;
loc_825C3490:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825C3494:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c34c0
	if (cr0.eq) goto loc_825C34C0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_825C34C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c3400
	if (!cr6.eq) goto loc_825C3400;
loc_825C34F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825C34FC"))) PPC_WEAK_FUNC(sub_825C34FC);
PPC_FUNC_IMPL(__imp__sub_825C34FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825C3500"))) PPC_WEAK_FUNC(sub_825C3500);
PPC_FUNC_IMPL(__imp__sub_825C3500) {
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
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x825c356c
	if (cr6.eq) goto loc_825C356C;
loc_825C3528:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// bl 0x825c4058
	sub_825C4058(ctx, base);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// bne cr6,0x825c3528
	if (!cr6.eq) goto loc_825C3528;
loc_825C356C:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825c46e8
	sub_825C46E8(ctx, base);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C359C"))) PPC_WEAK_FUNC(sub_825C359C);
PPC_FUNC_IMPL(__imp__sub_825C359C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C35A0"))) PPC_WEAK_FUNC(sub_825C35A0);
PPC_FUNC_IMPL(__imp__sub_825C35A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93e8
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x825c39e4
	if (cr6.eq) goto loc_825C39E4;
	// addi r26,r31,68
	r26.s64 = r31.s64 + 68;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r18,r26,13
	r18.s64 = r26.s64 + 13;
	// li r24,16
	r24.s64 = 16;
	// li r31,0
	r31.s64 = 0;
	// li r25,34
	r25.s64 = 34;
	// lis r23,-31934
	r23.s64 = -2092826624;
	// addi r28,r11,4776
	r28.s64 = r11.s64 + 4776;
	// addi r17,r10,22388
	r17.s64 = ctx.r10.s64 + 22388;
	// addi r21,r9,32052
	r21.s64 = ctx.r9.s64 + 32052;
	// addi r19,r8,-18492
	r19.s64 = ctx.r8.s64 + -18492;
	// addi r16,r7,-8160
	r16.s64 = ctx.r7.s64 + -8160;
loc_825C3618:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826cb298
	sub_826CB298(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,22392(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 22392);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c3654
	if (!cr6.eq) goto loc_825C3654;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stw r11,22392(r23)
	PPC_STORE_U32(r23.u32 + 22392, r11.u32);
	// addi r3,r10,-31968
	ctx.r3.s64 = ctx.r10.s64 + -31968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_825C3654:
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c36a8
	if (cr6.eq) goto loc_825C36A8;
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
	// beq cr6,0x825c36a8
	if (cr6.eq) goto loc_825C36A8;
	// bl 0x8231a840
	sub_8231A840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c36ac
	if (!cr6.eq) goto loc_825C36AC;
loc_825C36A8:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_825C36AC:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c389c
	if (cr6.eq) goto loc_825C389C;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x825c389c
	if (cr6.eq) goto loc_825C389C;
loc_825C3754:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826cb298
	sub_826CB298(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,22392(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 22392);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c3790
	if (!cr6.eq) goto loc_825C3790;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stw r11,22392(r23)
	PPC_STORE_U32(r23.u32 + 22392, r11.u32);
	// addi r3,r10,-31968
	ctx.r3.s64 = ctx.r10.s64 + -31968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_825C3790:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c37e4
	if (cr6.eq) goto loc_825C37E4;
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
	// beq cr6,0x825c37e4
	if (cr6.eq) goto loc_825C37E4;
	// bl 0x8231a840
	sub_8231A840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c37e8
	if (!cr6.eq) goto loc_825C37E8;
loc_825C37E4:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_825C37E8:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r24.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r25.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r31.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r31.u8);
	// stb r31,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r31.u8);
	// beq 0x825c3864
	if (cr0.eq) goto loc_825C3864;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_825C3864:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c3754
	if (!cr6.eq) goto loc_825C3754;
loc_825C389C:
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x825c4418
	sub_825C4418(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825c4418
	sub_825C4418(ctx, base);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r24.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r25.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r31.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stb r31,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r31.u8);
	// stb r31,37(r30)
	PPC_STORE_U8(r30.u32 + 37, r31.u8);
	// bl 0x825c4ca0
	sub_825C4CA0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825c4b38
	sub_825C4B38(ctx, base);
	// lwz r6,204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x825c3618
	if (!cr6.eq) goto loc_825C3618;
loc_825C39E4:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
}

__attribute__((alias("__imp__sub_825C39E8"))) PPC_WEAK_FUNC(sub_825C39E8);
PPC_FUNC_IMPL(__imp__sub_825C39E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_825C39EC"))) PPC_WEAK_FUNC(sub_825C39EC);
PPC_FUNC_IMPL(__imp__sub_825C39EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C39F0"))) PPC_WEAK_FUNC(sub_825C39F0);
PPC_FUNC_IMPL(__imp__sub_825C39F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-2912
	ctx.r8.s64 = ctx.r10.s64 + -2912;
	// clrlwi r7,r11,26
	ctx.r7.u64 = r11.u32 & 0x3F;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8270bb98
	sub_8270BB98(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r5,r6,-2864
	ctx.r5.s64 = ctx.r6.s64 + -2864;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x825c4250
	sub_825C4250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb298
	sub_826CB298(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9920
	ctx.r3.s64 = ctx.r8.s64 + -9920;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,22392(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22392);
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825c3ab8
	if (!cr6.eq) goto loc_825C3AB8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// stw r11,22392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22392, r11.u32);
	// addi r3,r9,-31968
	ctx.r3.s64 = ctx.r9.s64 + -31968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_825C3AB8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c3b0c
	if (cr6.eq) goto loc_825C3B0C;
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
	// beq cr6,0x825c3b0c
	if (cr6.eq) goto loc_825C3B0C;
	// bl 0x8231a840
	sub_8231A840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c3b14
	if (!cr6.eq) goto loc_825C3B14;
loc_825C3B0C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,22388
	r11.s64 = r11.s64 + 22388;
loc_825C3B14:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,9468
	ctx.r3.s64 = ctx.r10.s64 + 9468;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c3b88
	if (cr6.eq) goto loc_825C3B88;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
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
	// beq cr6,0x825c3b88
	if (cr6.eq) goto loc_825C3B88;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c3b90
	if (!cr6.eq) goto loc_825C3B90;
loc_825C3B88:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,-19424
	r11.s64 = r11.s64 + -19424;
loc_825C3B90:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9464
	ctx.r3.s64 = r11.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c3c1c
	if (cr6.eq) goto loc_825C3C1C;
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
	// beq cr6,0x825c3c1c
	if (cr6.eq) goto loc_825C3C1C;
	// bl 0x822d19e0
	sub_822D19E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c3c24
	if (!cr6.eq) goto loc_825C3C24;
loc_825C3C1C:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,18720
	r11.s64 = r11.s64 + 18720;
loc_825C3C24:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-2876
	r30.s64 = r11.s64 + -2876;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c3cc4
	if (cr6.eq) goto loc_825C3CC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c3260
	sub_825C3260(ctx, base);
loc_825C3CC4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-2888
	r30.s64 = r11.s64 + -2888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c3d3c
	if (cr6.eq) goto loc_825C3D3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c35a0
	sub_825C35A0(ctx, base);
loc_825C3D3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825C3D44"))) PPC_WEAK_FUNC(sub_825C3D44);
PPC_FUNC_IMPL(__imp__sub_825C3D44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C3D48"))) PPC_WEAK_FUNC(sub_825C3D48);
PPC_FUNC_IMPL(__imp__sub_825C3D48) {
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
	// addi r30,r3,52
	r30.s64 = ctx.r3.s64 + 52;
	// addi r10,r11,-2864
	ctx.r10.s64 = r11.s64 + -2864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// bl 0x825c3500
	sub_825C3500(ctx, base);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x825c4db8
	sub_825C4DB8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,-2912
	ctx.r3.s64 = ctx.r4.s64 + -2912;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825C3E00"))) PPC_WEAK_FUNC(sub_825C3E00);
PPC_FUNC_IMPL(__imp__sub_825C3E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3E04"))) PPC_WEAK_FUNC(sub_825C3E04);
PPC_FUNC_IMPL(__imp__sub_825C3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3E08"))) PPC_WEAK_FUNC(sub_825C3E08);
PPC_FUNC_IMPL(__imp__sub_825C3E08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825c39f0
	sub_825C39F0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-2832
	ctx.r10.s64 = r11.s64 + -2832;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-2844
	r29.s64 = r11.s64 + -2844;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c3ec4
	if (cr6.eq) goto loc_825C3EC4;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c33b0
	sub_825C33B0(ctx, base);
loc_825C3EC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C3ECC"))) PPC_WEAK_FUNC(sub_825C3ECC);
PPC_FUNC_IMPL(__imp__sub_825C3ECC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C3ED0"))) PPC_WEAK_FUNC(sub_825C3ED0);
PPC_FUNC_IMPL(__imp__sub_825C3ED0) {
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
	// addi r30,r3,104
	r30.s64 = ctx.r3.s64 + 104;
	// addi r10,r11,-2832
	ctx.r10.s64 = r11.s64 + -2832;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// stw r8,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c3d48
	sub_825C3D48(ctx, base);
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

__attribute__((alias("__imp__sub_825C3F60"))) PPC_WEAK_FUNC(sub_825C3F60);
PPC_FUNC_IMPL(__imp__sub_825C3F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3F64"))) PPC_WEAK_FUNC(sub_825C3F64);
PPC_FUNC_IMPL(__imp__sub_825C3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3F68"))) PPC_WEAK_FUNC(sub_825C3F68);
PPC_FUNC_IMPL(__imp__sub_825C3F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c3f84
	if (cr6.eq) goto loc_825C3F84;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_825C3F84:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c3fc0
	if (!cr6.eq) goto loc_825C3FC0;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c3fb8
	if (!cr6.eq) goto loc_825C3FB8;
loc_825C3FA4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c3fa4
	if (cr6.eq) goto loc_825C3FA4;
loc_825C3FB8:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825C3FC0:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c3ff8
	if (!cr6.eq) goto loc_825C3FF8;
loc_825C3FD0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825c3ff8
	if (!cr6.eq) goto loc_825C3FF8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c3fd0
	if (cr6.eq) goto loc_825C3FD0;
loc_825C3FF8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825C400C"))) PPC_WEAK_FUNC(sub_825C400C);
PPC_FUNC_IMPL(__imp__sub_825C400C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4010"))) PPC_WEAK_FUNC(sub_825C4010);
PPC_FUNC_IMPL(__imp__sub_825C4010) {
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
	// addi r9,r11,-2912
	ctx.r9.s64 = r11.s64 + -2912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825c4044
	if (cr6.eq) goto loc_825C4044;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C4044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C4054"))) PPC_WEAK_FUNC(sub_825C4054);
PPC_FUNC_IMPL(__imp__sub_825C4054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4058"))) PPC_WEAK_FUNC(sub_825C4058);
PPC_FUNC_IMPL(__imp__sub_825C4058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c40a4
	if (!cr6.eq) goto loc_825C40A4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c409c
	if (!cr6.eq) goto loc_825C409C;
loc_825C4088:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c4088
	if (cr6.eq) goto loc_825C4088;
loc_825C409C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825C40A4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c40dc
	if (!cr6.eq) goto loc_825C40DC;
loc_825C40B4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825c40dc
	if (!cr6.eq) goto loc_825C40DC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c40b4
	if (cr6.eq) goto loc_825C40B4;
loc_825C40DC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825C40E0"))) PPC_WEAK_FUNC(sub_825C40E0);
PPC_FUNC_IMPL(__imp__sub_825C40E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C40E4"))) PPC_WEAK_FUNC(sub_825C40E4);
PPC_FUNC_IMPL(__imp__sub_825C40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C40E8"))) PPC_WEAK_FUNC(sub_825C40E8);
PPC_FUNC_IMPL(__imp__sub_825C40E8) {
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
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c4108
	if (!cr6.eq) goto loc_825C4108;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_825C4108:
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
	// bne cr6,0x825c4130
	if (!cr6.eq) goto loc_825C4130;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825C4130:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825c4150
	if (!cr6.eq) goto loc_825C4150;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825C4150:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_825C415C"))) PPC_WEAK_FUNC(sub_825C415C);
PPC_FUNC_IMPL(__imp__sub_825C415C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4160"))) PPC_WEAK_FUNC(sub_825C4160);
PPC_FUNC_IMPL(__imp__sub_825C4160) {
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
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c4180
	if (!cr6.eq) goto loc_825C4180;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_825C4180:
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
	// bne cr6,0x825c41a8
	if (!cr6.eq) goto loc_825C41A8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825C41A8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825c41c8
	if (!cr6.eq) goto loc_825C41C8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825C41C8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_825C41D4"))) PPC_WEAK_FUNC(sub_825C41D4);
PPC_FUNC_IMPL(__imp__sub_825C41D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C41D8"))) PPC_WEAK_FUNC(sub_825C41D8);
PPC_FUNC_IMPL(__imp__sub_825C41D8) {
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
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c41f8
	if (!cr6.eq) goto loc_825C41F8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_825C41F8:
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
	// bne cr6,0x825c4220
	if (!cr6.eq) goto loc_825C4220;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825C4220:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825c4240
	if (!cr6.eq) goto loc_825C4240;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_825C4240:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_825C424C"))) PPC_WEAK_FUNC(sub_825C424C);
PPC_FUNC_IMPL(__imp__sub_825C424C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4250"))) PPC_WEAK_FUNC(sub_825C4250);
PPC_FUNC_IMPL(__imp__sub_825C4250) {
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
	// li r3,40
	ctx.r3.s64 = 40;
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
	// stb r11,36(r4)
	PPC_STORE_U8(ctx.r4.u32 + 36, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C42F0"))) PPC_WEAK_FUNC(sub_825C42F0);
PPC_FUNC_IMPL(__imp__sub_825C42F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C42F4"))) PPC_WEAK_FUNC(sub_825C42F4);
PPC_FUNC_IMPL(__imp__sub_825C42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C42F8"))) PPC_WEAK_FUNC(sub_825C42F8);
PPC_FUNC_IMPL(__imp__sub_825C42F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c4338
	if (!cr6.eq) goto loc_825C4338;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_825C4310:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x825c4324
	if (!cr6.lt) goto loc_825C4324;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x825c432c
	goto loc_825C432C;
loc_825C4324:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825C432C:
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c4310
	if (cr6.eq) goto loc_825C4310;
loc_825C4338:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825c4368
	if (cr6.eq) goto loc_825C4368;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x825c4368
	if (cr6.lt) goto loc_825C4368;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_825C4368:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825C4378"))) PPC_WEAK_FUNC(sub_825C4378);
PPC_FUNC_IMPL(__imp__sub_825C4378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C437C"))) PPC_WEAK_FUNC(sub_825C437C);
PPC_FUNC_IMPL(__imp__sub_825C437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4380"))) PPC_WEAK_FUNC(sub_825C4380);
PPC_FUNC_IMPL(__imp__sub_825C4380) {
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
	// lbz r11,21(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c440c
	if (!cr6.eq) goto loc_825C440C;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c43c8
	if (cr0.eq) goto loc_825C43C8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_825C43C8:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// lbz r10,21(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c43e4
	if (cr6.eq) goto loc_825C43E4;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_825C43E4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c4380
	sub_825C4380(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c4380
	sub_825C4380(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_825C440C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C4414"))) PPC_WEAK_FUNC(sub_825C4414);
PPC_FUNC_IMPL(__imp__sub_825C4414) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C4418"))) PPC_WEAK_FUNC(sub_825C4418);
PPC_FUNC_IMPL(__imp__sub_825C4418) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825c4380
	sub_825C4380(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825c44c0
	if (!cr6.eq) goto loc_825C44C0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825c4484
	if (!cr6.eq) goto loc_825C4484;
loc_825C4470:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c4470
	if (cr6.eq) goto loc_825C4470;
loc_825C4484:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825c44b4
	if (!cr6.eq) goto loc_825C44B4;
loc_825C44A0:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c44a0
	if (cr6.eq) goto loc_825C44A0;
loc_825C44B4:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825C44C0:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C44D0"))) PPC_WEAK_FUNC(sub_825C44D0);
PPC_FUNC_IMPL(__imp__sub_825C44D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C44D4"))) PPC_WEAK_FUNC(sub_825C44D4);
PPC_FUNC_IMPL(__imp__sub_825C44D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C44D8"))) PPC_WEAK_FUNC(sub_825C44D8);
PPC_FUNC_IMPL(__imp__sub_825C44D8) {
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
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r9,r10,43689
	ctx.r9.u64 = ctx.r10.u64 | 43689;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825c4534
	if (cr6.lt) goto loc_825C4534;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// addi r4,r7,20
	ctx.r4.s64 = ctx.r7.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5516
	ctx.r3.s64 = r11.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825C4534:
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
	// bne cr6,0x825c4564
	if (!cr6.eq) goto loc_825C4564;
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
	// b 0x825c45a4
	goto loc_825C45A4;
loc_825C4564:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c458c
	if (cr6.eq) goto loc_825C458C;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c45a4
	if (!cr6.eq) goto loc_825C45A4;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// b 0x825c45a4
	goto loc_825C45A4;
loc_825C458C:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c45a4
	if (!cr6.eq) goto loc_825C45A4;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
loc_825C45A4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c46c8
	if (!cr6.eq) goto loc_825C46C8;
	// li r28,0
	r28.s64 = 0;
loc_825C45C0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c4648
	if (!cr6.eq) goto loc_825C4648;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c4608
	if (!cr6.eq) goto loc_825C4608;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, r29.u8);
	// stb r29,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,36(r8)
	PPC_STORE_U8(ctx.r8.u32 + 36, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825c46b8
	goto loc_825C46B8;
loc_825C4608:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825c4620
	if (!cr6.eq) goto loc_825C4620;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825c4160
	sub_825C4160(ctx, base);
loc_825C4620:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x825c41d8
	sub_825C41D8(ctx, base);
	// b 0x825c46b8
	goto loc_825C46B8;
loc_825C4648:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c467c
	if (!cr6.eq) goto loc_825C467C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, r29.u8);
	// stb r29,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,36(r8)
	PPC_STORE_U8(ctx.r8.u32 + 36, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825c46b8
	goto loc_825C46B8;
loc_825C467C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825c4694
	if (!cr6.eq) goto loc_825C4694;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825c41d8
	sub_825C41D8(ctx, base);
loc_825C4694:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x825c4160
	sub_825C4160(ctx, base);
loc_825C46B8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c45c0
	if (cr6.eq) goto loc_825C45C0;
loc_825C46C8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C46E0"))) PPC_WEAK_FUNC(sub_825C46E0);
PPC_FUNC_IMPL(__imp__sub_825C46E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825C46E4"))) PPC_WEAK_FUNC(sub_825C46E4);
PPC_FUNC_IMPL(__imp__sub_825C46E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C46E8"))) PPC_WEAK_FUNC(sub_825C46E8);
PPC_FUNC_IMPL(__imp__sub_825C46E8) {
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
	// lbz r11,37(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c4750
	if (!cr6.eq) goto loc_825C4750;
loc_825C470C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x825c46e8
	sub_825C46E8(ctx, base);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,37(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c470c
	if (cr6.eq) goto loc_825C470C;
loc_825C4750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C4754"))) PPC_WEAK_FUNC(sub_825C4754);
PPC_FUNC_IMPL(__imp__sub_825C4754) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C4758"))) PPC_WEAK_FUNC(sub_825C4758);
PPC_FUNC_IMPL(__imp__sub_825C4758) {
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
	// lbz r11,37(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 37);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c4788
	if (cr6.eq) goto loc_825C4788;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5488
	ctx.r3.s64 = r11.s64 + 5488;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
loc_825C4788:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x825c4058
	sub_825C4058(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x825c47b0
	if (cr6.eq) goto loc_825C47B0;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x825c47d4
	goto loc_825C47D4;
loc_825C47B0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c47c8
	if (cr6.eq) goto loc_825C47C8;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x825c47d4
	goto loc_825C47D4;
loc_825C47C8:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x825c48c0
	if (!cr6.eq) goto loc_825C48C0;
loc_825C47D4:
	// lbz r11,37(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c47e8
	if (!cr6.eq) goto loc_825C47E8;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_825C47E8:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825c4800
	if (!cr6.eq) goto loc_825C4800;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x825c4818
	goto loc_825C4818;
loc_825C4800:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825c4814
	if (!cr6.eq) goto loc_825C4814;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x825c4818
	goto loc_825C4818;
loc_825C4814:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_825C4818:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825c4868
	if (!cr6.eq) goto loc_825C4868;
	// lbz r11,37(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c483c
	if (cr6.eq) goto loc_825C483C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x825c4864
	goto loc_825C4864;
loc_825C483C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825c4864
	if (!cr6.eq) goto loc_825C4864;
loc_825C4850:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c4850
	if (cr6.eq) goto loc_825C4850;
loc_825C4864:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_825C4868:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825c4954
	if (!cr6.eq) goto loc_825C4954;
	// lbz r11,37(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c4890
	if (cr6.eq) goto loc_825C4890;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// b 0x825c4954
	goto loc_825C4954;
loc_825C4890:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825c48b8
	if (!cr6.eq) goto loc_825C48B8;
loc_825C48A4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c48a4
	if (cr6.eq) goto loc_825C48A4;
loc_825C48B8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825c4954
	goto loc_825C4954;
loc_825C48C0:
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
	// bne cr6,0x825c48e0
	if (!cr6.eq) goto loc_825C48E0;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x825c4908
	goto loc_825C4908;
loc_825C48E0:
	// lbz r11,37(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c48f4
	if (!cr6.eq) goto loc_825C48F4;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_825C48F4:
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
loc_825C4908:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825c4920
	if (!cr6.eq) goto loc_825C4920;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x825c493c
	goto loc_825C493C;
loc_825C4920:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825c4938
	if (!cr6.eq) goto loc_825C4938;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x825c493c
	goto loc_825C493C;
loc_825C4938:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_825C493C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 36);
	// lbz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 36);
	// stb r9,36(r25)
	PPC_STORE_U8(r25.u32 + 36, ctx.r9.u8);
	// stb r10,36(r26)
	PPC_STORE_U8(r26.u32 + 36, ctx.r10.u8);
loc_825C4954:
	// lbz r11,36(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 36);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825c4aec
	if (!cr6.eq) goto loc_825C4AEC;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c4ae8
	if (cr6.eq) goto loc_825C4AE8;
	// li r30,0
	r30.s64 = 0;
loc_825C4978:
	// lbz r11,36(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 36);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825c4ae8
	if (!cr6.eq) goto loc_825C4AE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x825c4a30
	if (!cr6.eq) goto loc_825C4A30;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c49b8
	if (!cr6.eq) goto loc_825C49B8;
	// stb r29,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c4160
	sub_825C4160(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825C49B8:
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c4a84
	if (!cr6.eq) goto loc_825C4A84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825c49e4
	if (!cr6.eq) goto loc_825C49E4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x825c4a80
	if (cr6.eq) goto loc_825C4A80;
loc_825C49E4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825c4a0c
	if (!cr6.eq) goto loc_825C4A0C;
	// stb r29,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c41d8
	sub_825C41D8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_825C4A0C:
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,36(r11)
	PPC_STORE_U8(r11.u32 + 36, ctx.r10.u8);
	// stb r29,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, r29.u8);
	// bl 0x825c4160
	sub_825C4160(ctx, base);
	// b 0x825c4ae8
	goto loc_825C4AE8;
loc_825C4A30:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c4a54
	if (!cr6.eq) goto loc_825C4A54;
	// stb r29,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c41d8
	sub_825C41D8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825C4A54:
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c4a84
	if (!cr6.eq) goto loc_825C4A84;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825c4aa0
	if (!cr6.eq) goto loc_825C4AA0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825c4aa0
	if (!cr6.eq) goto loc_825C4AA0;
loc_825C4A80:
	// stb r30,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r30.u8);
loc_825C4A84:
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
	// bne cr6,0x825c4978
	if (!cr6.eq) goto loc_825C4978;
	// b 0x825c4ae8
	goto loc_825C4AE8;
loc_825C4AA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825c4ac8
	if (!cr6.eq) goto loc_825C4AC8;
	// stb r29,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c4160
	sub_825C4160(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825C4AC8:
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,36(r11)
	PPC_STORE_U8(r11.u32 + 36, ctx.r10.u8);
	// stb r29,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, r29.u8);
	// bl 0x825c41d8
	sub_825C41D8(ctx, base);
loc_825C4AE8:
	// stb r29,36(r28)
	PPC_STORE_U8(r28.u32 + 36, r29.u8);
loc_825C4AEC:
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c4b24
	if (cr6.eq) goto loc_825C4B24;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_825C4B24:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C4B30"))) PPC_WEAK_FUNC(sub_825C4B30);
PPC_FUNC_IMPL(__imp__sub_825C4B30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825C4B34"))) PPC_WEAK_FUNC(sub_825C4B34);
PPC_FUNC_IMPL(__imp__sub_825C4B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4B38"))) PPC_WEAK_FUNC(sub_825C4B38);
PPC_FUNC_IMPL(__imp__sub_825C4B38) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c4bc4
	if (!cr6.eq) goto loc_825C4BC4;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_825C4B78:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c4b94
	if (cr6.eq) goto loc_825C4B94;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r31.u64 = temp.u64;
	// b 0x825c4ba0
	goto loc_825C4BA0;
loc_825C4B94:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	r31.u64 = ctx.r4.u32 & 0x1;
loc_825C4BA0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c4bb4
	if (cr6.eq) goto loc_825C4BB4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825c4bb8
	goto loc_825C4BB8;
loc_825C4BB4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_825C4BB8:
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c4b78
	if (cr6.eq) goto loc_825C4B78;
loc_825C4BC4:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c4c24
	if (cr6.eq) goto loc_825C4C24;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c4c1c
	if (!cr6.eq) goto loc_825C4C1C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825c44d8
	sub_825C44D8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r25.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825C4C1C:
	// bl 0x825c3f68
	sub_825C3F68(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825C4C24:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825c4c68
	if (!cr6.lt) goto loc_825C4C68;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825c44d8
	sub_825C44D8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r25.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825C4C68:
	// lwz r6,24(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// addi r4,r27,20
	ctx.r4.s64 = r27.s64 + 20;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C4C9C"))) PPC_WEAK_FUNC(sub_825C4C9C);
PPC_FUNC_IMPL(__imp__sub_825C4C9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825C4CA0"))) PPC_WEAK_FUNC(sub_825C4CA0);
PPC_FUNC_IMPL(__imp__sub_825C4CA0) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825c4418
	sub_825C4418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825c4d28
	if (cr6.eq) goto loc_825C4D28;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c4418
	sub_825C4418(ctx, base);
loc_825C4D28:
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
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

__attribute__((alias("__imp__sub_825C4D58"))) PPC_WEAK_FUNC(sub_825C4D58);
PPC_FUNC_IMPL(__imp__sub_825C4D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4D5C"))) PPC_WEAK_FUNC(sub_825C4D5C);
PPC_FUNC_IMPL(__imp__sub_825C4D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4D60"))) PPC_WEAK_FUNC(sub_825C4D60);
PPC_FUNC_IMPL(__imp__sub_825C4D60) {
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
	// bl 0x825c46e8
	sub_825C46E8(ctx, base);
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

__attribute__((alias("__imp__sub_825C4DB0"))) PPC_WEAK_FUNC(sub_825C4DB0);
PPC_FUNC_IMPL(__imp__sub_825C4DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4DB4"))) PPC_WEAK_FUNC(sub_825C4DB4);
PPC_FUNC_IMPL(__imp__sub_825C4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4DB8"))) PPC_WEAK_FUNC(sub_825C4DB8);
PPC_FUNC_IMPL(__imp__sub_825C4DB8) {
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
	// bne cr6,0x825c4e0c
	if (!cr6.eq) goto loc_825C4E0C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x825c4e0c
	if (!cr6.eq) goto loc_825C4E0C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825c4d60
	sub_825C4D60(ctx, base);
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
loc_825C4E0C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x825c4e3c
	if (cr6.eq) goto loc_825C4E3C;
loc_825C4E14:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x825c4058
	sub_825C4058(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c4758
	sub_825C4758(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x825c4e14
	if (!cr6.eq) goto loc_825C4E14;
loc_825C4E3C:
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C4E48"))) PPC_WEAK_FUNC(sub_825C4E48);
PPC_FUNC_IMPL(__imp__sub_825C4E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C4E4C"))) PPC_WEAK_FUNC(sub_825C4E4C);
PPC_FUNC_IMPL(__imp__sub_825C4E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4E50"))) PPC_WEAK_FUNC(sub_825C4E50);
PPC_FUNC_IMPL(__imp__sub_825C4E50) {
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
	// bl 0x825c3d48
	sub_825C3D48(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c4e88
	if (cr6.eq) goto loc_825C4E88;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C4E88:
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

__attribute__((alias("__imp__sub_825C4E9C"))) PPC_WEAK_FUNC(sub_825C4E9C);
PPC_FUNC_IMPL(__imp__sub_825C4E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4EA0"))) PPC_WEAK_FUNC(sub_825C4EA0);
PPC_FUNC_IMPL(__imp__sub_825C4EA0) {
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
	// bl 0x825c3ed0
	sub_825C3ED0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c4ed8
	if (cr6.eq) goto loc_825C4ED8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C4ED8:
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

__attribute__((alias("__imp__sub_825C4EEC"))) PPC_WEAK_FUNC(sub_825C4EEC);
PPC_FUNC_IMPL(__imp__sub_825C4EEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4EF0"))) PPC_WEAK_FUNC(sub_825C4EF0);
PPC_FUNC_IMPL(__imp__sub_825C4EF0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-2804
	ctx.r9.s64 = r11.s64 + -2804;
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
	// stw r11,-19428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19428, r11.u32);
	// beq cr6,0x825c4f30
	if (cr6.eq) goto loc_825C4F30;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C4F30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C4F40"))) PPC_WEAK_FUNC(sub_825C4F40);
PPC_FUNC_IMPL(__imp__sub_825C4F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4F44"))) PPC_WEAK_FUNC(sub_825C4F44);
PPC_FUNC_IMPL(__imp__sub_825C4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4F48"))) PPC_WEAK_FUNC(sub_825C4F48);
PPC_FUNC_IMPL(__imp__sub_825C4F48) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-2796
	ctx.r10.s64 = r11.s64 + -2796;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825c4f90
	if (cr6.eq) goto loc_825C4F90;
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
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_825C4F90:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-32392
	ctx.r10.s64 = r11.s64 + -32392;
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

__attribute__((alias("__imp__sub_825C4FAC"))) PPC_WEAK_FUNC(sub_825C4FAC);
PPC_FUNC_IMPL(__imp__sub_825C4FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4FB0"))) PPC_WEAK_FUNC(sub_825C4FB0);
PPC_FUNC_IMPL(__imp__sub_825C4FB0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-2748
	ctx.r9.s64 = r11.s64 + -2748;
	// addi r8,r10,-2780
	ctx.r8.s64 = ctx.r10.s64 + -2780;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,104
	r30.s64 = r31.s64 + 104;
	// addi r6,r7,-2796
	ctx.r6.s64 = ctx.r7.s64 + -2796;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r6,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r6.u32);
	// beq cr6,0x825c5024
	if (cr6.eq) goto loc_825C5024;
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
	// stw r9,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r9.u32);
loc_825C5024:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r10,r11,-32392
	ctx.r10.s64 = r11.s64 + -32392;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x826cf7c0
	sub_826CF7C0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r7,r9,-2804
	ctx.r7.s64 = ctx.r9.s64 + -2804;
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,-19428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19428, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C5054"))) PPC_WEAK_FUNC(sub_825C5054);
PPC_FUNC_IMPL(__imp__sub_825C5054) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C5058"))) PPC_WEAK_FUNC(sub_825C5058);
PPC_FUNC_IMPL(__imp__sub_825C5058) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c5090
	if (cr6.eq) goto loc_825C5090;
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
loc_825C5090:
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825c50ac
	if (cr6.eq) goto loc_825C50AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc190
	sub_826CC190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_825C50AC:
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca190
	sub_826CA190(ctx, base);
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca190
	sub_826CA190(ctx, base);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da838
	sub_826DA838(ctx, base);
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

__attribute__((alias("__imp__sub_825C50F0"))) PPC_WEAK_FUNC(sub_825C50F0);
PPC_FUNC_IMPL(__imp__sub_825C50F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C50F4"))) PPC_WEAK_FUNC(sub_825C50F4);
PPC_FUNC_IMPL(__imp__sub_825C50F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C50F8"))) PPC_WEAK_FUNC(sub_825C50F8);
PPC_FUNC_IMPL(__imp__sub_825C50F8) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,20544
	r31.s64 = r11.s64 + 20544;
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c5148
	if (!cr6.eq) goto loc_825C5148;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_825C5148:
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// bl 0x826cc1d0
	sub_826CC1D0(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c5184
	if (!cr6.eq) goto loc_825C5184;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_825C5184:
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// bl 0x8270b7a8
	sub_8270B7A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C5190"))) PPC_WEAK_FUNC(sub_825C5190);
PPC_FUNC_IMPL(__imp__sub_825C5190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C5194"))) PPC_WEAK_FUNC(sub_825C5194);
PPC_FUNC_IMPL(__imp__sub_825C5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5198"))) PPC_WEAK_FUNC(sub_825C5198);
PPC_FUNC_IMPL(__imp__sub_825C5198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-2804
	ctx.r9.s64 = r11.s64 + -2804;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,-19428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19428, r31.u32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r29,12(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r28,8(r7)
	r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r27,16(r6)
	r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f31,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	f31.f64 = double(temp.f32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lfs f3,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	ctx.f3.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lfs f2,-31496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31496);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0410
	sub_826D0410(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r9,-2748
	ctx.r6.s64 = ctx.r9.s64 + -2748;
	// addi r5,r8,-2780
	ctx.r5.s64 = ctx.r8.s64 + -2780;
	// li r11,0
	r11.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r4,r7,-2796
	ctx.r4.s64 = ctx.r7.s64 + -2796;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_825C529C"))) PPC_WEAK_FUNC(sub_825C529C);
PPC_FUNC_IMPL(__imp__sub_825C529C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C52A0"))) PPC_WEAK_FUNC(sub_825C52A0);
PPC_FUNC_IMPL(__imp__sub_825C52A0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da500
	sub_826DA500(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r10,-2680
	r28.s64 = ctx.r10.s64 + -2680;
	// li r29,6
	r29.s64 = 6;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c5354
	if (cr6.eq) goto loc_825C5354;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r26,4(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r25,20(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x826cc368
	sub_826CC368(ctx, base);
	// b 0x825c5358
	goto loc_825C5358;
loc_825C5354:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C5358:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// lis r11,32
	r11.s64 = 2097152;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// lis r6,48
	ctx.r6.s64 = 3145728;
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r31.u32);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// stw r5,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// stw r4,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c540c
	if (cr6.eq) goto loc_825C540C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8270c400
	sub_8270C400(ctx, base);
	// b 0x825c5410
	goto loc_825C5410;
loc_825C540C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C5410:
	// stw r3,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// lis r26,-31934
	r26.s64 = -2092826624;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// addi r5,r11,-2716
	ctx.r5.s64 = r11.s64 + -2716;
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
	// lwz r4,18432(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 18432);
	// addi r27,r30,140
	r27.s64 = r30.s64 + 140;
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r3,204
	ctx.r3.s64 = 204;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c54d8
	if (cr6.eq) goto loc_825C54D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c54c8
	if (cr6.eq) goto loc_825C54C8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c9048
	sub_825C9048(ctx, base);
	// b 0x825c54dc
	goto loc_825C54DC;
loc_825C54C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c9048
	sub_825C9048(ctx, base);
	// b 0x825c54dc
	goto loc_825C54DC;
loc_825C54D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C54DC:
	// stw r3,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r29.u32);
	// addi r5,r11,-2744
	ctx.r5.s64 = r11.s64 + -2744;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18432(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 18432);
	// addi r27,r30,148
	r27.s64 = r30.s64 + 148;
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,69
	ctx.r8.s64 = 69;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c55b0
	if (cr6.eq) goto loc_825C55B0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c5598
	if (cr6.eq) goto loc_825C5598;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c5c40
	sub_825C5C40(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828e945c
	return;
loc_825C5598:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c5c40
	sub_825C5C40(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828e945c
	return;
loc_825C55B0:
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_825C55B8"))) PPC_WEAK_FUNC(sub_825C55B8);
PPC_FUNC_IMPL(__imp__sub_825C55B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825C55BC"))) PPC_WEAK_FUNC(sub_825C55BC);
PPC_FUNC_IMPL(__imp__sub_825C55BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C55C0"))) PPC_WEAK_FUNC(sub_825C55C0);
PPC_FUNC_IMPL(__imp__sub_825C55C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_825C55C4"))) PPC_WEAK_FUNC(sub_825C55C4);
PPC_FUNC_IMPL(__imp__sub_825C55C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c5658
	sub_825C5658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C55C8"))) PPC_WEAK_FUNC(sub_825C55C8);
PPC_FUNC_IMPL(__imp__sub_825C55C8) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-2796
	ctx.r10.s64 = r11.s64 + -2796;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825c5618
	if (cr6.eq) goto loc_825C5618;
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
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_825C5618:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-32392
	ctx.r9.s64 = r11.s64 + -32392;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x825c563c
	if (cr6.eq) goto loc_825C563C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C563C:
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

__attribute__((alias("__imp__sub_825C5650"))) PPC_WEAK_FUNC(sub_825C5650);
PPC_FUNC_IMPL(__imp__sub_825C5650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5654"))) PPC_WEAK_FUNC(sub_825C5654);
PPC_FUNC_IMPL(__imp__sub_825C5654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5658"))) PPC_WEAK_FUNC(sub_825C5658);
PPC_FUNC_IMPL(__imp__sub_825C5658) {
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
	// bl 0x825c4fb0
	sub_825C4FB0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c5690
	if (cr6.eq) goto loc_825C5690;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C5690:
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

__attribute__((alias("__imp__sub_825C56A4"))) PPC_WEAK_FUNC(sub_825C56A4);
PPC_FUNC_IMPL(__imp__sub_825C56A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C56A8"))) PPC_WEAK_FUNC(sub_825C56A8);
PPC_FUNC_IMPL(__imp__sub_825C56A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6030
	sub_825C6030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C56A8"))) PPC_WEAK_FUNC(sub_825C56A8);
PPC_FUNC_IMPL(__imp__sub_825C56A8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825C56AC"))) PPC_WEAK_FUNC(sub_825C56AC);
PPC_FUNC_IMPL(__imp__sub_825C56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C56B0"))) PPC_WEAK_FUNC(sub_825C56B0);
PPC_FUNC_IMPL(__imp__sub_825C56B0) {
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
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825c575c
	if (!cr6.eq) goto loc_825C575C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x825c5714
	if (cr6.eq) goto loc_825C5714;
loc_825C56F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8270b9f8
	sub_8270B9F8(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x825c56f8
	if (!cr6.eq) goto loc_825C56F8;
loc_825C5714:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x825c5750
	if (cr6.eq) goto loc_825C5750;
loc_825C5730:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270c2e0
	sub_8270C2E0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x825c5730
	if (!cr6.eq) goto loc_825C5730;
loc_825C5750:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270ba08
	sub_8270BA08(ctx, base);
loc_825C575C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C5760"))) PPC_WEAK_FUNC(sub_825C5760);
PPC_FUNC_IMPL(__imp__sub_825C5760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825C5764"))) PPC_WEAK_FUNC(sub_825C5764);
PPC_FUNC_IMPL(__imp__sub_825C5764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5768"))) PPC_WEAK_FUNC(sub_825C5768);
PPC_FUNC_IMPL(__imp__sub_825C5768) {
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
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825c5818
	if (!cr6.gt) goto loc_825C5818;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// bne 0x825c5818
	if (!cr0.eq) goto loc_825C5818;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8270ba08
	sub_8270BA08(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x825c57dc
	if (cr6.eq) goto loc_825C57DC;
loc_825C57C0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8270b9f8
	sub_8270B9F8(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x825c57c0
	if (!cr6.eq) goto loc_825C57C0;
loc_825C57DC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x825c5818
	if (cr6.eq) goto loc_825C5818;
loc_825C57F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270c2e0
	sub_8270C2E0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x825c57f8
	if (!cr6.eq) goto loc_825C57F8;
loc_825C5818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C581C"))) PPC_WEAK_FUNC(sub_825C581C);
PPC_FUNC_IMPL(__imp__sub_825C581C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C5820"))) PPC_WEAK_FUNC(sub_825C5820);
PPC_FUNC_IMPL(__imp__sub_825C5820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// b 0x825c5768
	sub_825C5768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C5838"))) PPC_WEAK_FUNC(sub_825C5838);
PPC_FUNC_IMPL(__imp__sub_825C5838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C583C"))) PPC_WEAK_FUNC(sub_825C583C);
PPC_FUNC_IMPL(__imp__sub_825C583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5840"))) PPC_WEAK_FUNC(sub_825C5840);
PPC_FUNC_IMPL(__imp__sub_825C5840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x825c5880
	if (cr6.lt) goto loc_825C5880;
	// beq cr6,0x825c5878
	if (cr6.eq) goto loc_825C5878;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,1
	r11.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// b 0x825c5768
	sub_825C5768(ctx, base);
	return;
loc_825C5878:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x825c56b0
	sub_825C56B0(ctx, base);
	return;
loc_825C5880:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
}

__attribute__((alias("__imp__sub_825C5884"))) PPC_WEAK_FUNC(sub_825C5884);
PPC_FUNC_IMPL(__imp__sub_825C5884) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c5768
	sub_825C5768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C5888"))) PPC_WEAK_FUNC(sub_825C5888);
PPC_FUNC_IMPL(__imp__sub_825C5888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C588C"))) PPC_WEAK_FUNC(sub_825C588C);
PPC_FUNC_IMPL(__imp__sub_825C588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5890"))) PPC_WEAK_FUNC(sub_825C5890);
PPC_FUNC_IMPL(__imp__sub_825C5890) {
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
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x825c5f98
	sub_825C5F98(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c5f98
	sub_825C5F98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C58D4"))) PPC_WEAK_FUNC(sub_825C58D4);
PPC_FUNC_IMPL(__imp__sub_825C58D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C58D8"))) PPC_WEAK_FUNC(sub_825C58D8);
PPC_FUNC_IMPL(__imp__sub_825C58D8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,-2592
	r30.s64 = r11.s64 + -2592;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// beq cr6,0x825c5afc
	if (cr6.eq) goto loc_825C5AFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c5afc
	if (cr6.eq) goto loc_825C5AFC;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,18440
	r30.s64 = r11.s64 + 18440;
	// addi r28,r10,-8324
	r28.s64 = ctx.r10.s64 + -8324;
	// addi r27,r9,32052
	r27.s64 = ctx.r9.s64 + 32052;
loc_825C5998:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c59fc
	if (cr6.eq) goto loc_825C59FC;
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
	// beq cr6,0x825c59fc
	if (cr6.eq) goto loc_825C59FC;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c5a00
	if (!cr6.eq) goto loc_825C5A00;
loc_825C59FC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825C5A00:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c5a70
	if (cr6.eq) goto loc_825C5A70;
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
	// beq cr6,0x825c5a70
	if (cr6.eq) goto loc_825C5A70;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c5a74
	if (!cr6.eq) goto loc_825C5A74;
loc_825C5A70:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825C5A74:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825c5ac0
	if (!cr6.gt) goto loc_825C5AC0;
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
loc_825C5AC0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c5ae4
	if (cr0.eq) goto loc_825C5AE4;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_825C5AE4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x825c5998
	if (!cr6.eq) goto loc_825C5998;
loc_825C5AFC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825C5B00"))) PPC_WEAK_FUNC(sub_825C5B00);
PPC_FUNC_IMPL(__imp__sub_825C5B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825C5B04"))) PPC_WEAK_FUNC(sub_825C5B04);
PPC_FUNC_IMPL(__imp__sub_825C5B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5B08"))) PPC_WEAK_FUNC(sub_825C5B08);
PPC_FUNC_IMPL(__imp__sub_825C5B08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,-2844
	r29.s64 = r11.s64 + -2844;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
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
	// beq cr6,0x825c5c38
	if (cr6.eq) goto loc_825C5C38;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x825c5c38
	if (cr6.eq) goto loc_825C5C38;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r29,r11,18440
	r29.s64 = r11.s64 + 18440;
loc_825C5BB8:
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c5bcc
	if (!cr6.eq) goto loc_825C5BCC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825C5BCC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825c5c00
	if (!cr6.gt) goto loc_825C5C00;
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
loc_825C5C00:
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
	// beq 0x825c5c20
	if (cr0.eq) goto loc_825C5C20;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825C5C20:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x825c5bb8
	if (!cr6.eq) goto loc_825C5BB8;
loc_825C5C38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C5C3C"))) PPC_WEAK_FUNC(sub_825C5C3C);
PPC_FUNC_IMPL(__imp__sub_825C5C3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C5C40"))) PPC_WEAK_FUNC(sub_825C5C40);
PPC_FUNC_IMPL(__imp__sub_825C5C40) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r11,-2612
	r28.s64 = r11.s64 + -2612;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// or r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 | ctx.r3.u64;
	// addi r25,r9,-2600
	r25.s64 = ctx.r9.s64 + -2600;
	// addi r24,r8,23372
	r24.s64 = ctx.r8.s64 + 23372;
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r25.u32);
	// addi r27,r30,24
	r27.s64 = r30.s64 + 24;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// or r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r23,r5,23492
	r23.s64 = ctx.r5.s64 + 23492;
	// stw r4,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r4.u32);
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// stw r23,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r23.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r31.u32);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r25,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r25.u32);
	// addi r28,r30,72
	r28.s64 = r30.s64 + 72;
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r31.u32);
	// stw r24,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r24.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// stw r23,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r23.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// or r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stw r8,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r8.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r31.u32);
	// addi r31,r11,5740
	r31.s64 = r11.s64 + 5740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r7,r25,24
	ctx.r7.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c5dd8
	if (cr6.eq) goto loc_825C5DD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c58d8
	sub_825C58D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c5b08
	sub_825C5B08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825C5DD8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-2584
	r31.s64 = r11.s64 + -2584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c5e88
	if (cr6.eq) goto loc_825C5E88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c58d8
	sub_825C58D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c5b08
	sub_825C5B08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825C5E88:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stw r6,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r6.u32);
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stw r4,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825C5EC0"))) PPC_WEAK_FUNC(sub_825C5EC0);
PPC_FUNC_IMPL(__imp__sub_825C5EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825C5EC4"))) PPC_WEAK_FUNC(sub_825C5EC4);
PPC_FUNC_IMPL(__imp__sub_825C5EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5EC8"))) PPC_WEAK_FUNC(sub_825C5EC8);
PPC_FUNC_IMPL(__imp__sub_825C5EC8) {
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
	// addi r9,r11,-2624
	ctx.r9.s64 = r11.s64 + -2624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825c5f0c
	if (!cr6.gt) goto loc_825C5F0C;
loc_825C5EF4:
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
	// bgt cr6,0x825c5ef4
	if (cr6.gt) goto loc_825C5EF4;
loc_825C5F0C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c5f24
	if (cr6.eq) goto loc_825C5F24;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C5F24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C5F34"))) PPC_WEAK_FUNC(sub_825C5F34);
PPC_FUNC_IMPL(__imp__sub_825C5F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F38"))) PPC_WEAK_FUNC(sub_825C5F38);
PPC_FUNC_IMPL(__imp__sub_825C5F38) {
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
	// addi r9,r10,-2612
	ctx.r9.s64 = ctx.r10.s64 + -2612;
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

__attribute__((alias("__imp__sub_825C5F90"))) PPC_WEAK_FUNC(sub_825C5F90);
PPC_FUNC_IMPL(__imp__sub_825C5F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F94"))) PPC_WEAK_FUNC(sub_825C5F94);
PPC_FUNC_IMPL(__imp__sub_825C5F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5F98"))) PPC_WEAK_FUNC(sub_825C5F98);
PPC_FUNC_IMPL(__imp__sub_825C5F98) {
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
	// addi r9,r11,-2612
	ctx.r9.s64 = r11.s64 + -2612;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825c5fdc
	if (!cr6.gt) goto loc_825C5FDC;
loc_825C5FC4:
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
	// bgt cr6,0x825c5fc4
	if (cr6.gt) goto loc_825C5FC4;
loc_825C5FDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6030
	sub_825C6030(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-2624
	ctx.r10.s64 = r11.s64 + -2624;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825c6018
	if (!cr6.gt) goto loc_825C6018;
loc_825C6000:
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
	// bgt cr6,0x825c6000
	if (cr6.gt) goto loc_825C6000;
loc_825C6018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C6028"))) PPC_WEAK_FUNC(sub_825C6028);
PPC_FUNC_IMPL(__imp__sub_825C6028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C602C"))) PPC_WEAK_FUNC(sub_825C602C);
PPC_FUNC_IMPL(__imp__sub_825C602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6030"))) PPC_WEAK_FUNC(sub_825C6030);
PPC_FUNC_IMPL(__imp__sub_825C6030) {
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
	// beq cr6,0x825c6114
	if (cr6.eq) goto loc_825C6114;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c60a4
	if (!cr6.eq) goto loc_825C60A4;
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
	// beq cr6,0x825c6114
	if (cr6.eq) goto loc_825C6114;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8259c760
	sub_8259C760(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825c6114
	goto loc_825C6114;
loc_825C60A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c5f38
	sub_825C5F38(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825c60d0
	if (!cr6.gt) goto loc_825C60D0;
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
loc_825C60D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259fea0
	sub_8259FEA0(ctx, base);
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
	// bl 0x825c5f98
	sub_825C5F98(ctx, base);
loc_825C6114:
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

__attribute__((alias("__imp__sub_825C6128"))) PPC_WEAK_FUNC(sub_825C6128);
PPC_FUNC_IMPL(__imp__sub_825C6128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C612C"))) PPC_WEAK_FUNC(sub_825C612C);
PPC_FUNC_IMPL(__imp__sub_825C612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6130"))) PPC_WEAK_FUNC(sub_825C6130);
PPC_FUNC_IMPL(__imp__sub_825C6130) {
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
	// bl 0x825c5f98
	sub_825C5F98(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c6168
	if (cr6.eq) goto loc_825C6168;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C6168:
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

__attribute__((alias("__imp__sub_825C617C"))) PPC_WEAK_FUNC(sub_825C617C);
PPC_FUNC_IMPL(__imp__sub_825C617C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6180"))) PPC_WEAK_FUNC(sub_825C6180);
PPC_FUNC_IMPL(__imp__sub_825C6180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x825c61d8
	if (cr6.eq) goto loc_825C61D8;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x825c61c0
	if (cr6.eq) goto loc_825C61C0;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825c61e0
	if (cr6.eq) goto loc_825C61E0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825c61e0
	if (cr6.eq) goto loc_825C61E0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825c61f0
	if (cr6.eq) goto loc_825C61F0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// b 0x825c61ec
	goto loc_825C61EC;
loc_825C61C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825c61e0
	if (cr6.eq) goto loc_825C61E0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825c61f0
	if (cr6.eq) goto loc_825C61F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// b 0x825c61ec
	goto loc_825C61EC;
loc_825C61D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825c61e8
	if (!cr6.eq) goto loc_825C61E8;
loc_825C61E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_825C61E8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
loc_825C61EC:
	// bnelr cr6
	if (!cr6.eq) return;
loc_825C61F0:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_825C61F4"))) PPC_WEAK_FUNC(sub_825C61F4);
PPC_FUNC_IMPL(__imp__sub_825C61F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C61F8"))) PPC_WEAK_FUNC(sub_825C61F8);
PPC_FUNC_IMPL(__imp__sub_825C61F8) {
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
	// lwz r3,480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-2556
	ctx.r10.s64 = r11.s64 + -2556;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825c6240
	if (cr6.eq) goto loc_825C6240;
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
	// stw r9,480(r31)
	PPC_STORE_U32(r31.u32 + 480, ctx.r9.u32);
loc_825C6240:
	// addi r3,r31,452
	ctx.r3.s64 = r31.s64 + 452;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,396
	ctx.r3.s64 = r31.s64 + 396;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = r31.s64 + 340;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
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

__attribute__((alias("__imp__sub_825C62D8"))) PPC_WEAK_FUNC(sub_825C62D8);
PPC_FUNC_IMPL(__imp__sub_825C62D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C62DC"))) PPC_WEAK_FUNC(sub_825C62DC);
PPC_FUNC_IMPL(__imp__sub_825C62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C62E0"))) PPC_WEAK_FUNC(sub_825C62E0);
PPC_FUNC_IMPL(__imp__sub_825C62E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
}

__attribute__((alias("__imp__sub_825C62E4"))) PPC_WEAK_FUNC(sub_825C62E4);
PPC_FUNC_IMPL(__imp__sub_825C62E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c2508
	sub_825C2508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C62E8"))) PPC_WEAK_FUNC(sub_825C62E8);
PPC_FUNC_IMPL(__imp__sub_825C62E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
}

__attribute__((alias("__imp__sub_825C62EC"))) PPC_WEAK_FUNC(sub_825C62EC);
PPC_FUNC_IMPL(__imp__sub_825C62EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c25c8
	sub_825C25C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C62F0"))) PPC_WEAK_FUNC(sub_825C62F0);
PPC_FUNC_IMPL(__imp__sub_825C62F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-2556
	ctx.r10.s64 = r11.s64 + -2556;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = r31.s64 + 340;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,396
	ctx.r3.s64 = r31.s64 + 396;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,452
	ctx.r3.s64 = r31.s64 + 452;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r30,0
	r30.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r9,-2540
	ctx.r7.s64 = ctx.r9.s64 + -2540;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c63f0
	if (cr6.eq) goto loc_825C63F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c1e68
	sub_825C1E68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,480(r31)
	PPC_STORE_U32(r31.u32 + 480, ctx.r3.u32);
	// b 0x825c63f4
	goto loc_825C63F4;
loc_825C63F0:
	// stw r30,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r30.u32);
loc_825C63F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_825C640C"))) PPC_WEAK_FUNC(sub_825C640C);
PPC_FUNC_IMPL(__imp__sub_825C640C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6410"))) PPC_WEAK_FUNC(sub_825C6410);
PPC_FUNC_IMPL(__imp__sub_825C6410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22228);
}

__attribute__((alias("__imp__sub_825C6418"))) PPC_WEAK_FUNC(sub_825C6418);
PPC_FUNC_IMPL(__imp__sub_825C6418) {
	PPC_FUNC_PROLOGUE();
	// b 0x826da5f0
	sub_826DA5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C641C"))) PPC_WEAK_FUNC(sub_825C641C);
PPC_FUNC_IMPL(__imp__sub_825C641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6420"))) PPC_WEAK_FUNC(sub_825C6420);
PPC_FUNC_IMPL(__imp__sub_825C6420) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
}

__attribute__((alias("__imp__sub_825C6428"))) PPC_WEAK_FUNC(sub_825C6428);
PPC_FUNC_IMPL(__imp__sub_825C6428) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c2508
	sub_825C2508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C642C"))) PPC_WEAK_FUNC(sub_825C642C);
PPC_FUNC_IMPL(__imp__sub_825C642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6430"))) PPC_WEAK_FUNC(sub_825C6430);
PPC_FUNC_IMPL(__imp__sub_825C6430) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c647c
	if (cr6.eq) goto loc_825C647C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1028
	sub_825C1028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C647C:
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

__attribute__((alias("__imp__sub_825C6490"))) PPC_WEAK_FUNC(sub_825C6490);
PPC_FUNC_IMPL(__imp__sub_825C6490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6494"))) PPC_WEAK_FUNC(sub_825C6494);
PPC_FUNC_IMPL(__imp__sub_825C6494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6498"))) PPC_WEAK_FUNC(sub_825C6498);
PPC_FUNC_IMPL(__imp__sub_825C6498) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c64e4
	if (cr6.eq) goto loc_825C64E4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1098
	sub_825C1098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C64E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C64E8"))) PPC_WEAK_FUNC(sub_825C64E8);
PPC_FUNC_IMPL(__imp__sub_825C64E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C64EC"))) PPC_WEAK_FUNC(sub_825C64EC);
PPC_FUNC_IMPL(__imp__sub_825C64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C64F0"))) PPC_WEAK_FUNC(sub_825C64F0);
PPC_FUNC_IMPL(__imp__sub_825C64F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r4,96
	ctx.r4.s64 = 96;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,-19428(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19428);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f30,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c65d8
	if (cr6.eq) goto loc_825C65D8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1108
	sub_825C1108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C65D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C65F4"))) PPC_WEAK_FUNC(sub_825C65F4);
PPC_FUNC_IMPL(__imp__sub_825C65F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C65F8"))) PPC_WEAK_FUNC(sub_825C65F8);
PPC_FUNC_IMPL(__imp__sub_825C65F8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6644
	if (cr6.eq) goto loc_825C6644;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1208
	sub_825C1208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6648"))) PPC_WEAK_FUNC(sub_825C6648);
PPC_FUNC_IMPL(__imp__sub_825C6648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C664C"))) PPC_WEAK_FUNC(sub_825C664C);
PPC_FUNC_IMPL(__imp__sub_825C664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6650"))) PPC_WEAK_FUNC(sub_825C6650);
PPC_FUNC_IMPL(__imp__sub_825C6650) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c669c
	if (cr6.eq) goto loc_825C669C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1278
	sub_825C1278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C669C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C66A0"))) PPC_WEAK_FUNC(sub_825C66A0);
PPC_FUNC_IMPL(__imp__sub_825C66A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C66A4"))) PPC_WEAK_FUNC(sub_825C66A4);
PPC_FUNC_IMPL(__imp__sub_825C66A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C66A8"))) PPC_WEAK_FUNC(sub_825C66A8);
PPC_FUNC_IMPL(__imp__sub_825C66A8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8270bb98
	sub_8270BB98(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c66f8
	if (cr6.eq) goto loc_825C66F8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1278
	sub_825C1278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C66F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6700"))) PPC_WEAK_FUNC(sub_825C6700);
PPC_FUNC_IMPL(__imp__sub_825C6700) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6704"))) PPC_WEAK_FUNC(sub_825C6704);
PPC_FUNC_IMPL(__imp__sub_825C6704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6708"))) PPC_WEAK_FUNC(sub_825C6708);
PPC_FUNC_IMPL(__imp__sub_825C6708) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6754
	if (cr6.eq) goto loc_825C6754;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c12e8
	sub_825C12E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6754:
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

__attribute__((alias("__imp__sub_825C6768"))) PPC_WEAK_FUNC(sub_825C6768);
PPC_FUNC_IMPL(__imp__sub_825C6768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C676C"))) PPC_WEAK_FUNC(sub_825C676C);
PPC_FUNC_IMPL(__imp__sub_825C676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6770"))) PPC_WEAK_FUNC(sub_825C6770);
PPC_FUNC_IMPL(__imp__sub_825C6770) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,-19428(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19428);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6808
	if (cr6.eq) goto loc_825C6808;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c13c8
	sub_825C13C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6808:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C680C"))) PPC_WEAK_FUNC(sub_825C680C);
PPC_FUNC_IMPL(__imp__sub_825C680C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6810"))) PPC_WEAK_FUNC(sub_825C6810);
PPC_FUNC_IMPL(__imp__sub_825C6810) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,-19428(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19428);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c68a8
	if (cr6.eq) goto loc_825C68A8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1480
	sub_825C1480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C68A8:
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

__attribute__((alias("__imp__sub_825C68BC"))) PPC_WEAK_FUNC(sub_825C68BC);
PPC_FUNC_IMPL(__imp__sub_825C68BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C68C0"))) PPC_WEAK_FUNC(sub_825C68C0);
PPC_FUNC_IMPL(__imp__sub_825C68C0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6914
	if (cr6.eq) goto loc_825C6914;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1538
	sub_825C1538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C6918"))) PPC_WEAK_FUNC(sub_825C6918);
PPC_FUNC_IMPL(__imp__sub_825C6918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C691C"))) PPC_WEAK_FUNC(sub_825C691C);
PPC_FUNC_IMPL(__imp__sub_825C691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6920"))) PPC_WEAK_FUNC(sub_825C6920);
PPC_FUNC_IMPL(__imp__sub_825C6920) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6974
	if (cr6.eq) goto loc_825C6974;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1558
	sub_825C1558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C6978"))) PPC_WEAK_FUNC(sub_825C6978);
PPC_FUNC_IMPL(__imp__sub_825C6978) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C697C"))) PPC_WEAK_FUNC(sub_825C697C);
PPC_FUNC_IMPL(__imp__sub_825C697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6980"))) PPC_WEAK_FUNC(sub_825C6980);
PPC_FUNC_IMPL(__imp__sub_825C6980) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c69cc
	if (cr6.eq) goto loc_825C69CC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1618
	sub_825C1618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C69CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C69D0"))) PPC_WEAK_FUNC(sub_825C69D0);
PPC_FUNC_IMPL(__imp__sub_825C69D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C69D4"))) PPC_WEAK_FUNC(sub_825C69D4);
PPC_FUNC_IMPL(__imp__sub_825C69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C69D8"))) PPC_WEAK_FUNC(sub_825C69D8);
PPC_FUNC_IMPL(__imp__sub_825C69D8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6a24
	if (cr6.eq) goto loc_825C6A24;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1630
	sub_825C1630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6A24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6A28"))) PPC_WEAK_FUNC(sub_825C6A28);
PPC_FUNC_IMPL(__imp__sub_825C6A28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6A2C"))) PPC_WEAK_FUNC(sub_825C6A2C);
PPC_FUNC_IMPL(__imp__sub_825C6A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6A30"))) PPC_WEAK_FUNC(sub_825C6A30);
PPC_FUNC_IMPL(__imp__sub_825C6A30) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6a7c
	if (cr6.eq) goto loc_825C6A7C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c17c0
	sub_825C17C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6A80"))) PPC_WEAK_FUNC(sub_825C6A80);
PPC_FUNC_IMPL(__imp__sub_825C6A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6A84"))) PPC_WEAK_FUNC(sub_825C6A84);
PPC_FUNC_IMPL(__imp__sub_825C6A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6A88"))) PPC_WEAK_FUNC(sub_825C6A88);
PPC_FUNC_IMPL(__imp__sub_825C6A88) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6ad4
	if (cr6.eq) goto loc_825C6AD4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c17d8
	sub_825C17D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6AD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6AD8"))) PPC_WEAK_FUNC(sub_825C6AD8);
PPC_FUNC_IMPL(__imp__sub_825C6AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6ADC"))) PPC_WEAK_FUNC(sub_825C6ADC);
PPC_FUNC_IMPL(__imp__sub_825C6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6AE0"))) PPC_WEAK_FUNC(sub_825C6AE0);
PPC_FUNC_IMPL(__imp__sub_825C6AE0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6b2c
	if (cr6.eq) goto loc_825C6B2C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c16e8
	sub_825C16E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6B30"))) PPC_WEAK_FUNC(sub_825C6B30);
PPC_FUNC_IMPL(__imp__sub_825C6B30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6B34"))) PPC_WEAK_FUNC(sub_825C6B34);
PPC_FUNC_IMPL(__imp__sub_825C6B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6B38"))) PPC_WEAK_FUNC(sub_825C6B38);
PPC_FUNC_IMPL(__imp__sub_825C6B38) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6b88
	if (cr6.eq) goto loc_825C6B88;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1708
	sub_825C1708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6B8C"))) PPC_WEAK_FUNC(sub_825C6B8C);
PPC_FUNC_IMPL(__imp__sub_825C6B8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6B90"))) PPC_WEAK_FUNC(sub_825C6B90);
PPC_FUNC_IMPL(__imp__sub_825C6B90) {
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
	// lwz r11,480(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x825c6bf4
	if (!cr6.eq) goto loc_825C6BF4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r11,-2464
	ctx.r3.s64 = r11.s64 + -2464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825c6bec
	if (cr6.eq) goto loc_825C6BEC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r11,-2476
	ctx.r3.s64 = r11.s64 + -2476;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825c6bf4
	if (!cr6.eq) goto loc_825C6BF4;
loc_825C6BEC:
	// li r30,1
	r30.s64 = 1;
	// b 0x825c6bf8
	goto loc_825C6BF8;
loc_825C6BF4:
	// li r30,0
	r30.s64 = 0;
loc_825C6BF8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6c34
	if (cr6.eq) goto loc_825C6C34;
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825c1708
	sub_825C1708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

