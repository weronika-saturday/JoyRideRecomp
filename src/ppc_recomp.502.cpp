#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2AC94"))) PPC_WEAK_FUNC(sub_82F2AC94);
PPC_FUNC_IMPL(__imp__sub_82F2AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AC98"))) PPC_WEAK_FUNC(sub_82F2AC98);
PPC_FUNC_IMPL(__imp__sub_82F2AC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30712
	ctx.r3.s64 = r11.s64 + -30712;
}

__attribute__((alias("__imp__sub_82F2ACA0"))) PPC_WEAK_FUNC(sub_82F2ACA0);
PPC_FUNC_IMPL(__imp__sub_82F2ACA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ACA4"))) PPC_WEAK_FUNC(sub_82F2ACA4);
PPC_FUNC_IMPL(__imp__sub_82F2ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ACA8"))) PPC_WEAK_FUNC(sub_82F2ACA8);
PPC_FUNC_IMPL(__imp__sub_82F2ACA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30704
	ctx.r3.s64 = r11.s64 + -30704;
}

__attribute__((alias("__imp__sub_82F2ACB0"))) PPC_WEAK_FUNC(sub_82F2ACB0);
PPC_FUNC_IMPL(__imp__sub_82F2ACB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ACB4"))) PPC_WEAK_FUNC(sub_82F2ACB4);
PPC_FUNC_IMPL(__imp__sub_82F2ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ACB8"))) PPC_WEAK_FUNC(sub_82F2ACB8);
PPC_FUNC_IMPL(__imp__sub_82F2ACB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30696
	ctx.r3.s64 = r11.s64 + -30696;
}

__attribute__((alias("__imp__sub_82F2ACC0"))) PPC_WEAK_FUNC(sub_82F2ACC0);
PPC_FUNC_IMPL(__imp__sub_82F2ACC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ACC4"))) PPC_WEAK_FUNC(sub_82F2ACC4);
PPC_FUNC_IMPL(__imp__sub_82F2ACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ACC8"))) PPC_WEAK_FUNC(sub_82F2ACC8);
PPC_FUNC_IMPL(__imp__sub_82F2ACC8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27076, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2ACF0"))) PPC_WEAK_FUNC(sub_82F2ACF0);
PPC_FUNC_IMPL(__imp__sub_82F2ACF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ACF4"))) PPC_WEAK_FUNC(sub_82F2ACF4);
PPC_FUNC_IMPL(__imp__sub_82F2ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ACF8"))) PPC_WEAK_FUNC(sub_82F2ACF8);
PPC_FUNC_IMPL(__imp__sub_82F2ACF8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,31836
	ctx.r3.s64 = ctx.r10.s64 + 31836;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27084(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AD30"))) PPC_WEAK_FUNC(sub_82F2AD30);
PPC_FUNC_IMPL(__imp__sub_82F2AD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AD34"))) PPC_WEAK_FUNC(sub_82F2AD34);
PPC_FUNC_IMPL(__imp__sub_82F2AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AD38"))) PPC_WEAK_FUNC(sub_82F2AD38);
PPC_FUNC_IMPL(__imp__sub_82F2AD38) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,32052
	ctx.r3.s64 = ctx.r10.s64 + 32052;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2ad88
	if (cr6.eq) goto loc_82F2AD88;
loc_82F2AD6C:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f2ad6c
	if (!cr6.eq) goto loc_82F2AD6C;
loc_82F2AD88:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r10,27080(r11)
	PPC_STORE_U32(r11.u32 + 27080, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AD9C"))) PPC_WEAK_FUNC(sub_82F2AD9C);
PPC_FUNC_IMPL(__imp__sub_82F2AD9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ADA0"))) PPC_WEAK_FUNC(sub_82F2ADA0);
PPC_FUNC_IMPL(__imp__sub_82F2ADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30680
	ctx.r3.s64 = r11.s64 + -30680;
}

__attribute__((alias("__imp__sub_82F2ADA8"))) PPC_WEAK_FUNC(sub_82F2ADA8);
PPC_FUNC_IMPL(__imp__sub_82F2ADA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ADAC"))) PPC_WEAK_FUNC(sub_82F2ADAC);
PPC_FUNC_IMPL(__imp__sub_82F2ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ADB0"))) PPC_WEAK_FUNC(sub_82F2ADB0);
PPC_FUNC_IMPL(__imp__sub_82F2ADB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30672
	ctx.r3.s64 = r11.s64 + -30672;
}

__attribute__((alias("__imp__sub_82F2ADB8"))) PPC_WEAK_FUNC(sub_82F2ADB8);
PPC_FUNC_IMPL(__imp__sub_82F2ADB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ADBC"))) PPC_WEAK_FUNC(sub_82F2ADBC);
PPC_FUNC_IMPL(__imp__sub_82F2ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ADC0"))) PPC_WEAK_FUNC(sub_82F2ADC0);
PPC_FUNC_IMPL(__imp__sub_82F2ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30664
	ctx.r3.s64 = r11.s64 + -30664;
}

__attribute__((alias("__imp__sub_82F2ADC8"))) PPC_WEAK_FUNC(sub_82F2ADC8);
PPC_FUNC_IMPL(__imp__sub_82F2ADC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ADCC"))) PPC_WEAK_FUNC(sub_82F2ADCC);
PPC_FUNC_IMPL(__imp__sub_82F2ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ADD0"))) PPC_WEAK_FUNC(sub_82F2ADD0);
PPC_FUNC_IMPL(__imp__sub_82F2ADD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30656
	ctx.r3.s64 = r11.s64 + -30656;
}

__attribute__((alias("__imp__sub_82F2ADD8"))) PPC_WEAK_FUNC(sub_82F2ADD8);
PPC_FUNC_IMPL(__imp__sub_82F2ADD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ADDC"))) PPC_WEAK_FUNC(sub_82F2ADDC);
PPC_FUNC_IMPL(__imp__sub_82F2ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ADE0"))) PPC_WEAK_FUNC(sub_82F2ADE0);
PPC_FUNC_IMPL(__imp__sub_82F2ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30648
	ctx.r3.s64 = r11.s64 + -30648;
}

__attribute__((alias("__imp__sub_82F2ADE8"))) PPC_WEAK_FUNC(sub_82F2ADE8);
PPC_FUNC_IMPL(__imp__sub_82F2ADE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ADEC"))) PPC_WEAK_FUNC(sub_82F2ADEC);
PPC_FUNC_IMPL(__imp__sub_82F2ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ADF0"))) PPC_WEAK_FUNC(sub_82F2ADF0);
PPC_FUNC_IMPL(__imp__sub_82F2ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30640
	ctx.r3.s64 = r11.s64 + -30640;
}

__attribute__((alias("__imp__sub_82F2ADF8"))) PPC_WEAK_FUNC(sub_82F2ADF8);
PPC_FUNC_IMPL(__imp__sub_82F2ADF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ADFC"))) PPC_WEAK_FUNC(sub_82F2ADFC);
PPC_FUNC_IMPL(__imp__sub_82F2ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AE00"))) PPC_WEAK_FUNC(sub_82F2AE00);
PPC_FUNC_IMPL(__imp__sub_82F2AE00) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,32616
	ctx.r3.s64 = ctx.r10.s64 + 32616;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2ae50
	if (cr6.eq) goto loc_82F2AE50;
loc_82F2AE34:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f2ae34
	if (!cr6.eq) goto loc_82F2AE34;
loc_82F2AE50:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r10,27116(r11)
	PPC_STORE_U32(r11.u32 + 27116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AE64"))) PPC_WEAK_FUNC(sub_82F2AE64);
PPC_FUNC_IMPL(__imp__sub_82F2AE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AE68"))) PPC_WEAK_FUNC(sub_82F2AE68);
PPC_FUNC_IMPL(__imp__sub_82F2AE68) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,32664
	ctx.r3.s64 = ctx.r10.s64 + 32664;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2aeb8
	if (cr6.eq) goto loc_82F2AEB8;
loc_82F2AE9C:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f2ae9c
	if (!cr6.eq) goto loc_82F2AE9C;
loc_82F2AEB8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r10,27112(r11)
	PPC_STORE_U32(r11.u32 + 27112, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AECC"))) PPC_WEAK_FUNC(sub_82F2AECC);
PPC_FUNC_IMPL(__imp__sub_82F2AECC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AED0"))) PPC_WEAK_FUNC(sub_82F2AED0);
PPC_FUNC_IMPL(__imp__sub_82F2AED0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,32700
	ctx.r3.s64 = ctx.r10.s64 + 32700;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AF08"))) PPC_WEAK_FUNC(sub_82F2AF08);
PPC_FUNC_IMPL(__imp__sub_82F2AF08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AF0C"))) PPC_WEAK_FUNC(sub_82F2AF0C);
PPC_FUNC_IMPL(__imp__sub_82F2AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AF10"))) PPC_WEAK_FUNC(sub_82F2AF10);
PPC_FUNC_IMPL(__imp__sub_82F2AF10) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32620
	ctx.r3.s64 = ctx.r10.s64 + -32620;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AF48"))) PPC_WEAK_FUNC(sub_82F2AF48);
PPC_FUNC_IMPL(__imp__sub_82F2AF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AF4C"))) PPC_WEAK_FUNC(sub_82F2AF4C);
PPC_FUNC_IMPL(__imp__sub_82F2AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AF50"))) PPC_WEAK_FUNC(sub_82F2AF50);
PPC_FUNC_IMPL(__imp__sub_82F2AF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30632
	ctx.r3.s64 = r11.s64 + -30632;
}

__attribute__((alias("__imp__sub_82F2AF58"))) PPC_WEAK_FUNC(sub_82F2AF58);
PPC_FUNC_IMPL(__imp__sub_82F2AF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AF5C"))) PPC_WEAK_FUNC(sub_82F2AF5C);
PPC_FUNC_IMPL(__imp__sub_82F2AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AF60"))) PPC_WEAK_FUNC(sub_82F2AF60);
PPC_FUNC_IMPL(__imp__sub_82F2AF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30624
	ctx.r3.s64 = r11.s64 + -30624;
}

__attribute__((alias("__imp__sub_82F2AF68"))) PPC_WEAK_FUNC(sub_82F2AF68);
PPC_FUNC_IMPL(__imp__sub_82F2AF68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AF6C"))) PPC_WEAK_FUNC(sub_82F2AF6C);
PPC_FUNC_IMPL(__imp__sub_82F2AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AF70"))) PPC_WEAK_FUNC(sub_82F2AF70);
PPC_FUNC_IMPL(__imp__sub_82F2AF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30616
	ctx.r3.s64 = r11.s64 + -30616;
}

__attribute__((alias("__imp__sub_82F2AF78"))) PPC_WEAK_FUNC(sub_82F2AF78);
PPC_FUNC_IMPL(__imp__sub_82F2AF78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AF7C"))) PPC_WEAK_FUNC(sub_82F2AF7C);
PPC_FUNC_IMPL(__imp__sub_82F2AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AF80"))) PPC_WEAK_FUNC(sub_82F2AF80);
PPC_FUNC_IMPL(__imp__sub_82F2AF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30608
	ctx.r3.s64 = r11.s64 + -30608;
}

__attribute__((alias("__imp__sub_82F2AF88"))) PPC_WEAK_FUNC(sub_82F2AF88);
PPC_FUNC_IMPL(__imp__sub_82F2AF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AF8C"))) PPC_WEAK_FUNC(sub_82F2AF8C);
PPC_FUNC_IMPL(__imp__sub_82F2AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AF90"))) PPC_WEAK_FUNC(sub_82F2AF90);
PPC_FUNC_IMPL(__imp__sub_82F2AF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30600
	ctx.r3.s64 = r11.s64 + -30600;
}

__attribute__((alias("__imp__sub_82F2AF98"))) PPC_WEAK_FUNC(sub_82F2AF98);
PPC_FUNC_IMPL(__imp__sub_82F2AF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AF9C"))) PPC_WEAK_FUNC(sub_82F2AF9C);
PPC_FUNC_IMPL(__imp__sub_82F2AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AFA0"))) PPC_WEAK_FUNC(sub_82F2AFA0);
PPC_FUNC_IMPL(__imp__sub_82F2AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30592
	ctx.r3.s64 = r11.s64 + -30592;
}

__attribute__((alias("__imp__sub_82F2AFA8"))) PPC_WEAK_FUNC(sub_82F2AFA8);
PPC_FUNC_IMPL(__imp__sub_82F2AFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AFAC"))) PPC_WEAK_FUNC(sub_82F2AFAC);
PPC_FUNC_IMPL(__imp__sub_82F2AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AFB0"))) PPC_WEAK_FUNC(sub_82F2AFB0);
PPC_FUNC_IMPL(__imp__sub_82F2AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30584
	ctx.r3.s64 = r11.s64 + -30584;
}

__attribute__((alias("__imp__sub_82F2AFB8"))) PPC_WEAK_FUNC(sub_82F2AFB8);
PPC_FUNC_IMPL(__imp__sub_82F2AFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AFBC"))) PPC_WEAK_FUNC(sub_82F2AFBC);
PPC_FUNC_IMPL(__imp__sub_82F2AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AFC0"))) PPC_WEAK_FUNC(sub_82F2AFC0);
PPC_FUNC_IMPL(__imp__sub_82F2AFC0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27136, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2AFE8"))) PPC_WEAK_FUNC(sub_82F2AFE8);
PPC_FUNC_IMPL(__imp__sub_82F2AFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AFEC"))) PPC_WEAK_FUNC(sub_82F2AFEC);
PPC_FUNC_IMPL(__imp__sub_82F2AFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AFF0"))) PPC_WEAK_FUNC(sub_82F2AFF0);
PPC_FUNC_IMPL(__imp__sub_82F2AFF0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-512
	ctx.r3.s64 = ctx.r10.s64 + -512;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B028"))) PPC_WEAK_FUNC(sub_82F2B028);
PPC_FUNC_IMPL(__imp__sub_82F2B028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B02C"))) PPC_WEAK_FUNC(sub_82F2B02C);
PPC_FUNC_IMPL(__imp__sub_82F2B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B030"))) PPC_WEAK_FUNC(sub_82F2B030);
PPC_FUNC_IMPL(__imp__sub_82F2B030) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32160
	ctx.r3.s64 = ctx.r10.s64 + -32160;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2b080
	if (cr6.eq) goto loc_82F2B080;
loc_82F2B064:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f2b064
	if (!cr6.eq) goto loc_82F2B064;
loc_82F2B080:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r10,27156(r11)
	PPC_STORE_U32(r11.u32 + 27156, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B094"))) PPC_WEAK_FUNC(sub_82F2B094);
PPC_FUNC_IMPL(__imp__sub_82F2B094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B098"))) PPC_WEAK_FUNC(sub_82F2B098);
PPC_FUNC_IMPL(__imp__sub_82F2B098) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32120
	ctx.r3.s64 = ctx.r10.s64 + -32120;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2b0e8
	if (cr6.eq) goto loc_82F2B0E8;
loc_82F2B0CC:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f2b0cc
	if (!cr6.eq) goto loc_82F2B0CC;
loc_82F2B0E8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r10,27152(r11)
	PPC_STORE_U32(r11.u32 + 27152, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B0FC"))) PPC_WEAK_FUNC(sub_82F2B0FC);
PPC_FUNC_IMPL(__imp__sub_82F2B0FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B100"))) PPC_WEAK_FUNC(sub_82F2B100);
PPC_FUNC_IMPL(__imp__sub_82F2B100) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32412
	ctx.r3.s64 = ctx.r10.s64 + -32412;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B138"))) PPC_WEAK_FUNC(sub_82F2B138);
PPC_FUNC_IMPL(__imp__sub_82F2B138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B13C"))) PPC_WEAK_FUNC(sub_82F2B13C);
PPC_FUNC_IMPL(__imp__sub_82F2B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B140"))) PPC_WEAK_FUNC(sub_82F2B140);
PPC_FUNC_IMPL(__imp__sub_82F2B140) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32356
	ctx.r3.s64 = ctx.r10.s64 + -32356;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B178"))) PPC_WEAK_FUNC(sub_82F2B178);
PPC_FUNC_IMPL(__imp__sub_82F2B178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B17C"))) PPC_WEAK_FUNC(sub_82F2B17C);
PPC_FUNC_IMPL(__imp__sub_82F2B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B180"))) PPC_WEAK_FUNC(sub_82F2B180);
PPC_FUNC_IMPL(__imp__sub_82F2B180) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-32080
	ctx.r3.s64 = ctx.r10.s64 + -32080;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B1B8"))) PPC_WEAK_FUNC(sub_82F2B1B8);
PPC_FUNC_IMPL(__imp__sub_82F2B1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B1BC"))) PPC_WEAK_FUNC(sub_82F2B1BC);
PPC_FUNC_IMPL(__imp__sub_82F2B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B1C0"))) PPC_WEAK_FUNC(sub_82F2B1C0);
PPC_FUNC_IMPL(__imp__sub_82F2B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30560
	ctx.r3.s64 = r11.s64 + -30560;
}

__attribute__((alias("__imp__sub_82F2B1C8"))) PPC_WEAK_FUNC(sub_82F2B1C8);
PPC_FUNC_IMPL(__imp__sub_82F2B1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B1CC"))) PPC_WEAK_FUNC(sub_82F2B1CC);
PPC_FUNC_IMPL(__imp__sub_82F2B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B1D0"))) PPC_WEAK_FUNC(sub_82F2B1D0);
PPC_FUNC_IMPL(__imp__sub_82F2B1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30552
	ctx.r3.s64 = r11.s64 + -30552;
}

__attribute__((alias("__imp__sub_82F2B1D8"))) PPC_WEAK_FUNC(sub_82F2B1D8);
PPC_FUNC_IMPL(__imp__sub_82F2B1D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B1DC"))) PPC_WEAK_FUNC(sub_82F2B1DC);
PPC_FUNC_IMPL(__imp__sub_82F2B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B1E0"))) PPC_WEAK_FUNC(sub_82F2B1E0);
PPC_FUNC_IMPL(__imp__sub_82F2B1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30544
	ctx.r3.s64 = r11.s64 + -30544;
}

__attribute__((alias("__imp__sub_82F2B1E8"))) PPC_WEAK_FUNC(sub_82F2B1E8);
PPC_FUNC_IMPL(__imp__sub_82F2B1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B1EC"))) PPC_WEAK_FUNC(sub_82F2B1EC);
PPC_FUNC_IMPL(__imp__sub_82F2B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B1F0"))) PPC_WEAK_FUNC(sub_82F2B1F0);
PPC_FUNC_IMPL(__imp__sub_82F2B1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30536
	ctx.r3.s64 = r11.s64 + -30536;
}

__attribute__((alias("__imp__sub_82F2B1F8"))) PPC_WEAK_FUNC(sub_82F2B1F8);
PPC_FUNC_IMPL(__imp__sub_82F2B1F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B1FC"))) PPC_WEAK_FUNC(sub_82F2B1FC);
PPC_FUNC_IMPL(__imp__sub_82F2B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B200"))) PPC_WEAK_FUNC(sub_82F2B200);
PPC_FUNC_IMPL(__imp__sub_82F2B200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30528
	ctx.r3.s64 = r11.s64 + -30528;
}

__attribute__((alias("__imp__sub_82F2B208"))) PPC_WEAK_FUNC(sub_82F2B208);
PPC_FUNC_IMPL(__imp__sub_82F2B208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B20C"))) PPC_WEAK_FUNC(sub_82F2B20C);
PPC_FUNC_IMPL(__imp__sub_82F2B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B210"))) PPC_WEAK_FUNC(sub_82F2B210);
PPC_FUNC_IMPL(__imp__sub_82F2B210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30520
	ctx.r3.s64 = r11.s64 + -30520;
}

__attribute__((alias("__imp__sub_82F2B218"))) PPC_WEAK_FUNC(sub_82F2B218);
PPC_FUNC_IMPL(__imp__sub_82F2B218) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B21C"))) PPC_WEAK_FUNC(sub_82F2B21C);
PPC_FUNC_IMPL(__imp__sub_82F2B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B220"))) PPC_WEAK_FUNC(sub_82F2B220);
PPC_FUNC_IMPL(__imp__sub_82F2B220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30512
	ctx.r3.s64 = r11.s64 + -30512;
}

__attribute__((alias("__imp__sub_82F2B228"))) PPC_WEAK_FUNC(sub_82F2B228);
PPC_FUNC_IMPL(__imp__sub_82F2B228) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B22C"))) PPC_WEAK_FUNC(sub_82F2B22C);
PPC_FUNC_IMPL(__imp__sub_82F2B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B230"))) PPC_WEAK_FUNC(sub_82F2B230);
PPC_FUNC_IMPL(__imp__sub_82F2B230) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B25C"))) PPC_WEAK_FUNC(sub_82F2B25C);
PPC_FUNC_IMPL(__imp__sub_82F2B25C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B260"))) PPC_WEAK_FUNC(sub_82F2B260);
PPC_FUNC_IMPL(__imp__sub_82F2B260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27188
	ctx.r3.s64 = ctx.r7.s64 + 27188;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-30488
	ctx.r3.s64 = ctx.r6.s64 + -30488;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B2D8"))) PPC_WEAK_FUNC(sub_82F2B2D8);
PPC_FUNC_IMPL(__imp__sub_82F2B2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B2DC"))) PPC_WEAK_FUNC(sub_82F2B2DC);
PPC_FUNC_IMPL(__imp__sub_82F2B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B2E0"))) PPC_WEAK_FUNC(sub_82F2B2E0);
PPC_FUNC_IMPL(__imp__sub_82F2B2E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-20656
	ctx.r3.s64 = r11.s64 + -20656;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B30C"))) PPC_WEAK_FUNC(sub_82F2B30C);
PPC_FUNC_IMPL(__imp__sub_82F2B30C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B310"))) PPC_WEAK_FUNC(sub_82F2B310);
PPC_FUNC_IMPL(__imp__sub_82F2B310) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27224, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B338"))) PPC_WEAK_FUNC(sub_82F2B338);
PPC_FUNC_IMPL(__imp__sub_82F2B338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B33C"))) PPC_WEAK_FUNC(sub_82F2B33C);
PPC_FUNC_IMPL(__imp__sub_82F2B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B340"))) PPC_WEAK_FUNC(sub_82F2B340);
PPC_FUNC_IMPL(__imp__sub_82F2B340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30504
	ctx.r3.s64 = r11.s64 + -30504;
}

__attribute__((alias("__imp__sub_82F2B348"))) PPC_WEAK_FUNC(sub_82F2B348);
PPC_FUNC_IMPL(__imp__sub_82F2B348) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B34C"))) PPC_WEAK_FUNC(sub_82F2B34C);
PPC_FUNC_IMPL(__imp__sub_82F2B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B350"))) PPC_WEAK_FUNC(sub_82F2B350);
PPC_FUNC_IMPL(__imp__sub_82F2B350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30496
	ctx.r3.s64 = r11.s64 + -30496;
}

__attribute__((alias("__imp__sub_82F2B358"))) PPC_WEAK_FUNC(sub_82F2B358);
PPC_FUNC_IMPL(__imp__sub_82F2B358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B35C"))) PPC_WEAK_FUNC(sub_82F2B35C);
PPC_FUNC_IMPL(__imp__sub_82F2B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B360"))) PPC_WEAK_FUNC(sub_82F2B360);
PPC_FUNC_IMPL(__imp__sub_82F2B360) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-472
	ctx.r3.s64 = ctx.r10.s64 + -472;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27252(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B398"))) PPC_WEAK_FUNC(sub_82F2B398);
PPC_FUNC_IMPL(__imp__sub_82F2B398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B39C"))) PPC_WEAK_FUNC(sub_82F2B39C);
PPC_FUNC_IMPL(__imp__sub_82F2B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B3A0"))) PPC_WEAK_FUNC(sub_82F2B3A0);
PPC_FUNC_IMPL(__imp__sub_82F2B3A0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-31448
	ctx.r3.s64 = ctx.r10.s64 + -31448;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B3D8"))) PPC_WEAK_FUNC(sub_82F2B3D8);
PPC_FUNC_IMPL(__imp__sub_82F2B3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B3DC"))) PPC_WEAK_FUNC(sub_82F2B3DC);
PPC_FUNC_IMPL(__imp__sub_82F2B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B3E0"))) PPC_WEAK_FUNC(sub_82F2B3E0);
PPC_FUNC_IMPL(__imp__sub_82F2B3E0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-31368
	ctx.r3.s64 = ctx.r10.s64 + -31368;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B418"))) PPC_WEAK_FUNC(sub_82F2B418);
PPC_FUNC_IMPL(__imp__sub_82F2B418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B41C"))) PPC_WEAK_FUNC(sub_82F2B41C);
PPC_FUNC_IMPL(__imp__sub_82F2B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B420"))) PPC_WEAK_FUNC(sub_82F2B420);
PPC_FUNC_IMPL(__imp__sub_82F2B420) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-31288
	ctx.r3.s64 = ctx.r10.s64 + -31288;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B458"))) PPC_WEAK_FUNC(sub_82F2B458);
PPC_FUNC_IMPL(__imp__sub_82F2B458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B45C"))) PPC_WEAK_FUNC(sub_82F2B45C);
PPC_FUNC_IMPL(__imp__sub_82F2B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B460"))) PPC_WEAK_FUNC(sub_82F2B460);
PPC_FUNC_IMPL(__imp__sub_82F2B460) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-31156
	ctx.r3.s64 = ctx.r10.s64 + -31156;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B498"))) PPC_WEAK_FUNC(sub_82F2B498);
PPC_FUNC_IMPL(__imp__sub_82F2B498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B49C"))) PPC_WEAK_FUNC(sub_82F2B49C);
PPC_FUNC_IMPL(__imp__sub_82F2B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B4A0"))) PPC_WEAK_FUNC(sub_82F2B4A0);
PPC_FUNC_IMPL(__imp__sub_82F2B4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30464
	ctx.r3.s64 = r11.s64 + -30464;
}

__attribute__((alias("__imp__sub_82F2B4A8"))) PPC_WEAK_FUNC(sub_82F2B4A8);
PPC_FUNC_IMPL(__imp__sub_82F2B4A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B4AC"))) PPC_WEAK_FUNC(sub_82F2B4AC);
PPC_FUNC_IMPL(__imp__sub_82F2B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B4B0"))) PPC_WEAK_FUNC(sub_82F2B4B0);
PPC_FUNC_IMPL(__imp__sub_82F2B4B0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27288, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B4D8"))) PPC_WEAK_FUNC(sub_82F2B4D8);
PPC_FUNC_IMPL(__imp__sub_82F2B4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B4DC"))) PPC_WEAK_FUNC(sub_82F2B4DC);
PPC_FUNC_IMPL(__imp__sub_82F2B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B4E0"))) PPC_WEAK_FUNC(sub_82F2B4E0);
PPC_FUNC_IMPL(__imp__sub_82F2B4E0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B50C"))) PPC_WEAK_FUNC(sub_82F2B50C);
PPC_FUNC_IMPL(__imp__sub_82F2B50C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B510"))) PPC_WEAK_FUNC(sub_82F2B510);
PPC_FUNC_IMPL(__imp__sub_82F2B510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27296
	ctx.r3.s64 = ctx.r7.s64 + 27296;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-30456
	ctx.r3.s64 = ctx.r6.s64 + -30456;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B588"))) PPC_WEAK_FUNC(sub_82F2B588);
PPC_FUNC_IMPL(__imp__sub_82F2B588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B58C"))) PPC_WEAK_FUNC(sub_82F2B58C);
PPC_FUNC_IMPL(__imp__sub_82F2B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B590"))) PPC_WEAK_FUNC(sub_82F2B590);
PPC_FUNC_IMPL(__imp__sub_82F2B590) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-676
	ctx.r3.s64 = ctx.r10.s64 + -676;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B5C8"))) PPC_WEAK_FUNC(sub_82F2B5C8);
PPC_FUNC_IMPL(__imp__sub_82F2B5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B5CC"))) PPC_WEAK_FUNC(sub_82F2B5CC);
PPC_FUNC_IMPL(__imp__sub_82F2B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B5D0"))) PPC_WEAK_FUNC(sub_82F2B5D0);
PPC_FUNC_IMPL(__imp__sub_82F2B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30448
	ctx.r3.s64 = r11.s64 + -30448;
}

__attribute__((alias("__imp__sub_82F2B5D8"))) PPC_WEAK_FUNC(sub_82F2B5D8);
PPC_FUNC_IMPL(__imp__sub_82F2B5D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B5DC"))) PPC_WEAK_FUNC(sub_82F2B5DC);
PPC_FUNC_IMPL(__imp__sub_82F2B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B5E0"))) PPC_WEAK_FUNC(sub_82F2B5E0);
PPC_FUNC_IMPL(__imp__sub_82F2B5E0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27348, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B608"))) PPC_WEAK_FUNC(sub_82F2B608);
PPC_FUNC_IMPL(__imp__sub_82F2B608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B60C"))) PPC_WEAK_FUNC(sub_82F2B60C);
PPC_FUNC_IMPL(__imp__sub_82F2B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B610"))) PPC_WEAK_FUNC(sub_82F2B610);
PPC_FUNC_IMPL(__imp__sub_82F2B610) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B63C"))) PPC_WEAK_FUNC(sub_82F2B63C);
PPC_FUNC_IMPL(__imp__sub_82F2B63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B640"))) PPC_WEAK_FUNC(sub_82F2B640);
PPC_FUNC_IMPL(__imp__sub_82F2B640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27356
	ctx.r3.s64 = ctx.r7.s64 + 27356;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-30440
	ctx.r3.s64 = ctx.r6.s64 + -30440;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B6B8"))) PPC_WEAK_FUNC(sub_82F2B6B8);
PPC_FUNC_IMPL(__imp__sub_82F2B6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B6BC"))) PPC_WEAK_FUNC(sub_82F2B6BC);
PPC_FUNC_IMPL(__imp__sub_82F2B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B6C0"))) PPC_WEAK_FUNC(sub_82F2B6C0);
PPC_FUNC_IMPL(__imp__sub_82F2B6C0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-636
	ctx.r3.s64 = ctx.r10.s64 + -636;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B6F8"))) PPC_WEAK_FUNC(sub_82F2B6F8);
PPC_FUNC_IMPL(__imp__sub_82F2B6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B6FC"))) PPC_WEAK_FUNC(sub_82F2B6FC);
PPC_FUNC_IMPL(__imp__sub_82F2B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B700"))) PPC_WEAK_FUNC(sub_82F2B700);
PPC_FUNC_IMPL(__imp__sub_82F2B700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30432
	ctx.r3.s64 = r11.s64 + -30432;
}

__attribute__((alias("__imp__sub_82F2B708"))) PPC_WEAK_FUNC(sub_82F2B708);
PPC_FUNC_IMPL(__imp__sub_82F2B708) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B70C"))) PPC_WEAK_FUNC(sub_82F2B70C);
PPC_FUNC_IMPL(__imp__sub_82F2B70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B710"))) PPC_WEAK_FUNC(sub_82F2B710);
PPC_FUNC_IMPL(__imp__sub_82F2B710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30424
	ctx.r3.s64 = r11.s64 + -30424;
}

__attribute__((alias("__imp__sub_82F2B718"))) PPC_WEAK_FUNC(sub_82F2B718);
PPC_FUNC_IMPL(__imp__sub_82F2B718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B71C"))) PPC_WEAK_FUNC(sub_82F2B71C);
PPC_FUNC_IMPL(__imp__sub_82F2B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B720"))) PPC_WEAK_FUNC(sub_82F2B720);
PPC_FUNC_IMPL(__imp__sub_82F2B720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30416
	ctx.r3.s64 = r11.s64 + -30416;
}

__attribute__((alias("__imp__sub_82F2B728"))) PPC_WEAK_FUNC(sub_82F2B728);
PPC_FUNC_IMPL(__imp__sub_82F2B728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B72C"))) PPC_WEAK_FUNC(sub_82F2B72C);
PPC_FUNC_IMPL(__imp__sub_82F2B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B730"))) PPC_WEAK_FUNC(sub_82F2B730);
PPC_FUNC_IMPL(__imp__sub_82F2B730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30408
	ctx.r3.s64 = r11.s64 + -30408;
}

__attribute__((alias("__imp__sub_82F2B738"))) PPC_WEAK_FUNC(sub_82F2B738);
PPC_FUNC_IMPL(__imp__sub_82F2B738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B73C"))) PPC_WEAK_FUNC(sub_82F2B73C);
PPC_FUNC_IMPL(__imp__sub_82F2B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B740"))) PPC_WEAK_FUNC(sub_82F2B740);
PPC_FUNC_IMPL(__imp__sub_82F2B740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30400
	ctx.r3.s64 = r11.s64 + -30400;
}

__attribute__((alias("__imp__sub_82F2B748"))) PPC_WEAK_FUNC(sub_82F2B748);
PPC_FUNC_IMPL(__imp__sub_82F2B748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B74C"))) PPC_WEAK_FUNC(sub_82F2B74C);
PPC_FUNC_IMPL(__imp__sub_82F2B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B750"))) PPC_WEAK_FUNC(sub_82F2B750);
PPC_FUNC_IMPL(__imp__sub_82F2B750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30392
	ctx.r3.s64 = r11.s64 + -30392;
}

__attribute__((alias("__imp__sub_82F2B758"))) PPC_WEAK_FUNC(sub_82F2B758);
PPC_FUNC_IMPL(__imp__sub_82F2B758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B75C"))) PPC_WEAK_FUNC(sub_82F2B75C);
PPC_FUNC_IMPL(__imp__sub_82F2B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B760"))) PPC_WEAK_FUNC(sub_82F2B760);
PPC_FUNC_IMPL(__imp__sub_82F2B760) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27412, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B788"))) PPC_WEAK_FUNC(sub_82F2B788);
PPC_FUNC_IMPL(__imp__sub_82F2B788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B78C"))) PPC_WEAK_FUNC(sub_82F2B78C);
PPC_FUNC_IMPL(__imp__sub_82F2B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B790"))) PPC_WEAK_FUNC(sub_82F2B790);
PPC_FUNC_IMPL(__imp__sub_82F2B790) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B7BC"))) PPC_WEAK_FUNC(sub_82F2B7BC);
PPC_FUNC_IMPL(__imp__sub_82F2B7BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B7C0"))) PPC_WEAK_FUNC(sub_82F2B7C0);
PPC_FUNC_IMPL(__imp__sub_82F2B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27420
	ctx.r3.s64 = ctx.r7.s64 + 27420;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-30384
	ctx.r3.s64 = ctx.r6.s64 + -30384;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B838"))) PPC_WEAK_FUNC(sub_82F2B838);
PPC_FUNC_IMPL(__imp__sub_82F2B838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B83C"))) PPC_WEAK_FUNC(sub_82F2B83C);
PPC_FUNC_IMPL(__imp__sub_82F2B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B840"))) PPC_WEAK_FUNC(sub_82F2B840);
PPC_FUNC_IMPL(__imp__sub_82F2B840) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-596
	ctx.r3.s64 = ctx.r10.s64 + -596;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B878"))) PPC_WEAK_FUNC(sub_82F2B878);
PPC_FUNC_IMPL(__imp__sub_82F2B878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B87C"))) PPC_WEAK_FUNC(sub_82F2B87C);
PPC_FUNC_IMPL(__imp__sub_82F2B87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B880"))) PPC_WEAK_FUNC(sub_82F2B880);
PPC_FUNC_IMPL(__imp__sub_82F2B880) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-29700
	ctx.r3.s64 = ctx.r10.s64 + -29700;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27464(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B8B8"))) PPC_WEAK_FUNC(sub_82F2B8B8);
PPC_FUNC_IMPL(__imp__sub_82F2B8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B8BC"))) PPC_WEAK_FUNC(sub_82F2B8BC);
PPC_FUNC_IMPL(__imp__sub_82F2B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B8C0"))) PPC_WEAK_FUNC(sub_82F2B8C0);
PPC_FUNC_IMPL(__imp__sub_82F2B8C0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-29648
	ctx.r3.s64 = ctx.r10.s64 + -29648;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B8F8"))) PPC_WEAK_FUNC(sub_82F2B8F8);
PPC_FUNC_IMPL(__imp__sub_82F2B8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B8FC"))) PPC_WEAK_FUNC(sub_82F2B8FC);
PPC_FUNC_IMPL(__imp__sub_82F2B8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B900"))) PPC_WEAK_FUNC(sub_82F2B900);
PPC_FUNC_IMPL(__imp__sub_82F2B900) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-29592
	ctx.r3.s64 = ctx.r10.s64 + -29592;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27456(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B938"))) PPC_WEAK_FUNC(sub_82F2B938);
PPC_FUNC_IMPL(__imp__sub_82F2B938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B93C"))) PPC_WEAK_FUNC(sub_82F2B93C);
PPC_FUNC_IMPL(__imp__sub_82F2B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B940"))) PPC_WEAK_FUNC(sub_82F2B940);
PPC_FUNC_IMPL(__imp__sub_82F2B940) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-29504
	ctx.r3.s64 = ctx.r10.s64 + -29504;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B978"))) PPC_WEAK_FUNC(sub_82F2B978);
PPC_FUNC_IMPL(__imp__sub_82F2B978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B97C"))) PPC_WEAK_FUNC(sub_82F2B97C);
PPC_FUNC_IMPL(__imp__sub_82F2B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B980"))) PPC_WEAK_FUNC(sub_82F2B980);
PPC_FUNC_IMPL(__imp__sub_82F2B980) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2B9AC"))) PPC_WEAK_FUNC(sub_82F2B9AC);
PPC_FUNC_IMPL(__imp__sub_82F2B9AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B9B0"))) PPC_WEAK_FUNC(sub_82F2B9B0);
PPC_FUNC_IMPL(__imp__sub_82F2B9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27480
	ctx.r3.s64 = ctx.r7.s64 + 27480;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-30376
	ctx.r3.s64 = ctx.r6.s64 + -30376;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BA28"))) PPC_WEAK_FUNC(sub_82F2BA28);
PPC_FUNC_IMPL(__imp__sub_82F2BA28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BA2C"))) PPC_WEAK_FUNC(sub_82F2BA2C);
PPC_FUNC_IMPL(__imp__sub_82F2BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BA30"))) PPC_WEAK_FUNC(sub_82F2BA30);
PPC_FUNC_IMPL(__imp__sub_82F2BA30) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-556
	ctx.r3.s64 = ctx.r10.s64 + -556;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27472(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BA68"))) PPC_WEAK_FUNC(sub_82F2BA68);
PPC_FUNC_IMPL(__imp__sub_82F2BA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BA6C"))) PPC_WEAK_FUNC(sub_82F2BA6C);
PPC_FUNC_IMPL(__imp__sub_82F2BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BA70"))) PPC_WEAK_FUNC(sub_82F2BA70);
PPC_FUNC_IMPL(__imp__sub_82F2BA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30368
	ctx.r3.s64 = r11.s64 + -30368;
}

__attribute__((alias("__imp__sub_82F2BA78"))) PPC_WEAK_FUNC(sub_82F2BA78);
PPC_FUNC_IMPL(__imp__sub_82F2BA78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BA7C"))) PPC_WEAK_FUNC(sub_82F2BA7C);
PPC_FUNC_IMPL(__imp__sub_82F2BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BA80"))) PPC_WEAK_FUNC(sub_82F2BA80);
PPC_FUNC_IMPL(__imp__sub_82F2BA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30360
	ctx.r3.s64 = r11.s64 + -30360;
}

__attribute__((alias("__imp__sub_82F2BA88"))) PPC_WEAK_FUNC(sub_82F2BA88);
PPC_FUNC_IMPL(__imp__sub_82F2BA88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BA8C"))) PPC_WEAK_FUNC(sub_82F2BA8C);
PPC_FUNC_IMPL(__imp__sub_82F2BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BA90"))) PPC_WEAK_FUNC(sub_82F2BA90);
PPC_FUNC_IMPL(__imp__sub_82F2BA90) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28968
	ctx.r3.s64 = ctx.r10.s64 + -28968;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BAC8"))) PPC_WEAK_FUNC(sub_82F2BAC8);
PPC_FUNC_IMPL(__imp__sub_82F2BAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BACC"))) PPC_WEAK_FUNC(sub_82F2BACC);
PPC_FUNC_IMPL(__imp__sub_82F2BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BAD0"))) PPC_WEAK_FUNC(sub_82F2BAD0);
PPC_FUNC_IMPL(__imp__sub_82F2BAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30352
	ctx.r3.s64 = r11.s64 + -30352;
}

__attribute__((alias("__imp__sub_82F2BAD8"))) PPC_WEAK_FUNC(sub_82F2BAD8);
PPC_FUNC_IMPL(__imp__sub_82F2BAD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BADC"))) PPC_WEAK_FUNC(sub_82F2BADC);
PPC_FUNC_IMPL(__imp__sub_82F2BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BAE0"))) PPC_WEAK_FUNC(sub_82F2BAE0);
PPC_FUNC_IMPL(__imp__sub_82F2BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30344
	ctx.r3.s64 = r11.s64 + -30344;
}

__attribute__((alias("__imp__sub_82F2BAE8"))) PPC_WEAK_FUNC(sub_82F2BAE8);
PPC_FUNC_IMPL(__imp__sub_82F2BAE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BAEC"))) PPC_WEAK_FUNC(sub_82F2BAEC);
PPC_FUNC_IMPL(__imp__sub_82F2BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BAF0"))) PPC_WEAK_FUNC(sub_82F2BAF0);
PPC_FUNC_IMPL(__imp__sub_82F2BAF0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28816
	ctx.r3.s64 = ctx.r10.s64 + -28816;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BB28"))) PPC_WEAK_FUNC(sub_82F2BB28);
PPC_FUNC_IMPL(__imp__sub_82F2BB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BB2C"))) PPC_WEAK_FUNC(sub_82F2BB2C);
PPC_FUNC_IMPL(__imp__sub_82F2BB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB30"))) PPC_WEAK_FUNC(sub_82F2BB30);
PPC_FUNC_IMPL(__imp__sub_82F2BB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30336
	ctx.r3.s64 = r11.s64 + -30336;
}

__attribute__((alias("__imp__sub_82F2BB38"))) PPC_WEAK_FUNC(sub_82F2BB38);
PPC_FUNC_IMPL(__imp__sub_82F2BB38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BB3C"))) PPC_WEAK_FUNC(sub_82F2BB3C);
PPC_FUNC_IMPL(__imp__sub_82F2BB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB40"))) PPC_WEAK_FUNC(sub_82F2BB40);
PPC_FUNC_IMPL(__imp__sub_82F2BB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30328
	ctx.r3.s64 = r11.s64 + -30328;
}

__attribute__((alias("__imp__sub_82F2BB48"))) PPC_WEAK_FUNC(sub_82F2BB48);
PPC_FUNC_IMPL(__imp__sub_82F2BB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BB4C"))) PPC_WEAK_FUNC(sub_82F2BB4C);
PPC_FUNC_IMPL(__imp__sub_82F2BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB50"))) PPC_WEAK_FUNC(sub_82F2BB50);
PPC_FUNC_IMPL(__imp__sub_82F2BB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30320
	ctx.r3.s64 = r11.s64 + -30320;
}

__attribute__((alias("__imp__sub_82F2BB58"))) PPC_WEAK_FUNC(sub_82F2BB58);
PPC_FUNC_IMPL(__imp__sub_82F2BB58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BB5C"))) PPC_WEAK_FUNC(sub_82F2BB5C);
PPC_FUNC_IMPL(__imp__sub_82F2BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB60"))) PPC_WEAK_FUNC(sub_82F2BB60);
PPC_FUNC_IMPL(__imp__sub_82F2BB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30312
	ctx.r3.s64 = r11.s64 + -30312;
}

__attribute__((alias("__imp__sub_82F2BB68"))) PPC_WEAK_FUNC(sub_82F2BB68);
PPC_FUNC_IMPL(__imp__sub_82F2BB68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BB6C"))) PPC_WEAK_FUNC(sub_82F2BB6C);
PPC_FUNC_IMPL(__imp__sub_82F2BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB70"))) PPC_WEAK_FUNC(sub_82F2BB70);
PPC_FUNC_IMPL(__imp__sub_82F2BB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30304
	ctx.r3.s64 = r11.s64 + -30304;
}

__attribute__((alias("__imp__sub_82F2BB78"))) PPC_WEAK_FUNC(sub_82F2BB78);
PPC_FUNC_IMPL(__imp__sub_82F2BB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BB7C"))) PPC_WEAK_FUNC(sub_82F2BB7C);
PPC_FUNC_IMPL(__imp__sub_82F2BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB80"))) PPC_WEAK_FUNC(sub_82F2BB80);
PPC_FUNC_IMPL(__imp__sub_82F2BB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30296
	ctx.r3.s64 = r11.s64 + -30296;
}

__attribute__((alias("__imp__sub_82F2BB88"))) PPC_WEAK_FUNC(sub_82F2BB88);
PPC_FUNC_IMPL(__imp__sub_82F2BB88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BB8C"))) PPC_WEAK_FUNC(sub_82F2BB8C);
PPC_FUNC_IMPL(__imp__sub_82F2BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BB90"))) PPC_WEAK_FUNC(sub_82F2BB90);
PPC_FUNC_IMPL(__imp__sub_82F2BB90) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BBBC"))) PPC_WEAK_FUNC(sub_82F2BBBC);
PPC_FUNC_IMPL(__imp__sub_82F2BBBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BBC0"))) PPC_WEAK_FUNC(sub_82F2BBC0);
PPC_FUNC_IMPL(__imp__sub_82F2BBC0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27540, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BBE8"))) PPC_WEAK_FUNC(sub_82F2BBE8);
PPC_FUNC_IMPL(__imp__sub_82F2BBE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BBEC"))) PPC_WEAK_FUNC(sub_82F2BBEC);
PPC_FUNC_IMPL(__imp__sub_82F2BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

