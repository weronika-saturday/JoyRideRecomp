#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824ABC80"))) PPC_WEAK_FUNC(sub_824ABC80);
PPC_FUNC_IMPL(__imp__sub_824ABC80) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-2976
	ctx.r6.s64 = ctx.r9.s64 + -2976;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2992
	ctx.r5.s64 = ctx.r8.s64 + -2992;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ABCF4"))) PPC_WEAK_FUNC(sub_824ABCF4);
PPC_FUNC_IMPL(__imp__sub_824ABCF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABCF8"))) PPC_WEAK_FUNC(sub_824ABCF8);
PPC_FUNC_IMPL(__imp__sub_824ABCF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x824abdbc
	if (cr6.lt) goto loc_824ABDBC;
	// lbz r11,64(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824abdbc
	if (!cr6.eq) goto loc_824ABDBC;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r11,20532(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20532);
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824abd64
	if (cr6.eq) goto loc_824ABD64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824abd68
	if (!cr6.eq) goto loc_824ABD68;
loc_824ABD64:
	// li r11,0
	r11.s64 = 0;
loc_824ABD68:
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
	// beq cr6,0x824abdb4
	if (cr6.eq) goto loc_824ABDB4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824abdb4
	if (!cr6.eq) goto loc_824ABDB4;
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
loc_824ABDB4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,64(r29)
	PPC_STORE_U8(r29.u32 + 64, r11.u8);
loc_824ABDBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824ABDC0"))) PPC_WEAK_FUNC(sub_824ABDC0);
PPC_FUNC_IMPL(__imp__sub_824ABDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824ABDC4"))) PPC_WEAK_FUNC(sub_824ABDC4);
PPC_FUNC_IMPL(__imp__sub_824ABDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABDC8"))) PPC_WEAK_FUNC(sub_824ABDC8);
PPC_FUNC_IMPL(__imp__sub_824ABDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3464
	ctx.r9.s64 = r11.s64 + 3464;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABDE4"))) PPC_WEAK_FUNC(sub_824ABDE4);
PPC_FUNC_IMPL(__imp__sub_824ABDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABDE8"))) PPC_WEAK_FUNC(sub_824ABDE8);
PPC_FUNC_IMPL(__imp__sub_824ABDE8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-2912
	ctx.r6.s64 = ctx.r9.s64 + -2912;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2928
	ctx.r5.s64 = ctx.r8.s64 + -2928;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ABE58"))) PPC_WEAK_FUNC(sub_824ABE58);
PPC_FUNC_IMPL(__imp__sub_824ABE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABE5C"))) PPC_WEAK_FUNC(sub_824ABE5C);
PPC_FUNC_IMPL(__imp__sub_824ABE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABE60"))) PPC_WEAK_FUNC(sub_824ABE60);
PPC_FUNC_IMPL(__imp__sub_824ABE60) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne cr6,0x824abefc
	if (!cr6.eq) goto loc_824ABEFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r30,24(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// beq cr6,0x824abec4
	if (cr6.eq) goto loc_824ABEC4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824abec8
	if (!cr6.eq) goto loc_824ABEC8;
loc_824ABEC4:
	// li r11,0
	r11.s64 = 0;
loc_824ABEC8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,84(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
loc_824ABEFC:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ABF18"))) PPC_WEAK_FUNC(sub_824ABF18);
PPC_FUNC_IMPL(__imp__sub_824ABF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABF1C"))) PPC_WEAK_FUNC(sub_824ABF1C);
PPC_FUNC_IMPL(__imp__sub_824ABF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABF20"))) PPC_WEAK_FUNC(sub_824ABF20);
PPC_FUNC_IMPL(__imp__sub_824ABF20) {
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
	// bl 0x826eda38
	sub_826EDA38(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x824b4ce8
	sub_824B4CE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ABF68"))) PPC_WEAK_FUNC(sub_824ABF68);
PPC_FUNC_IMPL(__imp__sub_824ABF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABF6C"))) PPC_WEAK_FUNC(sub_824ABF6C);
PPC_FUNC_IMPL(__imp__sub_824ABF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABF70"))) PPC_WEAK_FUNC(sub_824ABF70);
PPC_FUNC_IMPL(__imp__sub_824ABF70) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2864
	ctx.r9.s64 = r11.s64 + -2864;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824abfc0
	if (cr6.eq) goto loc_824ABFC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824ABFC0:
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

__attribute__((alias("__imp__sub_824ABFD4"))) PPC_WEAK_FUNC(sub_824ABFD4);
PPC_FUNC_IMPL(__imp__sub_824ABFD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABFD8"))) PPC_WEAK_FUNC(sub_824ABFD8);
PPC_FUNC_IMPL(__imp__sub_824ABFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2864
	ctx.r9.s64 = r11.s64 + -2864;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// b 0x826ed958
	sub_826ED958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABFF4"))) PPC_WEAK_FUNC(sub_824ABFF4);
PPC_FUNC_IMPL(__imp__sub_824ABFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABFF8"))) PPC_WEAK_FUNC(sub_824ABFF8);
PPC_FUNC_IMPL(__imp__sub_824ABFF8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ed908
	sub_826ED908(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-2808
	ctx.r6.s64 = ctx.r9.s64 + -2808;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-2824
	ctx.r5.s64 = ctx.r8.s64 + -2824;
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC068"))) PPC_WEAK_FUNC(sub_824AC068);
PPC_FUNC_IMPL(__imp__sub_824AC068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC06C"))) PPC_WEAK_FUNC(sub_824AC06C);
PPC_FUNC_IMPL(__imp__sub_824AC06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC070"))) PPC_WEAK_FUNC(sub_824AC070);
PPC_FUNC_IMPL(__imp__sub_824AC070) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// lwz r27,220(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824ac0b8
	if (!cr6.gt) goto loc_824AC0B8;
loc_824AC0A0:
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
	// bgt cr6,0x824ac0a0
	if (cr6.gt) goto loc_824AC0A0;
loc_824AC0B8:
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// addi r29,r11,296
	r29.s64 = r11.s64 + 296;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r28,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r28.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x824ac258
	if (cr6.eq) goto loc_824AC258;
loc_824AC0E4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r8
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x824ac234
	if (!cr6.eq) goto loc_824AC234;
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,234(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 234);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x824ac17c
	if (!cr6.eq) goto loc_824AC17C;
	// lwz r11,48(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x824ac17c
	if (cr6.eq) goto loc_824AC17C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_824AC158:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beq cr6,0x824ac178
	if (cr6.eq) goto loc_824AC178;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x824ac158
	if (!cr6.eq) goto loc_824AC158;
	// b 0x824ac17c
	goto loc_824AC17C;
loc_824AC178:
	// li r6,1
	ctx.r6.s64 = 1;
loc_824AC17C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x824ac198
	if (cr6.eq) goto loc_824AC198;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,224(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x824ac19c
	if (cr6.eq) goto loc_824AC19C;
loc_824AC198:
	// li r11,0
	r11.s64 = 0;
loc_824AC19C:
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824ac1e0
	if (cr6.eq) goto loc_824AC1E0;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824ac1c0
	if (!cr6.eq) goto loc_824AC1C0;
	// lbz r11,232(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 232);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x824ac1e0
	if (cr6.eq) goto loc_824AC1E0;
loc_824AC1C0:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824ac1d4
	if (!cr6.eq) goto loc_824AC1D4;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x824ac1e0
	if (cr6.eq) goto loc_824AC1E0;
loc_824AC1D4:
	// lbz r11,233(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 233);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ac234
	if (cr6.eq) goto loc_824AC234;
loc_824AC1E0:
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// addi r31,r11,96
	r31.s64 = r11.s64 + 96;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824ac210
	if (!cr6.gt) goto loc_824AC210;
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
loc_824AC210:
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
	// beq 0x824ac234
	if (cr0.eq) goto loc_824AC234;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824AC234:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x824ac0e4
	if (!cr6.eq) goto loc_824AC0E4;
loc_824AC258:
	// lwz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, xer);
	// beq cr6,0x824ac33c
	if (cr6.eq) goto loc_824AC33C;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lis r28,-31934
	r28.s64 = -2092826624;
loc_824AC280:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x824ac31c
	if (!cr6.eq) goto loc_824AC31C;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,18176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 18176);
	// lwz r11,-14368(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x824ac2cc
	if (cr6.eq) goto loc_824AC2CC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac2d0
	if (!cr6.eq) goto loc_824AC2D0;
loc_824AC2CC:
	// li r11,0
	r11.s64 = 0;
loc_824AC2D0:
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
	// beq cr6,0x824ac31c
	if (cr6.eq) goto loc_824AC31C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ac31c
	if (!cr6.eq) goto loc_824AC31C;
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
loc_824AC31C:
	// lwz r11,48(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// bne cr6,0x824ac280
	if (!cr6.eq) goto loc_824AC280;
loc_824AC33C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826edad8
	sub_826EDAD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824AC348"))) PPC_WEAK_FUNC(sub_824AC348);
PPC_FUNC_IMPL(__imp__sub_824AC348) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824AC34C"))) PPC_WEAK_FUNC(sub_824AC34C);
PPC_FUNC_IMPL(__imp__sub_824AC34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC350"))) PPC_WEAK_FUNC(sub_824AC350);
PPC_FUNC_IMPL(__imp__sub_824AC350) {
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
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824b4dc8
	sub_824B4DC8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// bl 0x826ed9f0
	sub_826ED9F0(ctx, base);
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

__attribute__((alias("__imp__sub_824AC3BC"))) PPC_WEAK_FUNC(sub_824AC3BC);
PPC_FUNC_IMPL(__imp__sub_824AC3BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC3C0"))) PPC_WEAK_FUNC(sub_824AC3C0);
PPC_FUNC_IMPL(__imp__sub_824AC3C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_824AC3C4"))) PPC_WEAK_FUNC(sub_824AC3C4);
PPC_FUNC_IMPL(__imp__sub_824AC3C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824abf70
	sub_824ABF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC3C8"))) PPC_WEAK_FUNC(sub_824AC3C8);
PPC_FUNC_IMPL(__imp__sub_824AC3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3464
	ctx.r9.s64 = r11.s64 + 3464;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC3E4"))) PPC_WEAK_FUNC(sub_824AC3E4);
PPC_FUNC_IMPL(__imp__sub_824AC3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC3E8"))) PPC_WEAK_FUNC(sub_824AC3E8);
PPC_FUNC_IMPL(__imp__sub_824AC3E8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-2752
	ctx.r6.s64 = ctx.r9.s64 + -2752;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2768
	ctx.r5.s64 = ctx.r8.s64 + -2768;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC458"))) PPC_WEAK_FUNC(sub_824AC458);
PPC_FUNC_IMPL(__imp__sub_824AC458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC45C"))) PPC_WEAK_FUNC(sub_824AC45C);
PPC_FUNC_IMPL(__imp__sub_824AC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC460"))) PPC_WEAK_FUNC(sub_824AC460);
PPC_FUNC_IMPL(__imp__sub_824AC460) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne cr6,0x824ac508
	if (!cr6.eq) goto loc_824AC508;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824ac508
	if (!cr6.eq) goto loc_824AC508;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r30,24(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// beq cr6,0x824ac4d0
	if (cr6.eq) goto loc_824AC4D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac4d4
	if (!cr6.eq) goto loc_824AC4D4;
loc_824AC4D0:
	// li r11,0
	r11.s64 = 0;
loc_824AC4D4:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,84(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
loc_824AC508:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC524"))) PPC_WEAK_FUNC(sub_824AC524);
PPC_FUNC_IMPL(__imp__sub_824AC524) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC528"))) PPC_WEAK_FUNC(sub_824AC528);
PPC_FUNC_IMPL(__imp__sub_824AC528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3464
	ctx.r9.s64 = r11.s64 + 3464;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC544"))) PPC_WEAK_FUNC(sub_824AC544);
PPC_FUNC_IMPL(__imp__sub_824AC544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC548"))) PPC_WEAK_FUNC(sub_824AC548);
PPC_FUNC_IMPL(__imp__sub_824AC548) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-2688
	ctx.r6.s64 = ctx.r9.s64 + -2688;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2704
	ctx.r5.s64 = ctx.r8.s64 + -2704;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC5BC"))) PPC_WEAK_FUNC(sub_824AC5BC);
PPC_FUNC_IMPL(__imp__sub_824AC5BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC5C0"))) PPC_WEAK_FUNC(sub_824AC5C0);
PPC_FUNC_IMPL(__imp__sub_824AC5C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bne cr6,0x824ac700
	if (!cr6.eq) goto loc_824AC700;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-14368(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r10,19332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19332);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x824ac62c
	if (cr6.eq) goto loc_824AC62C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac630
	if (!cr6.eq) goto loc_824AC630;
loc_824AC62C:
	// li r11,0
	r11.s64 = 0;
loc_824AC630:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// beq cr6,0x824ac67c
	if (cr6.eq) goto loc_824AC67C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ac67c
	if (!cr6.eq) goto loc_824AC67C;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AC67C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19340(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19340);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824ac6a8
	if (cr6.eq) goto loc_824AC6A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac6ac
	if (!cr6.eq) goto loc_824AC6AC;
loc_824AC6A8:
	// li r11,0
	r11.s64 = 0;
loc_824AC6AC:
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
	// beq cr6,0x824ac6f8
	if (cr6.eq) goto loc_824AC6F8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ac6f8
	if (!cr6.eq) goto loc_824AC6F8;
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
loc_824AC6F8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,64(r28)
	PPC_STORE_U8(r28.u32 + 64, r11.u8);
loc_824AC700:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x824ac7fc
	if (cr6.lt) goto loc_824AC7FC;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-14368(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r10,20528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20528);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x824ac750
	if (cr6.eq) goto loc_824AC750;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac754
	if (!cr6.eq) goto loc_824AC754;
loc_824AC750:
	// li r11,0
	r11.s64 = 0;
loc_824AC754:
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
	// beq cr6,0x824ac7a0
	if (cr6.eq) goto loc_824AC7A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ac7a0
	if (!cr6.eq) goto loc_824AC7A0;
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
loc_824AC7A0:
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r31,24(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// beq cr6,0x824ac7c4
	if (cr6.eq) goto loc_824AC7C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac7c8
	if (!cr6.eq) goto loc_824AC7C8;
loc_824AC7C4:
	// li r11,0
	r11.s64 = 0;
loc_824AC7C8:
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r9,44(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,84(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
loc_824AC7FC:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_824AC808"))) PPC_WEAK_FUNC(sub_824AC808);
PPC_FUNC_IMPL(__imp__sub_824AC808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AC80C"))) PPC_WEAK_FUNC(sub_824AC80C);
PPC_FUNC_IMPL(__imp__sub_824AC80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC810"))) PPC_WEAK_FUNC(sub_824AC810);
PPC_FUNC_IMPL(__imp__sub_824AC810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3464
	ctx.r9.s64 = r11.s64 + 3464;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC82C"))) PPC_WEAK_FUNC(sub_824AC82C);
PPC_FUNC_IMPL(__imp__sub_824AC82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC830"))) PPC_WEAK_FUNC(sub_824AC830);
PPC_FUNC_IMPL(__imp__sub_824AC830) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-2624
	ctx.r6.s64 = ctx.r9.s64 + -2624;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2640
	ctx.r5.s64 = ctx.r8.s64 + -2640;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC8A0"))) PPC_WEAK_FUNC(sub_824AC8A0);
PPC_FUNC_IMPL(__imp__sub_824AC8A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC8A4"))) PPC_WEAK_FUNC(sub_824AC8A4);
PPC_FUNC_IMPL(__imp__sub_824AC8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC8A8"))) PPC_WEAK_FUNC(sub_824AC8A8);
PPC_FUNC_IMPL(__imp__sub_824AC8A8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f13,224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// blt cr6,0x824ac940
	if (cr6.lt) goto loc_824AC940;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// lwz r30,24(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ac908
	if (cr6.eq) goto loc_824AC908;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ac90c
	if (!cr6.eq) goto loc_824AC90C;
loc_824AC908:
	// li r11,0
	r11.s64 = 0;
loc_824AC90C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,84(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
loc_824AC940:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC95C"))) PPC_WEAK_FUNC(sub_824AC95C);
PPC_FUNC_IMPL(__imp__sub_824AC95C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC960"))) PPC_WEAK_FUNC(sub_824AC960);
PPC_FUNC_IMPL(__imp__sub_824AC960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824AC964"))) PPC_WEAK_FUNC(sub_824AC964);
PPC_FUNC_IMPL(__imp__sub_824AC964) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b20d0
	sub_822B20D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC968"))) PPC_WEAK_FUNC(sub_824AC968);
PPC_FUNC_IMPL(__imp__sub_824AC968) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r8,212(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// stb r8,164(r9)
	PPC_STORE_U8(ctx.r9.u32 + 164, ctx.r8.u8);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r5,220(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	// stw r5,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r5.u32);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,172(r4)
	PPC_STORE_U32(ctx.r4.u32 + 172, ctx.r10.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r3.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	f0.f64 = double(temp.f32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f0,180(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 180, temp.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,184(r5)
	PPC_STORE_U32(ctx.r5.u32 + 184, ctx.r4.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AC9FC"))) PPC_WEAK_FUNC(sub_824AC9FC);
PPC_FUNC_IMPL(__imp__sub_824AC9FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ACA00"))) PPC_WEAK_FUNC(sub_824ACA00);
PPC_FUNC_IMPL(__imp__sub_824ACA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ACA04"))) PPC_WEAK_FUNC(sub_824ACA04);
PPC_FUNC_IMPL(__imp__sub_824ACA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ACA08"))) PPC_WEAK_FUNC(sub_824ACA08);
PPC_FUNC_IMPL(__imp__sub_824ACA08) {
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
	// lwz r3,604(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r3,212(r9)
	PPC_STORE_U8(ctx.r9.u32 + 212, ctx.r3.u8);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ACA64"))) PPC_WEAK_FUNC(sub_824ACA64);
PPC_FUNC_IMPL(__imp__sub_824ACA64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ACA68"))) PPC_WEAK_FUNC(sub_824ACA68);
PPC_FUNC_IMPL(__imp__sub_824ACA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824acb2c
	if (!cr6.eq) goto loc_824ACB2C;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824acb2c
	if (!cr6.eq) goto loc_824ACB2C;
	// lbz r11,212(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824acb2c
	if (!cr6.eq) goto loc_824ACB2C;
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f7,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_824ACB2C:
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

__attribute__((alias("__imp__sub_824ACB40"))) PPC_WEAK_FUNC(sub_824ACB40);
PPC_FUNC_IMPL(__imp__sub_824ACB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ACB44"))) PPC_WEAK_FUNC(sub_824ACB44);
PPC_FUNC_IMPL(__imp__sub_824ACB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ACB48"))) PPC_WEAK_FUNC(sub_824ACB48);
PPC_FUNC_IMPL(__imp__sub_824ACB48) {
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
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r7,214(r6)
	PPC_STORE_U8(ctx.r6.u32 + 214, ctx.r7.u8);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r4,214(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 214);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x824acbbc
	if (!cr6.eq) goto loc_824ACBBC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,214(r10)
	PPC_STORE_U8(ctx.r10.u32 + 214, ctx.r7.u8);
loc_824ACBBC:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824acbdc
	if (cr6.eq) goto loc_824ACBDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824acbe0
	if (!cr6.eq) goto loc_824ACBE0;
loc_824ACBDC:
	// li r11,0
	r11.s64 = 0;
loc_824ACBE0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,88(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 292, ctx.r3.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,292(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,228(r6)
	PPC_STORE_U32(ctx.r6.u32 + 228, ctx.r3.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824acc58
	if (cr6.eq) goto loc_824ACC58;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824acc58
	if (cr6.eq) goto loc_824ACC58;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
loc_824ACC58:
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

__attribute__((alias("__imp__sub_824ACC6C"))) PPC_WEAK_FUNC(sub_824ACC6C);
PPC_FUNC_IMPL(__imp__sub_824ACC6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ACC70"))) PPC_WEAK_FUNC(sub_824ACC70);
PPC_FUNC_IMPL(__imp__sub_824ACC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// stfs f11,12(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lfs f6,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// lfs f2,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,52(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f11,100(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f10,104(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stfs f9,108(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 108, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 420);
	// lfs f8,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 144, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,148(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 148, temp.u32);
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stfs f6,152(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 152, temp.u32);
	// lfs f5,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// stfs f5,156(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 156, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,112(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,116(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,120(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,124(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r5,r8,-24596
	ctx.r5.s64 = ctx.r8.s64 + -24596;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f1,-2580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2580);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ACE90"))) PPC_WEAK_FUNC(sub_824ACE90);
PPC_FUNC_IMPL(__imp__sub_824ACE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ACE94"))) PPC_WEAK_FUNC(sub_824ACE94);
PPC_FUNC_IMPL(__imp__sub_824ACE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ACE98"))) PPC_WEAK_FUNC(sub_824ACE98);
PPC_FUNC_IMPL(__imp__sub_824ACE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// lfs f0,4036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4036);
	f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f7,232(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 232, temp.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r4,214(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 214);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x824acf38
	if (!cr6.eq) goto loc_824ACF38;
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824acf38
	if (!cr6.eq) goto loc_824ACF38;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824acf38
	if (!cr6.eq) goto loc_824ACF38;
	// rotlwi r11,r5,0
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stb r29,214(r11)
	PPC_STORE_U8(r11.u32 + 214, r29.u8);
loc_824ACF38:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,214(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 214);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824acf6c
	if (!cr6.eq) goto loc_824ACF6C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x824acf68
	if (!cr6.gt) goto loc_824ACF68;
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// stb r10,213(r11)
	PPC_STORE_U8(r11.u32 + 213, ctx.r10.u8);
	// b 0x824acf6c
	goto loc_824ACF6C;
loc_824ACF68:
	// stb r29,213(r11)
	PPC_STORE_U8(r11.u32 + 213, r29.u8);
loc_824ACF6C:
	// lbz r11,54(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r11,216(r10)
	PPC_STORE_U8(ctx.r10.u32 + 216, r11.u8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r7,215(r8)
	PPC_STORE_U8(ctx.r8.u32 + 215, ctx.r7.u8);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,68(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x824acfb0
	if (!cr6.eq) goto loc_824ACFB0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,215(r11)
	PPC_STORE_U8(r11.u32 + 215, r29.u8);
loc_824ACFB0:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824acfd0
	if (cr6.eq) goto loc_824ACFD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824acfd4
	if (!cr6.eq) goto loc_824ACFD4;
loc_824ACFD0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_824ACFD4:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad01c
	if (cr6.eq) goto loc_824AD01C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245eb20
	sub_8245EB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad01c
	if (cr6.eq) goto loc_824AD01C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r9,244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 244, ctx.r9.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stfs f0,236(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 236, temp.u32);
loc_824AD01C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824AD020"))) PPC_WEAK_FUNC(sub_824AD020);
PPC_FUNC_IMPL(__imp__sub_824AD020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AD024"))) PPC_WEAK_FUNC(sub_824AD024);
PPC_FUNC_IMPL(__imp__sub_824AD024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AD028"))) PPC_WEAK_FUNC(sub_824AD028);
PPC_FUNC_IMPL(__imp__sub_824AD028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,256(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// beq cr6,0x824ad1ac
	if (cr6.eq) goto loc_824AD1AC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ad088
	if (cr6.eq) goto loc_824AD088;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ad08c
	if (!cr6.eq) goto loc_824AD08C;
loc_824AD088:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824AD08C:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f7,f8
	f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f9,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f12,f3,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f29,f11,f1
	f29.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f31,f9,f1
	f31.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f30,f1,f10
	f30.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f29,136(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f1,-2580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2580);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82700280
	sub_82700280(ctx, base);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,256(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// lwz r7,140(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f8,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 68, temp.u32);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,72(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 72, temp.u32);
	// lfs f5,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,76(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 76, temp.u32);
	// lfs f4,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,80(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// lfs f3,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,84(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// lfs f2,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,88(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// lfs f1,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,92(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 92, temp.u32);
loc_824AD1AC:
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AD1D0"))) PPC_WEAK_FUNC(sub_824AD1D0);
PPC_FUNC_IMPL(__imp__sub_824AD1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AD1D4"))) PPC_WEAK_FUNC(sub_824AD1D4);
PPC_FUNC_IMPL(__imp__sub_824AD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AD1D8"))) PPC_WEAK_FUNC(sub_824AD1D8);
PPC_FUNC_IMPL(__imp__sub_824AD1D8) {
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
	// beq cr6,0x824ad20c
	if (cr6.eq) goto loc_824AD20C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ad210
	if (!cr6.eq) goto loc_824AD210;
loc_824AD20C:
	// li r11,0
	r11.s64 = 0;
loc_824AD210:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad264
	if (cr6.eq) goto loc_824AD264;
	// lwz r11,244(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r11,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, r11.u32);
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad270
	if (cr6.eq) goto loc_824AD270;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,2604(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2604);
	// stw r10,252(r11)
	PPC_STORE_U32(r11.u32 + 252, ctx.r10.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 248, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824AD264:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,288(r11)
	PPC_STORE_U32(r11.u32 + 288, ctx.r10.u32);
loc_824AD270:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AD280"))) PPC_WEAK_FUNC(sub_824AD280);
PPC_FUNC_IMPL(__imp__sub_824AD280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AD284"))) PPC_WEAK_FUNC(sub_824AD284);
PPC_FUNC_IMPL(__imp__sub_824AD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AD288"))) PPC_WEAK_FUNC(sub_824AD288);
PPC_FUNC_IMPL(__imp__sub_824AD288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
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
	// bl 0x828e9410
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eaac0
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ad584
	if (cr6.eq) goto loc_824AD584;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824ad584
	if (!cr6.eq) goto loc_824AD584;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f19,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f19.f64 = double(temp.f32);
	// lfs f18,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f18.f64 = double(temp.f32);
	// lfs f17,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f17.f64 = double(temp.f32);
	// lfs f16,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f16.f64 = double(temp.f32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,44(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// lfs f8,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,40(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f15,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f15.f64 = double(temp.f32);
	// lfs f14,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f14.f64 = double(temp.f32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	f0.f64 = double(temp.f32);
	// fsubs f28,f17,f0
	f28.f64 = double(float(f17.f64 - f0.f64));
	// lfs f13,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f19,f13
	f27.f64 = double(float(f19.f64 - ctx.f13.f64));
	// lfs f12,100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f26,f18,f12
	f26.f64 = double(float(f18.f64 - ctx.f12.f64));
	// lfs f11,108(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f16,f11
	ctx.f9.f64 = double(float(f16.f64 - ctx.f11.f64));
	// lfs f7,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,136(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,140(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f2,f28,f28
	ctx.f2.f64 = double(float(f28.f64 * f28.f64));
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f1,f27,f27,f2
	ctx.f1.f64 = double(float(f27.f64 * f27.f64 + ctx.f2.f64));
	// fmadds f0,f26,f26,f1
	f0.f64 = double(float(f26.f64 * f26.f64 + ctx.f1.f64));
	// fsqrts f20,f0
	f20.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f10,f20
	cr6.compare(ctx.f10.f64, f20.f64);
	// bgt cr6,0x824ad3ac
	if (cr6.gt) goto loc_824AD3AC;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f20,f0
	cr6.compare(f20.f64, f0.f64);
	// ble cr6,0x824ad3b0
	if (!cr6.gt) goto loc_824AD3B0;
loc_824AD3AC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824AD3B0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r28,-32254
	r28.s64 = -2113798144;
	// addi r30,r11,-24596
	r30.s64 = r11.s64 + -24596;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,-2580(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -2580);
	f31.f64 = double(temp.f32);
	// clrlwi r27,r10,24
	r27.u64 = ctx.r10.u32 & 0xFF;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f25,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f25.f64 = double(temp.f32);
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(f0.f64 * f25.f64));
	// lfs f24,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f24.f64 = double(temp.f32);
	// fmuls f1,f13,f24
	ctx.f1.f64 = double(float(ctx.f13.f64 * f24.f64));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f31.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f23,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f23.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f11,f31,f23
	ctx.f11.f64 = double(float(f31.f64 * f23.f64));
	// lfs f22,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f22.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f29.f64 = double(temp.f32);
	// lfs f21,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f21.f64 = double(temp.f32);
	// fmadds f10,f22,f30,f11
	ctx.f10.f64 = double(float(f22.f64 * f30.f64 + ctx.f11.f64));
	// fmadds f9,f29,f21,f10
	ctx.f9.f64 = double(float(f29.f64 * f21.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f12
	cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x824ad444
	if (!cr6.lt) goto loc_824AD444;
	// li r11,0
	r11.s64 = 0;
loc_824AD444:
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// lfs f0,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(f0.f64 * f25.f64));
	// fmuls f1,f13,f24
	ctx.f1.f64 = double(float(ctx.f13.f64 * f24.f64));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r9,-9356
	ctx.r7.s64 = ctx.r9.s64 + -9356;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-9356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9356);
	f0.f64 = double(temp.f32);
	// fmuls f9,f31,f0
	ctx.f9.f64 = double(float(f31.f64 * f0.f64));
	// lfs f11,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f29,f13
	ctx.f8.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f7,f30,f12
	ctx.f7.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmsubs f5,f30,f13,f9
	ctx.f5.f64 = double(float(f30.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fmsubs f4,f31,f12,f8
	ctx.f4.f64 = double(float(f31.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f3,f29,f0,f7
	ctx.f3.f64 = double(float(f29.f64 * f0.f64 - ctx.f7.f64));
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * f30.f64));
	// fmuls f1,f31,f4
	ctx.f1.f64 = double(float(f31.f64 * ctx.f4.f64));
	// fmuls f0,f3,f29
	f0.f64 = double(float(ctx.f3.f64 * f29.f64));
	// fmsubs f13,f29,f4,f2
	ctx.f13.f64 = double(float(f29.f64 * ctx.f4.f64 - ctx.f2.f64));
	// fmsubs f12,f3,f30,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * f30.f64 - ctx.f1.f64));
	// fmsubs f11,f5,f31,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * f31.f64 - f0.f64));
	// fmuls f10,f13,f23
	ctx.f10.f64 = double(float(ctx.f13.f64 * f23.f64));
	// fmadds f9,f11,f22,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * f22.f64 + ctx.f10.f64));
	// fmadds f8,f12,f21,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * f21.f64 + ctx.f9.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f6
	cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x824ad4d0
	if (!cr6.gt) goto loc_824AD4D0;
	// li r11,0
	r11.s64 = 0;
loc_824AD4D0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824ad584
	if (cr6.eq) goto loc_824AD584;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824ad584
	if (cr6.eq) goto loc_824AD584;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ad584
	if (cr6.eq) goto loc_824AD584;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// lwz r4,224(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x824b5a80
	sub_824B5A80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad584
	if (cr6.eq) goto loc_824AD584;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// lwz r7,224(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stfs f19,40(r3)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f18,44(r3)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f17,48(r3)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f16,52(r3)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stfs f15,56(r11)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f14,60(r11)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// stfs f27,104(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// stfs f26,108(r11)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r11.u32 + 108, temp.u32);
	// stfs f28,112(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 112, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 116, temp.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stfs f20,32(r11)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f1,-2580(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -2580);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
loc_824AD584:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_824AD590"))) PPC_WEAK_FUNC(sub_824AD590);
PPC_FUNC_IMPL(__imp__sub_824AD590) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824AD594"))) PPC_WEAK_FUNC(sub_824AD594);
PPC_FUNC_IMPL(__imp__sub_824AD594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AD598"))) PPC_WEAK_FUNC(sub_824AD598);
PPC_FUNC_IMPL(__imp__sub_824AD598) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824ad8e0
	if (cr6.eq) goto loc_824AD8E0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b5d38
	sub_824B5D38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad8e0
	if (cr6.eq) goto loc_824AD8E0;
	// li r27,0
	r27.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824ad8cc
	if (!cr6.eq) goto loc_824AD8CC;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b2720
	sub_822B2720(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824ad7a4
	if (cr6.eq) goto loc_824AD7A4;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r28,r5,-24596
	r28.s64 = ctx.r5.s64 + -24596;
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// stfs f7,68(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lfs f5,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// fsubs f10,f4,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f31,-2580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2580);
	f31.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmadds f4,f10,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f10,96(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f9,100(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
loc_824AD7A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b2770
	sub_822B2770(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ad7fc
	if (cr6.eq) goto loc_824AD7FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
loc_824AD7FC:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b0328
	sub_822B0328(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ad874
	if (cr6.eq) goto loc_824AD874;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad874
	if (cr6.eq) goto loc_824AD874;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245eb20
	sub_8245EB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ad874
	if (cr6.eq) goto loc_824AD874;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_824AD874:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1c58
	sub_822B1C58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ad8cc
	if (cr6.eq) goto loc_824AD8CC;
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,48(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826e98e0
	sub_826E98E0(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r3.u8);
loc_824AD8CC:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ad8e0
	if (!cr6.eq) goto loc_824AD8E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b5748
	sub_824B5748(ctx, base);
loc_824AD8E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_824AD8E8"))) PPC_WEAK_FUNC(sub_824AD8E8);
PPC_FUNC_IMPL(__imp__sub_824AD8E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824AD8EC"))) PPC_WEAK_FUNC(sub_824AD8EC);
PPC_FUNC_IMPL(__imp__sub_824AD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AD8F0"))) PPC_WEAK_FUNC(sub_824AD8F0);
PPC_FUNC_IMPL(__imp__sub_824AD8F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r4,r11,272
	ctx.r4.s64 = r11.s64 + 272;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826ecb08
	sub_826ECB08(ctx, base);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r4,r11,268
	ctx.r4.s64 = r11.s64 + 268;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x826ecb08
	sub_826ECB08(ctx, base);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ad950
	if (cr6.eq) goto loc_824AD950;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ad954
	if (!cr6.eq) goto loc_824AD954;
loc_824AD950:
	// li r11,0
	r11.s64 = 0;
loc_824AD954:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18156);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,804
	ctx.r4.s64 = r28.s64 + 804;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ad9a8
	if (!cr6.eq) goto loc_824AD9A8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ad9a8
	if (!cr6.eq) goto loc_824AD9A8;
	// lwz r11,18156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AD9A8:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ad9c4
	if (cr6.eq) goto loc_824AD9C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ad9c8
	if (!cr6.eq) goto loc_824AD9C8;
loc_824AD9C4:
	// li r11,0
	r11.s64 = 0;
loc_824AD9C8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,776
	ctx.r4.s64 = r28.s64 + 776;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ada1c
	if (!cr6.eq) goto loc_824ADA1C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ada1c
	if (!cr6.eq) goto loc_824ADA1C;
	// lwz r11,18160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824ADA1C:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ada38
	if (cr6.eq) goto loc_824ADA38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ada3c
	if (!cr6.eq) goto loc_824ADA3C;
loc_824ADA38:
	// li r11,0
	r11.s64 = 0;
loc_824ADA3C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18172);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,720
	ctx.r4.s64 = r28.s64 + 720;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ada90
	if (!cr6.eq) goto loc_824ADA90;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ada90
	if (!cr6.eq) goto loc_824ADA90;
	// lwz r11,18172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18172);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824ADA90:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824adaac
	if (cr6.eq) goto loc_824ADAAC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824adab0
	if (!cr6.eq) goto loc_824ADAB0;
loc_824ADAAC:
	// li r11,0
	r11.s64 = 0;
loc_824ADAB0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18164);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,748
	ctx.r4.s64 = r28.s64 + 748;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824adb04
	if (!cr6.eq) goto loc_824ADB04;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824adb04
	if (!cr6.eq) goto loc_824ADB04;
	// lwz r11,18164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18164);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824ADB04:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824adb20
	if (cr6.eq) goto loc_824ADB20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824adb24
	if (!cr6.eq) goto loc_824ADB24;
loc_824ADB20:
	// li r11,0
	r11.s64 = 0;
loc_824ADB24:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,692
	ctx.r4.s64 = r28.s64 + 692;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824adb78
	if (!cr6.eq) goto loc_824ADB78;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824adb78
	if (!cr6.eq) goto loc_824ADB78;
	// lwz r11,18148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824ADB78:
	// lwz r10,844(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 844);
	// addi r11,r28,832
	r11.s64 = r28.s64 + 832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824adba0
	if (!cr6.gt) goto loc_824ADBA0;
loc_824ADB88:
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
	// bgt cr6,0x824adb88
	if (cr6.gt) goto loc_824ADB88;
loc_824ADBA0:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824ADBB0"))) PPC_WEAK_FUNC(sub_824ADBB0);
PPC_FUNC_IMPL(__imp__sub_824ADBB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824ADBB4"))) PPC_WEAK_FUNC(sub_824ADBB4);
PPC_FUNC_IMPL(__imp__sub_824ADBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ADBB8"))) PPC_WEAK_FUNC(sub_824ADBB8);
PPC_FUNC_IMPL(__imp__sub_824ADBB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824adbe8
	if (cr6.eq) goto loc_824ADBE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824adbec
	if (!cr6.eq) goto loc_824ADBEC;
loc_824ADBE8:
	// li r11,0
	r11.s64 = 0;
loc_824ADBEC:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824adccc
	if (cr6.eq) goto loc_824ADCCC;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b58b0
	sub_824B58B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b92d0
	sub_822B92D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824adc5c
	if (cr6.eq) goto loc_824ADC5C;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8245dff8
	sub_8245DFF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x824adc5c
	if (!cr6.gt) goto loc_824ADC5C;
loc_824ADC2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245e180
	sub_8245E180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ad598
	sub_824AD598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x8245dff8
	sub_8245DFF8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x824adc2c
	if (cr6.lt) goto loc_824ADC2C;
loc_824ADC5C:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824adcc0
	if (cr6.eq) goto loc_824ADCC0;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824adc88
	if (cr6.eq) goto loc_824ADC88;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824adc8c
	if (!cr6.eq) goto loc_824ADC8C;
loc_824ADC88:
	// li r11,0
	r11.s64 = 0;
loc_824ADC8C:
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r11,r11,124
	r11.s64 = r11.s64 + 124;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x824adcc0
	if (cr6.eq) goto loc_824ADCC0;
loc_824ADCA4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ad288
	sub_824AD288(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x824adca4
	if (!cr6.eq) goto loc_824ADCA4;
loc_824ADCC0:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b5938
	sub_824B5938(ctx, base);
loc_824ADCCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824ADCD0"))) PPC_WEAK_FUNC(sub_824ADCD0);
PPC_FUNC_IMPL(__imp__sub_824ADCD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824ADCD4"))) PPC_WEAK_FUNC(sub_824ADCD4);
PPC_FUNC_IMPL(__imp__sub_824ADCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ADCD8"))) PPC_WEAK_FUNC(sub_824ADCD8);
PPC_FUNC_IMPL(__imp__sub_824ADCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,844(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824ade9c
	if (!cr6.gt) goto loc_824ADE9C;
	// lwz r31,836(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824ade90
	if (!cr6.eq) goto loc_824ADE90;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r29,20(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x824addf4
	if (cr6.eq) goto loc_824ADDF4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824addf4
	if (cr6.eq) goto loc_824ADDF4;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x824b9520
	sub_824B9520(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r10,-12880
	ctx.r5.s64 = ctx.r10.s64 + -12880;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r9,-20692
	ctx.r5.s64 = ctx.r9.s64 + -20692;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r8,-3892
	ctx.r5.s64 = ctx.r8.s64 + -3892;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r7,-3904
	ctx.r5.s64 = ctx.r7.s64 + -3904;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r6,-3912
	ctx.r5.s64 = ctx.r6.s64 + -3912;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
loc_824ADDF4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// lwz r11,18144(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18144);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// beq cr6,0x824ade40
	if (cr6.eq) goto loc_824ADE40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ade44
	if (!cr6.eq) goto loc_824ADE44;
loc_824ADE40:
	// li r11,0
	r11.s64 = 0;
loc_824ADE44:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ade90
	if (cr6.eq) goto loc_824ADE90;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ade90
	if (!cr6.eq) goto loc_824ADE90;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824ADE90:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,832
	ctx.r3.s64 = r30.s64 + 832;
	// bl 0x824aef60
	sub_824AEF60(ctx, base);
loc_824ADE9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_824ADEA4"))) PPC_WEAK_FUNC(sub_824ADEA4);
PPC_FUNC_IMPL(__imp__sub_824ADEA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824ADEA8"))) PPC_WEAK_FUNC(sub_824ADEA8);
PPC_FUNC_IMPL(__imp__sub_824ADEA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824ae0d8
	if (!cr6.eq) goto loc_824AE0D8;
	// lbz r11,217(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 217);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ae0d8
	if (!cr6.eq) goto loc_824AE0D8;
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824adf20
	if (cr6.eq) goto loc_824ADF20;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824ae0d8
	if (!cr6.eq) goto loc_824AE0D8;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824adf10
	if (cr6.eq) goto loc_824ADF10;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x824adf14
	if (!cr6.eq) goto loc_824ADF14;
loc_824ADF10:
	// li r11,0
	r11.s64 = 0;
loc_824ADF14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824ae0d8
	if (!cr6.eq) goto loc_824AE0D8;
loc_824ADF20:
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824adf44
	if (cr6.eq) goto loc_824ADF44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// bne cr6,0x824adf48
	if (!cr6.eq) goto loc_824ADF48;
loc_824ADF44:
	// li r11,0
	r11.s64 = 0;
loc_824ADF48:
	// lwz r31,88(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824adf64
	if (cr6.eq) goto loc_824ADF64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824adf68
	if (!cr6.eq) goto loc_824ADF68;
loc_824ADF64:
	// li r11,0
	r11.s64 = 0;
loc_824ADF68:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824ae03c
	if (cr6.eq) goto loc_824AE03C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824ae03c
	if (cr6.eq) goto loc_824AE03C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ad598
	sub_824AD598(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-24904
	ctx.r4.s64 = r11.s64 + -24904;
	// lbz r8,235(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 235);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stb r8,24(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24, ctx.r8.u8);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r29,8(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r3,260(r4)
	PPC_STORE_U32(ctx.r4.u32 + 260, ctx.r3.u32);
	// beq cr6,0x824ae018
	if (cr6.eq) goto loc_824AE018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ae018
	if (cr6.eq) goto loc_824AE018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// stw r10,264(r11)
	PPC_STORE_U32(r11.u32 + 264, ctx.r10.u32);
loc_824AE018:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,217(r11)
	PPC_STORE_U8(r11.u32 + 217, ctx.r10.u8);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stb r9,13(r8)
	PPC_STORE_U8(ctx.r8.u32 + 13, ctx.r9.u8);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x824b4d50
	sub_824B4D50(ctx, base);
loc_824AE03C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r31,260(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// lwz r30,264(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-14368(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lwz r10,18188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18188);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x824ae088
	if (cr6.eq) goto loc_824AE088;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae08c
	if (!cr6.eq) goto loc_824AE08C;
loc_824AE088:
	// li r11,0
	r11.s64 = 0;
loc_824AE08C:
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
	// beq cr6,0x824ae0d8
	if (cr6.eq) goto loc_824AE0D8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ae0d8
	if (!cr6.eq) goto loc_824AE0D8;
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
loc_824AE0D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824AE0DC"))) PPC_WEAK_FUNC(sub_824AE0DC);
PPC_FUNC_IMPL(__imp__sub_824AE0DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AE0E0"))) PPC_WEAK_FUNC(sub_824AE0E0);
PPC_FUNC_IMPL(__imp__sub_824AE0E0) {
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
	// lwz r3,604(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r3,212(r9)
	PPC_STORE_U8(ctx.r9.u32 + 212, ctx.r3.u8);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ace98
	sub_824ACE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824acc70
	sub_824ACC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ad028
	sub_824AD028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824adbb8
	sub_824ADBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ad1d8
	sub_824AD1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ac968
	sub_824AC968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824adcd8
	sub_824ADCD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AE174"))) PPC_WEAK_FUNC(sub_824AE174);
PPC_FUNC_IMPL(__imp__sub_824AE174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AE178"))) PPC_WEAK_FUNC(sub_824AE178);
PPC_FUNC_IMPL(__imp__sub_824AE178) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824ae290
	if (!cr6.eq) goto loc_824AE290;
	// lbz r11,217(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 217);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ae290
	if (!cr6.eq) goto loc_824AE290;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24904
	ctx.r4.s64 = ctx.r10.s64 + -24904;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r29,8(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824af2c8
	sub_824AF2C8(ctx, base);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,264(r7)
	PPC_STORE_U32(ctx.r7.u32 + 264, ctx.r6.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r8,217(r5)
	PPC_STORE_U8(ctx.r5.u32 + 217, ctx.r8.u8);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r30,264(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r11,18188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18188);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824ae240
	if (cr6.eq) goto loc_824AE240;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae244
	if (!cr6.eq) goto loc_824AE244;
loc_824AE240:
	// li r11,0
	r11.s64 = 0;
loc_824AE244:
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
	// beq cr6,0x824ae290
	if (cr6.eq) goto loc_824AE290;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ae290
	if (!cr6.eq) goto loc_824AE290;
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
loc_824AE290:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824AE294"))) PPC_WEAK_FUNC(sub_824AE294);
PPC_FUNC_IMPL(__imp__sub_824AE294) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AE298"))) PPC_WEAK_FUNC(sub_824AE298);
PPC_FUNC_IMPL(__imp__sub_824AE298) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r7,220(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bne cr6,0x824ae430
	if (!cr6.eq) goto loc_824AE430;
	// lbz r11,212(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ae430
	if (!cr6.eq) goto loc_824AE430;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lwz r27,20(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r28,24(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ae300
	if (cr6.eq) goto loc_824AE300;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae304
	if (!cr6.eq) goto loc_824AE304;
loc_824AE300:
	// li r11,0
	r11.s64 = 0;
loc_824AE304:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ae344
	if (cr6.eq) goto loc_824AE344;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae348
	if (!cr6.eq) goto loc_824AE348;
loc_824AE344:
	// li r11,0
	r11.s64 = 0;
loc_824AE348:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r7,220(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// lfs f0,112(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	f0.f64 = double(temp.f32);
	// lwz r11,18156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18156);
	// lfs f13,116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,96(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x824ae418
	if (cr6.eq) goto loc_824AE418;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae41c
	if (!cr6.eq) goto loc_824AE41C;
loc_824AE418:
	// li r11,0
	r11.s64 = 0;
loc_824AE41C:
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x824af330
	sub_824AF330(ctx, base);
loc_824AE430:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_824AE43C"))) PPC_WEAK_FUNC(sub_824AE43C);
PPC_FUNC_IMPL(__imp__sub_824AE43C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AE440"))) PPC_WEAK_FUNC(sub_824AE440);
PPC_FUNC_IMPL(__imp__sub_824AE440) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,3384
	ctx.r8.s64 = r11.s64 + 3384;
	// addi r7,r10,-2480
	ctx.r7.s64 = ctx.r10.s64 + -2480;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r6,r9,-2496
	ctx.r6.s64 = ctx.r9.s64 + -2496;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r29,r31,140
	r29.s64 = r31.s64 + 140;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r29,r31,232
	r29.s64 = r31.s64 + 232;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// addi r29,r31,324
	r29.s64 = r31.s64 + 324;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// addi r29,r31,416
	r29.s64 = r31.s64 + 416;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// addi r29,r31,508
	r29.s64 = r31.s64 + 508;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,512(r31)
	PPC_STORE_U32(r31.u32 + 512, r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r30.u32);
	// addi r29,r31,600
	r29.s64 = r31.s64 + 600;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r30.u32);
	// addi r3,r31,692
	ctx.r3.s64 = r31.s64 + 692;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,720
	ctx.r3.s64 = r31.s64 + 720;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,748
	ctx.r3.s64 = r31.s64 + 748;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,776
	ctx.r3.s64 = r31.s64 + 776;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,804
	ctx.r3.s64 = r31.s64 + 804;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r30,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r30.u32);
	// addi r11,r31,832
	r11.s64 = r31.s64 + 832;
	// addi r4,r5,-2508
	ctx.r4.s64 = ctx.r5.s64 + -2508;
	// stw r30,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r30.u32);
	// stw r30,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r30.u32);
	// stw r4,832(r31)
	PPC_STORE_U32(r31.u32 + 832, ctx.r4.u32);
	// stw r30,848(r31)
	PPC_STORE_U32(r31.u32 + 848, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,848(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,848(r31)
	PPC_STORE_U32(r31.u32 + 848, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824AE5E4"))) PPC_WEAK_FUNC(sub_824AE5E4);
PPC_FUNC_IMPL(__imp__sub_824AE5E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AE5E8"))) PPC_WEAK_FUNC(sub_824AE5E8);
PPC_FUNC_IMPL(__imp__sub_824AE5E8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2480
	ctx.r9.s64 = r11.s64 + -2480;
	// addi r8,r10,-2496
	ctx.r8.s64 = ctx.r10.s64 + -2496;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x824af178
	sub_824AF178(ctx, base);
	// addi r3,r31,804
	ctx.r3.s64 = r31.s64 + 804;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,776
	ctx.r3.s64 = r31.s64 + 776;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,748
	ctx.r3.s64 = r31.s64 + 748;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,720
	ctx.r3.s64 = r31.s64 + 720;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,692
	ctx.r3.s64 = r31.s64 + 692;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,600
	r30.s64 = r31.s64 + 600;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,508
	r30.s64 = r31.s64 + 508;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,324
	r30.s64 = r31.s64 + 324;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,232
	r30.s64 = r31.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-2568
	ctx.r5.s64 = ctx.r7.s64 + -2568;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
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

__attribute__((alias("__imp__sub_824AE778"))) PPC_WEAK_FUNC(sub_824AE778);
PPC_FUNC_IMPL(__imp__sub_824AE778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AE77C"))) PPC_WEAK_FUNC(sub_824AE77C);
PPC_FUNC_IMPL(__imp__sub_824AE77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AE780"))) PPC_WEAK_FUNC(sub_824AE780);
PPC_FUNC_IMPL(__imp__sub_824AE780) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824ae8a8
	if (!cr6.eq) goto loc_824AE8A8;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x824ae8a8
	if (!cr6.gt) goto loc_824AE8A8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x824ae8a8
	if (!cr6.gt) goto loc_824AE8A8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x824ae820
	if (!cr6.eq) goto loc_824AE820;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826e9300
	sub_826E9300(ctx, base);
	// lwz r10,844(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 844);
	// addi r11,r29,832
	r11.s64 = r29.s64 + 832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824ae804
	if (!cr6.gt) goto loc_824AE804;
loc_824AE7EC:
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
	// bgt cr6,0x824ae7ec
	if (cr6.gt) goto loc_824AE7EC;
loc_824AE804:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824af2c8
	sub_824AF2C8(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lbz r9,235(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 235);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stb r9,24(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24, ctx.r9.u8);
loc_824AE820:
	// addi r3,r29,832
	ctx.r3.s64 = r29.s64 + 832;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824af410
	sub_824AF410(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r28,24(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824ae858
	if (!cr6.gt) goto loc_824AE858;
loc_824AE840:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824ae840
	if (cr6.gt) goto loc_824AE840;
loc_824AE858:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824ae8a8
	if (!cr6.gt) goto loc_824AE8A8;
	// addi r31,r27,28
	r31.s64 = r27.s64 + 28;
loc_824AE86C:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b59d8
	sub_824B59D8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ae894
	if (cr6.eq) goto loc_824AE894;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824AE894:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x824ae86c
	if (cr6.lt) goto loc_824AE86C;
loc_824AE8A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824AE8AC"))) PPC_WEAK_FUNC(sub_824AE8AC);
PPC_FUNC_IMPL(__imp__sub_824AE8AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AE8B0"))) PPC_WEAK_FUNC(sub_824AE8B0);
PPC_FUNC_IMPL(__imp__sub_824AE8B0) {
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
	// lwz r10,844(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,832
	r11.s64 = ctx.r3.s64 + 832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824ae8e8
	if (!cr6.gt) goto loc_824AE8E8;
loc_824AE8D0:
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
	// bgt cr6,0x824ae8d0
	if (cr6.gt) goto loc_824AE8D0;
loc_824AE8E8:
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r28,r11,-6272
	r28.s64 = r11.s64 + -6272;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ae910
	if (cr6.eq) goto loc_824AE910;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae914
	if (!cr6.eq) goto loc_824AE914;
loc_824AE910:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824AE914:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-7992
	ctx.r3.s64 = ctx.r10.s64 + -7992;
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
	// lwz r11,18148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18148);
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
	// addi r4,r31,692
	ctx.r4.s64 = r31.s64 + 692;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-8536
	r28.s64 = r11.s64 + -8536;
	// beq cr6,0x824ae988
	if (cr6.eq) goto loc_824AE988;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae98c
	if (!cr6.eq) goto loc_824AE98C;
loc_824AE988:
	// li r11,0
	r11.s64 = 0;
loc_824AE98C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8292
	ctx.r3.s64 = ctx.r10.s64 + -8292;
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
	// lwz r11,18172(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18172);
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
	// addi r4,r31,720
	ctx.r4.s64 = r31.s64 + 720;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-7816
	r28.s64 = r11.s64 + -7816;
	// beq cr6,0x824ae9f8
	if (cr6.eq) goto loc_824AE9F8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ae9fc
	if (!cr6.eq) goto loc_824AE9FC;
loc_824AE9F8:
	// li r11,0
	r11.s64 = 0;
loc_824AE9FC:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8192
	ctx.r3.s64 = ctx.r10.s64 + -8192;
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
	// lwz r11,18164(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18164);
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
	// addi r4,r31,748
	ctx.r4.s64 = r31.s64 + 748;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-7528
	r28.s64 = r11.s64 + -7528;
	// beq cr6,0x824aea68
	if (cr6.eq) goto loc_824AEA68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aea6c
	if (!cr6.eq) goto loc_824AEA6C;
loc_824AEA68:
	// li r11,0
	r11.s64 = 0;
loc_824AEA6C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8132
	ctx.r3.s64 = ctx.r10.s64 + -8132;
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
	// lwz r11,18160(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18160);
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
	// addi r4,r31,776
	ctx.r4.s64 = r31.s64 + 776;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-13720
	r28.s64 = r11.s64 + -13720;
	// beq cr6,0x824aead8
	if (cr6.eq) goto loc_824AEAD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aeadc
	if (!cr6.eq) goto loc_824AEADC;
loc_824AEAD8:
	// li r11,0
	r11.s64 = 0;
loc_824AEADC:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8084
	ctx.r3.s64 = ctx.r10.s64 + -8084;
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
	// lwz r11,18156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18156);
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
	// addi r4,r31,804
	ctx.r4.s64 = r31.s64 + 804;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824acb48
	sub_824ACB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824acc70
	sub_824ACC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ad028
	sub_824AD028(ctx, base);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,276(r6)
	PPC_STORE_U32(ctx.r6.u32 + 276, ctx.r3.u32);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,280(r11)
	PPC_STORE_U32(r11.u32 + 280, ctx.r3.u32);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r3.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r7,-24900
	ctx.r4.s64 = ctx.r7.s64 + -24900;
	// lwz r30,8(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24912
	ctx.r4.s64 = ctx.r10.s64 + -24912;
	// stw r3,268(r11)
	PPC_STORE_U32(r11.u32 + 268, ctx.r3.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,8(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824AEBF4"))) PPC_WEAK_FUNC(sub_824AEBF4);
PPC_FUNC_IMPL(__imp__sub_824AEBF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AEBF8"))) PPC_WEAK_FUNC(sub_824AEBF8);
PPC_FUNC_IMPL(__imp__sub_824AEBF8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r27,220(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x824aecb0
	if (cr6.eq) goto loc_824AECB0;
	// lwz r31,28(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824aec44
	if (cr6.eq) goto loc_824AEC44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824AEC44:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// addi r29,r30,140
	r29.s64 = r30.s64 + 140;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824aec68
	if (cr6.eq) goto loc_824AEC68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824AEC68:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r29,r30,232
	r29.s64 = r30.s64 + 232;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824aec8c
	if (cr6.eq) goto loc_824AEC8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_824AEC8C:
	// lwz r11,324(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// addi r29,r30,324
	r29.s64 = r30.s64 + 324;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824aecb0
	if (cr6.eq) goto loc_824AECB0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_824AECB0:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,600(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 600);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,28(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r30,600
	r31.s64 = r30.s64 + 600;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x824aece4
	if (cr6.eq) goto loc_824AECE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af4e0
	sub_824AF4E0(ctx, base);
loc_824AECE4:
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r31,r30,416
	r31.s64 = r30.s64 + 416;
	// lwz r11,416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 416);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x824aed0c
	if (cr6.eq) goto loc_824AED0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824AED0C:
	// addi r31,r30,508
	r31.s64 = r30.s64 + 508;
	// lwz r30,28(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x824aed34
	if (cr6.eq) goto loc_824AED34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824AED34:
	// addic r11,r27,-1
	xer.ca = r27.u32 > 0;
	r11.s64 = r27.s64 + -1;
	// subfe r3,r11,r27
	temp.u8 = (~r11.u32 + r27.u32 < ~r11.u32) | (~r11.u32 + r27.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824AED40"))) PPC_WEAK_FUNC(sub_824AED40);
PPC_FUNC_IMPL(__imp__sub_824AED40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AED44"))) PPC_WEAK_FUNC(sub_824AED44);
PPC_FUNC_IMPL(__imp__sub_824AED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AED48"))) PPC_WEAK_FUNC(sub_824AED48);
PPC_FUNC_IMPL(__imp__sub_824AED48) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,48
	r31.s64 = ctx.r3.s64 + 48;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aed80
	if (cr6.eq) goto loc_824AED80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824AED80:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// addi r31,r30,140
	r31.s64 = r30.s64 + 140;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aeda4
	if (cr6.eq) goto loc_824AEDA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824AEDA4:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r31,r30,232
	r31.s64 = r30.s64 + 232;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aedc8
	if (cr6.eq) goto loc_824AEDC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_824AEDC8:
	// lwz r11,324(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// addi r31,r30,324
	r31.s64 = r30.s64 + 324;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aedec
	if (cr6.eq) goto loc_824AEDEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_824AEDEC:
	// lwz r11,416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 416);
	// addi r31,r30,416
	r31.s64 = r30.s64 + 416;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aee10
	if (cr6.eq) goto loc_824AEE10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824AEE10:
	// lwz r11,508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// addi r31,r30,508
	r31.s64 = r30.s64 + 508;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aee34
	if (cr6.eq) goto loc_824AEE34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824AEE34:
	// lwz r11,600(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 600);
	// addi r31,r30,600
	r31.s64 = r30.s64 + 600;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aee58
	if (cr6.eq) goto loc_824AEE58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af4e0
	sub_824AF4E0(ctx, base);
loc_824AEE58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824AEE5C"))) PPC_WEAK_FUNC(sub_824AEE5C);
PPC_FUNC_IMPL(__imp__sub_824AEE5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AEE60"))) PPC_WEAK_FUNC(sub_824AEE60);
PPC_FUNC_IMPL(__imp__sub_824AEE60) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x824b4ce8
	sub_824B4CE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AEE98"))) PPC_WEAK_FUNC(sub_824AEE98);
PPC_FUNC_IMPL(__imp__sub_824AEE98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AEE9C"))) PPC_WEAK_FUNC(sub_824AEE9C);
PPC_FUNC_IMPL(__imp__sub_824AEE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AEEA0"))) PPC_WEAK_FUNC(sub_824AEEA0);
PPC_FUNC_IMPL(__imp__sub_824AEEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824af6b8
	sub_824AF6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AEEA0"))) PPC_WEAK_FUNC(sub_824AEEA0);
PPC_FUNC_IMPL(__imp__sub_824AEEA0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824AEEA4"))) PPC_WEAK_FUNC(sub_824AEEA4);
PPC_FUNC_IMPL(__imp__sub_824AEEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AEEA8"))) PPC_WEAK_FUNC(sub_824AEEA8);
PPC_FUNC_IMPL(__imp__sub_824AEEA8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2568
	ctx.r9.s64 = r11.s64 + -2568;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824aeef8
	if (cr6.eq) goto loc_824AEEF8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AEEF8:
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

__attribute__((alias("__imp__sub_824AEF0C"))) PPC_WEAK_FUNC(sub_824AEF0C);
PPC_FUNC_IMPL(__imp__sub_824AEF0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AEF10"))) PPC_WEAK_FUNC(sub_824AEF10);
PPC_FUNC_IMPL(__imp__sub_824AEF10) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824b4dc8
	sub_824B4DC8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_824AEF5C"))) PPC_WEAK_FUNC(sub_824AEF5C);
PPC_FUNC_IMPL(__imp__sub_824AEF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AEF60"))) PPC_WEAK_FUNC(sub_824AEF60);
PPC_FUNC_IMPL(__imp__sub_824AEF60) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,60
	ctx.r9.s64 = 60;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// divw r31,r8,r9
	r31.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x824aefc4
	if (!cr6.lt) goto loc_824AEFC4;
	// mulli r29,r31,60
	r29.s64 = r31.s64 * 60;
loc_824AEF98:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,60
	ctx.r5.s64 = 60;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x824aef98
	if (cr6.lt) goto loc_824AEF98;
loc_824AEFC4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824AEFD8"))) PPC_WEAK_FUNC(sub_824AEFD8);
PPC_FUNC_IMPL(__imp__sub_824AEFD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824AEFDC"))) PPC_WEAK_FUNC(sub_824AEFDC);
PPC_FUNC_IMPL(__imp__sub_824AEFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AEFE0"))) PPC_WEAK_FUNC(sub_824AEFE0);
PPC_FUNC_IMPL(__imp__sub_824AEFE0) {
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
	// mulli r3,r10,60
	ctx.r3.s64 = ctx.r10.s64 * 60;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824AF044"))) PPC_WEAK_FUNC(sub_824AF044);
PPC_FUNC_IMPL(__imp__sub_824AF044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF048"))) PPC_WEAK_FUNC(sub_824AF048);
PPC_FUNC_IMPL(__imp__sub_824AF048) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-2520
	ctx.r9.s64 = r11.s64 + -2520;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824af08c
	if (!cr6.gt) goto loc_824AF08C;
loc_824AF074:
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
	// bgt cr6,0x824af074
	if (cr6.gt) goto loc_824AF074;
loc_824AF08C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824af0a4
	if (cr6.eq) goto loc_824AF0A4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AF0A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AF0B4"))) PPC_WEAK_FUNC(sub_824AF0B4);
PPC_FUNC_IMPL(__imp__sub_824AF0B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF0B8"))) PPC_WEAK_FUNC(sub_824AF0B8);
PPC_FUNC_IMPL(__imp__sub_824AF0B8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x824af100
	if (cr6.eq) goto loc_824AF100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,21536
	ctx.r4.s64 = ctx.r9.s64 + 21536;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_824AF100:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AF110"))) PPC_WEAK_FUNC(sub_824AF110);
PPC_FUNC_IMPL(__imp__sub_824AF110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF114"))) PPC_WEAK_FUNC(sub_824AF114);
PPC_FUNC_IMPL(__imp__sub_824AF114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF118"))) PPC_WEAK_FUNC(sub_824AF118);
PPC_FUNC_IMPL(__imp__sub_824AF118) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2508
	ctx.r9.s64 = ctx.r10.s64 + -2508;
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

__attribute__((alias("__imp__sub_824AF170"))) PPC_WEAK_FUNC(sub_824AF170);
PPC_FUNC_IMPL(__imp__sub_824AF170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF174"))) PPC_WEAK_FUNC(sub_824AF174);
PPC_FUNC_IMPL(__imp__sub_824AF174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF178"))) PPC_WEAK_FUNC(sub_824AF178);
PPC_FUNC_IMPL(__imp__sub_824AF178) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-2508
	ctx.r9.s64 = r11.s64 + -2508;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824af1bc
	if (!cr6.gt) goto loc_824AF1BC;
loc_824AF1A4:
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
	// bgt cr6,0x824af1a4
	if (cr6.gt) goto loc_824AF1A4;
loc_824AF1BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af6b8
	sub_824AF6B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-2520
	ctx.r10.s64 = r11.s64 + -2520;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x824af1f8
	if (!cr6.gt) goto loc_824AF1F8;
loc_824AF1E0:
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
	// bgt cr6,0x824af1e0
	if (cr6.gt) goto loc_824AF1E0;
loc_824AF1F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AF208"))) PPC_WEAK_FUNC(sub_824AF208);
PPC_FUNC_IMPL(__imp__sub_824AF208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF20C"))) PPC_WEAK_FUNC(sub_824AF20C);
PPC_FUNC_IMPL(__imp__sub_824AF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF210"))) PPC_WEAK_FUNC(sub_824AF210);
PPC_FUNC_IMPL(__imp__sub_824AF210) {
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
	// bl 0x824af178
	sub_824AF178(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824af248
	if (cr6.eq) goto loc_824AF248;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AF248:
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

__attribute__((alias("__imp__sub_824AF25C"))) PPC_WEAK_FUNC(sub_824AF25C);
PPC_FUNC_IMPL(__imp__sub_824AF25C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF260"))) PPC_WEAK_FUNC(sub_824AF260);
PPC_FUNC_IMPL(__imp__sub_824AF260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,8
	r11.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,67
	r11.s64 = 4390912;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824AF28C:
	// srawi r9,r11,24
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 24;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824af28c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824AF28C;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,3
	ctx.r3.s64 = r31.s64 + 3;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
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

__attribute__((alias("__imp__sub_824AF2C0"))) PPC_WEAK_FUNC(sub_824AF2C0);
PPC_FUNC_IMPL(__imp__sub_824AF2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF2C4"))) PPC_WEAK_FUNC(sub_824AF2C4);
PPC_FUNC_IMPL(__imp__sub_824AF2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF2C8"))) PPC_WEAK_FUNC(sub_824AF2C8);
PPC_FUNC_IMPL(__imp__sub_824AF2C8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-24888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -24888);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e97e0
	sub_826E97E0(ctx, base);
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

__attribute__((alias("__imp__sub_824AF32C"))) PPC_WEAK_FUNC(sub_824AF32C);
PPC_FUNC_IMPL(__imp__sub_824AF32C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF330"))) PPC_WEAK_FUNC(sub_824AF330);
PPC_FUNC_IMPL(__imp__sub_824AF330) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// bl 0x824af260
	sub_824AF260(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824af37c
	if (cr6.eq) goto loc_824AF37C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824af380
	if (!cr6.eq) goto loc_824AF380;
loc_824AF37C:
	// li r11,0
	r11.s64 = 0;
loc_824AF380:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824af3cc
	if (cr6.eq) goto loc_824AF3CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824af3cc
	if (!cr6.eq) goto loc_824AF3CC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AF3CC:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824AF3DC:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x824af3dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824AF3DC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824741f0
	sub_824741F0(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_824AF40C"))) PPC_WEAK_FUNC(sub_824AF40C);
PPC_FUNC_IMPL(__imp__sub_824AF40C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AF410"))) PPC_WEAK_FUNC(sub_824AF410);
PPC_FUNC_IMPL(__imp__sub_824AF410) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824af450
	if (!cr6.gt) goto loc_824AF450;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824AF450:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r10,60
	r11.s64 = ctx.r10.s64 * 60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// beq 0x824af4c4
	if (cr0.eq) goto loc_824AF4C4;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r11,28
	ctx.r9.s64 = r11.s64 + 28;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r7,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r7.u32);
loc_824AF4B8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x824af4b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824AF4B8;
loc_824AF4C4:
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

__attribute__((alias("__imp__sub_824AF4D8"))) PPC_WEAK_FUNC(sub_824AF4D8);
PPC_FUNC_IMPL(__imp__sub_824AF4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF4DC"))) PPC_WEAK_FUNC(sub_824AF4DC);
PPC_FUNC_IMPL(__imp__sub_824AF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF4E0"))) PPC_WEAK_FUNC(sub_824AF4E0);
PPC_FUNC_IMPL(__imp__sub_824AF4E0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824af5a0
	if (cr6.eq) goto loc_824AF5A0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,21536
	ctx.r4.s64 = ctx.r8.s64 + 21536;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32181
	ctx.r4.s64 = -2109014016;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,-3912
	r11.s64 = ctx.r4.s64 + -3912;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_824AF5A0:
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

__attribute__((alias("__imp__sub_824AF5B4"))) PPC_WEAK_FUNC(sub_824AF5B4);
PPC_FUNC_IMPL(__imp__sub_824AF5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF5B8"))) PPC_WEAK_FUNC(sub_824AF5B8);
PPC_FUNC_IMPL(__imp__sub_824AF5B8) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824af5f0
	if (!cr6.gt) goto loc_824AF5F0;
loc_824AF5D8:
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
	// bgt cr6,0x824af5d8
	if (cr6.gt) goto loc_824AF5D8;
loc_824AF5F0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x824af614
	if (!cr6.gt) goto loc_824AF614;
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
loc_824AF614:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x824af654
	if (cr6.eq) goto loc_824AF654;
loc_824AF62C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824af410
	sub_824AF410(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x824af62c
	if (!cr6.eq) goto loc_824AF62C;
loc_824AF654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824AF658"))) PPC_WEAK_FUNC(sub_824AF658);
PPC_FUNC_IMPL(__imp__sub_824AF658) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AF65C"))) PPC_WEAK_FUNC(sub_824AF65C);
PPC_FUNC_IMPL(__imp__sub_824AF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF660"))) PPC_WEAK_FUNC(sub_824AF660);
PPC_FUNC_IMPL(__imp__sub_824AF660) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824AF664"))) PPC_WEAK_FUNC(sub_824AF664);
PPC_FUNC_IMPL(__imp__sub_824AF664) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824af668
	goto loc_824AF668;
loc_824AF668:
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
	// bl 0x824ae5e8
	sub_824AE5E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824af6a0
	if (cr6.eq) goto loc_824AF6A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AF6A0:
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

__attribute__((alias("__imp__sub_824AF668"))) PPC_WEAK_FUNC(sub_824AF668);
PPC_FUNC_IMPL(__imp__sub_824AF668) {
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
	// bl 0x824ae5e8
	sub_824AE5E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824af6a0
	if (cr6.eq) goto loc_824AF6A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AF6A0:
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

__attribute__((alias("__imp__sub_824AF6B8"))) PPC_WEAK_FUNC(sub_824AF6B8);
PPC_FUNC_IMPL(__imp__sub_824AF6B8) {
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
	// beq cr6,0x824af79c
	if (cr6.eq) goto loc_824AF79C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824af72c
	if (!cr6.eq) goto loc_824AF72C;
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
	// beq cr6,0x824af79c
	if (cr6.eq) goto loc_824AF79C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824aefe0
	sub_824AEFE0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x824af79c
	goto loc_824AF79C;
loc_824AF72C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824af118
	sub_824AF118(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824af758
	if (!cr6.gt) goto loc_824AF758;
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
loc_824AF758:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824af5b8
	sub_824AF5B8(ctx, base);
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
	// bl 0x824af178
	sub_824AF178(ctx, base);
loc_824AF79C:
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

__attribute__((alias("__imp__sub_824AF7B0"))) PPC_WEAK_FUNC(sub_824AF7B0);
PPC_FUNC_IMPL(__imp__sub_824AF7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF7B4"))) PPC_WEAK_FUNC(sub_824AF7B4);
PPC_FUNC_IMPL(__imp__sub_824AF7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF7B8"))) PPC_WEAK_FUNC(sub_824AF7B8);
PPC_FUNC_IMPL(__imp__sub_824AF7B8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// stb r9,164(r10)
	PPC_STORE_U8(ctx.r10.u32 + 164, ctx.r9.u8);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r6,220(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// stw r6,168(r7)
	PPC_STORE_U32(ctx.r7.u32 + 168, ctx.r6.u32);
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,292(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r3,176(r4)
	PPC_STORE_U32(ctx.r4.u32 + 176, ctx.r3.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	f0.f64 = double(temp.f32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f0,180(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 180, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AF820"))) PPC_WEAK_FUNC(sub_824AF820);
PPC_FUNC_IMPL(__imp__sub_824AF820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF824"))) PPC_WEAK_FUNC(sub_824AF824);
PPC_FUNC_IMPL(__imp__sub_824AF824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF828"))) PPC_WEAK_FUNC(sub_824AF828);
PPC_FUNC_IMPL(__imp__sub_824AF828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF82C"))) PPC_WEAK_FUNC(sub_824AF82C);
PPC_FUNC_IMPL(__imp__sub_824AF82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AF830"))) PPC_WEAK_FUNC(sub_824AF830);
PPC_FUNC_IMPL(__imp__sub_824AF830) {
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
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,292(r5)
	PPC_STORE_U32(ctx.r5.u32 + 292, ctx.r3.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r3.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AF8CC"))) PPC_WEAK_FUNC(sub_824AF8CC);
PPC_FUNC_IMPL(__imp__sub_824AF8CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF8D0"))) PPC_WEAK_FUNC(sub_824AF8D0);
PPC_FUNC_IMPL(__imp__sub_824AF8D0) {
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
	// lwz r3,696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r3,212(r9)
	PPC_STORE_U8(ctx.r9.u32 + 212, ctx.r3.u8);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AF92C"))) PPC_WEAK_FUNC(sub_824AF92C);
PPC_FUNC_IMPL(__imp__sub_824AF92C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AF930"))) PPC_WEAK_FUNC(sub_824AF930);
PPC_FUNC_IMPL(__imp__sub_824AF930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824af9f4
	if (!cr6.eq) goto loc_824AF9F4;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824af9f4
	if (!cr6.eq) goto loc_824AF9F4;
	// lbz r11,212(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824af9f4
	if (!cr6.eq) goto loc_824AF9F4;
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f7,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_824AF9F4:
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

__attribute__((alias("__imp__sub_824AFA08"))) PPC_WEAK_FUNC(sub_824AFA08);
PPC_FUNC_IMPL(__imp__sub_824AFA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AFA0C"))) PPC_WEAK_FUNC(sub_824AFA0C);
PPC_FUNC_IMPL(__imp__sub_824AFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AFA10"))) PPC_WEAK_FUNC(sub_824AFA10);
PPC_FUNC_IMPL(__imp__sub_824AFA10) {
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
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x824afa60
	if (!cr6.eq) goto loc_824AFA60;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,980(r31)
	PPC_STORE_U8(r31.u32 + 980, ctx.r8.u8);
loc_824AFA60:
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

__attribute__((alias("__imp__sub_824AFA74"))) PPC_WEAK_FUNC(sub_824AFA74);
PPC_FUNC_IMPL(__imp__sub_824AFA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AFA78"))) PPC_WEAK_FUNC(sub_824AFA78);
PPC_FUNC_IMPL(__imp__sub_824AFA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// stfs f11,12(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// lfs f6,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// lfs f2,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,96(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,100(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stfs f0,104(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 108, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 144, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f11,148(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 148, temp.u32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stfs f10,152(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 152, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stfs f9,156(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 156, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// lfs f8,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,120(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f5,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,124(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f4,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f3,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,-25600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r5,r9,-24576
	ctx.r5.s64 = ctx.r9.s64 + -24576;
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f1,-2436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2436);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AFC5C"))) PPC_WEAK_FUNC(sub_824AFC5C);
PPC_FUNC_IMPL(__imp__sub_824AFC5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AFC60"))) PPC_WEAK_FUNC(sub_824AFC60);
PPC_FUNC_IMPL(__imp__sub_824AFC60) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,4036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4036);
	f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f7,232(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 232, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f6,976(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f6,f5
	cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x824afd10
	if (!cr6.gt) goto loc_824AFD10;
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824afcfc
	if (cr6.eq) goto loc_824AFCFC;
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r11,213(r10)
	PPC_STORE_U8(ctx.r10.u32 + 213, r11.u8);
	// b 0x824afd1c
	goto loc_824AFD1C;
loc_824AFCFC:
	// lbz r11,980(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 980);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r11,213(r10)
	PPC_STORE_U8(ctx.r10.u32 + 213, r11.u8);
	// b 0x824afd1c
	goto loc_824AFD1C;
loc_824AFD10:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// stb r29,213(r11)
	PPC_STORE_U8(r11.u32 + 213, r29.u8);
loc_824AFD1C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stb r29,980(r31)
	PPC_STORE_U8(r31.u32 + 980, r29.u8);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// stb r9,215(r10)
	PPC_STORE_U8(ctx.r10.u32 + 215, ctx.r9.u8);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x824afd58
	if (!cr6.eq) goto loc_824AFD58;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r29,215(r11)
	PPC_STORE_U8(r11.u32 + 215, r29.u8);
loc_824AFD58:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lbz r10,215(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 215);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824afd9c
	if (cr6.eq) goto loc_824AFD9C;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824afd84
	if (cr6.eq) goto loc_824AFD84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824afd88
	if (!cr6.eq) goto loc_824AFD88;
loc_824AFD84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_824AFD88:
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lfs f0,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f13,976(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
	// b 0x824afda8
	goto loc_824AFDA8;
loc_824AFD9C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,976(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
loc_824AFDA8:
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824afdc4
	if (cr6.eq) goto loc_824AFDC4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824afdc8
	if (!cr6.eq) goto loc_824AFDC8;
loc_824AFDC4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_824AFDC8:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824afe14
	if (cr6.eq) goto loc_824AFE14;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8245eb20
	sub_8245EB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824afe14
	if (cr6.eq) goto loc_824AFE14;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 244, ctx.r8.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stfs f0,236(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 236, temp.u32);
loc_824AFE14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b1c68
	sub_824B1C68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824afea4
	if (cr6.eq) goto loc_824AFEA4;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824afea4
	if (cr0.eq) goto loc_824AFEA4;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 160, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 168, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,172(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 172, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,176(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 176, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,184(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,188(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 188, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,192(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 192, temp.u32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,196(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 196, temp.u32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,200(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,204(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,208(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
loc_824AFEA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824AFEA8"))) PPC_WEAK_FUNC(sub_824AFEA8);
PPC_FUNC_IMPL(__imp__sub_824AFEA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824AFEAC"))) PPC_WEAK_FUNC(sub_824AFEAC);
PPC_FUNC_IMPL(__imp__sub_824AFEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AFEB0"))) PPC_WEAK_FUNC(sub_824AFEB0);
PPC_FUNC_IMPL(__imp__sub_824AFEB0) {
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
	// beq cr6,0x824afee4
	if (cr6.eq) goto loc_824AFEE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824afee8
	if (!cr6.eq) goto loc_824AFEE8;
loc_824AFEE4:
	// li r11,0
	r11.s64 = 0;
loc_824AFEE8:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aff3c
	if (cr6.eq) goto loc_824AFF3C;
	// lwz r11,244(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r11,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, r11.u32);
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aff48
	if (cr6.eq) goto loc_824AFF48;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,2604(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2604);
	// stw r10,252(r11)
	PPC_STORE_U32(r11.u32 + 252, ctx.r10.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 248, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824AFF3C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,288(r11)
	PPC_STORE_U32(r11.u32 + 288, ctx.r10.u32);
loc_824AFF48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AFF58"))) PPC_WEAK_FUNC(sub_824AFF58);
PPC_FUNC_IMPL(__imp__sub_824AFF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AFF5C"))) PPC_WEAK_FUNC(sub_824AFF5C);
PPC_FUNC_IMPL(__imp__sub_824AFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AFF60"))) PPC_WEAK_FUNC(sub_824AFF60);
PPC_FUNC_IMPL(__imp__sub_824AFF60) {
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
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
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
	// bl 0x828eaac0
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r4,124
	r11.s64 = ctx.r4.s64 + 124;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,132(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r22,r11,16
	r22.s64 = r11.s64 + 16;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// lfs f0,128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x824b02c0
	if (cr6.eq) goto loc_824B02C0;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r24,0
	r24.s64 = 0;
	// lfs f13,4492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4492);
	ctx.f13.f64 = double(temp.f32);
	// li r23,2
	r23.s64 = 2;
	// lfs f12,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f12.f64 = double(temp.f32);
	// lis r26,-32254
	r26.s64 = -2113798144;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r25,r11,-9308
	r25.s64 = r11.s64 + -9308;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r28,r10,-24576
	r28.s64 = ctx.r10.s64 + -24576;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_824B0024:
	// lbz r11,28(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b02b4
	if (cr6.eq) goto loc_824B02B4;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824b02b4
	if (!cr6.eq) goto loc_824B02B4;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f24,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f24.f64 = double(temp.f32);
	// lfs f23,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f23.f64 = double(temp.f32);
	// lfs f22,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f22.f64 = double(temp.f32);
	// lfs f21,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f21.f64 = double(temp.f32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// fsubs f28,f22,f0
	f28.f64 = double(float(f22.f64 - f0.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f24,f13
	f27.f64 = double(float(f24.f64 - ctx.f13.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f26,f23,f12
	f26.f64 = double(float(f23.f64 - ctx.f12.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f17,f21,f11
	f17.f64 = double(float(f21.f64 - ctx.f11.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f16,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f16.f64 = double(temp.f32);
	// lfs f15,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f15.f64 = double(temp.f32);
	// lfs f14,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f14.f64 = double(temp.f32);
	// stfs f28,152(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f8,f28,f28
	ctx.f8.f64 = double(float(f28.f64 * f28.f64));
	// stfs f26,148(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f17,156(r1)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f9,204(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f7,f27,f27,f8
	ctx.f7.f64 = double(float(f27.f64 * f27.f64 + ctx.f8.f64));
	// fmadds f6,f26,f26,f7
	ctx.f6.f64 = double(float(f26.f64 * f26.f64 + ctx.f7.f64));
	// fsqrts f25,f6
	f25.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f10,f25
	cr6.compare(ctx.f10.f64, f25.f64);
	// bgt cr6,0x824b0100
	if (cr6.gt) goto loc_824B0100;
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f25,f0
	cr6.compare(f25.f64, f0.f64);
	// ble cr6,0x824b0104
	if (!cr6.gt) goto loc_824B0104;
loc_824B0100:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_824B0104:
	// lfs f31,-2436(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + -2436);
	f31.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f31,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f31.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f20,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	f20.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f9,f31,f20
	ctx.f9.f64 = double(float(f31.f64 * f20.f64));
	// lfs f19,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f19.f64 = double(temp.f32);
	// lfs f30,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f30.f64 = double(temp.f32);
	// lfs f29,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	f29.f64 = double(temp.f32);
	// lfs f18,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f18.f64 = double(temp.f32);
	// fmadds f8,f19,f30,f9
	ctx.f8.f64 = double(float(f19.f64 * f30.f64 + ctx.f9.f64));
	// fmadds f7,f29,f18,f8
	ctx.f7.f64 = double(float(f29.f64 * f18.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// bge cr6,0x824b0188
	if (!cr6.lt) goto loc_824B0188;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_824B0188:
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// lfs f12,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fmuls f9,f31,f0
	ctx.f9.f64 = double(float(f31.f64 * f0.f64));
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f29,f13
	ctx.f8.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f7,f30,f12
	ctx.f7.f64 = double(float(f30.f64 * ctx.f12.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fsubs f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fmsubs f4,f30,f13,f9
	ctx.f4.f64 = double(float(f30.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fmsubs f3,f31,f12,f8
	ctx.f3.f64 = double(float(f31.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f2,f29,f0,f7
	ctx.f2.f64 = double(float(f29.f64 * f0.f64 - ctx.f7.f64));
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * f30.f64));
	// fmuls f0,f31,f3
	f0.f64 = double(float(f31.f64 * ctx.f3.f64));
	// fmuls f13,f2,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * f29.f64));
	// fmsubs f12,f29,f3,f1
	ctx.f12.f64 = double(float(f29.f64 * ctx.f3.f64 - ctx.f1.f64));
	// fmsubs f11,f2,f30,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * f30.f64 - f0.f64));
	// fmsubs f10,f4,f31,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * f31.f64 - ctx.f13.f64));
	// fmuls f9,f12,f20
	ctx.f9.f64 = double(float(ctx.f12.f64 * f20.f64));
	// fmadds f8,f10,f19,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * f19.f64 + ctx.f9.f64));
	// fmadds f7,f11,f18,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * f18.f64 + ctx.f8.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f5
	cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x824b0210
	if (!cr6.gt) goto loc_824B0210;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_824B0210:
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824b02b4
	if (cr6.eq) goto loc_824B02B4;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824b02b4
	if (cr6.eq) goto loc_824B02B4;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b02b4
	if (cr6.eq) goto loc_824B02B4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// lwz r4,224(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x824b5a80
	sub_824B5A80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b02b4
	if (cr6.eq) goto loc_824B02B4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	f0.f64 = double(temp.f32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// lwz r9,224(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f24,40(r3)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f23,44(r3)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f22,48(r3)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f21,52(r3)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stfs f16,56(r11)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f15,60(r11)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stfs f14,64(r11)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// stfs f27,104(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// stfs f26,108(r11)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r11.u32 + 108, temp.u32);
	// stfs f28,112(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 112, temp.u32);
	// stfs f17,116(r11)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r11.u32 + 116, temp.u32);
	// stw r24,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r24.u32);
	// stfs f25,32(r11)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f1,-2436(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + -2436);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
loc_824B02B4:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// bne cr6,0x824b0024
	if (!cr6.eq) goto loc_824B0024;
loc_824B02C0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_824B02CC"))) PPC_WEAK_FUNC(sub_824B02CC);
PPC_FUNC_IMPL(__imp__sub_824B02CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_824B02D0"))) PPC_WEAK_FUNC(sub_824B02D0);
PPC_FUNC_IMPL(__imp__sub_824B02D0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824b054c
	if (cr6.eq) goto loc_824B054C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b5d38
	sub_824B5D38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b054c
	if (cr6.eq) goto loc_824B054C;
	// li r27,0
	r27.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824b0538
	if (!cr6.eq) goto loc_824B0538;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b2720
	sub_822B2720(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824b0468
	if (cr6.eq) goto loc_824B0468;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r9,-24576
	ctx.r5.s64 = ctx.r9.s64 + -24576;
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// fsubs f10,f4,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f1,-2436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2436);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmadds f4,f10,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
loc_824B0468:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b0328
	sub_822B0328(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b04e0
	if (cr6.eq) goto loc_824B04E0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b04e0
	if (cr6.eq) goto loc_824B04E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245eb20
	sub_8245EB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b04e0
	if (cr6.eq) goto loc_824B04E0;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_824B04E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1c58
	sub_822B1C58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b0538
	if (cr6.eq) goto loc_824B0538;
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,48(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826e98e0
	sub_826E98E0(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r3.u8);
loc_824B0538:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b054c
	if (!cr6.eq) goto loc_824B054C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b5748
	sub_824B5748(ctx, base);
loc_824B054C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824B0550"))) PPC_WEAK_FUNC(sub_824B0550);
PPC_FUNC_IMPL(__imp__sub_824B0550) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824B0554"))) PPC_WEAK_FUNC(sub_824B0554);
PPC_FUNC_IMPL(__imp__sub_824B0554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B0558"))) PPC_WEAK_FUNC(sub_824B0558);
PPC_FUNC_IMPL(__imp__sub_824B0558) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r4,r11,272
	ctx.r4.s64 = r11.s64 + 272;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826ecb08
	sub_826ECB08(ctx, base);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r4,r11,268
	ctx.r4.s64 = r11.s64 + 268;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x826ecb08
	sub_826ECB08(ctx, base);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b05b8
	if (cr6.eq) goto loc_824B05B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b05bc
	if (!cr6.eq) goto loc_824B05BC;
loc_824B05B8:
	// li r11,0
	r11.s64 = 0;
loc_824B05BC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18156);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,896
	ctx.r4.s64 = r28.s64 + 896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0610
	if (!cr6.eq) goto loc_824B0610;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0610
	if (!cr6.eq) goto loc_824B0610;
	// lwz r11,18156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B0610:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b062c
	if (cr6.eq) goto loc_824B062C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0630
	if (!cr6.eq) goto loc_824B0630;
loc_824B062C:
	// li r11,0
	r11.s64 = 0;
loc_824B0630:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,868
	ctx.r4.s64 = r28.s64 + 868;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0684
	if (!cr6.eq) goto loc_824B0684;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0684
	if (!cr6.eq) goto loc_824B0684;
	// lwz r11,18160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B0684:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b06a0
	if (cr6.eq) goto loc_824B06A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b06a4
	if (!cr6.eq) goto loc_824B06A4;
loc_824B06A0:
	// li r11,0
	r11.s64 = 0;
loc_824B06A4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18172);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,812
	ctx.r4.s64 = r28.s64 + 812;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b06f8
	if (!cr6.eq) goto loc_824B06F8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b06f8
	if (!cr6.eq) goto loc_824B06F8;
	// lwz r11,18172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18172);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B06F8:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b0714
	if (cr6.eq) goto loc_824B0714;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0718
	if (!cr6.eq) goto loc_824B0718;
loc_824B0714:
	// li r11,0
	r11.s64 = 0;
loc_824B0718:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18164);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,840
	ctx.r4.s64 = r28.s64 + 840;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b076c
	if (!cr6.eq) goto loc_824B076C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b076c
	if (!cr6.eq) goto loc_824B076C;
	// lwz r11,18164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18164);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B076C:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b0788
	if (cr6.eq) goto loc_824B0788;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b078c
	if (!cr6.eq) goto loc_824B078C;
loc_824B0788:
	// li r11,0
	r11.s64 = 0;
loc_824B078C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,784
	ctx.r4.s64 = r28.s64 + 784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b07e0
	if (!cr6.eq) goto loc_824B07E0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b07e0
	if (!cr6.eq) goto loc_824B07E0;
	// lwz r11,18148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B07E0:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b07fc
	if (cr6.eq) goto loc_824B07FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0800
	if (!cr6.eq) goto loc_824B0800;
loc_824B07FC:
	// li r11,0
	r11.s64 = 0;
loc_824B0800:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,29148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 29148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,924
	ctx.r4.s64 = r28.s64 + 924;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0854
	if (!cr6.eq) goto loc_824B0854;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0854
	if (!cr6.eq) goto loc_824B0854;
	// lwz r11,29148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 29148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B0854:
	// lwz r10,964(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 964);
	// addi r11,r28,952
	r11.s64 = r28.s64 + 952;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b087c
	if (!cr6.gt) goto loc_824B087C;
loc_824B0864:
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
	// bgt cr6,0x824b0864
	if (cr6.gt) goto loc_824B0864;
loc_824B087C:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B088C"))) PPC_WEAK_FUNC(sub_824B088C);
PPC_FUNC_IMPL(__imp__sub_824B088C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824B0890"))) PPC_WEAK_FUNC(sub_824B0890);
PPC_FUNC_IMPL(__imp__sub_824B0890) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x824b0970
	if (cr6.eq) goto loc_824B0970;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// addi r8,r10,-9276
	ctx.r8.s64 = ctx.r10.s64 + -9276;
	// addi r7,r9,-9292
	ctx.r7.s64 = ctx.r9.s64 + -9292;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,-9276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9276);
	f0.f64 = double(temp.f32);
	// lfs f10,-9292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9292);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
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
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
loc_824B0970:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B0988"))) PPC_WEAK_FUNC(sub_824B0988);
PPC_FUNC_IMPL(__imp__sub_824B0988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B098C"))) PPC_WEAK_FUNC(sub_824B098C);
PPC_FUNC_IMPL(__imp__sub_824B098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B0990"))) PPC_WEAK_FUNC(sub_824B0990);
PPC_FUNC_IMPL(__imp__sub_824B0990) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b09c0
	if (cr6.eq) goto loc_824B09C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b09c4
	if (!cr6.eq) goto loc_824B09C4;
loc_824B09C0:
	// li r11,0
	r11.s64 = 0;
loc_824B09C4:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824b0a80
	if (cr6.eq) goto loc_824B0A80;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b58b0
	sub_824B58B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b92d0
	sub_822B92D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b0a34
	if (cr6.eq) goto loc_824B0A34;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8245dff8
	sub_8245DFF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x824b0a34
	if (!cr6.gt) goto loc_824B0A34;
loc_824B0A04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245e180
	sub_8245E180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824b02d0
	sub_824B02D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x8245dff8
	sub_8245DFF8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x824b0a04
	if (cr6.lt) goto loc_824B0A04;
loc_824B0A34:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824b0a74
	if (cr6.eq) goto loc_824B0A74;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b0a60
	if (cr6.eq) goto loc_824B0A60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0a64
	if (!cr6.eq) goto loc_824B0A64;
loc_824B0A60:
	// li r11,0
	r11.s64 = 0;
loc_824B0A64:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824aff60
	sub_824AFF60(ctx, base);
loc_824B0A74:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b5938
	sub_824B5938(ctx, base);
loc_824B0A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B0A84"))) PPC_WEAK_FUNC(sub_824B0A84);
PPC_FUNC_IMPL(__imp__sub_824B0A84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824B0A88"))) PPC_WEAK_FUNC(sub_824B0A88);
PPC_FUNC_IMPL(__imp__sub_824B0A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,964(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 964);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824b0c4c
	if (!cr6.gt) goto loc_824B0C4C;
	// lwz r31,956(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824b0c40
	if (!cr6.eq) goto loc_824B0C40;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r29,20(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x824b0ba4
	if (cr6.eq) goto loc_824B0BA4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824b0ba4
	if (cr6.eq) goto loc_824B0BA4;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x824b9520
	sub_824B9520(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r5,r10,-12880
	ctx.r5.s64 = ctx.r10.s64 + -12880;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r9,-20692
	ctx.r5.s64 = ctx.r9.s64 + -20692;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r8,-3892
	ctx.r5.s64 = ctx.r8.s64 + -3892;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r7,-3904
	ctx.r5.s64 = ctx.r7.s64 + -3904;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r6,-3912
	ctx.r5.s64 = ctx.r6.s64 + -3912;
	// bl 0x824b6390
	sub_824B6390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e9860
	sub_826E9860(ctx, base);
loc_824B0BA4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// lwz r11,18144(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18144);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// beq cr6,0x824b0bf0
	if (cr6.eq) goto loc_824B0BF0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0bf4
	if (!cr6.eq) goto loc_824B0BF4;
loc_824B0BF0:
	// li r11,0
	r11.s64 = 0;
loc_824B0BF4:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b0c40
	if (cr6.eq) goto loc_824B0C40;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0c40
	if (!cr6.eq) goto loc_824B0C40;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B0C40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,952
	ctx.r3.s64 = r30.s64 + 952;
	// bl 0x824aef60
	sub_824AEF60(ctx, base);
loc_824B0C4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_824B0C54"))) PPC_WEAK_FUNC(sub_824B0C54);
PPC_FUNC_IMPL(__imp__sub_824B0C54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824B0C58"))) PPC_WEAK_FUNC(sub_824B0C58);
PPC_FUNC_IMPL(__imp__sub_824B0C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r3,212(r9)
	PPC_STORE_U8(ctx.r9.u32 + 212, ctx.r3.u8);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824afc60
	sub_824AFC60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824afa78
	sub_824AFA78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0990
	sub_824B0990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824afeb0
	sub_824AFEB0(ctx, base);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r3,212(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 212);
	// stb r3,164(r4)
	PPC_STORE_U8(ctx.r4.u32 + 164, ctx.r3.u8);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// stw r9,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r9.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,292(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r3,176(r7)
	PPC_STORE_U32(ctx.r7.u32 + 176, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,232(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 232);
	f0.f64 = double(temp.f32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f0,180(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 180, temp.u32);
	// bl 0x824b0a88
	sub_824B0A88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B0D20"))) PPC_WEAK_FUNC(sub_824B0D20);
PPC_FUNC_IMPL(__imp__sub_824B0D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B0D24"))) PPC_WEAK_FUNC(sub_824B0D24);
PPC_FUNC_IMPL(__imp__sub_824B0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B0D28"))) PPC_WEAK_FUNC(sub_824B0D28);
PPC_FUNC_IMPL(__imp__sub_824B0D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x824b0890
	sub_824B0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B0D28"))) PPC_WEAK_FUNC(sub_824B0D28);
PPC_FUNC_IMPL(__imp__sub_824B0D28) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824B0D2C"))) PPC_WEAK_FUNC(sub_824B0D2C);
PPC_FUNC_IMPL(__imp__sub_824B0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B0D30"))) PPC_WEAK_FUNC(sub_824B0D30);
PPC_FUNC_IMPL(__imp__sub_824B0D30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824b0ec4
	if (!cr6.eq) goto loc_824B0EC4;
	// lbz r11,217(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 217);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0ec4
	if (!cr6.eq) goto loc_824B0EC4;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b0d88
	if (cr6.eq) goto loc_824B0D88;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// bne cr6,0x824b0d8c
	if (!cr6.eq) goto loc_824B0D8C;
loc_824B0D88:
	// li r11,0
	r11.s64 = 0;
loc_824B0D8C:
	// lwz r29,88(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b0da8
	if (cr6.eq) goto loc_824B0DA8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0dac
	if (!cr6.eq) goto loc_824B0DAC;
loc_824B0DA8:
	// li r11,0
	r11.s64 = 0;
loc_824B0DAC:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824b0e28
	if (cr6.eq) goto loc_824B0E28;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824b0e28
	if (cr6.eq) goto loc_824B0E28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b02d0
	sub_824B02D0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-24904
	ctx.r4.s64 = r11.s64 + -24904;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824af2c8
	sub_824AF2C8(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,260(r7)
	PPC_STORE_U32(ctx.r7.u32 + 260, ctx.r6.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r8,217(r5)
	PPC_STORE_U8(ctx.r5.u32 + 217, ctx.r8.u8);
loc_824B0E28:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r31,264(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-14368(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r10,18188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18188);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x824b0e74
	if (cr6.eq) goto loc_824B0E74;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0e78
	if (!cr6.eq) goto loc_824B0E78;
loc_824B0E74:
	// li r11,0
	r11.s64 = 0;
loc_824B0E78:
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
	// beq cr6,0x824b0ec4
	if (cr6.eq) goto loc_824B0EC4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b0ec4
	if (!cr6.eq) goto loc_824B0EC4;
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
loc_824B0EC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824B0EC8"))) PPC_WEAK_FUNC(sub_824B0EC8);
PPC_FUNC_IMPL(__imp__sub_824B0EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824B0ECC"))) PPC_WEAK_FUNC(sub_824B0ECC);
PPC_FUNC_IMPL(__imp__sub_824B0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B0ED0"))) PPC_WEAK_FUNC(sub_824B0ED0);
PPC_FUNC_IMPL(__imp__sub_824B0ED0) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824b100c
	if (!cr6.eq) goto loc_824B100C;
	// lbz r10,217(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 217);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824b100c
	if (!cr6.eq) goto loc_824B100C;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824b0f54
	if (cr6.eq) goto loc_824B0F54;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24904
	ctx.r4.s64 = ctx.r10.s64 + -24904;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r29,8(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824af2c8
	sub_824AF2C8(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,217(r7)
	PPC_STORE_U8(ctx.r7.u32 + 217, ctx.r8.u8);
	// b 0x824b0f64
	goto loc_824B0F64;
loc_824B0F54:
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824b100c
	if (cr6.eq) goto loc_824B100C;
loc_824B0F64:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r10,264(r11)
	PPC_STORE_U32(r11.u32 + 264, ctx.r10.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r30,264(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lwz r11,18188(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18188);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lwz r3,-14368(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14368);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b0fbc
	if (cr6.eq) goto loc_824B0FBC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b0fc0
	if (!cr6.eq) goto loc_824B0FC0;
loc_824B0FBC:
	// li r11,0
	r11.s64 = 0;
loc_824B0FC0:
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
	// beq cr6,0x824b100c
	if (cr6.eq) goto loc_824B100C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b100c
	if (!cr6.eq) goto loc_824B100C;
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
loc_824B100C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B1010"))) PPC_WEAK_FUNC(sub_824B1010);
PPC_FUNC_IMPL(__imp__sub_824B1010) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B1014"))) PPC_WEAK_FUNC(sub_824B1014);
PPC_FUNC_IMPL(__imp__sub_824B1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1018"))) PPC_WEAK_FUNC(sub_824B1018);
PPC_FUNC_IMPL(__imp__sub_824B1018) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r7,220(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bne cr6,0x824b11b0
	if (!cr6.eq) goto loc_824B11B0;
	// lbz r11,212(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b11b0
	if (!cr6.eq) goto loc_824B11B0;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lwz r27,20(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r28,24(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b1080
	if (cr6.eq) goto loc_824B1080;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b1084
	if (!cr6.eq) goto loc_824B1084;
loc_824B1080:
	// li r11,0
	r11.s64 = 0;
loc_824B1084:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b10c4
	if (cr6.eq) goto loc_824B10C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b10c8
	if (!cr6.eq) goto loc_824B10C8;
loc_824B10C4:
	// li r11,0
	r11.s64 = 0;
loc_824B10C8:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r7,220(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// lfs f0,112(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	f0.f64 = double(temp.f32);
	// lwz r11,18156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18156);
	// lfs f13,116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,96(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x824b1198
	if (cr6.eq) goto loc_824B1198;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b119c
	if (!cr6.eq) goto loc_824B119C;
loc_824B1198:
	// li r11,0
	r11.s64 = 0;
loc_824B119C:
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x824af330
	sub_824AF330(ctx, base);
loc_824B11B0:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_824B11BC"))) PPC_WEAK_FUNC(sub_824B11BC);
PPC_FUNC_IMPL(__imp__sub_824B11BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824B11C0"))) PPC_WEAK_FUNC(sub_824B11C0);
PPC_FUNC_IMPL(__imp__sub_824B11C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,3384
	ctx.r8.s64 = r11.s64 + 3384;
	// addi r7,r10,-2412
	ctx.r7.s64 = ctx.r10.s64 + -2412;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r6,r9,-2428
	ctx.r6.s64 = ctx.r9.s64 + -2428;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r29,r31,140
	r29.s64 = r31.s64 + 140;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r29,r31,232
	r29.s64 = r31.s64 + 232;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// addi r29,r31,324
	r29.s64 = r31.s64 + 324;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// addi r29,r31,416
	r29.s64 = r31.s64 + 416;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// addi r29,r31,508
	r29.s64 = r31.s64 + 508;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,512(r31)
	PPC_STORE_U32(r31.u32 + 512, r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r30.u32);
	// addi r29,r31,600
	r29.s64 = r31.s64 + 600;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r30.u32);
	// addi r29,r31,692
	r29.s64 = r31.s64 + 692;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,696(r31)
	PPC_STORE_U32(r31.u32 + 696, r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r30.u32);
	// addi r3,r31,784
	ctx.r3.s64 = r31.s64 + 784;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,812
	ctx.r3.s64 = r31.s64 + 812;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,840
	ctx.r3.s64 = r31.s64 + 840;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,868
	ctx.r3.s64 = r31.s64 + 868;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r30,956(r31)
	PPC_STORE_U32(r31.u32 + 956, r30.u32);
	// addi r11,r31,952
	r11.s64 = r31.s64 + 952;
	// addi r4,r5,-2508
	ctx.r4.s64 = ctx.r5.s64 + -2508;
	// stw r30,964(r31)
	PPC_STORE_U32(r31.u32 + 964, r30.u32);
	// stw r30,960(r31)
	PPC_STORE_U32(r31.u32 + 960, r30.u32);
	// stw r4,952(r31)
	PPC_STORE_U32(r31.u32 + 952, ctx.r4.u32);
	// stw r30,968(r31)
	PPC_STORE_U32(r31.u32 + 968, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 968);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// or r9,r11,r3
	ctx.r9.u64 = r11.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,968(r31)
	PPC_STORE_U32(r31.u32 + 968, ctx.r9.u32);
	// stb r30,980(r31)
	PPC_STORE_U8(r31.u32 + 980, r30.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,976(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B13A0"))) PPC_WEAK_FUNC(sub_824B13A0);
PPC_FUNC_IMPL(__imp__sub_824B13A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B13A4"))) PPC_WEAK_FUNC(sub_824B13A4);
PPC_FUNC_IMPL(__imp__sub_824B13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B13A8"))) PPC_WEAK_FUNC(sub_824B13A8);
PPC_FUNC_IMPL(__imp__sub_824B13A8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2412
	ctx.r9.s64 = r11.s64 + -2412;
	// addi r8,r10,-2428
	ctx.r8.s64 = ctx.r10.s64 + -2428;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,952
	ctx.r3.s64 = ctx.r3.s64 + 952;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x824af178
	sub_824AF178(ctx, base);
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,868
	ctx.r3.s64 = r31.s64 + 868;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,840
	ctx.r3.s64 = r31.s64 + 840;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,812
	ctx.r3.s64 = r31.s64 + 812;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,784
	ctx.r3.s64 = r31.s64 + 784;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,692
	r30.s64 = r31.s64 + 692;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,600
	r30.s64 = r31.s64 + 600;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,508
	r30.s64 = r31.s64 + 508;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,324
	r30.s64 = r31.s64 + 324;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,232
	r30.s64 = r31.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-2568
	ctx.r5.s64 = ctx.r7.s64 + -2568;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
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

__attribute__((alias("__imp__sub_824B1564"))) PPC_WEAK_FUNC(sub_824B1564);
PPC_FUNC_IMPL(__imp__sub_824B1564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1568"))) PPC_WEAK_FUNC(sub_824B1568);
PPC_FUNC_IMPL(__imp__sub_824B1568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r3,r3,952
	ctx.r3.s64 = ctx.r3.s64 + 952;
}

__attribute__((alias("__imp__sub_824B1590"))) PPC_WEAK_FUNC(sub_824B1590);
PPC_FUNC_IMPL(__imp__sub_824B1590) {
	PPC_FUNC_PROLOGUE();
	// b 0x824af410
	sub_824AF410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B1594"))) PPC_WEAK_FUNC(sub_824B1594);
PPC_FUNC_IMPL(__imp__sub_824B1594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1598"))) PPC_WEAK_FUNC(sub_824B1598);
PPC_FUNC_IMPL(__imp__sub_824B1598) {
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
	// lwz r10,964(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 964);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,952
	r11.s64 = ctx.r3.s64 + 952;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b15d0
	if (!cr6.gt) goto loc_824B15D0;
loc_824B15B8:
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
	// bgt cr6,0x824b15b8
	if (cr6.gt) goto loc_824B15B8;
loc_824B15D0:
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r28,r11,5480
	r28.s64 = r11.s64 + 5480;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b15f8
	if (cr6.eq) goto loc_824B15F8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b15fc
	if (!cr6.eq) goto loc_824B15FC;
loc_824B15F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824B15FC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-7992
	ctx.r3.s64 = ctx.r10.s64 + -7992;
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
	// lwz r11,18148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18148);
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
	// addi r4,r31,784
	ctx.r4.s64 = r31.s64 + 784;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,3376
	r28.s64 = r11.s64 + 3376;
	// beq cr6,0x824b1670
	if (cr6.eq) goto loc_824B1670;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b1674
	if (!cr6.eq) goto loc_824B1674;
loc_824B1670:
	// li r11,0
	r11.s64 = 0;
loc_824B1674:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8292
	ctx.r3.s64 = ctx.r10.s64 + -8292;
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
	// lwz r11,18172(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18172);
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
	// addi r4,r31,812
	ctx.r4.s64 = r31.s64 + 812;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,3792
	r28.s64 = r11.s64 + 3792;
	// beq cr6,0x824b16e0
	if (cr6.eq) goto loc_824B16E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b16e4
	if (!cr6.eq) goto loc_824B16E4;
loc_824B16E0:
	// li r11,0
	r11.s64 = 0;
loc_824B16E4:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8192
	ctx.r3.s64 = ctx.r10.s64 + -8192;
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
	// lwz r11,18164(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18164);
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
	// addi r4,r31,840
	ctx.r4.s64 = r31.s64 + 840;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,4120
	r28.s64 = r11.s64 + 4120;
	// beq cr6,0x824b1750
	if (cr6.eq) goto loc_824B1750;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b1754
	if (!cr6.eq) goto loc_824B1754;
loc_824B1750:
	// li r11,0
	r11.s64 = 0;
loc_824B1754:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8132
	ctx.r3.s64 = ctx.r10.s64 + -8132;
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
	// lwz r11,18160(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18160);
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
	// addi r4,r31,868
	ctx.r4.s64 = r31.s64 + 868;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-1744
	r28.s64 = r11.s64 + -1744;
	// beq cr6,0x824b17c0
	if (cr6.eq) goto loc_824B17C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b17c4
	if (!cr6.eq) goto loc_824B17C4;
loc_824B17C0:
	// li r11,0
	r11.s64 = 0;
loc_824B17C4:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8084
	ctx.r3.s64 = ctx.r10.s64 + -8084;
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
	// lwz r11,18156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18156);
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
	// addi r4,r31,896
	ctx.r4.s64 = r31.s64 + 896;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-1520
	r28.s64 = r11.s64 + -1520;
	// beq cr6,0x824b1830
	if (cr6.eq) goto loc_824B1830;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b1834
	if (!cr6.eq) goto loc_824B1834;
loc_824B1830:
	// li r11,0
	r11.s64 = 0;
loc_824B1834:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-6516
	ctx.r3.s64 = ctx.r10.s64 + -6516;
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
	// lwz r11,29148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29148);
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
	// addi r4,r31,924
	ctx.r4.s64 = r31.s64 + 924;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af830
	sub_824AF830(ctx, base);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,276(r6)
	PPC_STORE_U32(ctx.r6.u32 + 276, ctx.r3.u32);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,280(r11)
	PPC_STORE_U32(r11.u32 + 280, ctx.r3.u32);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r3.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r7,-24900
	ctx.r4.s64 = ctx.r7.s64 + -24900;
	// lwz r30,8(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24912
	ctx.r4.s64 = ctx.r10.s64 + -24912;
	// stw r3,268(r11)
	PPC_STORE_U32(r11.u32 + 268, ctx.r3.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,8(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B193C"))) PPC_WEAK_FUNC(sub_824B193C);
PPC_FUNC_IMPL(__imp__sub_824B193C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824B1940"))) PPC_WEAK_FUNC(sub_824B1940);
PPC_FUNC_IMPL(__imp__sub_824B1940) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r26,220(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824b1a90
	if (cr6.eq) goto loc_824B1A90;
	// lwz r31,28(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824b198c
	if (cr6.eq) goto loc_824B198C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b1d50
	sub_824B1D50(ctx, base);
loc_824B198C:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// addi r29,r30,140
	r29.s64 = r30.s64 + 140;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824b19b0
	if (cr6.eq) goto loc_824B19B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824B19B0:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r29,r30,232
	r29.s64 = r30.s64 + 232;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x824b19d4
	if (cr6.eq) goto loc_824B19D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824B19D4:
	// lwz r11,220(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 220);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1a4c
	if (cr6.eq) goto loc_824B1A4C;
	// lwz r29,220(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// addi r31,r30,324
	r31.s64 = r30.s64 + 324;
	// lwz r11,324(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x824b1a10
	if (cr6.eq) goto loc_824B1A10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_824B1A10:
	// lwz r11,100(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = r29.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,19796
	ctx.r4.s64 = ctx.r9.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b1a4c
	if (cr6.eq) goto loc_824B1A4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824B1A4C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1a90
	if (cr6.eq) goto loc_824B1A90;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r29,28(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 416);
	// addi r31,r30,416
	r31.s64 = r30.s64 + 416;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x824b1a90
	if (cr6.eq) goto loc_824B1A90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_824B1A90:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,692(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 692);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,28(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r30,692
	r31.s64 = r30.s64 + 692;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x824b1ac4
	if (cr6.eq) goto loc_824B1AC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af4e0
	sub_824AF4E0(ctx, base);
loc_824B1AC4:
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r31,r30,508
	r31.s64 = r30.s64 + 508;
	// lwz r11,508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x824b1aec
	if (cr6.eq) goto loc_824B1AEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824B1AEC:
	// addi r31,r30,600
	r31.s64 = r30.s64 + 600;
	// lwz r30,28(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x824b1b14
	if (cr6.eq) goto loc_824B1B14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824B1B14:
	// addic r11,r26,-1
	xer.ca = r26.u32 > 0;
	r11.s64 = r26.s64 + -1;
	// subfe r3,r11,r26
	temp.u8 = (~r11.u32 + r26.u32 < ~r11.u32) | (~r11.u32 + r26.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B1B20"))) PPC_WEAK_FUNC(sub_824B1B20);
PPC_FUNC_IMPL(__imp__sub_824B1B20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824B1B24"))) PPC_WEAK_FUNC(sub_824B1B24);
PPC_FUNC_IMPL(__imp__sub_824B1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1B28"))) PPC_WEAK_FUNC(sub_824B1B28);
PPC_FUNC_IMPL(__imp__sub_824B1B28) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,48
	r31.s64 = ctx.r3.s64 + 48;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1b60
	if (cr6.eq) goto loc_824B1B60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b1d50
	sub_824B1D50(ctx, base);
loc_824B1B60:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// addi r31,r30,140
	r31.s64 = r30.s64 + 140;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1b84
	if (cr6.eq) goto loc_824B1B84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824B1B84:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r31,r30,232
	r31.s64 = r30.s64 + 232;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1ba8
	if (cr6.eq) goto loc_824B1BA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824B1BA8:
	// lwz r11,416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 416);
	// addi r31,r30,416
	r31.s64 = r30.s64 + 416;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1bcc
	if (cr6.eq) goto loc_824B1BCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_824B1BCC:
	// lwz r11,324(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// addi r31,r30,324
	r31.s64 = r30.s64 + 324;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1bf0
	if (cr6.eq) goto loc_824B1BF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_824B1BF0:
	// lwz r11,508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// addi r31,r30,508
	r31.s64 = r30.s64 + 508;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1c14
	if (cr6.eq) goto loc_824B1C14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824B1C14:
	// lwz r11,600(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 600);
	// addi r31,r30,600
	r31.s64 = r30.s64 + 600;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1c38
	if (cr6.eq) goto loc_824B1C38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824B1C38:
	// lwz r11,692(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 692);
	// addi r31,r30,692
	r31.s64 = r30.s64 + 692;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1c5c
	if (cr6.eq) goto loc_824B1C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af4e0
	sub_824AF4E0(ctx, base);
loc_824B1C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B1C60"))) PPC_WEAK_FUNC(sub_824B1C60);
PPC_FUNC_IMPL(__imp__sub_824B1C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B1C64"))) PPC_WEAK_FUNC(sub_824B1C64);
PPC_FUNC_IMPL(__imp__sub_824B1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1C68"))) PPC_WEAK_FUNC(sub_824B1C68);
PPC_FUNC_IMPL(__imp__sub_824B1C68) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,31152
	ctx.r3.s64 = ctx.r10.s64 + 31152;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,5381
	ctx.r4.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824b1cc0
	if (cr6.eq) goto loc_824B1CC0;
loc_824B1CA4:
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824b1ca4
	if (!cr6.eq) goto loc_824B1CA4;
loc_824B1CC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243bcb8
	sub_8243BCB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x824b1cd8
	if (!cr6.eq) goto loc_824B1CD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B1CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B1CE8"))) PPC_WEAK_FUNC(sub_824B1CE8);
PPC_FUNC_IMPL(__imp__sub_824B1CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1CEC"))) PPC_WEAK_FUNC(sub_824B1CEC);
PPC_FUNC_IMPL(__imp__sub_824B1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1CF0"))) PPC_WEAK_FUNC(sub_824B1CF0);
PPC_FUNC_IMPL(__imp__sub_824B1CF0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x824b1d38
	if (cr6.eq) goto loc_824B1D38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23456
	ctx.r4.s64 = ctx.r9.s64 + 23456;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_824B1D38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B1D48"))) PPC_WEAK_FUNC(sub_824B1D48);
PPC_FUNC_IMPL(__imp__sub_824B1D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1D4C"))) PPC_WEAK_FUNC(sub_824B1D4C);
PPC_FUNC_IMPL(__imp__sub_824B1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1D50"))) PPC_WEAK_FUNC(sub_824B1D50);
PPC_FUNC_IMPL(__imp__sub_824B1D50) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b1e10
	if (cr6.eq) goto loc_824B1E10;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23456
	ctx.r4.s64 = ctx.r8.s64 + 23456;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32181
	ctx.r4.s64 = -2109014016;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,7408
	r11.s64 = ctx.r4.s64 + 7408;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_824B1E10:
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

__attribute__((alias("__imp__sub_824B1E24"))) PPC_WEAK_FUNC(sub_824B1E24);
PPC_FUNC_IMPL(__imp__sub_824B1E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1E28"))) PPC_WEAK_FUNC(sub_824B1E28);
PPC_FUNC_IMPL(__imp__sub_824B1E28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824B1E2C"))) PPC_WEAK_FUNC(sub_824B1E2C);
PPC_FUNC_IMPL(__imp__sub_824B1E2C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824b1e30
	goto loc_824B1E30;
loc_824B1E30:
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
	// bl 0x824b13a8
	sub_824B13A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1e68
	if (cr6.eq) goto loc_824B1E68;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B1E68:
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

__attribute__((alias("__imp__sub_824B1E30"))) PPC_WEAK_FUNC(sub_824B1E30);
PPC_FUNC_IMPL(__imp__sub_824B1E30) {
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
	// bl 0x824b13a8
	sub_824B13A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b1e68
	if (cr6.eq) goto loc_824B1E68;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B1E68:
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

__attribute__((alias("__imp__sub_824B1E80"))) PPC_WEAK_FUNC(sub_824B1E80);
PPC_FUNC_IMPL(__imp__sub_824B1E80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x824b1e98
	if (cr6.lt) goto loc_824B1E98;
	// li r11,0
	r11.s64 = 0;
loc_824B1E98:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1EA0"))) PPC_WEAK_FUNC(sub_824B1EA0);
PPC_FUNC_IMPL(__imp__sub_824B1EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1EA4"))) PPC_WEAK_FUNC(sub_824B1EA4);
PPC_FUNC_IMPL(__imp__sub_824B1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1EA8"))) PPC_WEAK_FUNC(sub_824B1EA8);
PPC_FUNC_IMPL(__imp__sub_824B1EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1EAC"))) PPC_WEAK_FUNC(sub_824B1EAC);
PPC_FUNC_IMPL(__imp__sub_824B1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1EB0"))) PPC_WEAK_FUNC(sub_824B1EB0);
PPC_FUNC_IMPL(__imp__sub_824B1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4448
	ctx.r9.s64 = r11.s64 + 4448;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B1ECC"))) PPC_WEAK_FUNC(sub_824B1ECC);
PPC_FUNC_IMPL(__imp__sub_824B1ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1ED0"))) PPC_WEAK_FUNC(sub_824B1ED0);
PPC_FUNC_IMPL(__imp__sub_824B1ED0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-2348
	ctx.r6.s64 = ctx.r9.s64 + -2348;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2364
	ctx.r5.s64 = ctx.r8.s64 + -2364;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B1F38"))) PPC_WEAK_FUNC(sub_824B1F38);
PPC_FUNC_IMPL(__imp__sub_824B1F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1F3C"))) PPC_WEAK_FUNC(sub_824B1F3C);
PPC_FUNC_IMPL(__imp__sub_824B1F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B1F40"))) PPC_WEAK_FUNC(sub_824B1F40);
PPC_FUNC_IMPL(__imp__sub_824B1F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_824B1F60:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x824b1f60
	if (cr6.gt) goto loc_824B1F60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B1F80"))) PPC_WEAK_FUNC(sub_824B1F80);
PPC_FUNC_IMPL(__imp__sub_824B1F80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b206c
	if (cr6.eq) goto loc_824B206C;
	// lwz r27,224(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r31,r11,296
	r31.s64 = r11.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r28,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r28.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x824b206c
	if (cr6.eq) goto loc_824B206C;
loc_824B1FD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwzx r29,r9,r8
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lbz r7,129(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 129);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq cr6,0x824b2028
	if (cr6.eq) goto loc_824B2028;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// bl 0x824b6858
	sub_824B6858(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824b2048
	if (!cr6.eq) goto loc_824B2048;
loc_824B2028:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x824b2048
	if (!cr6.lt) goto loc_824B2048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824B2048:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x824b1fd4
	if (!cr6.eq) goto loc_824B1FD4;
loc_824B206C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B2070"))) PPC_WEAK_FUNC(sub_824B2070);
PPC_FUNC_IMPL(__imp__sub_824B2070) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824B2074"))) PPC_WEAK_FUNC(sub_824B2074);
PPC_FUNC_IMPL(__imp__sub_824B2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2078"))) PPC_WEAK_FUNC(sub_824B2078);
PPC_FUNC_IMPL(__imp__sub_824B2078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824B208C"))) PPC_WEAK_FUNC(sub_824B208C);
PPC_FUNC_IMPL(__imp__sub_824B208C) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b5ec0
	sub_822B5EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B2090"))) PPC_WEAK_FUNC(sub_824B2090);
PPC_FUNC_IMPL(__imp__sub_824B2090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2094"))) PPC_WEAK_FUNC(sub_824B2094);
PPC_FUNC_IMPL(__imp__sub_824B2094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

