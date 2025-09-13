#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8254AC3C"))) PPC_WEAK_FUNC(sub_8254AC3C);
PPC_FUNC_IMPL(__imp__sub_8254AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AC40"))) PPC_WEAK_FUNC(sub_8254AC40);
PPC_FUNC_IMPL(__imp__sub_8254AC40) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ac70
	if (cr6.eq) goto loc_8254AC70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ac74
	if (!cr6.eq) goto loc_8254AC74;
loc_8254AC70:
	// li r11,0
	r11.s64 = 0;
loc_8254AC74:
	// lwz r28,100(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8254ad64
	if (cr6.eq) goto loc_8254AD64;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8254acfc
	if (cr6.eq) goto loc_8254ACFC;
loc_8254ACA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8254ce30
	sub_8254CE30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254ace0
	if (cr6.eq) goto loc_8254ACE0;
loc_8254ACB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254cf38
	sub_8254CF38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82737400
	sub_82737400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x8254ce30
	sub_8254CE30(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8254acb4
	if (cr6.lt) goto loc_8254ACB4;
loc_8254ACE0:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,156
	r31.s64 = r31.s64 + 156;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x8254aca0
	if (!cr6.eq) goto loc_8254ACA0;
loc_8254ACFC:
	// lwz r11,1596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254ad64
	if (!cr6.gt) goto loc_8254AD64;
	// lwz r11,1588(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1588);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254ad3c
	if (cr6.eq) goto loc_8254AD3C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r5,r10,-28760
	ctx.r5.s64 = ctx.r10.s64 + -28760;
	// addi r4,r9,15424
	ctx.r4.s64 = ctx.r9.s64 + 15424;
	// addi r3,r8,-28784
	ctx.r3.s64 = ctx.r8.s64 + -28784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8254AD3C:
	// lwz r10,1596(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 1596);
	// addi r11,r27,1584
	r11.s64 = r27.s64 + 1584;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8254ad64
	if (!cr6.gt) goto loc_8254AD64;
loc_8254AD4C:
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
	// bgt cr6,0x8254ad4c
	if (cr6.gt) goto loc_8254AD4C;
loc_8254AD64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254AD68"))) PPC_WEAK_FUNC(sub_8254AD68);
PPC_FUNC_IMPL(__imp__sub_8254AD68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254AD6C"))) PPC_WEAK_FUNC(sub_8254AD6C);
PPC_FUNC_IMPL(__imp__sub_8254AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AD70"))) PPC_WEAK_FUNC(sub_8254AD70);
PPC_FUNC_IMPL(__imp__sub_8254AD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
loc_8254AD94:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x8254adb8
	if (cr6.eq) goto loc_8254ADB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,156
	r11.s64 = r11.s64 + 156;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// blt cr6,0x8254ad94
	if (cr6.lt) goto loc_8254AD94;
	// blr 
	return;
loc_8254ADB8:
	// mulli r11,r10,156
	r11.s64 = ctx.r10.s64 * 156;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
}

__attribute__((alias("__imp__sub_8254ADC0"))) PPC_WEAK_FUNC(sub_8254ADC0);
PPC_FUNC_IMPL(__imp__sub_8254ADC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ADC4"))) PPC_WEAK_FUNC(sub_8254ADC4);
PPC_FUNC_IMPL(__imp__sub_8254ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254ADC8"))) PPC_WEAK_FUNC(sub_8254ADC8);
PPC_FUNC_IMPL(__imp__sub_8254ADC8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254ae24
	if (!cr6.gt) goto loc_8254AE24;
	// li r30,0
	r30.s64 = 0;
loc_8254ADF4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8254cf68
	sub_8254CF68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254ae30
	if (!cr6.eq) goto loc_8254AE30;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,156
	r30.s64 = r30.s64 + 156;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8254adf4
	if (cr6.lt) goto loc_8254ADF4;
loc_8254AE24:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8254AE30:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mulli r11,r29,156
	r11.s64 = r29.s64 * 156;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254AE40"))) PPC_WEAK_FUNC(sub_8254AE40);
PPC_FUNC_IMPL(__imp__sub_8254AE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254AE44"))) PPC_WEAK_FUNC(sub_8254AE44);
PPC_FUNC_IMPL(__imp__sub_8254AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AE48"))) PPC_WEAK_FUNC(sub_8254AE48);
PPC_FUNC_IMPL(__imp__sub_8254AE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254ae64
	if (cr6.eq) goto loc_8254AE64;
	// bl 0x8254cdf8
	sub_8254CDF8(ctx, base);
loc_8254AE64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254AE70"))) PPC_WEAK_FUNC(sub_8254AE70);
PPC_FUNC_IMPL(__imp__sub_8254AE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AE74"))) PPC_WEAK_FUNC(sub_8254AE74);
PPC_FUNC_IMPL(__imp__sub_8254AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AE78"))) PPC_WEAK_FUNC(sub_8254AE78);
PPC_FUNC_IMPL(__imp__sub_8254AE78) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// addi r3,r9,-28784
	ctx.r3.s64 = ctx.r9.s64 + -28784;
	// bne cr6,0x8254aec0
	if (!cr6.eq) goto loc_8254AEC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28696
	ctx.r5.s64 = r11.s64 + -28696;
	// b 0x8254aec8
	goto loc_8254AEC8;
loc_8254AEC0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28724
	ctx.r5.s64 = r11.s64 + -28724;
loc_8254AEC8:
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254adc8
	sub_8254ADC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254aee8
	if (cr6.eq) goto loc_8254AEE8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8254cec0
	sub_8254CEC0(ctx, base);
loc_8254AEE8:
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

__attribute__((alias("__imp__sub_8254AEFC"))) PPC_WEAK_FUNC(sub_8254AEFC);
PPC_FUNC_IMPL(__imp__sub_8254AEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AF00"))) PPC_WEAK_FUNC(sub_8254AF00);
PPC_FUNC_IMPL(__imp__sub_8254AF00) {
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
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x8254adc8
	sub_8254ADC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254af2c
	if (cr6.eq) goto loc_8254AF2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8254cec0
	sub_8254CEC0(ctx, base);
loc_8254AF2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254AF3C"))) PPC_WEAK_FUNC(sub_8254AF3C);
PPC_FUNC_IMPL(__imp__sub_8254AF3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AF40"))) PPC_WEAK_FUNC(sub_8254AF40);
PPC_FUNC_IMPL(__imp__sub_8254AF40) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r7,r10,-28648
	ctx.r7.s64 = ctx.r10.s64 + -28648;
	// li r30,0
	r30.s64 = 0;
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r29,r3,1584
	r29.s64 = ctx.r3.s64 + 1584;
	// addi r5,r9,-28732
	ctx.r5.s64 = ctx.r9.s64 + -28732;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// addi r11,r8,-28660
	r11.s64 = ctx.r8.s64 + -28660;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r11,1584(r31)
	PPC_STORE_U32(r31.u32 + 1584, r11.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(r31.u32 + 1588, r30.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(r31.u32 + 1596, r30.u32);
	// stw r30,1592(r31)
	PPC_STORE_U32(r31.u32 + 1592, r30.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(r31.u32 + 1600, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r10,1600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1600);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stw r9,1600(r31)
	PPC_STORE_U32(r31.u32 + 1600, ctx.r9.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(r31.u32 + 1612, r30.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r3.u32);
	// stb r30,1620(r31)
	PPC_STORE_U8(r31.u32 + 1620, r30.u8);
	// stw r30,1624(r31)
	PPC_STORE_U32(r31.u32 + 1624, r30.u32);
	// stw r30,1628(r31)
	PPC_STORE_U32(r31.u32 + 1628, r30.u32);
	// lwz r8,1596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1596);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x8254aff8
	if (!cr6.gt) goto loc_8254AFF8;
loc_8254AFE0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8254afe0
	if (cr6.gt) goto loc_8254AFE0;
loc_8254AFF8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,-22672(r11)
	PPC_STORE_U32(r11.u32 + -22672, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254B008"))) PPC_WEAK_FUNC(sub_8254B008);
PPC_FUNC_IMPL(__imp__sub_8254B008) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254B00C"))) PPC_WEAK_FUNC(sub_8254B00C);
PPC_FUNC_IMPL(__imp__sub_8254B00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B010"))) PPC_WEAK_FUNC(sub_8254B010);
PPC_FUNC_IMPL(__imp__sub_8254B010) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r3,1584
	ctx.r3.s64 = ctx.r3.s64 + 1584;
	// addi r8,r9,-28648
	ctx.r8.s64 = ctx.r9.s64 + -28648;
	// lwz r11,-22672(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22672);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// subf r7,r11,r31
	ctx.r7.s64 = r31.s64 - r11.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r11
	r11.u64 = ctx.r4.u64 & r11.u64;
	// stw r11,-22672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22672, r11.u32);
	// bl 0x8254c5f0
	sub_8254C5F0(ctx, base);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r11,r3,-28732
	r11.s64 = ctx.r3.s64 + -28732;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8254c2c8
	sub_8254C2C8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r10,-28816
	ctx.r9.s64 = ctx.r10.s64 + -28816;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// bl 0x8254c2c8
	sub_8254C2C8(ctx, base);
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

__attribute__((alias("__imp__sub_8254B098"))) PPC_WEAK_FUNC(sub_8254B098);
PPC_FUNC_IMPL(__imp__sub_8254B098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B09C"))) PPC_WEAK_FUNC(sub_8254B09C);
PPC_FUNC_IMPL(__imp__sub_8254B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B0A0"))) PPC_WEAK_FUNC(sub_8254B0A0);
PPC_FUNC_IMPL(__imp__sub_8254B0A0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254b0dc
	if (cr6.eq) goto loc_8254B0DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254b0e0
	if (!cr6.eq) goto loc_8254B0E0;
loc_8254B0DC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8254B0E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254b160
	if (cr6.eq) goto loc_8254B160;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254b160
	if (cr6.eq) goto loc_8254B160;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,-20736
	ctx.r10.s64 = r11.s64 + -20736;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827376f8
	sub_827376F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254ce38
	sub_8254CE38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254cdf8
	sub_8254CDF8(ctx, base);
loc_8254B160:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8254B164"))) PPC_WEAK_FUNC(sub_8254B164);
PPC_FUNC_IMPL(__imp__sub_8254B164) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254B168"))) PPC_WEAK_FUNC(sub_8254B168);
PPC_FUNC_IMPL(__imp__sub_8254B168) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254b19c
	if (cr6.eq) goto loc_8254B19C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254b1a0
	if (!cr6.eq) goto loc_8254B1A0;
loc_8254B19C:
	// li r11,0
	r11.s64 = 0;
loc_8254B1A0:
	// lwz r28,100(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8254b2ec
	if (cr6.eq) goto loc_8254B2EC;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8254b23c
	if (cr6.eq) goto loc_8254B23C;
loc_8254B1CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8254ce30
	sub_8254CE30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254b220
	if (cr6.eq) goto loc_8254B220;
loc_8254B1E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254cf08
	sub_8254CF08(ctx, base);
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, r26.s32, xer);
	// bne cr6,0x8254b20c
	if (!cr6.eq) goto loc_8254B20C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254cf38
	sub_8254CF38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82737400
	sub_82737400(ctx, base);
loc_8254B20C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x8254ce30
	sub_8254CE30(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8254b1e0
	if (cr6.lt) goto loc_8254B1E0;
loc_8254B220:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,156
	r31.s64 = r31.s64 + 156;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x8254b1cc
	if (!cr6.eq) goto loc_8254B1CC;
loc_8254B23C:
	// lwz r11,1596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254b2ec
	if (!cr6.gt) goto loc_8254B2EC;
	// lwz r11,1588(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1588);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, xer);
	// bne cr6,0x8254b284
	if (!cr6.eq) goto loc_8254B284;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254b284
	if (cr6.eq) goto loc_8254B284;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r5,r10,-28760
	ctx.r5.s64 = ctx.r10.s64 + -28760;
	// addi r4,r9,15424
	ctx.r4.s64 = ctx.r9.s64 + 15424;
	// addi r3,r8,-28784
	ctx.r3.s64 = ctx.r8.s64 + -28784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8254B284:
	// lwz r11,1596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1596);
	// addi r31,r27,1584
	r31.s64 = r27.s64 + 1584;
	// lwz r9,1588(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 1588);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r30,r9
	r30.s64 = ctx.r9.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8254b2ec
	if (cr6.eq) goto loc_8254B2EC;
loc_8254B2AC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8254b2c8
	if (!cr6.eq) goto loc_8254B2C8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254c688
	sub_8254C688(ctx, base);
	// b 0x8254b2cc
	goto loc_8254B2CC;
loc_8254B2C8:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_8254B2CC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8254b2ac
	if (!cr6.eq) goto loc_8254B2AC;
loc_8254B2EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8254B2F0"))) PPC_WEAK_FUNC(sub_8254B2F0);
PPC_FUNC_IMPL(__imp__sub_8254B2F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8254B2F4"))) PPC_WEAK_FUNC(sub_8254B2F4);
PPC_FUNC_IMPL(__imp__sub_8254B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B2F8"))) PPC_WEAK_FUNC(sub_8254B2F8);
PPC_FUNC_IMPL(__imp__sub_8254B2F8) {
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
	// lwz r11,1624(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1624);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8254b378
	if (cr6.gt) goto loc_8254B378;
	// lbz r11,1620(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1620);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8254b378
	if (!cr6.eq) goto loc_8254B378;
	// addi r3,r3,1616
	ctx.r3.s64 = ctx.r3.s64 + 1616;
	// bl 0x823916c8
	sub_823916C8(ctx, base);
	// lwz r11,1612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1612);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8254b378
	if (cr6.lt) goto loc_8254B378;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stb r30,1620(r31)
	PPC_STORE_U8(r31.u32 + 1620, r30.u8);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,21640(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21640);
	// lwz r10,25724(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25724);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8254cbf8
	sub_8254CBF8(ctx, base);
loc_8254B378:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254b3a8
	if (!cr6.gt) goto loc_8254B3A8;
loc_8254B388:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x8254d080
	sub_8254D080(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,156
	r30.s64 = r30.s64 + 156;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8254b388
	if (cr6.lt) goto loc_8254B388;
loc_8254B3A8:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8254b420
	if (cr6.eq) goto loc_8254B420;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r10,-28612
	r29.s64 = ctx.r10.s64 + -28612;
	// addi r28,r11,24348
	r28.s64 = r11.s64 + 24348;
loc_8254B3D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8254b404
	if (!cr6.eq) goto loc_8254B404;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254ca60
	sub_8254CA60(ctx, base);
	// b 0x8254b408
	goto loc_8254B408;
loc_8254B404:
	// addi r31,r31,156
	r31.s64 = r31.s64 + 156;
loc_8254B408:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r11,156
	r11.s64 = r11.s64 * 156;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8254b3d8
	if (!cr6.eq) goto loc_8254B3D8;
loc_8254B420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254B424"))) PPC_WEAK_FUNC(sub_8254B424);
PPC_FUNC_IMPL(__imp__sub_8254B424) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8254B428"))) PPC_WEAK_FUNC(sub_8254B428);
PPC_FUNC_IMPL(__imp__sub_8254B428) {
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
	// lbz r11,1620(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1620);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254b494
	if (!cr6.eq) goto loc_8254B494;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// li r11,1
	r11.s64 = 1;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stb r11,1620(r31)
	PPC_STORE_U8(r31.u32 + 1620, r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// lwz r10,25724(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25724);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,21640(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21640);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8254cbf8
	sub_8254CBF8(ctx, base);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r3.u32);
loc_8254B494:
	// lwz r11,1624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1624);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1624(r31)
	PPC_STORE_U32(r31.u32 + 1624, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254B4B0"))) PPC_WEAK_FUNC(sub_8254B4B0);
PPC_FUNC_IMPL(__imp__sub_8254B4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B4B4"))) PPC_WEAK_FUNC(sub_8254B4B4);
PPC_FUNC_IMPL(__imp__sub_8254B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B4B8"))) PPC_WEAK_FUNC(sub_8254B4B8);
PPC_FUNC_IMPL(__imp__sub_8254B4B8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,1052(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1052);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254b4ec
	if (cr6.eq) goto loc_8254B4EC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,1052(r31)
	PPC_STORE_U32(r31.u32 + 1052, r29.u32);
loc_8254B4EC:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// bne cr6,0x8254b528
	if (!cr6.eq) goto loc_8254B528;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254b514
	if (cr6.eq) goto loc_8254B514;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254b518
	if (!cr6.eq) goto loc_8254B518;
loc_8254B514:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8254B518:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250f0f0
	sub_8250F0F0(ctx, base);
	// b 0x8254b550
	goto loc_8254B550;
loc_8254B528:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254b540
	if (cr6.eq) goto loc_8254B540;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254b544
	if (!cr6.eq) goto loc_8254B544;
loc_8254B540:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8254B544:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250f160
	sub_8250F160(ctx, base);
loc_8254B550:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r29.u8);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,25724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 25724);
	// lwz r11,21640(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21640);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8254cbf8
	sub_8254CBF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254adc8
	sub_8254ADC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254b590
	if (cr6.eq) goto loc_8254B590;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8254cec0
	sub_8254CEC0(ctx, base);
loc_8254B590:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8254B594"))) PPC_WEAK_FUNC(sub_8254B594);
PPC_FUNC_IMPL(__imp__sub_8254B594) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254B598"))) PPC_WEAK_FUNC(sub_8254B598);
PPC_FUNC_IMPL(__imp__sub_8254B598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
	PPCRegister r20{};
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x8254b70c
	if (cr6.gt) goto loc_8254B70C;
	// lis r12,-32171
	r12.s64 = -2108358656;
	// rlwinm r0,r4,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18992
	r12.s64 = r12.s64 + -18992;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8254B604;
	case 1:
		goto loc_8254B69C;
	case 2:
		goto loc_8254B6B4;
	case 3:
		goto loc_8254B6E4;
	case 4:
		goto loc_8254B660;
	case 5:
		goto loc_8254B6A8;
	case 6:
		goto loc_8254B6CC;
	case 7:
		goto loc_8254B6C0;
	case 8:
		goto loc_8254B604;
	case 9:
		goto loc_8254B604;
	case 10:
		goto loc_8254B604;
	case 11:
		goto loc_8254B6D8;
	case 12:
		goto loc_8254B6F0;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-18940(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18940);
	// lwz r18,-18788(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18788);
	// lwz r18,-18764(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18764);
	// lwz r18,-18716(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18716);
	// lwz r18,-18848(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18848);
	// lwz r18,-18776(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18776);
	// lwz r18,-18740(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18740);
	// lwz r18,-18752(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18752);
	// lwz r18,-18940(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18940);
	// lwz r18,-18940(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18940);
	// lwz r18,-18940(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18940);
	// lwz r18,-18728(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18728);
	// lwz r18,-18704(r20)
	r18.u64 = PPC_LOAD_U32(r20.u32 + -18704);
loc_8254B604:
	// lwz r11,1588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1588);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,25724(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25724);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x8254b630
	if (!cr6.eq) goto loc_8254B630;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254B630:
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lwz r10,21640(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21640);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x8254cbf8
	sub_8254CBF8(ctx, base);
	// addi r3,r31,1584
	ctx.r3.s64 = r31.s64 + 1584;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1588);
	// bl 0x8254c688
	sub_8254C688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8254B660:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,-28388
	ctx.r5.s64 = r11.s64 + -28388;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// addi r3,r9,-28784
	ctx.r3.s64 = ctx.r9.s64 + -28784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r3,r31,1584
	ctx.r3.s64 = r31.s64 + 1584;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1588);
	// bl 0x8254c688
	sub_8254C688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8254B69C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28408
	ctx.r5.s64 = r11.s64 + -28408;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6A8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28428
	ctx.r5.s64 = r11.s64 + -28428;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6B4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28456
	ctx.r5.s64 = r11.s64 + -28456;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6C0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28484
	ctx.r5.s64 = r11.s64 + -28484;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6CC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28512
	ctx.r5.s64 = r11.s64 + -28512;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6D8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28540
	ctx.r5.s64 = r11.s64 + -28540;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6E4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28560
	ctx.r5.s64 = r11.s64 + -28560;
	// b 0x8254b6f8
	goto loc_8254B6F8;
loc_8254B6F0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28584
	ctx.r5.s64 = r11.s64 + -28584;
loc_8254B6F8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// addi r3,r9,-28784
	ctx.r3.s64 = ctx.r9.s64 + -28784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8254B70C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254B71C"))) PPC_WEAK_FUNC(sub_8254B71C);
PPC_FUNC_IMPL(__imp__sub_8254B71C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B720"))) PPC_WEAK_FUNC(sub_8254B720);
PPC_FUNC_IMPL(__imp__sub_8254B720) {
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
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r3,1584
	ctx.r3.s64 = ctx.r3.s64 + 1584;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x8254c848
	sub_8254C848(ctx, base);
	// lwz r8,1596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1596);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8254b784
	if (!cr6.eq) goto loc_8254B784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8254b598
	sub_8254B598(ctx, base);
loc_8254B784:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254B794"))) PPC_WEAK_FUNC(sub_8254B794);
PPC_FUNC_IMPL(__imp__sub_8254B794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B798"))) PPC_WEAK_FUNC(sub_8254B798);
PPC_FUNC_IMPL(__imp__sub_8254B798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// li r31,0
	r31.s64 = 0;
	// stw r10,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r10.u32);
	// beq cr6,0x8254b9b4
	if (cr6.eq) goto loc_8254B9B4;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254b9b4
	if (cr6.eq) goto loc_8254B9B4;
	// lbz r11,4(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254b9b4
	if (cr6.eq) goto loc_8254B9B4;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254b828
	if (cr6.eq) goto loc_8254B828;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254b82c
	if (!cr6.eq) goto loc_8254B82C;
loc_8254B828:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254B82C:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254b9b4
	if (!cr6.eq) goto loc_8254B9B4;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254b85c
	if (cr6.eq) goto loc_8254B85C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254b860
	if (!cr6.eq) goto loc_8254B860;
loc_8254B85C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8254B860:
	// lwz r28,100(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8254b9b8
	if (cr6.eq) goto loc_8254B9B8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r7,r10,-28372
	ctx.r7.s64 = ctx.r10.s64 + -28372;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,608
	ctx.r8.s64 = 608;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc008
	sub_826DC008(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x826dc580
	sub_826DC580(ctx, base);
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8272e668
	sub_8272E668(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// li r5,1072
	ctx.r5.s64 = 1072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// stb r25,1230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1230, r25.u8);
	// addi r4,r8,-19272
	ctx.r4.s64 = ctx.r8.s64 + -19272;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r29.u32);
	// addi r3,r7,-18656
	ctx.r3.s64 = ctx.r7.s64 + -18656;
	// stw r21,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, r21.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stb r6,1229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1229, ctx.r6.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82737458
	sub_82737458(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8254ce38
	sub_8254CE38(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x826dc188
	sub_826DC188(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826dc030
	sub_826DC030(ctx, base);
	// lwz r3,1260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x828e944c
	return;
loc_8254B9B4:
	// stb r31,4(r26)
	PPC_STORE_U8(r26.u32 + 4, r31.u8);
loc_8254B9B8:
	// lwz r3,1260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
}

__attribute__((alias("__imp__sub_8254B9C4"))) PPC_WEAK_FUNC(sub_8254B9C4);
PPC_FUNC_IMPL(__imp__sub_8254B9C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8254B9C8"))) PPC_WEAK_FUNC(sub_8254B9C8);
PPC_FUNC_IMPL(__imp__sub_8254B9C8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// bl 0x8254d018
	sub_8254D018(ctx, base);
	// lwz r11,1628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1628(r31)
	PPC_STORE_U32(r31.u32 + 1628, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x8254cc78
	sub_8254CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,1628(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 1628);
	// bl 0x8254d068
	sub_8254D068(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254BA34"))) PPC_WEAK_FUNC(sub_8254BA34);
PPC_FUNC_IMPL(__imp__sub_8254BA34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BA38"))) PPC_WEAK_FUNC(sub_8254BA38);
PPC_FUNC_IMPL(__imp__sub_8254BA38) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ba70
	if (cr6.eq) goto loc_8254BA70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ba74
	if (!cr6.eq) goto loc_8254BA74;
loc_8254BA70:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8254BA74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254bab4
	if (cr6.eq) goto loc_8254BAB4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r7,140(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,-15352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -15352);
	// lwz r8,-15356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15356);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bl 0x8254b798
	sub_8254B798(ctx, base);
loc_8254BAB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254BAB8"))) PPC_WEAK_FUNC(sub_8254BAB8);
PPC_FUNC_IMPL(__imp__sub_8254BAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254BABC"))) PPC_WEAK_FUNC(sub_8254BABC);
PPC_FUNC_IMPL(__imp__sub_8254BABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BAC0"))) PPC_WEAK_FUNC(sub_8254BAC0);
PPC_FUNC_IMPL(__imp__sub_8254BAC0) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254baf8
	if (cr6.eq) goto loc_8254BAF8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bafc
	if (!cr6.eq) goto loc_8254BAFC;
loc_8254BAF8:
	// li r11,0
	r11.s64 = 0;
loc_8254BAFC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// lbz r11,78(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 78);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254bbc4
	if (cr6.eq) goto loc_8254BBC4;
	// lwz r6,-14756(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8254bb54
	if (cr6.eq) goto loc_8254BB54;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x8254bb44
	if (cr6.eq) goto loc_8254BB44;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r6,-14756(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bb48
	if (!cr6.eq) goto loc_8254BB48;
loc_8254BB44:
	// li r11,0
	r11.s64 = 0;
loc_8254BB48:
	// addi r10,r29,28
	ctx.r10.s64 = r29.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_8254BB54:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254bbc4
	if (cr6.eq) goto loc_8254BBC4;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x8254bb88
	if (cr6.eq) goto loc_8254BB88;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bb8c
	if (!cr6.eq) goto loc_8254BB8C;
loc_8254BB88:
	// li r11,0
	r11.s64 = 0;
loc_8254BB8C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250e858
	sub_8250E858(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,-15360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -15360);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,-15364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15364);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bl 0x8254b798
	sub_8254B798(ctx, base);
loc_8254BBC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254BBC8"))) PPC_WEAK_FUNC(sub_8254BBC8);
PPC_FUNC_IMPL(__imp__sub_8254BBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254BBCC"))) PPC_WEAK_FUNC(sub_8254BBCC);
PPC_FUNC_IMPL(__imp__sub_8254BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BBD0"))) PPC_WEAK_FUNC(sub_8254BBD0);
PPC_FUNC_IMPL(__imp__sub_8254BBD0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254bc0c
	if (cr6.eq) goto loc_8254BC0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bc10
	if (!cr6.eq) goto loc_8254BC10;
loc_8254BC0C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8254BC10:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254bd0c
	if (cr6.eq) goto loc_8254BD0C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254bd0c
	if (cr6.eq) goto loc_8254BD0C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254bd0c
	if (cr6.eq) goto loc_8254BD0C;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254bc74
	if (cr6.eq) goto loc_8254BC74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bc78
	if (!cr6.eq) goto loc_8254BC78;
loc_8254BC74:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8254BC78:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254bd0c
	if (!cr6.eq) goto loc_8254BD0C;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// addi r5,r11,-20872
	ctx.r5.s64 = r11.s64 + -20872;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r10,-18656
	ctx.r4.s64 = ctx.r10.s64 + -18656;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82737618
	sub_82737618(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254ce38
	sub_8254CE38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254cdf8
	sub_8254CDF8(ctx, base);
loc_8254BD0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8254BD10"))) PPC_WEAK_FUNC(sub_8254BD10);
PPC_FUNC_IMPL(__imp__sub_8254BD10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8254BD14"))) PPC_WEAK_FUNC(sub_8254BD14);
PPC_FUNC_IMPL(__imp__sub_8254BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BD18"))) PPC_WEAK_FUNC(sub_8254BD18);
PPC_FUNC_IMPL(__imp__sub_8254BD18) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,1057(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1057);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne cr6,0x8254bd84
	if (!cr6.eq) goto loc_8254BD84;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254bd6c
	if (cr6.eq) goto loc_8254BD6C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bd70
	if (!cr6.eq) goto loc_8254BD70;
loc_8254BD6C:
	// li r11,0
	r11.s64 = 0;
loc_8254BD70:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, r11.u8);
loc_8254BD84:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254adc8
	sub_8254ADC8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8254be78
	if (!cr6.eq) goto loc_8254BE78;
	// lwz r11,1060(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1060);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254be40
	if (cr6.eq) goto loc_8254BE40;
	// lbz r11,1057(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1057);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254bde8
	if (!cr6.eq) goto loc_8254BDE8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254bdd0
	if (cr6.eq) goto loc_8254BDD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bdd4
	if (!cr6.eq) goto loc_8254BDD4;
loc_8254BDD0:
	// li r11,0
	r11.s64 = 0;
loc_8254BDD4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r11
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// b 0x8254be08
	goto loc_8254BE08;
loc_8254BDE8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254be00
	if (cr6.eq) goto loc_8254BE00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254be04
	if (!cr6.eq) goto loc_8254BE04;
loc_8254BE00:
	// li r11,0
	r11.s64 = 0;
loc_8254BE04:
	// lwz r31,140(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 140);
loc_8254BE08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1064(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 1064);
	// lwz r4,1060(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 1060);
	// bl 0x826dc008
	sub_826DC008(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826dcb98
	sub_826DCB98(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8272e6c0
	sub_8272E6C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826dcaa8
	sub_826DCAA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826dc030
	sub_826DC030(ctx, base);
loc_8254BE40:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254be5c
	if (cr6.eq) goto loc_8254BE5C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254be60
	if (!cr6.eq) goto loc_8254BE60;
loc_8254BE5C:
	// li r11,0
	r11.s64 = 0;
loc_8254BE60:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8250efa0
	sub_8250EFA0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28296
	ctx.r5.s64 = r11.s64 + -28296;
	// b 0x8254bf64
	goto loc_8254BF64;
loc_8254BE78:
	// cmpwi cr6,r31,-4
	cr6.compare<int32_t>(r31.s32, -4, xer);
	// bne cr6,0x8254bf28
	if (!cr6.eq) goto loc_8254BF28;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254be9c
	if (cr6.eq) goto loc_8254BE9C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bea0
	if (!cr6.eq) goto loc_8254BEA0;
loc_8254BE9C:
	// li r11,0
	r11.s64 = 0;
loc_8254BEA0:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8250f010
	sub_8250F010(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8254bf94
	if (cr6.eq) goto loc_8254BF94;
	// lbz r11,1057(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1057);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254bf14
	if (!cr6.eq) goto loc_8254BF14;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8254bf00
	if (cr6.eq) goto loc_8254BF00;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254bee8
	if (cr6.eq) goto loc_8254BEE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254beec
	if (!cr6.eq) goto loc_8254BEEC;
loc_8254BEE8:
	// li r11,0
	r11.s64 = 0;
loc_8254BEEC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x8272e608
	sub_8272E608(ctx, base);
loc_8254BF00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x8254bac0
	sub_8254BAC0(ctx, base);
	// b 0x8254bf80
	goto loc_8254BF80;
loc_8254BF14:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x8254ba38
	sub_8254BA38(ctx, base);
	// b 0x8254bf80
	goto loc_8254BF80;
loc_8254BF28:
	// cmpwi cr6,r31,-5
	cr6.compare<int32_t>(r31.s32, -5, xer);
	// beq cr6,0x8254bf80
	if (cr6.eq) goto loc_8254BF80;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254bf4c
	if (cr6.eq) goto loc_8254BF4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254bf50
	if (!cr6.eq) goto loc_8254BF50;
loc_8254BF4C:
	// li r11,0
	r11.s64 = 0;
loc_8254BF50:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8250f080
	sub_8250F080(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-28316
	ctx.r5.s64 = r11.s64 + -28316;
loc_8254BF64:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// addi r3,r9,-28784
	ctx.r3.s64 = ctx.r9.s64 + -28784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8254BF80:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8254bf94
	if (cr6.eq) goto loc_8254BF94;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254cec0
	sub_8254CEC0(ctx, base);
loc_8254BF94:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8254BFA0"))) PPC_WEAK_FUNC(sub_8254BFA0);
PPC_FUNC_IMPL(__imp__sub_8254BFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8254BFA4"))) PPC_WEAK_FUNC(sub_8254BFA4);
PPC_FUNC_IMPL(__imp__sub_8254BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BFA8"))) PPC_WEAK_FUNC(sub_8254BFA8);
PPC_FUNC_IMPL(__imp__sub_8254BFA8) {
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
	// lwz r11,1596(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254c00c
	if (!cr6.gt) goto loc_8254C00C;
	// lwz r11,1588(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1588);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,1584
	ctx.r3.s64 = r31.s64 + 1584;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1588);
	// bl 0x8254c688
	sub_8254C688(ctx, base);
	// lwz r9,1596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1596);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x8254c00c
	if (!cr6.gt) goto loc_8254C00C;
	// lwz r11,1588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1588);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8254b598
	sub_8254B598(ctx, base);
loc_8254C00C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254C01C"))) PPC_WEAK_FUNC(sub_8254C01C);
PPC_FUNC_IMPL(__imp__sub_8254C01C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C020"))) PPC_WEAK_FUNC(sub_8254C020);
PPC_FUNC_IMPL(__imp__sub_8254C020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// li r30,0
	r30.s64 = 0;
	// stw r10,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r10.u32);
	// beq cr6,0x8254c1b8
	if (cr6.eq) goto loc_8254C1B8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254c1b8
	if (cr6.eq) goto loc_8254C1B8;
	// lbz r11,4(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254c1b8
	if (cr6.eq) goto loc_8254C1B8;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254c0ac
	if (cr6.eq) goto loc_8254C0AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254c0b0
	if (!cr6.eq) goto loc_8254C0B0;
loc_8254C0AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8254C0B0:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254c1b8
	if (!cr6.eq) goto loc_8254C1B8;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254c0e0
	if (cr6.eq) goto loc_8254C0E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254c0e4
	if (!cr6.eq) goto loc_8254C0E4;
loc_8254C0E0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8254C0E4:
	// lwz r28,100(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8254c1bc
	if (cr6.eq) goto loc_8254C1BC;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r5,1068
	ctx.r5.s64 = 1068;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// stb r25,1153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1153, r25.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r3,r10,-18656
	ctx.r3.s64 = ctx.r10.s64 + -18656;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// addi r8,r11,-17128
	ctx.r8.s64 = r11.s64 + -17128;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r30,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x827374c8
	sub_827374C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8254ce38
	sub_8254CE38(ctx, base);
	// lwz r3,1164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x828e9450
	return;
loc_8254C1B8:
	// stb r30,4(r26)
	PPC_STORE_U8(r26.u32 + 4, r30.u8);
loc_8254C1BC:
	// lwz r3,1164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
}

__attribute__((alias("__imp__sub_8254C1C8"))) PPC_WEAK_FUNC(sub_8254C1C8);
PPC_FUNC_IMPL(__imp__sub_8254C1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8254C1CC"))) PPC_WEAK_FUNC(sub_8254C1CC);
PPC_FUNC_IMPL(__imp__sub_8254C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C1D0"))) PPC_WEAK_FUNC(sub_8254C1D0);
PPC_FUNC_IMPL(__imp__sub_8254C1D0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254c220
	if (cr6.eq) goto loc_8254C220;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,-15352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -15352);
	// lwz r7,-15356(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bl 0x8254c020
	sub_8254C020(ctx, base);
loc_8254C220:
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

__attribute__((alias("__imp__sub_8254C234"))) PPC_WEAK_FUNC(sub_8254C234);
PPC_FUNC_IMPL(__imp__sub_8254C234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C238"))) PPC_WEAK_FUNC(sub_8254C238);
PPC_FUNC_IMPL(__imp__sub_8254C238) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8254ad70
	sub_8254AD70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254c2b4
	if (cr6.eq) goto loc_8254C2B4;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254c27c
	if (cr6.eq) goto loc_8254C27C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254c280
	if (!cr6.eq) goto loc_8254C280;
loc_8254C27C:
	// li r11,0
	r11.s64 = 0;
loc_8254C280:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250e7f8
	sub_8250E7F8(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,-15360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -15360);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,-15364(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15364);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bl 0x8254c020
	sub_8254C020(ctx, base);
loc_8254C2B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254C2B8"))) PPC_WEAK_FUNC(sub_8254C2B8);
PPC_FUNC_IMPL(__imp__sub_8254C2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254C2BC"))) PPC_WEAK_FUNC(sub_8254C2BC);
PPC_FUNC_IMPL(__imp__sub_8254C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C2C0"))) PPC_WEAK_FUNC(sub_8254C2C0);
PPC_FUNC_IMPL(__imp__sub_8254C2C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254ccf8
	sub_8254CCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C2C0"))) PPC_WEAK_FUNC(sub_8254C2C0);
PPC_FUNC_IMPL(__imp__sub_8254C2C0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8254C2C4"))) PPC_WEAK_FUNC(sub_8254C2C4);
PPC_FUNC_IMPL(__imp__sub_8254C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C2C8"))) PPC_WEAK_FUNC(sub_8254C2C8);
PPC_FUNC_IMPL(__imp__sub_8254C2C8) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254c328
	if (!cr6.gt) goto loc_8254C328;
loc_8254C2E8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,156
	r11.s64 = r11.s64 * 156;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
	// lwz r10,-156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -156);
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
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bgt cr6,0x8254c2e8
	if (cr6.gt) goto loc_8254C2E8;
loc_8254C328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254C338"))) PPC_WEAK_FUNC(sub_8254C338);
PPC_FUNC_IMPL(__imp__sub_8254C338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C33C"))) PPC_WEAK_FUNC(sub_8254C33C);
PPC_FUNC_IMPL(__imp__sub_8254C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C340"))) PPC_WEAK_FUNC(sub_8254C340);
PPC_FUNC_IMPL(__imp__sub_8254C340) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28816
	ctx.r10.s64 = r11.s64 + -28816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8254c2c8
	sub_8254C2C8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254c384
	if (cr6.eq) goto loc_8254C384;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254C384:
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

__attribute__((alias("__imp__sub_8254C398"))) PPC_WEAK_FUNC(sub_8254C398);
PPC_FUNC_IMPL(__imp__sub_8254C398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C39C"))) PPC_WEAK_FUNC(sub_8254C39C);
PPC_FUNC_IMPL(__imp__sub_8254C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C3A0"))) PPC_WEAK_FUNC(sub_8254C3A0);
PPC_FUNC_IMPL(__imp__sub_8254C3A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28732
	ctx.r10.s64 = r11.s64 + -28732;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8254c2c8
	sub_8254C2C8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-28816
	ctx.r8.s64 = ctx.r9.s64 + -28816;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x8254c2c8
	sub_8254C2C8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8254c3f8
	if (cr6.eq) goto loc_8254C3F8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254C3F8:
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

__attribute__((alias("__imp__sub_8254C40C"))) PPC_WEAK_FUNC(sub_8254C40C);
PPC_FUNC_IMPL(__imp__sub_8254C40C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C410"))) PPC_WEAK_FUNC(sub_8254C410);
PPC_FUNC_IMPL(__imp__sub_8254C410) {
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
	// addi r9,r11,-28804
	ctx.r9.s64 = r11.s64 + -28804;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8254c454
	if (!cr6.gt) goto loc_8254C454;
loc_8254C43C:
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
	// bgt cr6,0x8254c43c
	if (cr6.gt) goto loc_8254C43C;
loc_8254C454:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254c46c
	if (cr6.eq) goto loc_8254C46C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254C46C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254C47C"))) PPC_WEAK_FUNC(sub_8254C47C);
PPC_FUNC_IMPL(__imp__sub_8254C47C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C480"))) PPC_WEAK_FUNC(sub_8254C480);
PPC_FUNC_IMPL(__imp__sub_8254C480) {
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
	// ble cr6,0x8254c4b8
	if (!cr6.gt) goto loc_8254C4B8;
loc_8254C4A0:
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
	// bgt cr6,0x8254c4a0
	if (cr6.gt) goto loc_8254C4A0;
loc_8254C4B8:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8254c4dc
	if (!cr6.gt) goto loc_8254C4DC;
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
loc_8254C4DC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8254c584
	if (cr6.eq) goto loc_8254C584;
loc_8254C4FC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8254c524
	if (!cr6.gt) goto loc_8254C524;
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
loc_8254C524:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8254c560
	if (cr0.eq) goto loc_8254C560;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
loc_8254C560:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8254c4fc
	if (!cr6.eq) goto loc_8254C4FC;
loc_8254C584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254C588"))) PPC_WEAK_FUNC(sub_8254C588);
PPC_FUNC_IMPL(__imp__sub_8254C588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254C58C"))) PPC_WEAK_FUNC(sub_8254C58C);
PPC_FUNC_IMPL(__imp__sub_8254C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C590"))) PPC_WEAK_FUNC(sub_8254C590);
PPC_FUNC_IMPL(__imp__sub_8254C590) {
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
	// addi r9,r10,-28660
	ctx.r9.s64 = ctx.r10.s64 + -28660;
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

__attribute__((alias("__imp__sub_8254C5E8"))) PPC_WEAK_FUNC(sub_8254C5E8);
PPC_FUNC_IMPL(__imp__sub_8254C5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C5EC"))) PPC_WEAK_FUNC(sub_8254C5EC);
PPC_FUNC_IMPL(__imp__sub_8254C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C5F0"))) PPC_WEAK_FUNC(sub_8254C5F0);
PPC_FUNC_IMPL(__imp__sub_8254C5F0) {
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
	// addi r9,r11,-28660
	ctx.r9.s64 = r11.s64 + -28660;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8254c634
	if (!cr6.gt) goto loc_8254C634;
loc_8254C61C:
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
	// bgt cr6,0x8254c61c
	if (cr6.gt) goto loc_8254C61C;
loc_8254C634:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254ccf8
	sub_8254CCF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-28804
	ctx.r10.s64 = r11.s64 + -28804;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8254c670
	if (!cr6.gt) goto loc_8254C670;
loc_8254C658:
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
	// bgt cr6,0x8254c658
	if (cr6.gt) goto loc_8254C658;
loc_8254C670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254C680"))) PPC_WEAK_FUNC(sub_8254C680);
PPC_FUNC_IMPL(__imp__sub_8254C680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C684"))) PPC_WEAK_FUNC(sub_8254C684);
PPC_FUNC_IMPL(__imp__sub_8254C684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C688"))) PPC_WEAK_FUNC(sub_8254C688);
PPC_FUNC_IMPL(__imp__sub_8254C688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// divw r10,r7,r9
	ctx.r10.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x8254c70c
	if (!cr6.lt) goto loc_8254C70C;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8254C6B8:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r7,r11,24
	ctx.r7.s64 = r11.s64 + 24;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lbz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// stb r6,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r6.u8);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x8254c6b8
	if (cr6.lt) goto loc_8254C6B8;
loc_8254C70C:
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_8254C71C"))) PPC_WEAK_FUNC(sub_8254C71C);
PPC_FUNC_IMPL(__imp__sub_8254C71C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C720"))) PPC_WEAK_FUNC(sub_8254C720);
PPC_FUNC_IMPL(__imp__sub_8254C720) {
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
	// addi r9,r11,-28792
	ctx.r9.s64 = r11.s64 + -28792;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8254c764
	if (!cr6.gt) goto loc_8254C764;
loc_8254C74C:
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
	// bgt cr6,0x8254c74c
	if (cr6.gt) goto loc_8254C74C;
loc_8254C764:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254c77c
	if (cr6.eq) goto loc_8254C77C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254C77C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254C78C"))) PPC_WEAK_FUNC(sub_8254C78C);
PPC_FUNC_IMPL(__imp__sub_8254C78C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C790"))) PPC_WEAK_FUNC(sub_8254C790);
PPC_FUNC_IMPL(__imp__sub_8254C790) {
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
	// bl 0x8254c5f0
	sub_8254C5F0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254c7c8
	if (cr6.eq) goto loc_8254C7C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254C7C8:
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

__attribute__((alias("__imp__sub_8254C7DC"))) PPC_WEAK_FUNC(sub_8254C7DC);
PPC_FUNC_IMPL(__imp__sub_8254C7DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C7E0"))) PPC_WEAK_FUNC(sub_8254C7E0);
PPC_FUNC_IMPL(__imp__sub_8254C7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-28640
	ctx.r9.s64 = r11.s64 + -28640;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8254c810
	if (!cr6.gt) goto loc_8254C810;
loc_8254C7F8:
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
	// bgt cr6,0x8254c7f8
	if (cr6.gt) goto loc_8254C7F8;
loc_8254C810:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-28792
	ctx.r9.s64 = r11.s64 + -28792;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8254C828:
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
	// bgt cr6,0x8254c828
	if (cr6.gt) goto loc_8254C828;
}

__attribute__((alias("__imp__sub_8254C840"))) PPC_WEAK_FUNC(sub_8254C840);
PPC_FUNC_IMPL(__imp__sub_8254C840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C844"))) PPC_WEAK_FUNC(sub_8254C844);
PPC_FUNC_IMPL(__imp__sub_8254C844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C848"))) PPC_WEAK_FUNC(sub_8254C848);
PPC_FUNC_IMPL(__imp__sub_8254C848) {
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
	// ble cr6,0x8254c888
	if (!cr6.gt) goto loc_8254C888;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8254C888:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8254c8ec
	if (cr0.eq) goto loc_8254C8EC;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lbz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r7,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r7.u8);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r4,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
loc_8254C8EC:
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

__attribute__((alias("__imp__sub_8254C900"))) PPC_WEAK_FUNC(sub_8254C900);
PPC_FUNC_IMPL(__imp__sub_8254C900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C904"))) PPC_WEAK_FUNC(sub_8254C904);
PPC_FUNC_IMPL(__imp__sub_8254C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C908"))) PPC_WEAK_FUNC(sub_8254C908);
PPC_FUNC_IMPL(__imp__sub_8254C908) {
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
	// bl 0x8254c7e0
	sub_8254C7E0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254c940
	if (cr6.eq) goto loc_8254C940;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254C940:
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

__attribute__((alias("__imp__sub_8254C954"))) PPC_WEAK_FUNC(sub_8254C954);
PPC_FUNC_IMPL(__imp__sub_8254C954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C958"))) PPC_WEAK_FUNC(sub_8254C958);
PPC_FUNC_IMPL(__imp__sub_8254C958) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254c990
	if (!cr6.gt) goto loc_8254C990;
loc_8254C978:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8254c978
	if (cr6.gt) goto loc_8254C978;
loc_8254C990:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8254c9b4
	if (!cr6.gt) goto loc_8254C9B4;
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
loc_8254C9B4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8254ca04
	if (cr6.eq) goto loc_8254CA04;
loc_8254C9D4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254c848
	sub_8254C848(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8254c9d4
	if (!cr6.eq) goto loc_8254C9D4;
loc_8254CA04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254CA08"))) PPC_WEAK_FUNC(sub_8254CA08);
PPC_FUNC_IMPL(__imp__sub_8254CA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254CA0C"))) PPC_WEAK_FUNC(sub_8254CA0C);
PPC_FUNC_IMPL(__imp__sub_8254CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CA10"))) PPC_WEAK_FUNC(sub_8254CA10);
PPC_FUNC_IMPL(__imp__sub_8254CA10) {
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
	// bl 0x8254b010
	sub_8254B010(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254ca48
	if (cr6.eq) goto loc_8254CA48;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254CA48:
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

__attribute__((alias("__imp__sub_8254CA5C"))) PPC_WEAK_FUNC(sub_8254CA5C);
PPC_FUNC_IMPL(__imp__sub_8254CA5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CA60"))) PPC_WEAK_FUNC(sub_8254CA60);
PPC_FUNC_IMPL(__imp__sub_8254CA60) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,156
	ctx.r9.s64 = 156;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// divw r30,r8,r9
	r30.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// bge cr6,0x8254cae0
	if (!cr6.lt) goto loc_8254CAE0;
	// mulli r29,r30,156
	r29.s64 = r30.s64 * 156;
loc_8254CA98:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r10,r11,156
	ctx.r10.s64 = r11.s64 + 156;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lbz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 160);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// lwz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// bl 0x8254c480
	sub_8254C480(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// addi r29,r29,156
	r29.s64 = r29.s64 + 156;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// blt cr6,0x8254ca98
	if (cr6.lt) goto loc_8254CA98;
loc_8254CAE0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,156
	r11.s64 = r11.s64 * 156;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
	// lwz r10,-156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -156);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254CB1C"))) PPC_WEAK_FUNC(sub_8254CB1C);
PPC_FUNC_IMPL(__imp__sub_8254CB1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8254CB20"))) PPC_WEAK_FUNC(sub_8254CB20);
PPC_FUNC_IMPL(__imp__sub_8254CB20) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r11,-28616
	ctx.r10.s64 = r11.s64 + -28616;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r6,r9,-28640
	ctx.r6.s64 = ctx.r9.s64 + -28640;
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// stb r7,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r7.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x8254c480
	sub_8254C480(ctx, base);
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

__attribute__((alias("__imp__sub_8254CBA4"))) PPC_WEAK_FUNC(sub_8254CBA4);
PPC_FUNC_IMPL(__imp__sub_8254CBA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CBA8"))) PPC_WEAK_FUNC(sub_8254CBA8);
PPC_FUNC_IMPL(__imp__sub_8254CBA8) {
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
	// bl 0x8254d068
	sub_8254D068(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254cbe0
	if (cr6.eq) goto loc_8254CBE0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254CBE0:
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

__attribute__((alias("__imp__sub_8254CBF4"))) PPC_WEAK_FUNC(sub_8254CBF4);
PPC_FUNC_IMPL(__imp__sub_8254CBF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CBF8"))) PPC_WEAK_FUNC(sub_8254CBF8);
PPC_FUNC_IMPL(__imp__sub_8254CBF8) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254cc5c
	if (cr6.eq) goto loc_8254CC5C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-28628
	ctx.r8.s64 = ctx.r9.s64 + -28628;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// stb r6,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r6.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8254CC5C:
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

__attribute__((alias("__imp__sub_8254CC70"))) PPC_WEAK_FUNC(sub_8254CC70);
PPC_FUNC_IMPL(__imp__sub_8254CC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CC74"))) PPC_WEAK_FUNC(sub_8254CC74);
PPC_FUNC_IMPL(__imp__sub_8254CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CC78"))) PPC_WEAK_FUNC(sub_8254CC78);
PPC_FUNC_IMPL(__imp__sub_8254CC78) {
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
	// ble cr6,0x8254ccb8
	if (!cr6.gt) goto loc_8254CCB8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8254CCB8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r11,156
	ctx.r10.s64 = r11.s64 * 156;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x8254ccdc
	if (cr0.eq) goto loc_8254CCDC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8254cb20
	sub_8254CB20(ctx, base);
loc_8254CCDC:
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

__attribute__((alias("__imp__sub_8254CCF0"))) PPC_WEAK_FUNC(sub_8254CCF0);
PPC_FUNC_IMPL(__imp__sub_8254CCF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CCF4"))) PPC_WEAK_FUNC(sub_8254CCF4);
PPC_FUNC_IMPL(__imp__sub_8254CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CCF8"))) PPC_WEAK_FUNC(sub_8254CCF8);
PPC_FUNC_IMPL(__imp__sub_8254CCF8) {
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
	// beq cr6,0x8254cddc
	if (cr6.eq) goto loc_8254CDDC;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254cd6c
	if (!cr6.eq) goto loc_8254CD6C;
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
	// beq cr6,0x8254cddc
	if (cr6.eq) goto loc_8254CDDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82307020
	sub_82307020(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8254cddc
	goto loc_8254CDDC;
loc_8254CD6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c590
	sub_8254C590(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8254cd98
	if (!cr6.gt) goto loc_8254CD98;
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
loc_8254CD98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c958
	sub_8254C958(ctx, base);
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
	// bl 0x8254c5f0
	sub_8254C5F0(ctx, base);
loc_8254CDDC:
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

__attribute__((alias("__imp__sub_8254CDF0"))) PPC_WEAK_FUNC(sub_8254CDF0);
PPC_FUNC_IMPL(__imp__sub_8254CDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CDF4"))) PPC_WEAK_FUNC(sub_8254CDF4);
PPC_FUNC_IMPL(__imp__sub_8254CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CDF8"))) PPC_WEAK_FUNC(sub_8254CDF8);
PPC_FUNC_IMPL(__imp__sub_8254CDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,2
	r11.s64 = 2;
	// bne cr6,0x8254ce0c
	if (!cr6.eq) goto loc_8254CE0C;
	// li r11,0
	r11.s64 = 0;
loc_8254CE0C:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_8254CE10"))) PPC_WEAK_FUNC(sub_8254CE10);
PPC_FUNC_IMPL(__imp__sub_8254CE10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CE14"))) PPC_WEAK_FUNC(sub_8254CE14);
PPC_FUNC_IMPL(__imp__sub_8254CE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CE18"))) PPC_WEAK_FUNC(sub_8254CE18);
PPC_FUNC_IMPL(__imp__sub_8254CE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CE24"))) PPC_WEAK_FUNC(sub_8254CE24);
PPC_FUNC_IMPL(__imp__sub_8254CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CE28"))) PPC_WEAK_FUNC(sub_8254CE28);
PPC_FUNC_IMPL(__imp__sub_8254CE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CE2C"))) PPC_WEAK_FUNC(sub_8254CE2C);
PPC_FUNC_IMPL(__imp__sub_8254CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CE30"))) PPC_WEAK_FUNC(sub_8254CE30);
PPC_FUNC_IMPL(__imp__sub_8254CE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_8254CE34"))) PPC_WEAK_FUNC(sub_8254CE34);
PPC_FUNC_IMPL(__imp__sub_8254CE34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CE38"))) PPC_WEAK_FUNC(sub_8254CE38);
PPC_FUNC_IMPL(__imp__sub_8254CE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8245fc58
	sub_8245FC58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254CE6C"))) PPC_WEAK_FUNC(sub_8254CE6C);
PPC_FUNC_IMPL(__imp__sub_8254CE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CE70"))) PPC_WEAK_FUNC(sub_8254CE70);
PPC_FUNC_IMPL(__imp__sub_8254CE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8254CE9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8254ceb8
	if (cr6.eq) goto loc_8254CEB8;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8254ce9c
	if (!cr6.eq) goto loc_8254CE9C;
	// blr 
	return;
loc_8254CEB8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x823b87f0
	sub_823B87F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254CEC0"))) PPC_WEAK_FUNC(sub_8254CEC0);
PPC_FUNC_IMPL(__imp__sub_8254CEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8254CED8:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x8254cef0
	if (!cr6.eq) goto loc_8254CEF0;
	// stb r8,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r8.u8);
loc_8254CEF0:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8254ced8
	if (cr6.lt) goto loc_8254CED8;
}

__attribute__((alias("__imp__sub_8254CF04"))) PPC_WEAK_FUNC(sub_8254CF04);
PPC_FUNC_IMPL(__imp__sub_8254CF04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CF08"))) PPC_WEAK_FUNC(sub_8254CF08);
PPC_FUNC_IMPL(__imp__sub_8254CF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8254cf30
	if (!cr6.lt) goto loc_8254CF30;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
loc_8254CF30:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_8254CF34"))) PPC_WEAK_FUNC(sub_8254CF34);
PPC_FUNC_IMPL(__imp__sub_8254CF34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CF38"))) PPC_WEAK_FUNC(sub_8254CF38);
PPC_FUNC_IMPL(__imp__sub_8254CF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8254cf5c
	if (!cr6.lt) goto loc_8254CF5C;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
loc_8254CF5C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8254CF60"))) PPC_WEAK_FUNC(sub_8254CF60);
PPC_FUNC_IMPL(__imp__sub_8254CF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CF64"))) PPC_WEAK_FUNC(sub_8254CF64);
PPC_FUNC_IMPL(__imp__sub_8254CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CF68"))) PPC_WEAK_FUNC(sub_8254CF68);
PPC_FUNC_IMPL(__imp__sub_8254CF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r11,0
	r11.s64 = 0;
loc_8254CF88:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x8254cfa8
	if (cr6.eq) goto loc_8254CFA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8254cf88
	if (cr6.lt) goto loc_8254CF88;
	// blr 
	return;
loc_8254CFA8:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8254CFAC"))) PPC_WEAK_FUNC(sub_8254CFAC);
PPC_FUNC_IMPL(__imp__sub_8254CFAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CFB0"))) PPC_WEAK_FUNC(sub_8254CFB0);
PPC_FUNC_IMPL(__imp__sub_8254CFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8254d00c
	if (cr6.eq) goto loc_8254D00C;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
loc_8254CFE0:
	// lbz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254d004
	if (cr6.eq) goto loc_8254D004;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// blt cr6,0x8254cfe0
	if (cr6.lt) goto loc_8254CFE0;
	// blr 
	return;
loc_8254D004:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8254D00C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8254D010"))) PPC_WEAK_FUNC(sub_8254D010);
PPC_FUNC_IMPL(__imp__sub_8254D010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D014"))) PPC_WEAK_FUNC(sub_8254D014);
PPC_FUNC_IMPL(__imp__sub_8254D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D018"))) PPC_WEAK_FUNC(sub_8254D018);
PPC_FUNC_IMPL(__imp__sub_8254D018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,-28616
	ctx.r8.s64 = r11.s64 + -28616;
	// li r11,1
	r11.s64 = 1;
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r7,r9,-28640
	ctx.r7.s64 = ctx.r9.s64 + -28640;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_8254D064"))) PPC_WEAK_FUNC(sub_8254D064);
PPC_FUNC_IMPL(__imp__sub_8254D064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D068"))) PPC_WEAK_FUNC(sub_8254D068);
PPC_FUNC_IMPL(__imp__sub_8254D068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-28616
	ctx.r9.s64 = ctx.r10.s64 + -28616;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8254D07C"))) PPC_WEAK_FUNC(sub_8254D07C);
PPC_FUNC_IMPL(__imp__sub_8254D07C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254c7e0
	sub_8254C7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D080"))) PPC_WEAK_FUNC(sub_8254D080);
PPC_FUNC_IMPL(__imp__sub_8254D080) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x8254d104
	if (cr6.gt) goto loc_8254D104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8254d0fc
	if (cr6.eq) goto loc_8254D0FC;
	// bdz 0x8254d104
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8254D104;
	// bdz 0x8254d0b8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8254D0B8;
	// bdz 0x8254d0d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8254D0D0;
	// b 0x8254d0fc
	goto loc_8254D0FC;
loc_8254D0B8:
	// li r11,3
	r11.s64 = 3;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8254D0D0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8254cfb0
	sub_8254CFB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254d104
	if (cr6.eq) goto loc_8254D104;
	// li r11,4
	r11.s64 = 4;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8254D0FC:
	// li r11,5
	r11.s64 = 5;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
loc_8254D104:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254D110"))) PPC_WEAK_FUNC(sub_8254D110);
PPC_FUNC_IMPL(__imp__sub_8254D110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D114"))) PPC_WEAK_FUNC(sub_8254D114);
PPC_FUNC_IMPL(__imp__sub_8254D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D118"))) PPC_WEAK_FUNC(sub_8254D118);
PPC_FUNC_IMPL(__imp__sub_8254D118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-28264
	ctx.r10.s64 = r11.s64 + -28264;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8254D124"))) PPC_WEAK_FUNC(sub_8254D124);
PPC_FUNC_IMPL(__imp__sub_8254D124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D128"))) PPC_WEAK_FUNC(sub_8254D128);
PPC_FUNC_IMPL(__imp__sub_8254D128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-28264
	ctx.r10.s64 = r11.s64 + -28264;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8254D134"))) PPC_WEAK_FUNC(sub_8254D134);
PPC_FUNC_IMPL(__imp__sub_8254D134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D138"))) PPC_WEAK_FUNC(sub_8254D138);
PPC_FUNC_IMPL(__imp__sub_8254D138) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254d170
	if (cr6.eq) goto loc_8254D170;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne cr6,0x8254d174
	if (!cr6.eq) goto loc_8254D174;
loc_8254D170:
	// li r31,0
	r31.s64 = 0;
loc_8254D174:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28256
	ctx.r4.s64 = r11.s64 + -28256;
	// bl 0x828eb9d8
	sub_828EB9D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254d1c0
	if (!cr6.eq) goto loc_8254D1C0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,27360
	ctx.r4.s64 = r11.s64 + 27360;
	// bl 0x828eb9d8
	sub_828EB9D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d1c0
	if (cr6.eq) goto loc_8254D1C0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,15
	ctx.r4.s64 = r30.s64 + 15;
	// bl 0x8255cac8
	sub_8255CAC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8254D1C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254D1C8"))) PPC_WEAK_FUNC(sub_8254D1C8);
PPC_FUNC_IMPL(__imp__sub_8254D1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8254D1CC"))) PPC_WEAK_FUNC(sub_8254D1CC);
PPC_FUNC_IMPL(__imp__sub_8254D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D1D0"))) PPC_WEAK_FUNC(sub_8254D1D0);
PPC_FUNC_IMPL(__imp__sub_8254D1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// bl 0x82882350
	sub_82882350(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// li r23,0
	r23.s64 = 0;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254d220
	if (cr6.eq) goto loc_8254D220;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254d224
	if (!cr6.eq) goto loc_8254D224;
loc_8254D220:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8254D224:
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r22,16(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r23.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r23.u8);
	// addi r25,r11,13435
	r25.s64 = r11.s64 + 13435;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// li r28,-2
	r28.s64 = -2;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// li r24,1
	r24.s64 = 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8254D26C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8254d26c
	if (!cr6.eq) goto loc_8254D26C;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254d480
	if (cr6.eq) goto loc_8254D480;
loc_8254D290:
	// lbzx r4,r27,r26
	ctx.r4.u64 = PPC_LOAD_U8(r27.u32 + r26.u32);
	// cmplwi cr6,r4,58
	cr6.compare<uint32_t>(ctx.r4.u32, 58, xer);
	// beq cr6,0x8254d2a8
	if (cr6.eq) goto loc_8254D2A8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8254d980
	sub_8254D980(ctx, base);
	// b 0x8254d450
	goto loc_8254D450;
loc_8254D2A8:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bne cr6,0x8254d3b0
	if (!cr6.eq) goto loc_8254D3B0;
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8254d2cc
	if (!cr6.lt) goto loc_8254D2CC;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
loc_8254D2CC:
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x8254d344
	if (cr6.eq) goto loc_8254D344;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x8254d348
	goto loc_8254D348;
loc_8254D344:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_8254D348:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8254d868
	sub_8254D868(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254d8f8
	sub_8254D8F8(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d37c
	if (cr6.eq) goto loc_8254D37C;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d37c
	if (cr6.eq) goto loc_8254D37C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D37C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8254d390
	if (cr6.eq) goto loc_8254D390;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8254D390:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d440
	if (cr6.eq) goto loc_8254D440;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d440
	if (cr6.eq) goto loc_8254D440;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
	// b 0x8254d440
	goto loc_8254D440;
loc_8254D3B0:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8254d3bc
	if (!cr6.lt) goto loc_8254D3BC;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
loc_8254D3BC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x8254d3f4
	if (cr6.eq) goto loc_8254D3F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x8254d3f8
	goto loc_8254D3F8;
loc_8254D3F4:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_8254D3F8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254d868
	sub_8254D868(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254d8f8
	sub_8254D8F8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d42c
	if (cr6.eq) goto loc_8254D42C;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d42c
	if (cr6.eq) goto loc_8254D42C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D42C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8254d440
	if (cr6.eq) goto loc_8254D440;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8254D440:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
loc_8254D450:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8254D458:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254d458
	if (!cr6.eq) goto loc_8254D458;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// blt cr6,0x8254d290
	if (cr6.lt) goto loc_8254D290;
loc_8254D480:
	// clrlwi r26,r24,24
	r26.u64 = r24.u32 & 0xFF;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x8254d5dc
	if (!cr6.eq) goto loc_8254D5DC;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8254d4a0
	if (!cr6.lt) goto loc_8254D4A0;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
loc_8254D4A0:
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq cr6,0x8254d518
	if (cr6.eq) goto loc_8254D518;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x8254d51c
	goto loc_8254D51C;
loc_8254D518:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_8254D51C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254d868
	sub_8254D868(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254d554
	if (cr6.eq) goto loc_8254D554;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
loc_8254D554:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x8254d57c
	if (cr6.eq) goto loc_8254D57C;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d57c
	if (cr6.eq) goto loc_8254D57C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D57C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254d598
	if (cr6.eq) goto loc_8254D598;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// beq cr6,0x8254d598
	if (cr6.eq) goto loc_8254D598;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D598:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8254d5ac
	if (cr6.eq) goto loc_8254D5AC;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8254D5AC:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d5c8
	if (cr6.eq) goto loc_8254D5C8;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d5c8
	if (cr6.eq) goto loc_8254D5C8;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D5C8:
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// b 0x8254d6c0
	goto loc_8254D6C0;
loc_8254D5DC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8254d5e8
	if (!cr6.lt) goto loc_8254D5E8;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
loc_8254D5E8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq cr6,0x8254d620
	if (cr6.eq) goto loc_8254D620;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x8254d624
	goto loc_8254D624;
loc_8254D620:
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
loc_8254D624:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254d868
	sub_8254D868(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254d670
	if (cr6.eq) goto loc_8254D670;
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// beq cr6,0x8254d670
	if (cr6.eq) goto loc_8254D670;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D670:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8254d684
	if (cr6.eq) goto loc_8254D684;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8254D684:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254d6c0
	if (cr6.eq) goto loc_8254D6C0;
	// cmpwi cr6,r28,-2
	cr6.compare<int32_t>(r28.s32, -2, xer);
	// beq cr6,0x8254d6c0
	if (cr6.eq) goto loc_8254D6C0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D6C0:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8254d754
	if (!cr6.gt) goto loc_8254D754;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8254D6CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828823a0
	sub_828823A0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8254d720
	if (cr6.eq) goto loc_8254D720;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8254d708
	if (cr6.eq) goto loc_8254D708;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8254d740
	if (!cr6.eq) goto loc_8254D740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x828823b8
	sub_828823B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// b 0x8254d740
	goto loc_8254D740;
loc_8254D708:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x828823b0
	sub_828823B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// b 0x8254d740
	goto loc_8254D740;
loc_8254D720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x828823a8
	sub_828823A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
loc_8254D740:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828823d0
	sub_828823D0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// bne 0x8254d6cc
	if (!cr0.eq) goto loc_8254D6CC;
loc_8254D754:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8254d760
	if (!cr6.eq) goto loc_8254D760;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_8254D760:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x826ad4f0
	sub_826AD4F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// beq cr6,0x8254d788
	if (cr6.eq) goto loc_8254D788;
	// bl 0x827445f8
	sub_827445F8(ctx, base);
	// b 0x8254d818
	goto loc_8254D818;
loc_8254D788:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x8254d810
	if (cr6.gt) goto loc_8254D810;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254d810
	if (cr6.eq) goto loc_8254D810;
	// bdz 0x8254d7b4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8254D7B4;
	// bdz 0x8254d810
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8254D810;
	// bdz 0x8254d7d8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8254D7D8;
	// b 0x8254d7f0
	goto loc_8254D7F0;
loc_8254D7B4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82882438
	sub_82882438(ctx, base);
	// b 0x8254d818
	goto loc_8254D818;
loc_8254D7D8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82882458
	sub_82882458(ctx, base);
	// b 0x8254d818
	goto loc_8254D818;
loc_8254D7F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826ac708
	sub_826AC708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82882478
	sub_82882478(ctx, base);
	// b 0x8254d818
	goto loc_8254D818;
loc_8254D810:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82882468
	sub_82882468(ctx, base);
loc_8254D818:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d840
	if (cr6.eq) goto loc_8254D840;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d840
	if (cr6.eq) goto loc_8254D840;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D840:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254d854
	if (cr6.lt) goto loc_8254D854;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8254D854:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_8254D864"))) PPC_WEAK_FUNC(sub_8254D864);
PPC_FUNC_IMPL(__imp__sub_8254D864) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8254D868"))) PPC_WEAK_FUNC(sub_8254D868);
PPC_FUNC_IMPL(__imp__sub_8254D868) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826acda8
	sub_826ACDA8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826ac0a0
	sub_826AC0A0(ctx, base);
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254D8F4"))) PPC_WEAK_FUNC(sub_8254D8F4);
PPC_FUNC_IMPL(__imp__sub_8254D8F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254D8F8"))) PPC_WEAK_FUNC(sub_8254D8F8);
PPC_FUNC_IMPL(__imp__sub_8254D8F8) {
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
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8254d93c
	if (cr6.eq) goto loc_8254D93C;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
loc_8254D93C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8254d964
	if (cr6.eq) goto loc_8254D964;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254d964
	if (cr6.eq) goto loc_8254D964;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254D964:
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

__attribute__((alias("__imp__sub_8254D97C"))) PPC_WEAK_FUNC(sub_8254D97C);
PPC_FUNC_IMPL(__imp__sub_8254D97C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D980"))) PPC_WEAK_FUNC(sub_8254D980);
PPC_FUNC_IMPL(__imp__sub_8254D980) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subfic r10,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x8254d9b0
	if (cr6.gt) goto loc_8254D9B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13280
	ctx.r3.s64 = r11.s64 + 13280;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8254D9B0:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f05a0
	sub_822F05A0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254da24
	if (cr6.eq) goto loc_8254DA24;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254d9e8
	if (cr6.lt) goto loc_8254D9E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8254d9ec
	goto loc_8254D9EC;
loc_8254D9E8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8254D9EC:
	// stbx r29,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r29.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// blt cr6,0x8254da18
	if (cr6.lt) goto loc_8254DA18;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8254DA18:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, ctx.r10.u8);
loc_8254DA24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254DA2C"))) PPC_WEAK_FUNC(sub_8254DA2C);
PPC_FUNC_IMPL(__imp__sub_8254DA2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254DA30"))) PPC_WEAK_FUNC(sub_8254DA30);
PPC_FUNC_IMPL(__imp__sub_8254DA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828812a8
	sub_828812A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254DA88"))) PPC_WEAK_FUNC(sub_8254DA88);
PPC_FUNC_IMPL(__imp__sub_8254DA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DA8C"))) PPC_WEAK_FUNC(sub_8254DA8C);
PPC_FUNC_IMPL(__imp__sub_8254DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254DA90"))) PPC_WEAK_FUNC(sub_8254DA90);
PPC_FUNC_IMPL(__imp__sub_8254DA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
}

__attribute__((alias("__imp__sub_8254DA9C"))) PPC_WEAK_FUNC(sub_8254DA9C);
PPC_FUNC_IMPL(__imp__sub_8254DA9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828812c0
	sub_828812C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DAA0"))) PPC_WEAK_FUNC(sub_8254DAA0);
PPC_FUNC_IMPL(__imp__sub_8254DAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
}

__attribute__((alias("__imp__sub_8254DAAC"))) PPC_WEAK_FUNC(sub_8254DAAC);
PPC_FUNC_IMPL(__imp__sub_8254DAAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828812d8
	sub_828812D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DAB0"))) PPC_WEAK_FUNC(sub_8254DAB0);
PPC_FUNC_IMPL(__imp__sub_8254DAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,-28228
	ctx.r3.s64 = ctx.r10.s64 + -28228;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254DADC"))) PPC_WEAK_FUNC(sub_8254DADC);
PPC_FUNC_IMPL(__imp__sub_8254DADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DAE0"))) PPC_WEAK_FUNC(sub_8254DAE0);
PPC_FUNC_IMPL(__imp__sub_8254DAE0) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254db08
	if (cr6.lt) goto loc_8254DB08;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8254db0c
	goto loc_8254DB0C;
loc_8254DB08:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8254DB0C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254db1c
	if (cr6.lt) goto loc_8254DB1C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8254db20
	goto loc_8254DB20;
loc_8254DB1C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8254DB20:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8254db50
	if (cr6.eq) goto loc_8254DB50;
loc_8254DB30:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828ed508
	sub_828ED508(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8254db30
	if (!cr6.eq) goto loc_8254DB30;
loc_8254DB50:
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

__attribute__((alias("__imp__sub_8254DB64"))) PPC_WEAK_FUNC(sub_8254DB64);
PPC_FUNC_IMPL(__imp__sub_8254DB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DB68"))) PPC_WEAK_FUNC(sub_8254DB68);
PPC_FUNC_IMPL(__imp__sub_8254DB68) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254db90
	if (cr6.lt) goto loc_8254DB90;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8254db94
	goto loc_8254DB94;
loc_8254DB90:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8254DB94:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254dba4
	if (cr6.lt) goto loc_8254DBA4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8254dba8
	goto loc_8254DBA8;
loc_8254DBA4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8254DBA8:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8254dbd8
	if (cr6.eq) goto loc_8254DBD8;
loc_8254DBB8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x828e9320
	sub_828E9320(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8254dbb8
	if (!cr6.eq) goto loc_8254DBB8;
loc_8254DBD8:
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

__attribute__((alias("__imp__sub_8254DBEC"))) PPC_WEAK_FUNC(sub_8254DBEC);
PPC_FUNC_IMPL(__imp__sub_8254DBEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DBF0"))) PPC_WEAK_FUNC(sub_8254DBF0);
PPC_FUNC_IMPL(__imp__sub_8254DBF0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// beq cr6,0x8254dc38
	if (cr6.eq) goto loc_8254DC38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254dc3c
	if (!cr6.eq) goto loc_8254DC3C;
loc_8254DC38:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8254DC3C:
	// lwz r29,80(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8254dc60
	if (!cr6.eq) goto loc_8254DC60;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,-14472(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -14472);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8254dc64
	goto loc_8254DC64;
loc_8254DC60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8254DC64:
	// li r26,15
	r26.s64 = 15;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r28.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r28.u8);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r26.u32);
loc_8254DC78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254dc78
	if (!cr6.eq) goto loc_8254DC78;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8254dcbc
	if (!cr6.eq) goto loc_8254DCBC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,-14468(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -14468);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8254dcc0
	goto loc_8254DCC0;
loc_8254DCBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8254DCC0:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
loc_8254DCD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254dcd0
	if (!cr6.eq) goto loc_8254DCD0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8254dd14
	if (!cr6.eq) goto loc_8254DD14;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,-14464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -14464);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8254dd18
	goto loc_8254DD18;
loc_8254DD14:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8254DD18:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r26.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r28.u32);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r28.u8);
loc_8254DD28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254dd28
	if (!cr6.eq) goto loc_8254DD28;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,21888(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254dd68
	if (cr6.eq) goto loc_8254DD68;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8254DD68:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r11,-28152
	ctx.r5.s64 = r11.s64 + -28152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,52(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8254ddd4
	if (!cr6.lt) goto loc_8254DDD4;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
loc_8254DDD4:
	// li r30,4
	r30.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r10,-28160
	ctx.r5.s64 = ctx.r10.s64 + -28160;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x8254de24
	if (!cr6.lt) goto loc_8254DE24;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
loc_8254DE24:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254de48
	if (cr6.eq) goto loc_8254DE48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8254DE48:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r11,-28168
	ctx.r5.s64 = r11.s64 + -28168;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8254dea4
	if (cr6.eq) goto loc_8254DEA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8254DEA4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lfd f0,27392(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27392);
	// addi r5,r7,-28180
	ctx.r5.s64 = ctx.r7.s64 + -28180;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// addi r6,r11,-8
	ctx.r6.s64 = r11.s64 + -8;
	// cntlzw r11,r6
	r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r31,160(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x8254defc
	if (!cr6.lt) goto loc_8254DEFC;
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
loc_8254DEFC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254df20
	if (cr6.eq) goto loc_8254DF20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8254DF20:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r11,-28192
	ctx.r5.s64 = r11.s64 + -28192;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8254df7c
	if (cr6.eq) goto loc_8254DF7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8254DF7C:
	// li r11,2
	r11.s64 = 2;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r9,-28204
	ctx.r5.s64 = ctx.r9.s64 + -28204;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r6,r6,-20684
	ctx.r6.s64 = ctx.r6.s64 + -20684;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8254e014
	if (cr6.eq) goto loc_8254E014;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8254E014:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254e038
	if (cr6.eq) goto loc_8254E038;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_8254E038:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254e05c
	if (cr6.eq) goto loc_8254E05C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
loc_8254E05C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8254e078
	if (cr6.lt) goto loc_8254E078;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8254E078:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r26.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r28.u8);
	// blt cr6,0x8254e098
	if (cr6.lt) goto loc_8254E098;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8254E098:
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// blt cr6,0x8254e0b8
	if (cr6.lt) goto loc_8254E0B8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8254E0B8:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8254E0C4"))) PPC_WEAK_FUNC(sub_8254E0C4);
PPC_FUNC_IMPL(__imp__sub_8254E0C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8254E0C8"))) PPC_WEAK_FUNC(sub_8254E0C8);
PPC_FUNC_IMPL(__imp__sub_8254E0C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E0D0"))) PPC_WEAK_FUNC(sub_8254E0D0);
PPC_FUNC_IMPL(__imp__sub_8254E0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,25(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254e0f0
	if (cr6.eq) goto loc_8254E0F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,25(r11)
	PPC_STORE_U8(r11.u32 + 25, ctx.r10.u8);
	// blr 
	return;
loc_8254E0F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E0F8"))) PPC_WEAK_FUNC(sub_8254E0F8);
PPC_FUNC_IMPL(__imp__sub_8254E0F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,21636(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254e15c
	if (cr6.eq) goto loc_8254E15C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254e510
	sub_8254E510(ctx, base);
loc_8254E15C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254E160"))) PPC_WEAK_FUNC(sub_8254E160);
PPC_FUNC_IMPL(__imp__sub_8254E160) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254E164"))) PPC_WEAK_FUNC(sub_8254E164);
PPC_FUNC_IMPL(__imp__sub_8254E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E168"))) PPC_WEAK_FUNC(sub_8254E168);
PPC_FUNC_IMPL(__imp__sub_8254E168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r29,21636(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 21636);
loc_8254E188:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254e290
	if (cr6.eq) goto loc_8254E290;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8254e220
	if (cr6.eq) goto loc_8254E220;
loc_8254E1C8:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254e220
	if (!cr6.eq) goto loc_8254E220;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpld cr6,r9,r3
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r3.u64, xer);
	// beq cr6,0x8254e200
	if (cr6.eq) goto loc_8254E200;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254E200:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// bne cr6,0x8254e1c8
	if (!cr6.eq) goto loc_8254E1C8;
loc_8254E220:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254e290
	if (!cr6.eq) goto loc_8254E290;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x8254e270
	if (!cr6.gt) goto loc_8254E270;
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
loc_8254E270:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8254e290
	if (cr0.eq) goto loc_8254E290;
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
loc_8254E290:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x8254e188
	if (cr6.lt) goto loc_8254E188;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r10,r11,r27
	ctx.r10.s64 = r27.s64 - r11.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254E2B0"))) PPC_WEAK_FUNC(sub_8254E2B0);
PPC_FUNC_IMPL(__imp__sub_8254E2B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254E2B4"))) PPC_WEAK_FUNC(sub_8254E2B4);
PPC_FUNC_IMPL(__imp__sub_8254E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E2B8"))) PPC_WEAK_FUNC(sub_8254E2B8);
PPC_FUNC_IMPL(__imp__sub_8254E2B8) {
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
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254e2f0
	if (cr6.eq) goto loc_8254E2F0;
	// bl 0x8254e168
	sub_8254E168(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254e2f0
	if (cr6.eq) goto loc_8254E2F0;
	// li r11,1
	r11.s64 = 1;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
loc_8254E2F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254E300"))) PPC_WEAK_FUNC(sub_8254E300);
PPC_FUNC_IMPL(__imp__sub_8254E300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E304"))) PPC_WEAK_FUNC(sub_8254E304);
PPC_FUNC_IMPL(__imp__sub_8254E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E308"))) PPC_WEAK_FUNC(sub_8254E308);
PPC_FUNC_IMPL(__imp__sub_8254E308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254e32c
	if (!cr6.gt) goto loc_8254E32C;
loc_8254E314:
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
	// bgt cr6,0x8254e314
	if (cr6.gt) goto loc_8254E314;
loc_8254E32C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E338"))) PPC_WEAK_FUNC(sub_8254E338);
PPC_FUNC_IMPL(__imp__sub_8254E338) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-28120
	ctx.r10.s64 = r11.s64 + -28120;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stb r30,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r30.u8);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x8254e3b4
	if (!cr6.gt) goto loc_8254E3B4;
loc_8254E39C:
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
	// bgt cr6,0x8254e39c
	if (cr6.gt) goto loc_8254E39C;
loc_8254E3B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r30.u8);
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

__attribute__((alias("__imp__sub_8254E3D0"))) PPC_WEAK_FUNC(sub_8254E3D0);
PPC_FUNC_IMPL(__imp__sub_8254E3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E3D4"))) PPC_WEAK_FUNC(sub_8254E3D4);
PPC_FUNC_IMPL(__imp__sub_8254E3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E3D8"))) PPC_WEAK_FUNC(sub_8254E3D8);
PPC_FUNC_IMPL(__imp__sub_8254E3D8) {
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
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254e45c
	if (cr6.eq) goto loc_8254E45C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// stb r30,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8254e428
	if (!cr6.gt) goto loc_8254E428;
loc_8254E410:
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
	// bgt cr6,0x8254e410
	if (cr6.gt) goto loc_8254E410;
loc_8254E428:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stb r30,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r30.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254e44c
	if (cr6.eq) goto loc_8254E44C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254e450
	if (!cr6.eq) goto loc_8254E450;
loc_8254E44C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8254E450:
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8253b6f8
	sub_8253B6F8(ctx, base);
loc_8254E45C:
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

__attribute__((alias("__imp__sub_8254E470"))) PPC_WEAK_FUNC(sub_8254E470);
PPC_FUNC_IMPL(__imp__sub_8254E470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E474"))) PPC_WEAK_FUNC(sub_8254E474);
PPC_FUNC_IMPL(__imp__sub_8254E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E478"))) PPC_WEAK_FUNC(sub_8254E478);
PPC_FUNC_IMPL(__imp__sub_8254E478) {
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
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254e4f0
	if (!cr6.eq) goto loc_8254E4F0;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-7496
	ctx.r8.s64 = ctx.r10.s64 + -7496;
	// stb r9,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r9.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x8254e4cc
	if (cr6.eq) goto loc_8254E4CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254e4d0
	if (!cr6.eq) goto loc_8254E4D0;
loc_8254E4CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254E4D0:
	// li r6,50
	ctx.r6.s64 = 50;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// bl 0x8253b860
	sub_8253B860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254e168
	sub_8254E168(ctx, base);
	// stb r3,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r3.u8);
loc_8254E4F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254E500"))) PPC_WEAK_FUNC(sub_8254E500);
PPC_FUNC_IMPL(__imp__sub_8254E500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E504"))) PPC_WEAK_FUNC(sub_8254E504);
PPC_FUNC_IMPL(__imp__sub_8254E504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E508"))) PPC_WEAK_FUNC(sub_8254E508);
PPC_FUNC_IMPL(__imp__sub_8254E508) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8254E508"))) PPC_WEAK_FUNC(sub_8254E508);
PPC_FUNC_IMPL(__imp__sub_8254E508) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254e830
	sub_8254E830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E50C"))) PPC_WEAK_FUNC(sub_8254E50C);
PPC_FUNC_IMPL(__imp__sub_8254E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E510"))) PPC_WEAK_FUNC(sub_8254E510);
PPC_FUNC_IMPL(__imp__sub_8254E510) {
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
	// ble cr6,0x8254e550
	if (!cr6.gt) goto loc_8254E550;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8254E550:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8254e574
	if (cr0.eq) goto loc_8254E574;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_8254E574:
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

__attribute__((alias("__imp__sub_8254E588"))) PPC_WEAK_FUNC(sub_8254E588);
PPC_FUNC_IMPL(__imp__sub_8254E588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E58C"))) PPC_WEAK_FUNC(sub_8254E58C);
PPC_FUNC_IMPL(__imp__sub_8254E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E590"))) PPC_WEAK_FUNC(sub_8254E590);
PPC_FUNC_IMPL(__imp__sub_8254E590) {
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
	// ble cr6,0x8254e5c8
	if (!cr6.gt) goto loc_8254E5C8;
loc_8254E5B0:
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
	// bgt cr6,0x8254e5b0
	if (cr6.gt) goto loc_8254E5B0;
loc_8254E5C8:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8254e5ec
	if (!cr6.gt) goto loc_8254E5EC;
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
loc_8254E5EC:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8254e670
	if (cr6.eq) goto loc_8254E670;
loc_8254E608:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8254e630
	if (!cr6.gt) goto loc_8254E630;
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
loc_8254E630:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8254e654
	if (cr0.eq) goto loc_8254E654;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_8254E654:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8254e608
	if (!cr6.eq) goto loc_8254E608;
loc_8254E670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254E674"))) PPC_WEAK_FUNC(sub_8254E674);
PPC_FUNC_IMPL(__imp__sub_8254E674) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254E678"))) PPC_WEAK_FUNC(sub_8254E678);
PPC_FUNC_IMPL(__imp__sub_8254E678) {
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
	// addi r9,r11,-28132
	ctx.r9.s64 = r11.s64 + -28132;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8254e6bc
	if (!cr6.gt) goto loc_8254E6BC;
loc_8254E6A4:
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
	// bgt cr6,0x8254e6a4
	if (cr6.gt) goto loc_8254E6A4;
loc_8254E6BC:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254e6d4
	if (cr6.eq) goto loc_8254E6D4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254E6D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254E6E4"))) PPC_WEAK_FUNC(sub_8254E6E4);
PPC_FUNC_IMPL(__imp__sub_8254E6E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E6E8"))) PPC_WEAK_FUNC(sub_8254E6E8);
PPC_FUNC_IMPL(__imp__sub_8254E6E8) {
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
	// addi r9,r10,-28120
	ctx.r9.s64 = ctx.r10.s64 + -28120;
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

__attribute__((alias("__imp__sub_8254E740"))) PPC_WEAK_FUNC(sub_8254E740);
PPC_FUNC_IMPL(__imp__sub_8254E740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E744"))) PPC_WEAK_FUNC(sub_8254E744);
PPC_FUNC_IMPL(__imp__sub_8254E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E748"))) PPC_WEAK_FUNC(sub_8254E748);
PPC_FUNC_IMPL(__imp__sub_8254E748) {
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
	// addi r9,r11,-28120
	ctx.r9.s64 = r11.s64 + -28120;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8254e78c
	if (!cr6.gt) goto loc_8254E78C;
loc_8254E774:
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
	// bgt cr6,0x8254e774
	if (cr6.gt) goto loc_8254E774;
loc_8254E78C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254e830
	sub_8254E830(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-28132
	ctx.r10.s64 = r11.s64 + -28132;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8254e7c8
	if (!cr6.gt) goto loc_8254E7C8;
loc_8254E7B0:
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
	// bgt cr6,0x8254e7b0
	if (cr6.gt) goto loc_8254E7B0;
loc_8254E7C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254E7D8"))) PPC_WEAK_FUNC(sub_8254E7D8);
PPC_FUNC_IMPL(__imp__sub_8254E7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E7DC"))) PPC_WEAK_FUNC(sub_8254E7DC);
PPC_FUNC_IMPL(__imp__sub_8254E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E7E0"))) PPC_WEAK_FUNC(sub_8254E7E0);
PPC_FUNC_IMPL(__imp__sub_8254E7E0) {
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
	// bl 0x8254e748
	sub_8254E748(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254e818
	if (cr6.eq) goto loc_8254E818;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8254E818:
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

__attribute__((alias("__imp__sub_8254E82C"))) PPC_WEAK_FUNC(sub_8254E82C);
PPC_FUNC_IMPL(__imp__sub_8254E82C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E830"))) PPC_WEAK_FUNC(sub_8254E830);
PPC_FUNC_IMPL(__imp__sub_8254E830) {
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
	// beq cr6,0x8254e914
	if (cr6.eq) goto loc_8254E914;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254e8a4
	if (!cr6.eq) goto loc_8254E8A4;
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
	// beq cr6,0x8254e914
	if (cr6.eq) goto loc_8254E914;
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
	// b 0x8254e914
	goto loc_8254E914;
loc_8254E8A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254e6e8
	sub_8254E6E8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8254e8d0
	if (!cr6.gt) goto loc_8254E8D0;
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
loc_8254E8D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254e590
	sub_8254E590(ctx, base);
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
	// bl 0x8254e748
	sub_8254E748(ctx, base);
loc_8254E914:
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

__attribute__((alias("__imp__sub_8254E928"))) PPC_WEAK_FUNC(sub_8254E928);
PPC_FUNC_IMPL(__imp__sub_8254E928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E92C"))) PPC_WEAK_FUNC(sub_8254E92C);
PPC_FUNC_IMPL(__imp__sub_8254E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E930"))) PPC_WEAK_FUNC(sub_8254E930);
PPC_FUNC_IMPL(__imp__sub_8254E930) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8254e9a4
	if (!cr6.eq) goto loc_8254E9A4;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8254e9a4
	if (cr6.eq) goto loc_8254E9A4;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254e984
	if (cr6.eq) goto loc_8254E984;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254e988
	if (!cr6.eq) goto loc_8254E988;
loc_8254E984:
	// li r11,0
	r11.s64 = 0;
loc_8254E988:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x8251a798
	sub_8251A798(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r11.u8);
	// stb r10,56(r31)
	PPC_STORE_U8(r31.u32 + 56, ctx.r10.u8);
loc_8254E9A4:
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

__attribute__((alias("__imp__sub_8254E9B8"))) PPC_WEAK_FUNC(sub_8254E9B8);
PPC_FUNC_IMPL(__imp__sub_8254E9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E9BC"))) PPC_WEAK_FUNC(sub_8254E9BC);
PPC_FUNC_IMPL(__imp__sub_8254E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E9C0"))) PPC_WEAK_FUNC(sub_8254E9C0);
PPC_FUNC_IMPL(__imp__sub_8254E9C0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254e9f0
	if (cr6.eq) goto loc_8254E9F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254e9f4
	if (!cr6.eq) goto loc_8254E9F4;
loc_8254E9F0:
	// li r11,0
	r11.s64 = 0;
loc_8254E9F4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20372);
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
	// bne cr6,0x8254ea4c
	if (!cr6.eq) goto loc_8254EA4C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254ea4c
	if (!cr6.eq) goto loc_8254EA4C;
	// lwz r11,20372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20372);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8254EA4C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8254EA60"))) PPC_WEAK_FUNC(sub_8254EA60);
PPC_FUNC_IMPL(__imp__sub_8254EA60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254EA64"))) PPC_WEAK_FUNC(sub_8254EA64);
PPC_FUNC_IMPL(__imp__sub_8254EA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EA68"))) PPC_WEAK_FUNC(sub_8254EA68);
PPC_FUNC_IMPL(__imp__sub_8254EA68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// stb r29,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r29.u8);
	// stb r29,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r29.u8);
	// addi r28,r11,-5840
	r28.s64 = r11.s64 + -5840;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254eabc
	if (cr6.eq) goto loc_8254EABC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254eabc
	if (cr6.eq) goto loc_8254EABC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8254EABC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,12904
	ctx.r3.s64 = ctx.r10.s64 + 12904;
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
	// lwz r11,20372(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20372);
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8254EB10"))) PPC_WEAK_FUNC(sub_8254EB10);
PPC_FUNC_IMPL(__imp__sub_8254EB10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8254EB14"))) PPC_WEAK_FUNC(sub_8254EB14);
PPC_FUNC_IMPL(__imp__sub_8254EB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EB18"))) PPC_WEAK_FUNC(sub_8254EB18);
PPC_FUNC_IMPL(__imp__sub_8254EB18) {
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
	// lbz r11,57(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254eba8
	if (cr6.eq) goto loc_8254EBA8;
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254eba8
	if (cr6.eq) goto loc_8254EBA8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,20368(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20368);
	// lwz r3,20992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8254ec40
	sub_8254EC40(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254eb94
	if (cr6.eq) goto loc_8254EB94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254eb98
	if (!cr6.eq) goto loc_8254EB98;
loc_8254EB94:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8254EB98:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x8251af68
	sub_8251AF68(ctx, base);
	// stb r31,56(r30)
	PPC_STORE_U8(r30.u32 + 56, r31.u8);
	// stb r31,57(r30)
	PPC_STORE_U8(r30.u32 + 57, r31.u8);
loc_8254EBA8:
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

__attribute__((alias("__imp__sub_8254EBBC"))) PPC_WEAK_FUNC(sub_8254EBBC);
PPC_FUNC_IMPL(__imp__sub_8254EBBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EBC0"))) PPC_WEAK_FUNC(sub_8254EBC0);
PPC_FUNC_IMPL(__imp__sub_8254EBC0) {
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
	// lbz r11,57(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254ec18
	if (cr6.eq) goto loc_8254EC18;
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254ec18
	if (!cr6.eq) goto loc_8254EC18;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ec08
	if (cr6.eq) goto loc_8254EC08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ec0c
	if (!cr6.eq) goto loc_8254EC0C;
loc_8254EC08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254EC0C:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x825210a8
	sub_825210A8(ctx, base);
	// stb r3,56(r31)
	PPC_STORE_U8(r31.u32 + 56, ctx.r3.u8);
loc_8254EC18:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254ec2c
	if (cr6.eq) goto loc_8254EC2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254eb18
	sub_8254EB18(ctx, base);
loc_8254EC2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254EC3C"))) PPC_WEAK_FUNC(sub_8254EC3C);
PPC_FUNC_IMPL(__imp__sub_8254EC3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EC40"))) PPC_WEAK_FUNC(sub_8254EC40);
PPC_FUNC_IMPL(__imp__sub_8254EC40) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254eca4
	if (cr6.eq) goto loc_8254ECA4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-28104
	ctx.r8.s64 = ctx.r9.s64 + -28104;
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
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8254ECA4:
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

__attribute__((alias("__imp__sub_8254ECB8"))) PPC_WEAK_FUNC(sub_8254ECB8);
PPC_FUNC_IMPL(__imp__sub_8254ECB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ECBC"))) PPC_WEAK_FUNC(sub_8254ECBC);
PPC_FUNC_IMPL(__imp__sub_8254ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254ECC0"))) PPC_WEAK_FUNC(sub_8254ECC0);
PPC_FUNC_IMPL(__imp__sub_8254ECC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ECC4"))) PPC_WEAK_FUNC(sub_8254ECC4);
PPC_FUNC_IMPL(__imp__sub_8254ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254ECC8"))) PPC_WEAK_FUNC(sub_8254ECC8);
PPC_FUNC_IMPL(__imp__sub_8254ECC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ECD0"))) PPC_WEAK_FUNC(sub_8254ECD0);
PPC_FUNC_IMPL(__imp__sub_8254ECD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ECD8"))) PPC_WEAK_FUNC(sub_8254ECD8);
PPC_FUNC_IMPL(__imp__sub_8254ECD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8254ECF0"))) PPC_WEAK_FUNC(sub_8254ECF0);
PPC_FUNC_IMPL(__imp__sub_8254ECF0) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254ed54
	if (cr6.eq) goto loc_8254ED54;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254ed58
	if (cr6.eq) goto loc_8254ED58;
loc_8254ED54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254ED58:
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

__attribute__((alias("__imp__sub_8254ED6C"))) PPC_WEAK_FUNC(sub_8254ED6C);
PPC_FUNC_IMPL(__imp__sub_8254ED6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ED70"))) PPC_WEAK_FUNC(sub_8254ED70);
PPC_FUNC_IMPL(__imp__sub_8254ED70) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254edf8
	if (cr6.eq) goto loc_8254EDF8;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8254edec
	if (!cr6.eq) goto loc_8254EDEC;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// bne cr6,0x8254edf8
	if (!cr6.eq) goto loc_8254EDF8;
loc_8254EDEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8254EDF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254EE00"))) PPC_WEAK_FUNC(sub_8254EE00);
PPC_FUNC_IMPL(__imp__sub_8254EE00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254EE04"))) PPC_WEAK_FUNC(sub_8254EE04);
PPC_FUNC_IMPL(__imp__sub_8254EE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EE08"))) PPC_WEAK_FUNC(sub_8254EE08);
PPC_FUNC_IMPL(__imp__sub_8254EE08) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ee40
	if (cr6.eq) goto loc_8254EE40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x8254ee44
	if (!cr6.eq) goto loc_8254EE44;
loc_8254EE40:
	// li r11,0
	r11.s64 = 0;
loc_8254EE44:
	// lwz r31,176(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ee60
	if (cr6.eq) goto loc_8254EE60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ee64
	if (!cr6.eq) goto loc_8254EE64;
loc_8254EE60:
	// li r11,0
	r11.s64 = 0;
loc_8254EE64:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,180(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8254eeb0
	if (cr6.lt) goto loc_8254EEB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256f9d8
	sub_8256F9D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8254eea8
	if (!cr6.eq) goto loc_8254EEA8;
	// bl 0x8256fa78
	sub_8256FA78(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// blt cr6,0x8254eeac
	if (cr6.lt) goto loc_8254EEAC;
	// bl 0x8256fa30
	sub_8256FA30(ctx, base);
	// b 0x8254eeb0
	goto loc_8254EEB0;
loc_8254EEA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8254EEAC:
	// bl 0x8256fa48
	sub_8256FA48(ctx, base);
loc_8254EEB0:
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

__attribute__((alias("__imp__sub_8254EEC4"))) PPC_WEAK_FUNC(sub_8254EEC4);
PPC_FUNC_IMPL(__imp__sub_8254EEC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EEC8"))) PPC_WEAK_FUNC(sub_8254EEC8);
PPC_FUNC_IMPL(__imp__sub_8254EEC8) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254eefc
	if (cr6.eq) goto loc_8254EEFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x8254ef00
	if (!cr6.eq) goto loc_8254EF00;
loc_8254EEFC:
	// li r11,0
	r11.s64 = 0;
loc_8254EF00:
	// lwz r31,176(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ef18
	if (cr6.eq) goto loc_8254EF18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ef1c
	if (!cr6.eq) goto loc_8254EF1C;
loc_8254EF18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254EF1C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8254ef30
	if (cr6.lt) goto loc_8254EF30;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x8256fa60
	sub_8256FA60(ctx, base);
loc_8254EF30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254EF40"))) PPC_WEAK_FUNC(sub_8254EF40);
PPC_FUNC_IMPL(__imp__sub_8254EF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EF44"))) PPC_WEAK_FUNC(sub_8254EF44);
PPC_FUNC_IMPL(__imp__sub_8254EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EF48"))) PPC_WEAK_FUNC(sub_8254EF48);
PPC_FUNC_IMPL(__imp__sub_8254EF48) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254efc0
	if (cr6.eq) goto loc_8254EFC0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ef98
	if (cr6.eq) goto loc_8254EF98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ef9c
	if (!cr6.eq) goto loc_8254EF9C;
loc_8254EF98:
	// li r11,0
	r11.s64 = 0;
loc_8254EF9C:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,21636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21636);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8254EFC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

