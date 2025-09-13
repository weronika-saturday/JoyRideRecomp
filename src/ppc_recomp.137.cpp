#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82538A64"))) PPC_WEAK_FUNC(sub_82538A64);
PPC_FUNC_IMPL(__imp__sub_82538A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538A68"))) PPC_WEAK_FUNC(sub_82538A68);
PPC_FUNC_IMPL(__imp__sub_82538A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
}

__attribute__((alias("__imp__sub_82538A78"))) PPC_WEAK_FUNC(sub_82538A78);
PPC_FUNC_IMPL(__imp__sub_82538A78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538A7C"))) PPC_WEAK_FUNC(sub_82538A7C);
PPC_FUNC_IMPL(__imp__sub_82538A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538A80"))) PPC_WEAK_FUNC(sub_82538A80);
PPC_FUNC_IMPL(__imp__sub_82538A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
}

__attribute__((alias("__imp__sub_82538A90"))) PPC_WEAK_FUNC(sub_82538A90);
PPC_FUNC_IMPL(__imp__sub_82538A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538A94"))) PPC_WEAK_FUNC(sub_82538A94);
PPC_FUNC_IMPL(__imp__sub_82538A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538A98"))) PPC_WEAK_FUNC(sub_82538A98);
PPC_FUNC_IMPL(__imp__sub_82538A98) {
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
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// bl 0x822df008
	sub_822DF008(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r28,44
	ctx.r5.s64 = r28.s64 + 44;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r31,13
	ctx.r3.s64 = r31.s64 + 13;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// ld r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 104);
	// std r9,64(r31)
	PPC_STORE_U64(r31.u32 + 64, ctx.r9.u64);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r6,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r6.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82538b2c
	if (cr6.lt) goto loc_82538B2C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x82538b2c
	if (!cr6.lt) goto loc_82538B2C;
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// b 0x82538b30
	goto loc_82538B30;
loc_82538B2C:
	// li r11,-1
	r11.s64 = -1;
loc_82538B30:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82538b50
	if (cr6.eq) goto loc_82538B50;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538b54
	if (!cr6.eq) goto loc_82538B54;
loc_82538B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82538B54:
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82538B64"))) PPC_WEAK_FUNC(sub_82538B64);
PPC_FUNC_IMPL(__imp__sub_82538B64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82538B68"))) PPC_WEAK_FUNC(sub_82538B68);
PPC_FUNC_IMPL(__imp__sub_82538B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
}

__attribute__((alias("__imp__sub_82538BA0"))) PPC_WEAK_FUNC(sub_82538BA0);
PPC_FUNC_IMPL(__imp__sub_82538BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538BA4"))) PPC_WEAK_FUNC(sub_82538BA4);
PPC_FUNC_IMPL(__imp__sub_82538BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538BA8"))) PPC_WEAK_FUNC(sub_82538BA8);
PPC_FUNC_IMPL(__imp__sub_82538BA8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82538be0
	if (cr6.eq) goto loc_82538BE0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538be4
	if (!cr6.eq) goto loc_82538BE4;
loc_82538BE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82538BE4:
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
	// addi r5,r10,30544
	ctx.r5.s64 = ctx.r10.s64 + 30544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82538c6c
	if (!cr6.eq) goto loc_82538C6C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,14076
	r31.s64 = r11.s64 + 14076;
loc_82538C2C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82538c2c
	if (cr6.eq) goto loc_82538C2C;
loc_82538C6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82538CA4"))) PPC_WEAK_FUNC(sub_82538CA4);
PPC_FUNC_IMPL(__imp__sub_82538CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538CA8"))) PPC_WEAK_FUNC(sub_82538CA8);
PPC_FUNC_IMPL(__imp__sub_82538CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82538ce0
	if (cr6.eq) goto loc_82538CE0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538ce4
	if (!cr6.eq) goto loc_82538CE4;
loc_82538CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82538CE4:
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
	// addi r5,r10,30568
	ctx.r5.s64 = ctx.r10.s64 + 30568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82538d7c
	if (!cr6.eq) goto loc_82538D7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,13852
	r31.s64 = r11.s64 + 13852;
loc_82538D2C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82538d2c
	if (cr6.eq) goto loc_82538D2C;
loc_82538D7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82538DB4"))) PPC_WEAK_FUNC(sub_82538DB4);
PPC_FUNC_IMPL(__imp__sub_82538DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538DB8"))) PPC_WEAK_FUNC(sub_82538DB8);
PPC_FUNC_IMPL(__imp__sub_82538DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
}

__attribute__((alias("__imp__sub_82538DC8"))) PPC_WEAK_FUNC(sub_82538DC8);
PPC_FUNC_IMPL(__imp__sub_82538DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538DCC"))) PPC_WEAK_FUNC(sub_82538DCC);
PPC_FUNC_IMPL(__imp__sub_82538DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538DD0"))) PPC_WEAK_FUNC(sub_82538DD0);
PPC_FUNC_IMPL(__imp__sub_82538DD0) {
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
	// lwz r7,396(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82538e80
	if (!cr6.gt) goto loc_82538E80;
	// lwz r9,388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r11,0
	r11.s64 = 0;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
loc_82538E08:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// beq cr6,0x82538e2c
	if (cr6.eq) goto loc_82538E2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// blt cr6,0x82538e08
	if (cr6.lt) goto loc_82538E08;
	// b 0x82538e80
	goto loc_82538E80;
loc_82538E2C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82538e80
	if (cr6.lt) goto loc_82538E80;
	// mulli r11,r10,112
	r11.s64 = ctx.r10.s64 * 112;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82538e80
	if (cr6.eq) goto loc_82538E80;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82538e68
	if (cr6.eq) goto loc_82538E68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538e6c
	if (!cr6.eq) goto loc_82538E6C;
loc_82538E68:
	// li r11,0
	r11.s64 = 0;
loc_82538E6C:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82572ad0
	sub_82572AD0(ctx, base);
loc_82538E80:
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

__attribute__((alias("__imp__sub_82538E94"))) PPC_WEAK_FUNC(sub_82538E94);
PPC_FUNC_IMPL(__imp__sub_82538E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538E98"))) PPC_WEAK_FUNC(sub_82538E98);
PPC_FUNC_IMPL(__imp__sub_82538E98) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// beq cr6,0x82538ed4
	if (cr6.eq) goto loc_82538ED4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538ed8
	if (!cr6.eq) goto loc_82538ED8;
loc_82538ED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82538ED8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-31340
	ctx.r5.s64 = ctx.r10.s64 + -31340;
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
	// bne cr6,0x82539064
	if (!cr6.eq) goto loc_82539064;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r24,r31,1756
	r24.s64 = r31.s64 + 1756;
	// addi r25,r11,20812
	r25.s64 = r11.s64 + 20812;
	// addi r27,r10,21088
	r27.s64 = ctx.r10.s64 + 21088;
	// addi r26,r9,13852
	r26.s64 = ctx.r9.s64 + 13852;
loc_82538F28:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r31,5381
	r31.s64 = 5381;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82538fa0
	if (cr6.eq) goto loc_82538FA0;
loc_82538F84:
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82538f84
	if (!cr6.eq) goto loc_82538F84;
loc_82538FA0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826cc010
	sub_826CC010(ctx, base);
	// srawi r10,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 2;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// subf r6,r8,r11
	ctx.r6.s64 = r11.s64 - ctx.r8.s64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// ble cr6,0x82539024
	if (!cr6.gt) goto loc_82539024;
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
loc_82539024:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82539054
	if (cr0.eq) goto loc_82539054;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
loc_82539054:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82538f28
	if (cr6.eq) goto loc_82538F28;
loc_82539064:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82539080"))) PPC_WEAK_FUNC(sub_82539080);
PPC_FUNC_IMPL(__imp__sub_82539080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82539084"))) PPC_WEAK_FUNC(sub_82539084);
PPC_FUNC_IMPL(__imp__sub_82539084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82539088"))) PPC_WEAK_FUNC(sub_82539088);
PPC_FUNC_IMPL(__imp__sub_82539088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r11,r3,384
	r11.s64 = ctx.r3.s64 + 384;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82539098:
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
	// bgt cr6,0x82539098
	if (cr6.gt) goto loc_82539098;
}

__attribute__((alias("__imp__sub_825390B0"))) PPC_WEAK_FUNC(sub_825390B0);
PPC_FUNC_IMPL(__imp__sub_825390B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825390B4"))) PPC_WEAK_FUNC(sub_825390B4);
PPC_FUNC_IMPL(__imp__sub_825390B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825390B8"))) PPC_WEAK_FUNC(sub_825390B8);
PPC_FUNC_IMPL(__imp__sub_825390B8) {
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
	// lwz r11,396(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r31,r3,384
	r31.s64 = ctx.r3.s64 + 384;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8253916c
	if (cr6.eq) goto loc_8253916C;
	// li r29,112
	r29.s64 = 112;
loc_825390E8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82539150
	if (!cr6.eq) goto loc_82539150;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r30
	ctx.r9.s64 = r30.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// divw r9,r9,r29
	ctx.r9.s32 = ctx.r9.s32 / r29.s32;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82539140
	if (!cr6.lt) goto loc_82539140;
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mulli r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 * 112;
	// lbz r8,-112(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -112);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,-112
	ctx.r9.s64 = r11.s64 + -112;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r7,-108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -108);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bl 0x8253b488
	sub_8253B488(ctx, base);
loc_82539140:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82539154
	goto loc_82539154;
loc_82539150:
	// addi r30,r30,112
	r30.s64 = r30.s64 + 112;
loc_82539154:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825390e8
	if (!cr6.eq) goto loc_825390E8;
loc_8253916C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82539170"))) PPC_WEAK_FUNC(sub_82539170);
PPC_FUNC_IMPL(__imp__sub_82539170) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82539174"))) PPC_WEAK_FUNC(sub_82539174);
PPC_FUNC_IMPL(__imp__sub_82539174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82539178"))) PPC_WEAK_FUNC(sub_82539178);
PPC_FUNC_IMPL(__imp__sub_82539178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,384
	r11.s64 = ctx.r3.s64 + 384;
	// stw r10,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r10.u32);
	// lwz r9,396(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82539190:
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
	// bgt cr6,0x82539190
	if (cr6.gt) goto loc_82539190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825391AC"))) PPC_WEAK_FUNC(sub_825391AC);
PPC_FUNC_IMPL(__imp__sub_825391AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825391B0"))) PPC_WEAK_FUNC(sub_825391B0);
PPC_FUNC_IMPL(__imp__sub_825391B0) {
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
	// lwz r11,396(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// addi r31,r3,384
	r31.s64 = ctx.r3.s64 + 384;
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82539278
	if (cr6.eq) goto loc_82539278;
	// li r27,1000
	r27.s64 = 1000;
	// li r29,112
	r29.s64 = 112;
loc_825391E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r9,r11,-1000
	ctx.r9.s64 = r11.s64 + -1000;
	// divw r8,r9,r27
	ctx.r8.s32 = ctx.r9.s32 / r27.s32;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bne cr6,0x8253925c
	if (!cr6.eq) goto loc_8253925C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r30
	ctx.r9.s64 = r30.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// divw r9,r9,r29
	ctx.r9.s32 = ctx.r9.s32 / r29.s32;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8253924c
	if (!cr6.lt) goto loc_8253924C;
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mulli r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 * 112;
	// lbz r8,-112(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -112);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,-112
	ctx.r9.s64 = r11.s64 + -112;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r7,-108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -108);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bl 0x8253b488
	sub_8253B488(ctx, base);
loc_8253924C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82539260
	goto loc_82539260;
loc_8253925C:
	// addi r30,r30,112
	r30.s64 = r30.s64 + 112;
loc_82539260:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825391e8
	if (!cr6.eq) goto loc_825391E8;
loc_82539278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253927C"))) PPC_WEAK_FUNC(sub_8253927C);
PPC_FUNC_IMPL(__imp__sub_8253927C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82539280"))) PPC_WEAK_FUNC(sub_82539280);
PPC_FUNC_IMPL(__imp__sub_82539280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r3,384
	ctx.r3.s64 = ctx.r3.s64 + 384;
	// b 0x8253b668
	sub_8253B668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539294"))) PPC_WEAK_FUNC(sub_82539294);
PPC_FUNC_IMPL(__imp__sub_82539294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82539298"))) PPC_WEAK_FUNC(sub_82539298);
PPC_FUNC_IMPL(__imp__sub_82539298) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,1752(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bne cr6,0x825393e8
	if (!cr6.eq) goto loc_825393E8;
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r11,r3,384
	r11.s64 = ctx.r3.s64 + 384;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x825392e8
	if (!cr6.gt) goto loc_825392E8;
loc_825392D0:
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
	// bgt cr6,0x825392d0
	if (cr6.gt) goto loc_825392D0;
loc_825392E8:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r31,288
	r30.s64 = r31.s64 + 288;
	// stw r6,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r6.u32);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r8,r31,284
	ctx.r8.s64 = r31.s64 + 284;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82539310:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subfic r4,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r7.s64;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r7,r3,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82539310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82539310;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,300(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r29,128(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20520(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20520);
	// lwz r28,132(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r26,140(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lwz r11,20992(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x822e0438
	sub_822E0438(ctx, base);
	// lwz r11,20520(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20520);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lwz r8,300(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r11,21640(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21640);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x822e0438
	sub_822E0438(ctx, base);
loc_825393E8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825393F4"))) PPC_WEAK_FUNC(sub_825393F4);
PPC_FUNC_IMPL(__imp__sub_825393F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825393F8"))) PPC_WEAK_FUNC(sub_825393F8);
PPC_FUNC_IMPL(__imp__sub_825393F8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r26,r31,288
	r26.s64 = r31.s64 + 288;
	// lwz r6,24192(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,284
	ctx.r7.s64 = r31.s64 + 284;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8253943C:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82539460
	if (!cr6.eq) goto loc_82539460;
	// stbx r3,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r3.u8);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// b 0x82539474
	goto loc_82539474;
loc_82539460:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82539474:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8253943c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8253943C;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,300(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20520(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20520);
	// lwz r29,132(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r28,136(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r27,140(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lwz r11,20992(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x822e0438
	sub_822E0438(ctx, base);
	// lwz r11,20520(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20520);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lwz r8,300(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r11,21640(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21640);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x822e0438
	sub_822E0438(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8253953C"))) PPC_WEAK_FUNC(sub_8253953C);
PPC_FUNC_IMPL(__imp__sub_8253953C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82539540"))) PPC_WEAK_FUNC(sub_82539540);
PPC_FUNC_IMPL(__imp__sub_82539540) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// blt cr6,0x8253963c
	if (cr6.lt) goto loc_8253963C;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x8253963c
	if (!cr6.lt) goto loc_8253963C;
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 284);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8253963c
	if (!cr6.eq) goto loc_8253963C;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r3,284
	ctx.r8.s64 = ctx.r3.s64 + 284;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8253959C:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x825395bc
	if (!cr6.eq) goto loc_825395BC;
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r7.u8);
	// lwz r9,280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r9.u32);
	// b 0x825395d0
	goto loc_825395D0;
loc_825395BC:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825395D0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8253959c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8253959C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r7,296(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,300(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20520(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20520);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r30,140(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r11,20992(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x822e0438
	sub_822E0438(ctx, base);
loc_8253963C:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
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

__attribute__((alias("__imp__sub_82539658"))) PPC_WEAK_FUNC(sub_82539658);
PPC_FUNC_IMPL(__imp__sub_82539658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253965C"))) PPC_WEAK_FUNC(sub_8253965C);
PPC_FUNC_IMPL(__imp__sub_8253965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82539660"))) PPC_WEAK_FUNC(sub_82539660);
PPC_FUNC_IMPL(__imp__sub_82539660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r4,72
	ctx.r10.s64 = ctx.r4.s64 + 72;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r3,288
	ctx.r7.s64 = ctx.r3.s64 + 288;
	// lwz r6,24192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stwx r5,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
loc_825396A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825396a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825396A4;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r9,296(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r6,300(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20520(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20520);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r30,140(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r11,21640(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21640);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x822e0438
	sub_822E0438(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
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

__attribute__((alias("__imp__sub_82539744"))) PPC_WEAK_FUNC(sub_82539744);
PPC_FUNC_IMPL(__imp__sub_82539744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539748"))) PPC_WEAK_FUNC(sub_82539748);
PPC_FUNC_IMPL(__imp__sub_82539748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r11,388(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r3,384
	r29.s64 = ctx.r3.s64 + 384;
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82539848
	if (cr6.eq) goto loc_82539848;
	// li r30,112
	r30.s64 = 112;
loc_82539784:
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x825397c4
	if (!cr6.gt) goto loc_825397C4;
	// addi r10,r23,8
	ctx.r10.s64 = r23.s64 + 8;
loc_825397A0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// beq cr6,0x825397c0
	if (cr6.eq) goto loc_825397C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x825397a0
	if (cr6.lt) goto loc_825397A0;
	// b 0x825397c4
	goto loc_825397C4;
loc_825397C0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825397C4:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253982c
	if (!cr6.eq) goto loc_8253982C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// divw r9,r9,r30
	ctx.r9.s32 = ctx.r9.s32 / r30.s32;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8253981c
	if (!cr6.lt) goto loc_8253981C;
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mulli r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 * 112;
	// lbz r8,-112(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -112);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,-112
	ctx.r9.s64 = r11.s64 + -112;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r7,-108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -108);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bl 0x8253b488
	sub_8253B488(ctx, base);
loc_8253981C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// b 0x82539830
	goto loc_82539830;
loc_8253982C:
	// addi r31,r31,112
	r31.s64 = r31.s64 + 112;
loc_82539830:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82539784
	if (!cr6.eq) goto loc_82539784;
loc_82539848:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82539a14
	if (!cr6.gt) goto loc_82539A14;
	// addi r30,r23,8
	r30.s64 = r23.s64 + 8;
	// li r26,1000
	r26.s64 = 1000;
	// lis r27,-31970
	r27.s64 = -2095185920;
loc_82539864:
	// lwz r7,396(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 396);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x825398b0
	if (!cr6.gt) goto loc_825398B0;
	// lwz r8,388(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 388);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r9,r25,r8
	ctx.r9.u64 = r25.u64 + ctx.r8.u64;
loc_82539884:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// beq cr6,0x825398a8
	if (cr6.eq) goto loc_825398A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// blt cr6,0x82539884
	if (cr6.lt) goto loc_82539884;
	// b 0x825398b0
	goto loc_825398B0;
loc_825398A8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82539a00
	if (!cr6.lt) goto loc_82539A00;
loc_825398B0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8253b518
	sub_8253B518(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825398ec
	if (!cr6.gt) goto loc_825398EC;
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
loc_825398EC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r11,112
	ctx.r10.s64 = r11.s64 * 112;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// beq 0x82539990
	if (cr0.eq) goto loc_82539990;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,50
	ctx.r5.s64 = 50;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// lwz r22,100(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r21,104(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lwz r20,108(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwz r19,112(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// stw r22,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r22.u32);
	// stw r21,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r21.u32);
	// stw r20,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r20.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r19.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r5,104(r31)
	PPC_STORE_U64(r31.u32 + 104, ctx.r5.u64);
loc_82539990:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825399ac
	if (cr6.eq) goto loc_825399AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825399b0
	if (!cr6.eq) goto loc_825399B0;
loc_825399AC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825399B0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// addi r11,r10,-1000
	r11.s64 = ctx.r10.s64 + -1000;
	// divw r4,r11,r26
	ctx.r4.s32 = r11.s32 / r26.s32;
	// bl 0x825740a8
	sub_825740A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82539a00
	if (!cr6.eq) goto loc_82539A00;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825399ec
	if (cr6.eq) goto loc_825399EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825399f0
	if (!cr6.eq) goto loc_825399F0;
loc_825399EC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825399F0:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x825729f8
	sub_825729F8(ctx, base);
loc_82539A00:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82539864
	if (cr6.lt) goto loc_82539864;
loc_82539A14:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82539A18"))) PPC_WEAK_FUNC(sub_82539A18);
PPC_FUNC_IMPL(__imp__sub_82539A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82539A1C"))) PPC_WEAK_FUNC(sub_82539A1C);
PPC_FUNC_IMPL(__imp__sub_82539A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82539A20"))) PPC_WEAK_FUNC(sub_82539A20);
PPC_FUNC_IMPL(__imp__sub_82539A20) {
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
	// lwz r10,1752(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	// li r31,1
	r31.s64 = 1;
	// li r11,12
	r11.s64 = 12;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82539a48
	if (cr6.eq) goto loc_82539A48;
	// li r11,8
	r11.s64 = 8;
loc_82539A48:
	// lwz r7,396(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bne cr6,0x82539ac8
	if (!cr6.eq) goto loc_82539AC8;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82539a74
	if (!cr6.eq) goto loc_82539A74;
loc_82539A5C:
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
loc_82539A74:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82539a5c
	if (cr6.eq) goto loc_82539A5C;
	// lwz r9,388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r11,0
	r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
loc_82539A8C:
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x82539ab0
	if (cr6.eq) goto loc_82539AB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// blt cr6,0x82539a8c
	if (cr6.lt) goto loc_82539A8C;
	// b 0x82539a5c
	goto loc_82539A5C;
loc_82539AB0:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82539a5c
	if (cr6.eq) goto loc_82539A5C;
	// mulli r11,r10,112
	r11.s64 = ctx.r10.s64 * 112;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r3,384
	ctx.r3.s64 = ctx.r3.s64 + 384;
	// bl 0x8253b668
	sub_8253B668(ctx, base);
loc_82539AC8:
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

__attribute__((alias("__imp__sub_82539ADC"))) PPC_WEAK_FUNC(sub_82539ADC);
PPC_FUNC_IMPL(__imp__sub_82539ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539AE0"))) PPC_WEAK_FUNC(sub_82539AE0);
PPC_FUNC_IMPL(__imp__sub_82539AE0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x82539a20
	sub_82539A20(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82539b58
	if (cr6.eq) goto loc_82539B58;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8253b5b8
	sub_8253B5B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x8253b760
	sub_8253B760(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// lwz r11,396(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// b 0x82539b64
	goto loc_82539B64;
loc_82539B58:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82539B64:
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

__attribute__((alias("__imp__sub_82539B78"))) PPC_WEAK_FUNC(sub_82539B78);
PPC_FUNC_IMPL(__imp__sub_82539B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539B7C"))) PPC_WEAK_FUNC(sub_82539B7C);
PPC_FUNC_IMPL(__imp__sub_82539B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82539B80"))) PPC_WEAK_FUNC(sub_82539B80);
PPC_FUNC_IMPL(__imp__sub_82539B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93ec
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31970
	r20.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r17,0
	r17.s64 = 0;
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539bb4
	if (cr6.eq) goto loc_82539BB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539bb8
	if (!cr6.eq) goto loc_82539BB8;
loc_82539BB4:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539BB8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19376(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19376);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r18,r28,252
	r18.s64 = r28.s64 + 252;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539c10
	if (!cr6.eq) goto loc_82539C10;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539c10
	if (!cr6.eq) goto loc_82539C10;
	// lwz r11,19376(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19376);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82539C10:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539c2c
	if (cr6.eq) goto loc_82539C2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539c30
	if (!cr6.eq) goto loc_82539C30;
loc_82539C2C:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539C30:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22908(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22908);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r19,r28,224
	r19.s64 = r28.s64 + 224;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539c88
	if (!cr6.eq) goto loc_82539C88;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539c88
	if (!cr6.eq) goto loc_82539C88;
	// lwz r11,-22908(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22908);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82539C88:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539ca4
	if (cr6.eq) goto loc_82539CA4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539ca8
	if (!cr6.eq) goto loc_82539CA8;
loc_82539CA4:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539CA8:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22904);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r21,r28,196
	r21.s64 = r28.s64 + 196;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539d00
	if (!cr6.eq) goto loc_82539D00;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539d00
	if (!cr6.eq) goto loc_82539D00;
	// lwz r11,-22904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22904);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82539D00:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539d1c
	if (cr6.eq) goto loc_82539D1C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539d20
	if (!cr6.eq) goto loc_82539D20;
loc_82539D1C:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539D20:
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
	// addi r22,r28,168
	r22.s64 = r28.s64 + 168;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539d78
	if (!cr6.eq) goto loc_82539D78;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539d78
	if (!cr6.eq) goto loc_82539D78;
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
loc_82539D78:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539d94
	if (cr6.eq) goto loc_82539D94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539d98
	if (!cr6.eq) goto loc_82539D98;
loc_82539D94:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539D98:
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
	// addi r23,r28,140
	r23.s64 = r28.s64 + 140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539df0
	if (!cr6.eq) goto loc_82539DF0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539df0
	if (!cr6.eq) goto loc_82539DF0;
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
loc_82539DF0:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539e0c
	if (cr6.eq) goto loc_82539E0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539e10
	if (!cr6.eq) goto loc_82539E10;
loc_82539E0C:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539E10:
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
	// addi r24,r28,112
	r24.s64 = r28.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539e68
	if (!cr6.eq) goto loc_82539E68;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539e68
	if (!cr6.eq) goto loc_82539E68;
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
loc_82539E68:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539e84
	if (cr6.eq) goto loc_82539E84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539e88
	if (!cr6.eq) goto loc_82539E88;
loc_82539E84:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539E88:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-26372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -26372);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r28,84
	r25.s64 = r28.s64 + 84;
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
	// bne cr6,0x82539ee0
	if (!cr6.eq) goto loc_82539EE0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539ee0
	if (!cr6.eq) goto loc_82539EE0;
	// lwz r11,-26372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -26372);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82539EE0:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539efc
	if (cr6.eq) goto loc_82539EFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539f00
	if (!cr6.eq) goto loc_82539F00;
loc_82539EFC:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539F00:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19372);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r28,56
	r26.s64 = r28.s64 + 56;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539f58
	if (!cr6.eq) goto loc_82539F58;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539f58
	if (!cr6.eq) goto loc_82539F58;
	// lwz r11,19372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19372);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82539F58:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539f74
	if (cr6.eq) goto loc_82539F74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539f78
	if (!cr6.eq) goto loc_82539F78;
loc_82539F74:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539F78:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20496(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20496);
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
	// bne cr6,0x82539fd0
	if (!cr6.eq) goto loc_82539FD0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82539fd0
	if (!cr6.eq) goto loc_82539FD0;
	// lwz r11,20496(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20496);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82539FD0:
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82539fec
	if (cr6.eq) goto loc_82539FEC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82539ff0
	if (!cr6.eq) goto loc_82539FF0;
loc_82539FEC:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82539FF0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,17952(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17952);
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
	// bne cr6,0x8253a044
	if (!cr6.eq) goto loc_8253A044;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253a044
	if (!cr6.eq) goto loc_8253A044;
	// lwz r11,17952(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17952);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8253A044:
	// lwz r31,368(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 368);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8253a064
	if (cr6.eq) goto loc_8253A064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253bd50
	sub_8253BD50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r17,368(r28)
	PPC_STORE_U32(r28.u32 + 368, r17.u32);
loc_8253A064:
	// lwz r31,372(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 372);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8253a084
	if (cr6.eq) goto loc_8253A084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253b9a8
	sub_8253B9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r17,372(r28)
	PPC_STORE_U32(r28.u32 + 372, r17.u32);
loc_8253A084:
	// addi r3,r28,384
	ctx.r3.s64 = r28.s64 + 384;
	// bl 0x8253b8d8
	sub_8253B8D8(ctx, base);
	// addi r3,r28,304
	ctx.r3.s64 = r28.s64 + 304;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8253A0E8"))) PPC_WEAK_FUNC(sub_8253A0E8);
PPC_FUNC_IMPL(__imp__sub_8253A0E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8253A0EC"))) PPC_WEAK_FUNC(sub_8253A0EC);
PPC_FUNC_IMPL(__imp__sub_8253A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253A0F0"))) PPC_WEAK_FUNC(sub_8253A0F0);
PPC_FUNC_IMPL(__imp__sub_8253A0F0) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// beq cr6,0x8253a130
	if (cr6.eq) goto loc_8253A130;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a134
	if (!cr6.eq) goto loc_8253A134;
loc_8253A130:
	// li r11,0
	r11.s64 = 0;
loc_8253A134:
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
	// addi r5,r9,30612
	ctx.r5.s64 = ctx.r9.s64 + 30612;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
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
	// bne cr6,0x8253a334
	if (!cr6.eq) goto loc_8253A334;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,30600
	ctx.r5.s64 = r11.s64 + 30600;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253a1b4
	if (cr6.eq) goto loc_8253A1B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a1b8
	if (!cr6.eq) goto loc_8253A1B8;
loc_8253A1B4:
	// li r11,0
	r11.s64 = 0;
loc_8253A1B8:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573f18
	sub_82573F18(ctx, base);
	// mulli r11,r3,1000
	r11.s64 = ctx.r3.s64 * 1000;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,1010
	r30.s64 = r11.s64 + 1010;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82538a18
	sub_82538A18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8253a334
	if (!cr6.lt) goto loc_8253A334;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8253b518
	sub_8253B518(ctx, base);
	// addi r3,r28,1756
	ctx.r3.s64 = r28.s64 + 1756;
	// bl 0x826cc010
	sub_826CC010(ctx, base);
	// srawi r9,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,20812
	ctx.r5.s64 = ctx.r10.s64 + 20812;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// subf r6,r7,r11
	ctx.r6.s64 = r11.s64 - ctx.r7.s64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,21088
	ctx.r5.s64 = ctx.r6.s64 + 21088;
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
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r31,5381
	r31.s64 = 5381;
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253a270
	if (cr6.eq) goto loc_8253A270;
loc_8253A254:
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8253a254
	if (!cr6.eq) goto loc_8253A254;
loc_8253A270:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-22916(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22916);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8253a294
	if (!cr6.eq) goto loc_8253A294;
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// b 0x8253a2a8
	goto loc_8253A2A8;
loc_8253A294:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-22912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22912);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8253a2a8
	if (!cr6.eq) goto loc_8253A2A8;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
loc_8253A2A8:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,14076
	ctx.r5.s64 = ctx.r10.s64 + 14076;
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
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825388e8
	sub_825388E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82539ae0
	sub_82539AE0(ctx, base);
loc_8253A334:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_8253A350"))) PPC_WEAK_FUNC(sub_8253A350);
PPC_FUNC_IMPL(__imp__sub_8253A350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253A354"))) PPC_WEAK_FUNC(sub_8253A354);
PPC_FUNC_IMPL(__imp__sub_8253A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253A358"))) PPC_WEAK_FUNC(sub_8253A358);
PPC_FUNC_IMPL(__imp__sub_8253A358) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// beq cr6,0x8253a398
	if (cr6.eq) goto loc_8253A398;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a39c
	if (!cr6.eq) goto loc_8253A39C;
loc_8253A398:
	// li r11,0
	r11.s64 = 0;
loc_8253A39C:
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
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r9,30612
	ctx.r5.s64 = ctx.r9.s64 + 30612;
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
	// bne cr6,0x8253a550
	if (!cr6.eq) goto loc_8253A550;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,30600
	ctx.r5.s64 = r11.s64 + 30600;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253a41c
	if (cr6.eq) goto loc_8253A41C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a420
	if (!cr6.eq) goto loc_8253A420;
loc_8253A41C:
	// li r11,0
	r11.s64 = 0;
loc_8253A420:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573f18
	sub_82573F18(ctx, base);
	// mulli r11,r3,1000
	r11.s64 = ctx.r3.s64 * 1000;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,1010
	r30.s64 = r11.s64 + 1010;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82538a18
	sub_82538A18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8253a550
	if (!cr6.lt) goto loc_8253A550;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8253b518
	sub_8253B518(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,21088
	ctx.r5.s64 = r11.s64 + 21088;
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
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r31,5381
	r31.s64 = 5381;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253a4a8
	if (cr6.eq) goto loc_8253A4A8;
loc_8253A48C:
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8253a48c
	if (!cr6.eq) goto loc_8253A48C;
loc_8253A4A8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-22916(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22916);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8253a4cc
	if (!cr6.eq) goto loc_8253A4CC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// b 0x8253a4e0
	goto loc_8253A4E0;
loc_8253A4CC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-22912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22912);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8253a4e0
	if (!cr6.eq) goto loc_8253A4E0;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
loc_8253A4E0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r5,r8,14076
	ctx.r5.s64 = ctx.r8.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
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
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825388e8
	sub_825388E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82539ae0
	sub_82539AE0(ctx, base);
loc_8253A550:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8253A56C"))) PPC_WEAK_FUNC(sub_8253A56C);
PPC_FUNC_IMPL(__imp__sub_8253A56C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253A570"))) PPC_WEAK_FUNC(sub_8253A570);
PPC_FUNC_IMPL(__imp__sub_8253A570) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// beq cr6,0x8253a5b4
	if (cr6.eq) goto loc_8253A5B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a5b8
	if (!cr6.eq) goto loc_8253A5B8;
loc_8253A5B4:
	// li r11,0
	r11.s64 = 0;
loc_8253A5B8:
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
	// addi r5,r9,30612
	ctx.r5.s64 = ctx.r9.s64 + 30612;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
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
	// bne cr6,0x8253a764
	if (!cr6.eq) goto loc_8253A764;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,30600
	ctx.r5.s64 = r11.s64 + 30600;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253a638
	if (cr6.eq) goto loc_8253A638;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a63c
	if (!cr6.eq) goto loc_8253A63C;
loc_8253A638:
	// li r11,0
	r11.s64 = 0;
loc_8253A63C:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573f18
	sub_82573F18(ctx, base);
	// mulli r11,r3,1000
	r11.s64 = ctx.r3.s64 * 1000;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,1010
	r30.s64 = r11.s64 + 1010;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82538a18
	sub_82538A18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8253a764
	if (!cr6.lt) goto loc_8253A764;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8253b518
	sub_8253B518(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,21088
	ctx.r5.s64 = r11.s64 + 21088;
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
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r31,5381
	r31.s64 = 5381;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253a6c4
	if (cr6.eq) goto loc_8253A6C4;
loc_8253A6A8:
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8253a6a8
	if (!cr6.eq) goto loc_8253A6A8;
loc_8253A6C4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-22916(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22916);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8253a6e8
	if (!cr6.eq) goto loc_8253A6E8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// b 0x8253a6fc
	goto loc_8253A6FC;
loc_8253A6E8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-22912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22912);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8253a6fc
	if (!cr6.eq) goto loc_8253A6FC;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
loc_8253A6FC:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// addi r5,r10,14076
	ctx.r5.s64 = ctx.r10.s64 + 14076;
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
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825388e8
	sub_825388E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82539ae0
	sub_82539AE0(ctx, base);
loc_8253A764:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8253A780"))) PPC_WEAK_FUNC(sub_8253A780);
PPC_FUNC_IMPL(__imp__sub_8253A780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253A784"))) PPC_WEAK_FUNC(sub_8253A784);
PPC_FUNC_IMPL(__imp__sub_8253A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253A788"))) PPC_WEAK_FUNC(sub_8253A788);
PPC_FUNC_IMPL(__imp__sub_8253A788) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x8253b518
	sub_8253B518(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// std r28,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r28.u64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r3,21636(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21636);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// lwz r3,-14756(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253a81c
	if (cr6.eq) goto loc_8253A81C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a820
	if (!cr6.eq) goto loc_8253A820;
loc_8253A81C:
	// li r11,0
	r11.s64 = 0;
loc_8253A820:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82548560
	sub_82548560(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825388e8
	sub_825388E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82539ae0
	sub_82539AE0(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8253A858"))) PPC_WEAK_FUNC(sub_8253A858);
PPC_FUNC_IMPL(__imp__sub_8253A858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253A85C"))) PPC_WEAK_FUNC(sub_8253A85C);
PPC_FUNC_IMPL(__imp__sub_8253A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253A860"))) PPC_WEAK_FUNC(sub_8253A860);
PPC_FUNC_IMPL(__imp__sub_8253A860) {
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
	// lwz r11,1752(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8253a910
	if (!cr6.eq) goto loc_8253A910;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r3,284
	r28.s64 = ctx.r3.s64 + 284;
	// lis r30,-31970
	r30.s64 = -2095185920;
loc_8253A888:
	// lbzx r11,r28,r31
	r11.u64 = PPC_LOAD_U8(r28.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253a904
	if (cr6.eq) goto loc_8253A904;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253a8b0
	if (cr6.eq) goto loc_8253A8B0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a8b4
	if (!cr6.eq) goto loc_8253A8B4;
loc_8253A8B0:
	// li r11,0
	r11.s64 = 0;
loc_8253A8B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,100
	ctx.r5.s64 = r31.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// bl 0x8253a788
	sub_8253A788(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253a8f4
	if (cr6.eq) goto loc_8253A8F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253a8f8
	if (!cr6.eq) goto loc_8253A8F8;
loc_8253A8F4:
	// li r11,0
	r11.s64 = 0;
loc_8253A8F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// bl 0x8255d2d8
	sub_8255D2D8(ctx, base);
loc_8253A904:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8253a888
	if (cr6.lt) goto loc_8253A888;
loc_8253A910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253A914"))) PPC_WEAK_FUNC(sub_8253A914);
PPC_FUNC_IMPL(__imp__sub_8253A914) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253A918"))) PPC_WEAK_FUNC(sub_8253A918);
PPC_FUNC_IMPL(__imp__sub_8253A918) {
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
	// lwz r7,396(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8253a968
	if (!cr6.gt) goto loc_8253A968;
	// lwz r9,388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r11,0
	r11.s64 = 0;
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
loc_8253A948:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// beq cr6,0x8253a980
	if (cr6.eq) goto loc_8253A980;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// blt cr6,0x8253a948
	if (cr6.lt) goto loc_8253A948;
loc_8253A968:
	// bl 0x82539ae0
	sub_82539AE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8253A980:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8253a968
	if (cr6.eq) goto loc_8253A968;
	// mulli r11,r10,112
	r11.s64 = ctx.r10.s64 * 112;
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// bl 0x8253b488
	sub_8253B488(ctx, base);
	// li r11,1
	r11.s64 = 1;
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

__attribute__((alias("__imp__sub_8253A9B4"))) PPC_WEAK_FUNC(sub_8253A9B4);
PPC_FUNC_IMPL(__imp__sub_8253A9B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A9B8"))) PPC_WEAK_FUNC(sub_8253A9B8);
PPC_FUNC_IMPL(__imp__sub_8253A9B8) {
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
	// lbz r11,40(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253aa9c
	if (cr6.eq) goto loc_8253AA9C;
	// lwz r4,36(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// bl 0x82539540
	sub_82539540(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r5,r11,1100
	ctx.r5.s64 = r11.s64 + 1100;
	// bl 0x8253a788
	sub_8253A788(ctx, base);
	// lwz r10,1752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1752);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8253aaec
	if (!cr6.eq) goto loc_8253AAEC;
	// li r11,2
	r11.s64 = 2;
	// lwz r31,388(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// addi r29,r30,384
	r29.s64 = r30.s64 + 384;
	// stw r11,1752(r30)
	PPC_STORE_U32(r30.u32 + 1752, r11.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,396(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// mulli r11,r9,112
	r11.s64 = ctx.r9.s64 * 112;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x8253aaec
	if (cr6.eq) goto loc_8253AAEC;
	// lis r28,-31970
	r28.s64 = -2095185920;
loc_8253AA38:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253aa78
	if (!cr6.eq) goto loc_8253AA78;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253aa64
	if (cr6.eq) goto loc_8253AA64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253aa68
	if (!cr6.eq) goto loc_8253AA68;
loc_8253AA64:
	// li r11,0
	r11.s64 = 0;
loc_8253AA68:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x825729f8
	sub_825729F8(ctx, base);
loc_8253AA78:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,112
	r31.s64 = r31.s64 + 112;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,112
	r11.s64 = r11.s64 * 112;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8253aa38
	if (!cr6.eq) goto loc_8253AA38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8253AA9C:
	// lwz r11,1752(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1752);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8253aaec
	if (!cr6.eq) goto loc_8253AAEC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r31,r11,1100
	r31.s64 = r11.s64 + 1100;
	// beq cr6,0x8253aad8
	if (cr6.eq) goto loc_8253AAD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253aadc
	if (!cr6.eq) goto loc_8253AADC;
loc_8253AAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253AADC:
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x825729f8
	sub_825729F8(ctx, base);
loc_8253AAEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253AAF0"))) PPC_WEAK_FUNC(sub_8253AAF0);
PPC_FUNC_IMPL(__imp__sub_8253AAF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253AAF4"))) PPC_WEAK_FUNC(sub_8253AAF4);
PPC_FUNC_IMPL(__imp__sub_8253AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253AAF8"))) PPC_WEAK_FUNC(sub_8253AAF8);
PPC_FUNC_IMPL(__imp__sub_8253AAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,28
	r26.s64 = r31.s64 + 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r23,r31,56
	r23.s64 = r31.s64 + 56;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r22,r31,84
	r22.s64 = r31.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r21,r31,112
	r21.s64 = r31.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r20,r31,140
	r20.s64 = r31.s64 + 140;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r19,r31,168
	r19.s64 = r31.s64 + 168;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r18,r31,196
	r18.s64 = r31.s64 + 196;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r17,r31,224
	r17.s64 = r31.s64 + 224;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r16,r31,252
	r16.s64 = r31.s64 + 252;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// addi r11,r31,384
	r11.s64 = r31.s64 + 384;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r24,0
	r24.s64 = 0;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
	// addi r8,r10,30592
	ctx.r8.s64 = ctx.r10.s64 + 30592;
	// stw r24,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r24.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,384(r31)
	PPC_STORE_U32(r31.u32 + 384, ctx.r8.u32);
	// stw r7,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r7.u32);
	// addi r25,r31,1756
	r25.s64 = r31.s64 + 1756;
	// stw r6,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r6.u32);
	// stw r24,1752(r31)
	PPC_STORE_U32(r31.u32 + 1752, r24.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826cc140
	sub_826CC140(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lis r11,-32172
	r11.s64 = -2108424192;
	// addi r27,r11,-30984
	r27.s64 = r11.s64 + -30984;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253abec
	if (cr6.eq) goto loc_8253ABEC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253abf0
	if (!cr6.eq) goto loc_8253ABF0;
loc_8253ABEC:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8253ABF0:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r15,12(r10)
	r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,-12936
	ctx.r3.s64 = ctx.r10.s64 + -12936;
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
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,17952(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17952);
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
	// stw r28,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r28.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// li r27,17
	r27.s64 = 17;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// addi r28,r10,30648
	r28.s64 = ctx.r10.s64 + 30648;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// li r8,54
	ctx.r8.s64 = 54;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r3,16
	ctx.r3.s64 = 16;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r24,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r24.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253ac8c
	if (cr6.eq) goto loc_8253AC8C;
	// bl 0x8253bef0
	sub_8253BEF0(ctx, base);
	// b 0x8253ac90
	goto loc_8253AC90;
loc_8253AC8C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8253AC90:
	// stw r3,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r3.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,56
	ctx.r8.s64 = 56;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// rldicr r6,r24,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r24.u64, 32) & 0xFFFFFFFF00000000;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253acd0
	if (cr6.eq) goto loc_8253ACD0;
	// bl 0x8253ba20
	sub_8253BA20(ctx, base);
	// b 0x8253acd4
	goto loc_8253ACD4;
loc_8253ACD0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8253ACD4:
	// lis r11,-32172
	r11.s64 = -2108424192;
	// stw r3,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-22248
	r28.s64 = r11.s64 + -22248;
	// beq cr6,0x8253acfc
	if (cr6.eq) goto loc_8253ACFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253ad00
	if (!cr6.eq) goto loc_8253AD00;
loc_8253ACFC:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253AD00:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,14948
	ctx.r3.s64 = ctx.r10.s64 + 14948;
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
	// lwz r11,20496(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20496);
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
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// stw r24,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r24.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826cbfd8
	sub_826CBFD8(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-28296
	r28.s64 = r11.s64 + -28296;
	// beq cr6,0x8253ad78
	if (cr6.eq) goto loc_8253AD78;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253ad7c
	if (!cr6.eq) goto loc_8253AD7C;
loc_8253AD78:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253AD7C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,2144
	ctx.r3.s64 = ctx.r10.s64 + 2144;
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
	// lwz r11,19372(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19372);
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
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-30888
	r28.s64 = r11.s64 + -30888;
	// beq cr6,0x8253ade8
	if (cr6.eq) goto loc_8253ADE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253adec
	if (!cr6.eq) goto loc_8253ADEC;
loc_8253ADE8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253ADEC:
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-24300
	ctx.r3.s64 = ctx.r10.s64 + -24300;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,-26372(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26372);
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
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-30872
	r28.s64 = r11.s64 + -30872;
	// beq cr6,0x8253ae58
	if (cr6.eq) goto loc_8253AE58;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253ae5c
	if (!cr6.eq) goto loc_8253AE5C;
loc_8253AE58:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253AE5C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19004(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19004);
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
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-22088
	r28.s64 = r11.s64 + -22088;
	// beq cr6,0x8253aec8
	if (cr6.eq) goto loc_8253AEC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253aecc
	if (!cr6.eq) goto loc_8253AECC;
loc_8253AEC8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253AECC:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,1996
	ctx.r3.s64 = ctx.r10.s64 + 1996;
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
	// lwz r11,19384(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19384);
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
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-28240
	r28.s64 = r11.s64 + -28240;
	// beq cr6,0x8253af38
	if (cr6.eq) goto loc_8253AF38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253af3c
	if (!cr6.eq) goto loc_8253AF3C;
loc_8253AF38:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253AF3C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19380(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19380);
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
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-30864
	r28.s64 = r11.s64 + -30864;
	// beq cr6,0x8253afa8
	if (cr6.eq) goto loc_8253AFA8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253afac
	if (!cr6.eq) goto loc_8253AFAC;
loc_8253AFA8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253AFAC:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-18092
	ctx.r3.s64 = ctx.r10.s64 + -18092;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,-22904(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22904);
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
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-26808
	r28.s64 = r11.s64 + -26808;
	// beq cr6,0x8253b018
	if (cr6.eq) goto loc_8253B018;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253b01c
	if (!cr6.eq) goto loc_8253B01C;
loc_8253B018:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253B01C:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-18140
	ctx.r3.s64 = ctx.r10.s64 + -18140;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,-22908(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22908);
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
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-29232
	r28.s64 = r11.s64 + -29232;
	// beq cr6,0x8253b088
	if (cr6.eq) goto loc_8253B088;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253b08c
	if (!cr6.eq) goto loc_8253B08C;
loc_8253B088:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8253B08C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,2096
	ctx.r3.s64 = ctx.r10.s64 + 2096;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19376(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19376);
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
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8253B0DC"))) PPC_WEAK_FUNC(sub_8253B0DC);
PPC_FUNC_IMPL(__imp__sub_8253B0DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_8253B0E0"))) PPC_WEAK_FUNC(sub_8253B0E0);
PPC_FUNC_IMPL(__imp__sub_8253B0E0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// ble cr6,0x8253b474
	if (!cr6.gt) goto loc_8253B474;
	// lwz r11,1752(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8253b474
	if (!cr6.eq) goto loc_8253B474;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253b13c
	if (cr6.eq) goto loc_8253B13C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253b140
	if (!cr6.eq) goto loc_8253B140;
loc_8253B13C:
	// li r11,0
	r11.s64 = 0;
loc_8253B140:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253b16c
	if (cr6.eq) goto loc_8253B16C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253b170
	if (!cr6.eq) goto loc_8253B170;
loc_8253B16C:
	// li r11,0
	r11.s64 = 0;
loc_8253B170:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec98
	sub_8255EC98(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253b220
	if (cr6.eq) goto loc_8253B220;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r27,1
	r27.s64 = 1;
	// li r25,1
	r25.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8253b220
	if (!cr6.gt) goto loc_8253B220;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_8253B1B4:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8253b1d8
	if (cr6.eq) goto loc_8253B1D8;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8253b1b4
	if (cr6.lt) goto loc_8253B1B4;
	// b 0x8253b220
	goto loc_8253B220;
loc_8253B1D8:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
loc_8253B220:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253b39c
	if (cr6.eq) goto loc_8253B39C;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// lis r28,-31933
	r28.s64 = -2092761088;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253b288
	if (cr6.eq) goto loc_8253B288;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8253b26c
	if (cr6.eq) goto loc_8253B26C;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8251dd88
	sub_8251DD88(ctx, base);
loc_8253B26C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,-22916(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -22916);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8253b2b0
	if (!cr6.eq) goto loc_8253B2B0;
	// li r30,0
	r30.s64 = 0;
	// b 0x8253b2b0
	goto loc_8253B2B0;
loc_8253B288:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8253b2b0
	if (cr6.eq) goto loc_8253B2B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8251dd88
	sub_8251DD88(ctx, base);
loc_8253B2B0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// ble cr6,0x8253b39c
	if (!cr6.gt) goto loc_8253B39C;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// li r6,12
	ctx.r6.s64 = 12;
loc_8253B2C4:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// bge cr6,0x8253b384
	if (!cr6.lt) goto loc_8253B384;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r30,24
	ctx.r7.u64 = r30.u32 & 0xFF;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8253B2E4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x8253b300
	if (cr6.eq) goto loc_8253B300;
	// lwz r4,-22912(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -22912);
	// b 0x8253b304
	goto loc_8253B304;
loc_8253B300:
	// lwz r4,-22916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -22916);
loc_8253B304:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8253b324
	if (cr6.eq) goto loc_8253B324;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x8253b2e4
	if (cr6.lt) goto loc_8253B2E4;
	// b 0x8253b384
	goto loc_8253B384;
loc_8253B324:
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r3,r6
	r11.s32 = ctx.r3.s32 / ctx.r6.s32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8253b378
	if (!cr6.lt) goto loc_8253B378;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
loc_8253B378:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_8253B384:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// rlwinm r30,r9,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bgt cr6,0x8253b2c4
	if (cr6.gt) goto loc_8253B2C4;
loc_8253B39C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8253b3c4
	if (!cr6.gt) goto loc_8253B3C4;
	// li r30,0
	r30.s64 = 0;
loc_8253B3A8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x8253a358
	sub_8253A358(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x8253b3a8
	if (!cr0.eq) goto loc_8253B3A8;
loc_8253B3C4:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253b474
	if (cr6.eq) goto loc_8253B474;
	// lwz r31,388(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 388);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// lfs f0,88(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 88);
	f0.f64 = double(temp.f32);
	// ld r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f13,92(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lfs f12,96(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lfs f11,100(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r11,r26,84
	r11.s64 = r26.s64 + 84;
	// bl 0x825388e8
	sub_825388E8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8253b488
	sub_8253B488(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_8253B474:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8253B480"))) PPC_WEAK_FUNC(sub_8253B480);
PPC_FUNC_IMPL(__imp__sub_8253B480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8253B484"))) PPC_WEAK_FUNC(sub_8253B484);
PPC_FUNC_IMPL(__imp__sub_8253B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253B488"))) PPC_WEAK_FUNC(sub_8253B488);
PPC_FUNC_IMPL(__imp__sub_8253B488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r11,r4,24
	r11.s64 = ctx.r4.s64 + 24;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r4,44
	ctx.r9.s64 = ctx.r4.s64 + 44;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r3,44
	ctx.r8.s64 = ctx.r3.s64 + 44;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_8253B4FC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8253b4fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8253B4FC;
	// ld r11,96(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r11,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, r11.u64);
}

__attribute__((alias("__imp__sub_8253B514"))) PPC_WEAK_FUNC(sub_8253B514);
PPC_FUNC_IMPL(__imp__sub_8253B514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B518"))) PPC_WEAK_FUNC(sub_8253B518);
PPC_FUNC_IMPL(__imp__sub_8253B518) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r11,-1
	r11.s64 = -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20496);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r6,-22972
	ctx.r5.s64 = ctx.r6.s64 + -22972;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lwz r10,-22956(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lfs f0,-22972(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -22972);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// std r9,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// stb r9,44(r31)
	PPC_STORE_U8(r31.u32 + 44, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253B5B4"))) PPC_WEAK_FUNC(sub_8253B5B4);
PPC_FUNC_IMPL(__imp__sub_8253B5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B5B8"))) PPC_WEAK_FUNC(sub_8253B5B8);
PPC_FUNC_IMPL(__imp__sub_8253B5B8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r4,r4,44
	ctx.r4.s64 = ctx.r4.s64 + 44;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,50
	ctx.r5.s64 = 50;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f11,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// ld r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,96(r31)
	PPC_STORE_U64(r31.u32 + 96, ctx.r9.u64);
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

__attribute__((alias("__imp__sub_8253B664"))) PPC_WEAK_FUNC(sub_8253B664);
PPC_FUNC_IMPL(__imp__sub_8253B664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B668"))) PPC_WEAK_FUNC(sub_8253B668);
PPC_FUNC_IMPL(__imp__sub_8253B668) {
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
	// li r9,112
	ctx.r9.s64 = 112;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	// bge cr6,0x8253b6e0
	if (!cr6.lt) goto loc_8253B6E0;
	// mulli r30,r31,112
	r30.s64 = r31.s64 * 112;
loc_8253B6A0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r10,r11,112
	ctx.r10.s64 = r11.s64 + 112;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 112);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// bl 0x8253b488
	sub_8253B488(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r30,r30,112
	r30.s64 = r30.s64 + 112;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x8253b6a0
	if (cr6.lt) goto loc_8253B6A0;
loc_8253B6E0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253B6F4"))) PPC_WEAK_FUNC(sub_8253B6F4);
PPC_FUNC_IMPL(__imp__sub_8253B6F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253B6F8"))) PPC_WEAK_FUNC(sub_8253B6F8);
PPC_FUNC_IMPL(__imp__sub_8253B6F8) {
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
	// lwz r11,17952(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17952);
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
	// bne cr6,0x8253b758
	if (!cr6.eq) goto loc_8253B758;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253b758
	if (!cr6.eq) goto loc_8253B758;
	// lwz r11,17952(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17952);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8253B758:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253B75C"))) PPC_WEAK_FUNC(sub_8253B75C);
PPC_FUNC_IMPL(__imp__sub_8253B75C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253B760"))) PPC_WEAK_FUNC(sub_8253B760);
PPC_FUNC_IMPL(__imp__sub_8253B760) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8253b7a0
	if (!cr6.gt) goto loc_8253B7A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8253B7A0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r10,112
	r11.s64 = ctx.r10.s64 * 112;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// beq 0x8253b7d8
	if (cr0.eq) goto loc_8253B7D8;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// bl 0x8253b5b8
	sub_8253B5B8(ctx, base);
loc_8253B7D8:
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

__attribute__((alias("__imp__sub_8253B7EC"))) PPC_WEAK_FUNC(sub_8253B7EC);
PPC_FUNC_IMPL(__imp__sub_8253B7EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B7F0"))) PPC_WEAK_FUNC(sub_8253B7F0);
PPC_FUNC_IMPL(__imp__sub_8253B7F0) {
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
	// addi r9,r11,30504
	ctx.r9.s64 = r11.s64 + 30504;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8253b834
	if (!cr6.gt) goto loc_8253B834;
loc_8253B81C:
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
	// bgt cr6,0x8253b81c
	if (cr6.gt) goto loc_8253B81C;
loc_8253B834:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253b84c
	if (cr6.eq) goto loc_8253B84C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253B84C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253B85C"))) PPC_WEAK_FUNC(sub_8253B85C);
PPC_FUNC_IMPL(__imp__sub_8253B85C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B860"))) PPC_WEAK_FUNC(sub_8253B860);
PPC_FUNC_IMPL(__imp__sub_8253B860) {
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
	// addi r3,r10,-12936
	ctx.r3.s64 = ctx.r10.s64 + -12936;
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
	// lwz r11,17952(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17952);
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

__attribute__((alias("__imp__sub_8253B8D0"))) PPC_WEAK_FUNC(sub_8253B8D0);
PPC_FUNC_IMPL(__imp__sub_8253B8D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253B8D4"))) PPC_WEAK_FUNC(sub_8253B8D4);
PPC_FUNC_IMPL(__imp__sub_8253B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253B8D8"))) PPC_WEAK_FUNC(sub_8253B8D8);
PPC_FUNC_IMPL(__imp__sub_8253B8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,30592
	ctx.r9.s64 = r11.s64 + 30592;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8253b908
	if (!cr6.gt) goto loc_8253B908;
loc_8253B8F0:
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
	// bgt cr6,0x8253b8f0
	if (cr6.gt) goto loc_8253B8F0;
loc_8253B908:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,30504
	ctx.r9.s64 = r11.s64 + 30504;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8253B920:
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
	// bgt cr6,0x8253b920
	if (cr6.gt) goto loc_8253B920;
}

__attribute__((alias("__imp__sub_8253B938"))) PPC_WEAK_FUNC(sub_8253B938);
PPC_FUNC_IMPL(__imp__sub_8253B938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B93C"))) PPC_WEAK_FUNC(sub_8253B93C);
PPC_FUNC_IMPL(__imp__sub_8253B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253B940"))) PPC_WEAK_FUNC(sub_8253B940);
PPC_FUNC_IMPL(__imp__sub_8253B940) {
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
	// bl 0x8253b8d8
	sub_8253B8D8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253b978
	if (cr6.eq) goto loc_8253B978;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253B978:
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

__attribute__((alias("__imp__sub_8253B98C"))) PPC_WEAK_FUNC(sub_8253B98C);
PPC_FUNC_IMPL(__imp__sub_8253B98C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B990"))) PPC_WEAK_FUNC(sub_8253B990);
PPC_FUNC_IMPL(__imp__sub_8253B990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, r11.u8);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B9A8"))) PPC_WEAK_FUNC(sub_8253B9A8);
PPC_FUNC_IMPL(__imp__sub_8253B9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B9AC"))) PPC_WEAK_FUNC(sub_8253B9AC);
PPC_FUNC_IMPL(__imp__sub_8253B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253B9B0"))) PPC_WEAK_FUNC(sub_8253B9B0);
PPC_FUNC_IMPL(__imp__sub_8253B9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253B9B8"))) PPC_WEAK_FUNC(sub_8253B9B8);
PPC_FUNC_IMPL(__imp__sub_8253B9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253d1e8
	sub_8253D1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B9BC"))) PPC_WEAK_FUNC(sub_8253B9BC);
PPC_FUNC_IMPL(__imp__sub_8253B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253B9C0"))) PPC_WEAK_FUNC(sub_8253B9C0);
PPC_FUNC_IMPL(__imp__sub_8253B9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x8253e380
	sub_8253E380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B9D0"))) PPC_WEAK_FUNC(sub_8253B9D0);
PPC_FUNC_IMPL(__imp__sub_8253B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x8253e2f8
	sub_8253E2F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B9E0"))) PPC_WEAK_FUNC(sub_8253B9E0);
PPC_FUNC_IMPL(__imp__sub_8253B9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253B9E8"))) PPC_WEAK_FUNC(sub_8253B9E8);
PPC_FUNC_IMPL(__imp__sub_8253B9E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253d358
	sub_8253D358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B9EC"))) PPC_WEAK_FUNC(sub_8253B9EC);
PPC_FUNC_IMPL(__imp__sub_8253B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253B9F0"))) PPC_WEAK_FUNC(sub_8253B9F0);
PPC_FUNC_IMPL(__imp__sub_8253B9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x8253e510
	sub_8253E510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BA00"))) PPC_WEAK_FUNC(sub_8253BA00);
PPC_FUNC_IMPL(__imp__sub_8253BA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x8253e580
	sub_8253E580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BA10"))) PPC_WEAK_FUNC(sub_8253BA10);
PPC_FUNC_IMPL(__imp__sub_8253BA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BA18"))) PPC_WEAK_FUNC(sub_8253BA18);
PPC_FUNC_IMPL(__imp__sub_8253BA18) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253d2a0
	sub_8253D2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BA1C"))) PPC_WEAK_FUNC(sub_8253BA1C);
PPC_FUNC_IMPL(__imp__sub_8253BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BA20"))) PPC_WEAK_FUNC(sub_8253BA20);
PPC_FUNC_IMPL(__imp__sub_8253BA20) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r28,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, r28.u8);
	// addi r29,r3,-16
	r29.s64 = ctx.r3.s64 + -16;
	// subfic r26,r3,112
	xer.ca = ctx.r3.u32 <= 112;
	r26.s64 = 112 - ctx.r3.s64;
	// li r30,4
	r30.s64 = 4;
	// lis r25,-31970
	r25.s64 = -2095185920;
loc_8253BA4C:
	// lwz r3,-14756(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253ba68
	if (cr6.eq) goto loc_8253BA68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253ba6c
	if (!cr6.eq) goto loc_8253BA6C;
loc_8253BA68:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8253BA6C:
	// add r10,r26,r31
	ctx.r10.u64 = r26.u64 + r31.u64;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stbu r28,32(r29)
	ea = 32 + r29.u32;
	PPC_STORE_U8(ea, r28.u8);
	r29.u32 = ea;
	// bne 0x8253ba4c
	if (!cr0.eq) goto loc_8253BA4C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253BA94"))) PPC_WEAK_FUNC(sub_8253BA94);
PPC_FUNC_IMPL(__imp__sub_8253BA94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8253BA98"))) PPC_WEAK_FUNC(sub_8253BA98);
PPC_FUNC_IMPL(__imp__sub_8253BA98) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253bad0
	if (cr6.eq) goto loc_8253BAD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253bad4
	if (!cr6.eq) goto loc_8253BAD4;
loc_8253BAD0:
	// li r11,0
	r11.s64 = 0;
loc_8253BAD4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// bl 0x8253d358
	sub_8253D358(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// addi r5,r8,30720
	ctx.r5.s64 = ctx.r8.s64 + 30720;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bne cr6,0x8253bb48
	if (!cr6.eq) goto loc_8253BB48;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,30708
	ctx.r5.s64 = r11.s64 + 30708;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8253BB48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253BB60"))) PPC_WEAK_FUNC(sub_8253BB60);
PPC_FUNC_IMPL(__imp__sub_8253BB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253BB64"))) PPC_WEAK_FUNC(sub_8253BB64);
PPC_FUNC_IMPL(__imp__sub_8253BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BB68"))) PPC_WEAK_FUNC(sub_8253BB68);
PPC_FUNC_IMPL(__imp__sub_8253BB68) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253bba0
	if (cr6.eq) goto loc_8253BBA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253bba4
	if (!cr6.eq) goto loc_8253BBA4;
loc_8253BBA0:
	// li r11,0
	r11.s64 = 0;
loc_8253BBA4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// bl 0x8253d358
	sub_8253D358(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,30768
	ctx.r5.s64 = ctx.r8.s64 + 30768;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x8253bc18
	if (!cr6.eq) goto loc_8253BC18;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20024
	ctx.r5.s64 = r11.s64 + 20024;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8253BC18:
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253BC4C"))) PPC_WEAK_FUNC(sub_8253BC4C);
PPC_FUNC_IMPL(__imp__sub_8253BC4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253BC50"))) PPC_WEAK_FUNC(sub_8253BC50);
PPC_FUNC_IMPL(__imp__sub_8253BC50) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253bc80
	if (cr6.eq) goto loc_8253BC80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253bc84
	if (!cr6.eq) goto loc_8253BC84;
loc_8253BC80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253BC84:
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
	// addi r5,r10,30812
	ctx.r5.s64 = ctx.r10.s64 + 30812;
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
	// bne cr6,0x8253bccc
	if (!cr6.eq) goto loc_8253BCCC;
loc_8253BCB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8253bcb8
	if (cr6.eq) goto loc_8253BCB8;
loc_8253BCCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_8253BCF0"))) PPC_WEAK_FUNC(sub_8253BCF0);
PPC_FUNC_IMPL(__imp__sub_8253BCF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BCF4"))) PPC_WEAK_FUNC(sub_8253BCF4);
PPC_FUNC_IMPL(__imp__sub_8253BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BCF8"))) PPC_WEAK_FUNC(sub_8253BCF8);
PPC_FUNC_IMPL(__imp__sub_8253BCF8) {
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
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// bl 0x8253d358
	sub_8253D358(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253bc50
	sub_8253BC50(ctx, base);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - r30.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8253BD48"))) PPC_WEAK_FUNC(sub_8253BD48);
PPC_FUNC_IMPL(__imp__sub_8253BD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BD4C"))) PPC_WEAK_FUNC(sub_8253BD4C);
PPC_FUNC_IMPL(__imp__sub_8253BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BD50"))) PPC_WEAK_FUNC(sub_8253BD50);
PPC_FUNC_IMPL(__imp__sub_8253BD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BD54"))) PPC_WEAK_FUNC(sub_8253BD54);
PPC_FUNC_IMPL(__imp__sub_8253BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BD58"))) PPC_WEAK_FUNC(sub_8253BD58);
PPC_FUNC_IMPL(__imp__sub_8253BD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BD60"))) PPC_WEAK_FUNC(sub_8253BD60);
PPC_FUNC_IMPL(__imp__sub_8253BD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253ff30
	sub_8253FF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BD64"))) PPC_WEAK_FUNC(sub_8253BD64);
PPC_FUNC_IMPL(__imp__sub_8253BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BD68"))) PPC_WEAK_FUNC(sub_8253BD68);
PPC_FUNC_IMPL(__imp__sub_8253BD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BD70"))) PPC_WEAK_FUNC(sub_8253BD70);
PPC_FUNC_IMPL(__imp__sub_8253BD70) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253ffd0
	sub_8253FFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BD74"))) PPC_WEAK_FUNC(sub_8253BD74);
PPC_FUNC_IMPL(__imp__sub_8253BD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BD78"))) PPC_WEAK_FUNC(sub_8253BD78);
PPC_FUNC_IMPL(__imp__sub_8253BD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BD80"))) PPC_WEAK_FUNC(sub_8253BD80);
PPC_FUNC_IMPL(__imp__sub_8253BD80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540070
	sub_82540070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BD84"))) PPC_WEAK_FUNC(sub_8253BD84);
PPC_FUNC_IMPL(__imp__sub_8253BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BD88"))) PPC_WEAK_FUNC(sub_8253BD88);
PPC_FUNC_IMPL(__imp__sub_8253BD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BD90"))) PPC_WEAK_FUNC(sub_8253BD90);
PPC_FUNC_IMPL(__imp__sub_8253BD90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540110
	sub_82540110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BD94"))) PPC_WEAK_FUNC(sub_8253BD94);
PPC_FUNC_IMPL(__imp__sub_8253BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BD98"))) PPC_WEAK_FUNC(sub_8253BD98);
PPC_FUNC_IMPL(__imp__sub_8253BD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BDA0"))) PPC_WEAK_FUNC(sub_8253BDA0);
PPC_FUNC_IMPL(__imp__sub_8253BDA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825401b0
	sub_825401B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BDA4"))) PPC_WEAK_FUNC(sub_8253BDA4);
PPC_FUNC_IMPL(__imp__sub_8253BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BDA8"))) PPC_WEAK_FUNC(sub_8253BDA8);
PPC_FUNC_IMPL(__imp__sub_8253BDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BDB0"))) PPC_WEAK_FUNC(sub_8253BDB0);
PPC_FUNC_IMPL(__imp__sub_8253BDB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540250
	sub_82540250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BDB4"))) PPC_WEAK_FUNC(sub_8253BDB4);
PPC_FUNC_IMPL(__imp__sub_8253BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BDB8"))) PPC_WEAK_FUNC(sub_8253BDB8);
PPC_FUNC_IMPL(__imp__sub_8253BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BDC0"))) PPC_WEAK_FUNC(sub_8253BDC0);
PPC_FUNC_IMPL(__imp__sub_8253BDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825402f0
	sub_825402F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BDC4"))) PPC_WEAK_FUNC(sub_8253BDC4);
PPC_FUNC_IMPL(__imp__sub_8253BDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BDC8"))) PPC_WEAK_FUNC(sub_8253BDC8);
PPC_FUNC_IMPL(__imp__sub_8253BDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BDD4"))) PPC_WEAK_FUNC(sub_8253BDD4);
PPC_FUNC_IMPL(__imp__sub_8253BDD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540390
	sub_82540390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BDD8"))) PPC_WEAK_FUNC(sub_8253BDD8);
PPC_FUNC_IMPL(__imp__sub_8253BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r31,4
	r31.s64 = 4;
loc_8253BDF0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x825403f8
	sub_825403F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8253bdf0
	if (!cr0.eq) goto loc_8253BDF0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8253BE08"))) PPC_WEAK_FUNC(sub_8253BE08);
PPC_FUNC_IMPL(__imp__sub_8253BE08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253BE0C"))) PPC_WEAK_FUNC(sub_8253BE0C);
PPC_FUNC_IMPL(__imp__sub_8253BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BE10"))) PPC_WEAK_FUNC(sub_8253BE10);
PPC_FUNC_IMPL(__imp__sub_8253BE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r31,4
	r31.s64 = 4;
loc_8253BE28:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x82540460
	sub_82540460(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8253be28
	if (!cr0.eq) goto loc_8253BE28;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8253BE40"))) PPC_WEAK_FUNC(sub_8253BE40);
PPC_FUNC_IMPL(__imp__sub_8253BE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253BE44"))) PPC_WEAK_FUNC(sub_8253BE44);
PPC_FUNC_IMPL(__imp__sub_8253BE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BE48"))) PPC_WEAK_FUNC(sub_8253BE48);
PPC_FUNC_IMPL(__imp__sub_8253BE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r31,4
	r31.s64 = 4;
loc_8253BE60:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x825404c8
	sub_825404C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8253be60
	if (!cr0.eq) goto loc_8253BE60;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8253BE78"))) PPC_WEAK_FUNC(sub_8253BE78);
PPC_FUNC_IMPL(__imp__sub_8253BE78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253BE7C"))) PPC_WEAK_FUNC(sub_8253BE7C);
PPC_FUNC_IMPL(__imp__sub_8253BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BE80"))) PPC_WEAK_FUNC(sub_8253BE80);
PPC_FUNC_IMPL(__imp__sub_8253BE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8253BE8C"))) PPC_WEAK_FUNC(sub_8253BE8C);
PPC_FUNC_IMPL(__imp__sub_8253BE8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540600
	sub_82540600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BE90"))) PPC_WEAK_FUNC(sub_8253BE90);
PPC_FUNC_IMPL(__imp__sub_8253BE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BEBC"))) PPC_WEAK_FUNC(sub_8253BEBC);
PPC_FUNC_IMPL(__imp__sub_8253BEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BEC0"))) PPC_WEAK_FUNC(sub_8253BEC0);
PPC_FUNC_IMPL(__imp__sub_8253BEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BEEC"))) PPC_WEAK_FUNC(sub_8253BEEC);
PPC_FUNC_IMPL(__imp__sub_8253BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253BEF0"))) PPC_WEAK_FUNC(sub_8253BEF0);
PPC_FUNC_IMPL(__imp__sub_8253BEF0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r29,r3,112
	xer.ca = ctx.r3.u32 <= 112;
	r29.s64 = 112 - ctx.r3.s64;
	// li r30,4
	r30.s64 = 4;
	// lis r27,-31970
	r27.s64 = -2095185920;
loc_8253BF10:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253bf2c
	if (cr6.eq) goto loc_8253BF2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253bf30
	if (!cr6.eq) goto loc_8253BF30;
loc_8253BF2C:
	// li r11,0
	r11.s64 = 0;
loc_8253BF30:
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8253bf10
	if (!cr0.eq) goto loc_8253BF10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253BF54"))) PPC_WEAK_FUNC(sub_8253BF54);
PPC_FUNC_IMPL(__imp__sub_8253BF54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253BF58"))) PPC_WEAK_FUNC(sub_8253BF58);
PPC_FUNC_IMPL(__imp__sub_8253BF58) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r31,4
	r31.s64 = 4;
loc_8253BF78:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x82540530
	sub_82540530(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8253bf78
	if (!cr0.eq) goto loc_8253BF78;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82540250
	sub_82540250(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c020
	if (cr6.eq) goto loc_8253C020;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f0,20940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20940);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r6,15092
	ctx.r5.s64 = ctx.r6.s64 + 15092;
	// lfs f13,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f7,f9,f0,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fmadds f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8253C020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253C024"))) PPC_WEAK_FUNC(sub_8253C024);
PPC_FUNC_IMPL(__imp__sub_8253C024) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253C028"))) PPC_WEAK_FUNC(sub_8253C028);
PPC_FUNC_IMPL(__imp__sub_8253C028) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r31,4
	r31.s64 = 4;
loc_8253C048:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x82540598
	sub_82540598(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8253c048
	if (!cr0.eq) goto loc_8253C048;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825401b0
	sub_825401B0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c0f0
	if (cr6.eq) goto loc_8253C0F0;
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f0,20940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20940);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r6,15092
	ctx.r5.s64 = ctx.r6.s64 + 15092;
	// lfs f13,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f7,f9,f0,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fmadds f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8253C0F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253C0F4"))) PPC_WEAK_FUNC(sub_8253C0F4);
PPC_FUNC_IMPL(__imp__sub_8253C0F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253C0F8"))) PPC_WEAK_FUNC(sub_8253C0F8);
PPC_FUNC_IMPL(__imp__sub_8253C0F8) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r23,r4,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwzx r3,r23,r3
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + ctx.r3.u32);
	// bl 0x8253ffd0
	sub_8253FFD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// bl 0x82540070
	sub_82540070(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// bl 0x82540110
	sub_82540110(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,20028(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20028);
	// lfs f31,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	f31.f64 = double(temp.f32);
	// li r31,-1
	r31.s64 = -1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r9,30868
	ctx.r3.s64 = ctx.r9.s64 + 30868;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// fmuls f29,f12,f31
	f29.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lis r26,-31970
	r26.s64 = -2095185920;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253c1a4
	if (cr6.eq) goto loc_8253C1A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253c1a8
	if (!cr6.eq) goto loc_8253C1A8;
loc_8253C1A4:
	// li r11,0
	r11.s64 = 0;
loc_8253C1A8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c1f4
	if (cr6.eq) goto loc_8253C1F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253c1f4
	if (!cr6.eq) goto loc_8253C1F4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8253C1F4:
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lwz r11,20028(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20028);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r3,r9,30856
	ctx.r3.s64 = ctx.r9.s64 + 30856;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lwz r11,-14756(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8253c24c
	if (cr6.eq) goto loc_8253C24C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253c250
	if (!cr6.eq) goto loc_8253C250;
loc_8253C24C:
	// li r11,0
	r11.s64 = 0;
loc_8253C250:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c29c
	if (cr6.eq) goto loc_8253C29C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253c29c
	if (!cr6.eq) goto loc_8253C29C;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8253C29C:
	// extsw r10,r25
	ctx.r10.s64 = r25.s32;
	// lwz r11,20028(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20028);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r3,r9,30844
	ctx.r3.s64 = ctx.r9.s64 + 30844;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// fmuls f30,f12,f31
	f30.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lwz r11,-14756(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8253c2f4
	if (cr6.eq) goto loc_8253C2F4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253c2f8
	if (!cr6.eq) goto loc_8253C2F8;
loc_8253C2F4:
	// li r11,0
	r11.s64 = 0;
loc_8253C2F8:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c344
	if (cr6.eq) goto loc_8253C344;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253c344
	if (!cr6.eq) goto loc_8253C344;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8253C344:
	// lwz r11,20028(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20028);
	// stfs f29,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,30836
	ctx.r3.s64 = ctx.r10.s64 + 30836;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// lwz r11,-14756(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8253c384
	if (cr6.eq) goto loc_8253C384;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253c388
	if (!cr6.eq) goto loc_8253C388;
loc_8253C384:
	// li r11,0
	r11.s64 = 0;
loc_8253C388:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
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
	// beq cr6,0x8253c3d4
	if (cr6.eq) goto loc_8253C3D4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253c3d4
	if (!cr6.eq) goto loc_8253C3D4;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8253C3D4:
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253c3f0
	if (cr6.eq) goto loc_8253C3F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253c3f4
	if (!cr6.eq) goto loc_8253C3F4;
loc_8253C3F0:
	// li r11,0
	r11.s64 = 0;
loc_8253C3F4:
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82513570
	sub_82513570(ctx, base);
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// bl 0x825401b0
	sub_825401B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// bl 0x82540250
	sub_82540250(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c494
	if (cr6.eq) goto loc_8253C494;
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r7,15092
	ctx.r6.s64 = ctx.r7.s64 + 15092;
	// lfs f0,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	f0.f64 = double(temp.f32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// fmadds f7,f9,f31,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f31.f64 + f0.f64));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f8,f10,f31,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * f31.f64 + f0.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8253C494:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_8253C4A4"))) PPC_WEAK_FUNC(sub_8253C4A4);
PPC_FUNC_IMPL(__imp__sub_8253C4A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8253C4A8"))) PPC_WEAK_FUNC(sub_8253C4A8);
PPC_FUNC_IMPL(__imp__sub_8253C4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17912
	ctx.r3.s64 = r11.s64 + -17912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253C4B4"))) PPC_WEAK_FUNC(sub_8253C4B4);
PPC_FUNC_IMPL(__imp__sub_8253C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C4B8"))) PPC_WEAK_FUNC(sub_8253C4B8);
PPC_FUNC_IMPL(__imp__sub_8253C4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17912
	ctx.r3.s64 = r11.s64 + -17912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253C4C4"))) PPC_WEAK_FUNC(sub_8253C4C4);
PPC_FUNC_IMPL(__imp__sub_8253C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C4C8"))) PPC_WEAK_FUNC(sub_8253C4C8);
PPC_FUNC_IMPL(__imp__sub_8253C4C8) {
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
	// bl 0x826ca930
	sub_826CA930(ctx, base);
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

__attribute__((alias("__imp__sub_8253C51C"))) PPC_WEAK_FUNC(sub_8253C51C);
PPC_FUNC_IMPL(__imp__sub_8253C51C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253C520"))) PPC_WEAK_FUNC(sub_8253C520);
PPC_FUNC_IMPL(__imp__sub_8253C520) {
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
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x826cbac8
	sub_826CBAC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8253C558"))) PPC_WEAK_FUNC(sub_8253C558);
PPC_FUNC_IMPL(__imp__sub_8253C558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253C55C"))) PPC_WEAK_FUNC(sub_8253C55C);
PPC_FUNC_IMPL(__imp__sub_8253C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C560"))) PPC_WEAK_FUNC(sub_8253C560);
PPC_FUNC_IMPL(__imp__sub_8253C560) {
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
	// addi r28,r3,116
	r28.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// beq cr6,0x8253c5e4
	if (cr6.eq) goto loc_8253C5E4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cbd00
	sub_826CBD00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253C5E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8253C5F0"))) PPC_WEAK_FUNC(sub_8253C5F0);
PPC_FUNC_IMPL(__imp__sub_8253C5F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253C5F4"))) PPC_WEAK_FUNC(sub_8253C5F4);
PPC_FUNC_IMPL(__imp__sub_8253C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C5F8"))) PPC_WEAK_FUNC(sub_8253C5F8);
PPC_FUNC_IMPL(__imp__sub_8253C5F8) {
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

__attribute__((alias("__imp__sub_8253C638"))) PPC_WEAK_FUNC(sub_8253C638);
PPC_FUNC_IMPL(__imp__sub_8253C638) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253C63C"))) PPC_WEAK_FUNC(sub_8253C63C);
PPC_FUNC_IMPL(__imp__sub_8253C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C640"))) PPC_WEAK_FUNC(sub_8253C640);
PPC_FUNC_IMPL(__imp__sub_8253C640) {
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

__attribute__((alias("__imp__sub_8253C680"))) PPC_WEAK_FUNC(sub_8253C680);
PPC_FUNC_IMPL(__imp__sub_8253C680) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253C684"))) PPC_WEAK_FUNC(sub_8253C684);
PPC_FUNC_IMPL(__imp__sub_8253C684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C688"))) PPC_WEAK_FUNC(sub_8253C688);
PPC_FUNC_IMPL(__imp__sub_8253C688) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,30912
	ctx.r10.s64 = r11.s64 + 30912;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253C6E8"))) PPC_WEAK_FUNC(sub_8253C6E8);
PPC_FUNC_IMPL(__imp__sub_8253C6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253C6EC"))) PPC_WEAK_FUNC(sub_8253C6EC);
PPC_FUNC_IMPL(__imp__sub_8253C6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C6F0"))) PPC_WEAK_FUNC(sub_8253C6F0);
PPC_FUNC_IMPL(__imp__sub_8253C6F0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,116
	r29.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r11,30932
	r31.s64 = r11.s64 + 30932;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r27,r10,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8253c80c
	if (!cr6.eq) goto loc_8253C80C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253c80c
	if (cr6.eq) goto loc_8253C80C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x8253cc60
	sub_8253CC60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_8253C80C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253C81C"))) PPC_WEAK_FUNC(sub_8253C81C);
PPC_FUNC_IMPL(__imp__sub_8253C81C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253C820"))) PPC_WEAK_FUNC(sub_8253C820);
PPC_FUNC_IMPL(__imp__sub_8253C820) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,30932
	r30.s64 = r11.s64 + 30932;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253c950
	if (cr6.eq) goto loc_8253C950;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca9a8
	sub_826CA9A8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8253c950
	if (!cr6.gt) goto loc_8253C950;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r27,r11,20604
	r27.s64 = r11.s64 + 20604;
loc_8253C8B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253c920
	if (cr6.eq) goto loc_8253C920;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8253c924
	if (!cr6.eq) goto loc_8253C924;
loc_8253C920:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8253C924:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r25,0(r11)
	r25.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8253c944
	if (cr6.eq) goto loc_8253C944;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8253C944:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8253c8b8
	if (cr6.lt) goto loc_8253C8B8;
loc_8253C950:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8253C958"))) PPC_WEAK_FUNC(sub_8253C958);
PPC_FUNC_IMPL(__imp__sub_8253C958) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8253C95C"))) PPC_WEAK_FUNC(sub_8253C95C);
PPC_FUNC_IMPL(__imp__sub_8253C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253C960"))) PPC_WEAK_FUNC(sub_8253C960);
PPC_FUNC_IMPL(__imp__sub_8253C960) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8272e9f8
	sub_8272E9F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,30912
	ctx.r10.s64 = r11.s64 + 30912;
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r3,r28,116
	ctx.r3.s64 = r28.s64 + 116;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253c9ac
	if (cr6.eq) goto loc_8253C9AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253c9b0
	if (!cr6.eq) goto loc_8253C9B0;
loc_8253C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253C9B0:
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
	// addi r5,r10,30952
	ctx.r5.s64 = ctx.r10.s64 + 30952;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8253ca88
	if (!cr6.eq) goto loc_8253CA88;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r28,56
	r29.s64 = r28.s64 + 56;
	// addi r31,r11,30932
	r31.s64 = r11.s64 + 30932;
	// addi r30,r10,13852
	r30.s64 = ctx.r10.s64 + 13852;
loc_8253CA00:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8253ca00
	if (cr6.eq) goto loc_8253CA00;
loc_8253CA88:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8253CAA0"))) PPC_WEAK_FUNC(sub_8253CAA0);
PPC_FUNC_IMPL(__imp__sub_8253CAA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253CAA4"))) PPC_WEAK_FUNC(sub_8253CAA4);
PPC_FUNC_IMPL(__imp__sub_8253CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253CAA8"))) PPC_WEAK_FUNC(sub_8253CAA8);
PPC_FUNC_IMPL(__imp__sub_8253CAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// stb r5,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r5.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,30932
	ctx.r3.s64 = r11.s64 + 30932;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,231
	ctx.r5.s64 = ctx.r1.s64 + 231;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8253CB2C"))) PPC_WEAK_FUNC(sub_8253CB2C);
PPC_FUNC_IMPL(__imp__sub_8253CB2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253CB30"))) PPC_WEAK_FUNC(sub_8253CB30);
PPC_FUNC_IMPL(__imp__sub_8253CB30) {
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
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8253cb64
	if (cr6.eq) goto loc_8253CB64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253CB64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253CB74"))) PPC_WEAK_FUNC(sub_8253CB74);
PPC_FUNC_IMPL(__imp__sub_8253CB74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253CB78"))) PPC_WEAK_FUNC(sub_8253CB78);
PPC_FUNC_IMPL(__imp__sub_8253CB78) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,30912
	ctx.r10.s64 = r11.s64 + 30912;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// addi r5,r7,30880
	ctx.r5.s64 = ctx.r7.s64 + 30880;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8253cbe8
	if (cr6.eq) goto loc_8253CBE8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253CBE8:
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

__attribute__((alias("__imp__sub_8253CBFC"))) PPC_WEAK_FUNC(sub_8253CBFC);
PPC_FUNC_IMPL(__imp__sub_8253CBFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253CC00"))) PPC_WEAK_FUNC(sub_8253CC00);
PPC_FUNC_IMPL(__imp__sub_8253CC00) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253cc48
	if (cr6.eq) goto loc_8253CC48;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253cc4c
	if (!cr6.eq) goto loc_8253CC4C;
loc_8253CC48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8253CC4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253CC5C"))) PPC_WEAK_FUNC(sub_8253CC5C);
PPC_FUNC_IMPL(__imp__sub_8253CC5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253CC60"))) PPC_WEAK_FUNC(sub_8253CC60);
PPC_FUNC_IMPL(__imp__sub_8253CC60) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253cca0
	if (cr6.eq) goto loc_8253CCA0;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253cca8
	if (!cr6.eq) goto loc_8253CCA8;
loc_8253CCA0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,20604
	ctx.r3.s64 = r11.s64 + 20604;
loc_8253CCA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8253CCB4"))) PPC_WEAK_FUNC(sub_8253CCB4);
PPC_FUNC_IMPL(__imp__sub_8253CCB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253CCB8"))) PPC_WEAK_FUNC(sub_8253CCB8);
PPC_FUNC_IMPL(__imp__sub_8253CCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17640
	ctx.r3.s64 = r11.s64 + -17640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253CCC4"))) PPC_WEAK_FUNC(sub_8253CCC4);
PPC_FUNC_IMPL(__imp__sub_8253CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253CCC8"))) PPC_WEAK_FUNC(sub_8253CCC8);
PPC_FUNC_IMPL(__imp__sub_8253CCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,-17640
	ctx.r3.s64 = r11.s64 + -17640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253CCD4"))) PPC_WEAK_FUNC(sub_8253CCD4);
PPC_FUNC_IMPL(__imp__sub_8253CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253CCD8"))) PPC_WEAK_FUNC(sub_8253CCD8);
PPC_FUNC_IMPL(__imp__sub_8253CCD8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,116
	r28.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r11,30980
	r30.s64 = r11.s64 + 30980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253cdcc
	if (cr6.eq) goto loc_8253CDCC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253cdcc
	if (cr6.eq) goto loc_8253CDCC;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8253CDCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253CDDC"))) PPC_WEAK_FUNC(sub_8253CDDC);
PPC_FUNC_IMPL(__imp__sub_8253CDDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253CDE0"))) PPC_WEAK_FUNC(sub_8253CDE0);
PPC_FUNC_IMPL(__imp__sub_8253CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,30992
	ctx.r3.s64 = r11.s64 + 30992;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8253CE5C"))) PPC_WEAK_FUNC(sub_8253CE5C);
PPC_FUNC_IMPL(__imp__sub_8253CE5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253CE60"))) PPC_WEAK_FUNC(sub_8253CE60);
PPC_FUNC_IMPL(__imp__sub_8253CE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,31000
	ctx.r3.s64 = r11.s64 + 31000;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8253CEDC"))) PPC_WEAK_FUNC(sub_8253CEDC);
PPC_FUNC_IMPL(__imp__sub_8253CEDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253CEE0"))) PPC_WEAK_FUNC(sub_8253CEE0);
PPC_FUNC_IMPL(__imp__sub_8253CEE0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,116
	r28.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r11,31012
	r30.s64 = r11.s64 + 31012;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253cfd4
	if (cr6.eq) goto loc_8253CFD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253cfd4
	if (cr6.eq) goto loc_8253CFD4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8253CFD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8253CFE4"))) PPC_WEAK_FUNC(sub_8253CFE4);
PPC_FUNC_IMPL(__imp__sub_8253CFE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253CFE8"))) PPC_WEAK_FUNC(sub_8253CFE8);
PPC_FUNC_IMPL(__imp__sub_8253CFE8) {
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

__attribute__((alias("__imp__sub_8253D028"))) PPC_WEAK_FUNC(sub_8253D028);
PPC_FUNC_IMPL(__imp__sub_8253D028) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253D02C"))) PPC_WEAK_FUNC(sub_8253D02C);
PPC_FUNC_IMPL(__imp__sub_8253D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253D030"))) PPC_WEAK_FUNC(sub_8253D030);
PPC_FUNC_IMPL(__imp__sub_8253D030) {
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
	// addi r10,r11,31032
	ctx.r10.s64 = r11.s64 + 31032;
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

__attribute__((alias("__imp__sub_8253D078"))) PPC_WEAK_FUNC(sub_8253D078);
PPC_FUNC_IMPL(__imp__sub_8253D078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D07C"))) PPC_WEAK_FUNC(sub_8253D07C);
PPC_FUNC_IMPL(__imp__sub_8253D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253D080"))) PPC_WEAK_FUNC(sub_8253D080);
PPC_FUNC_IMPL(__imp__sub_8253D080) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// addi r10,r11,31032
	ctx.r10.s64 = r11.s64 + 31032;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253D0E0"))) PPC_WEAK_FUNC(sub_8253D0E0);
PPC_FUNC_IMPL(__imp__sub_8253D0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D0E4"))) PPC_WEAK_FUNC(sub_8253D0E4);
PPC_FUNC_IMPL(__imp__sub_8253D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253D0E8"))) PPC_WEAK_FUNC(sub_8253D0E8);
PPC_FUNC_IMPL(__imp__sub_8253D0E8) {
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
	// addi r28,r3,116
	r28.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,30980
	r29.s64 = r11.s64 + 30980;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// beq cr6,0x8253d1d0
	if (cr6.eq) goto loc_8253D1D0;
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
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826caf68
	sub_826CAF68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8253d1d0
	if (cr6.eq) goto loc_8253D1D0;
loc_8253D1A0:
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x8253d1a0
	if (!cr6.eq) goto loc_8253D1A0;
loc_8253D1D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8253D1E0"))) PPC_WEAK_FUNC(sub_8253D1E0);
PPC_FUNC_IMPL(__imp__sub_8253D1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253D1E4"))) PPC_WEAK_FUNC(sub_8253D1E4);
PPC_FUNC_IMPL(__imp__sub_8253D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8253D1E8"))) PPC_WEAK_FUNC(sub_8253D1E8);
PPC_FUNC_IMPL(__imp__sub_8253D1E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31052
	ctx.r3.s64 = r11.s64 + 31052;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d26c
	if (cr6.eq) goto loc_8253D26C;
	// bl 0x822c8828
	sub_822C8828(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8253d270
	if (!cr6.eq) goto loc_8253D270;
loc_8253D26C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8253D270:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8253D29C"))) PPC_WEAK_FUNC(sub_8253D29C);
PPC_FUNC_IMPL(__imp__sub_8253D29C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D2A0"))) PPC_WEAK_FUNC(sub_8253D2A0);
PPC_FUNC_IMPL(__imp__sub_8253D2A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,31064
	ctx.r3.s64 = r11.s64 + 31064;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d324
	if (cr6.eq) goto loc_8253D324;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8253d328
	if (!cr6.eq) goto loc_8253D328;
loc_8253D324:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8253D328:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8253D354"))) PPC_WEAK_FUNC(sub_8253D354);
PPC_FUNC_IMPL(__imp__sub_8253D354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D358"))) PPC_WEAK_FUNC(sub_8253D358);
PPC_FUNC_IMPL(__imp__sub_8253D358) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,31068
	ctx.r3.s64 = r11.s64 + 31068;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d3dc
	if (cr6.eq) goto loc_8253D3DC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8253d3e0
	if (!cr6.eq) goto loc_8253D3E0;
loc_8253D3DC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8253D3E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8253D40C"))) PPC_WEAK_FUNC(sub_8253D40C);
PPC_FUNC_IMPL(__imp__sub_8253D40C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D410"))) PPC_WEAK_FUNC(sub_8253D410);
PPC_FUNC_IMPL(__imp__sub_8253D410) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,116
	r26.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,30992
	r29.s64 = r11.s64 + 30992;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r28,3
	r28.s64 = 3;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253d504
	if (cr6.eq) goto loc_8253D504;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r28,15
	r28.s64 = 15;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d4f0
	if (cr6.eq) goto loc_8253D4F0;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253d4f4
	if (!cr6.eq) goto loc_8253D4F4;
loc_8253D4F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8253D4F4:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253d504
	if (cr6.eq) goto loc_8253D504;
	// li r27,1
	r27.s64 = 1;
loc_8253D504:
	// rlwinm r11,r28,0,28,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	// clrlwi r31,r27,24
	r31.u64 = r27.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d520
	if (cr6.eq) goto loc_8253D520;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r28,r28,0,29,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D520:
	// rlwinm r11,r28,0,29,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d538
	if (cr6.eq) goto loc_8253D538;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D538:
	// rlwinm r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d550
	if (cr6.eq) goto loc_8253D550;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D550:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d564
	if (cr6.eq) goto loc_8253D564;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D564:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8253D574"))) PPC_WEAK_FUNC(sub_8253D574);
PPC_FUNC_IMPL(__imp__sub_8253D574) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253D578"))) PPC_WEAK_FUNC(sub_8253D578);
PPC_FUNC_IMPL(__imp__sub_8253D578) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,116
	r26.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,31000
	r29.s64 = r11.s64 + 31000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r28,3
	r28.s64 = 3;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253d66c
	if (cr6.eq) goto loc_8253D66C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r28,15
	r28.s64 = 15;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d658
	if (cr6.eq) goto loc_8253D658;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253d65c
	if (!cr6.eq) goto loc_8253D65C;
loc_8253D658:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8253D65C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253d66c
	if (cr6.eq) goto loc_8253D66C;
	// li r27,1
	r27.s64 = 1;
loc_8253D66C:
	// rlwinm r11,r28,0,28,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	// clrlwi r31,r27,24
	r31.u64 = r27.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d688
	if (cr6.eq) goto loc_8253D688;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r28,r28,0,29,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D688:
	// rlwinm r11,r28,0,29,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d6a0
	if (cr6.eq) goto loc_8253D6A0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D6A0:
	// rlwinm r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d6b8
	if (cr6.eq) goto loc_8253D6B8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D6B8:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8253d6cc
	if (cr6.eq) goto loc_8253D6CC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_8253D6CC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8253D6DC"))) PPC_WEAK_FUNC(sub_8253D6DC);
PPC_FUNC_IMPL(__imp__sub_8253D6DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253D6E0"))) PPC_WEAK_FUNC(sub_8253D6E0);
PPC_FUNC_IMPL(__imp__sub_8253D6E0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,116
	r27.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,31076
	r28.s64 = r11.s64 + 31076;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253d834
	if (cr6.eq) goto loc_8253D834;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d7fc
	if (cr6.eq) goto loc_8253D7FC;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253d804
	if (!cr6.eq) goto loc_8253D804;
loc_8253D7FC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20604
	r11.s64 = r11.s64 + 20604;
loc_8253D804:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9460
	return;
loc_8253D834:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8253D844"))) PPC_WEAK_FUNC(sub_8253D844);
PPC_FUNC_IMPL(__imp__sub_8253D844) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253D848"))) PPC_WEAK_FUNC(sub_8253D848);
PPC_FUNC_IMPL(__imp__sub_8253D848) {
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
	// addi r24,r3,116
	r24.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// li r26,0
	r26.s64 = 0;
	// addi r27,r11,6408
	r27.s64 = r11.s64 + 6408;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r9,r23,24
	ctx.r9.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8253d9dc
	if (cr6.eq) goto loc_8253D9DC;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253d9a8
	if (cr6.eq) goto loc_8253D9A8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253d9b0
	if (!cr6.eq) goto loc_8253D9B0;
loc_8253D9A8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_8253D9B0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r26,1
	r26.s64 = 1;
loc_8253D9DC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8253D9EC"))) PPC_WEAK_FUNC(sub_8253D9EC);
PPC_FUNC_IMPL(__imp__sub_8253D9EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8253D9F0"))) PPC_WEAK_FUNC(sub_8253D9F0);
PPC_FUNC_IMPL(__imp__sub_8253D9F0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,116
	r26.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// addi r28,r11,6408
	r28.s64 = r11.s64 + 6408;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253db40
	if (cr6.eq) goto loc_8253DB40;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253db14
	if (cr6.eq) goto loc_8253DB14;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253db1c
	if (!cr6.eq) goto loc_8253DB1C;
loc_8253DB14:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_8253DB1C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_8253DB40:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

