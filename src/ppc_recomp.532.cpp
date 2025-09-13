#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F460DC"))) PPC_WEAK_FUNC(sub_82F460DC);
PPC_FUNC_IMPL(__imp__sub_82F460DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F460E0"))) PPC_WEAK_FUNC(sub_82F460E0);
PPC_FUNC_IMPL(__imp__sub_82F460E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16200
	ctx.r3.s64 = r11.s64 + -16200;
}

__attribute__((alias("__imp__sub_82F460E8"))) PPC_WEAK_FUNC(sub_82F460E8);
PPC_FUNC_IMPL(__imp__sub_82F460E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F460EC"))) PPC_WEAK_FUNC(sub_82F460EC);
PPC_FUNC_IMPL(__imp__sub_82F460EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F460F0"))) PPC_WEAK_FUNC(sub_82F460F0);
PPC_FUNC_IMPL(__imp__sub_82F460F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16192
	ctx.r3.s64 = r11.s64 + -16192;
}

__attribute__((alias("__imp__sub_82F460F8"))) PPC_WEAK_FUNC(sub_82F460F8);
PPC_FUNC_IMPL(__imp__sub_82F460F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F460FC"))) PPC_WEAK_FUNC(sub_82F460FC);
PPC_FUNC_IMPL(__imp__sub_82F460FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46100"))) PPC_WEAK_FUNC(sub_82F46100);
PPC_FUNC_IMPL(__imp__sub_82F46100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16184
	ctx.r3.s64 = r11.s64 + -16184;
}

__attribute__((alias("__imp__sub_82F46108"))) PPC_WEAK_FUNC(sub_82F46108);
PPC_FUNC_IMPL(__imp__sub_82F46108) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4610C"))) PPC_WEAK_FUNC(sub_82F4610C);
PPC_FUNC_IMPL(__imp__sub_82F4610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46110"))) PPC_WEAK_FUNC(sub_82F46110);
PPC_FUNC_IMPL(__imp__sub_82F46110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16176
	ctx.r3.s64 = r11.s64 + -16176;
}

__attribute__((alias("__imp__sub_82F46118"))) PPC_WEAK_FUNC(sub_82F46118);
PPC_FUNC_IMPL(__imp__sub_82F46118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4611C"))) PPC_WEAK_FUNC(sub_82F4611C);
PPC_FUNC_IMPL(__imp__sub_82F4611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46120"))) PPC_WEAK_FUNC(sub_82F46120);
PPC_FUNC_IMPL(__imp__sub_82F46120) {
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
	// addi r3,r11,13435
	ctx.r3.s64 = r11.s64 + 13435;
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,15008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4614C"))) PPC_WEAK_FUNC(sub_82F4614C);
PPC_FUNC_IMPL(__imp__sub_82F4614C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46150"))) PPC_WEAK_FUNC(sub_82F46150);
PPC_FUNC_IMPL(__imp__sub_82F46150) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16244
	ctx.r3.s64 = r11.s64 + 16244;
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-16088
	ctx.r3.s64 = ctx.r10.s64 + -16088;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46188"))) PPC_WEAK_FUNC(sub_82F46188);
PPC_FUNC_IMPL(__imp__sub_82F46188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4618C"))) PPC_WEAK_FUNC(sub_82F4618C);
PPC_FUNC_IMPL(__imp__sub_82F4618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46190"))) PPC_WEAK_FUNC(sub_82F46190);
PPC_FUNC_IMPL(__imp__sub_82F46190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16072
	ctx.r3.s64 = r11.s64 + -16072;
}

__attribute__((alias("__imp__sub_82F46198"))) PPC_WEAK_FUNC(sub_82F46198);
PPC_FUNC_IMPL(__imp__sub_82F46198) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4619C"))) PPC_WEAK_FUNC(sub_82F4619C);
PPC_FUNC_IMPL(__imp__sub_82F4619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F461A0"))) PPC_WEAK_FUNC(sub_82F461A0);
PPC_FUNC_IMPL(__imp__sub_82F461A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16040
	ctx.r3.s64 = r11.s64 + -16040;
}

__attribute__((alias("__imp__sub_82F461A8"))) PPC_WEAK_FUNC(sub_82F461A8);
PPC_FUNC_IMPL(__imp__sub_82F461A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F461AC"))) PPC_WEAK_FUNC(sub_82F461AC);
PPC_FUNC_IMPL(__imp__sub_82F461AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F461B0"))) PPC_WEAK_FUNC(sub_82F461B0);
PPC_FUNC_IMPL(__imp__sub_82F461B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
}

__attribute__((alias("__imp__sub_82F461B8"))) PPC_WEAK_FUNC(sub_82F461B8);
PPC_FUNC_IMPL(__imp__sub_82F461B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F461BC"))) PPC_WEAK_FUNC(sub_82F461BC);
PPC_FUNC_IMPL(__imp__sub_82F461BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F461C0"))) PPC_WEAK_FUNC(sub_82F461C0);
PPC_FUNC_IMPL(__imp__sub_82F461C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16024
	ctx.r3.s64 = r11.s64 + -16024;
}

__attribute__((alias("__imp__sub_82F461C8"))) PPC_WEAK_FUNC(sub_82F461C8);
PPC_FUNC_IMPL(__imp__sub_82F461C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F461CC"))) PPC_WEAK_FUNC(sub_82F461CC);
PPC_FUNC_IMPL(__imp__sub_82F461CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F461D0"))) PPC_WEAK_FUNC(sub_82F461D0);
PPC_FUNC_IMPL(__imp__sub_82F461D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16016
	ctx.r3.s64 = r11.s64 + -16016;
}

__attribute__((alias("__imp__sub_82F461D8"))) PPC_WEAK_FUNC(sub_82F461D8);
PPC_FUNC_IMPL(__imp__sub_82F461D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F461DC"))) PPC_WEAK_FUNC(sub_82F461DC);
PPC_FUNC_IMPL(__imp__sub_82F461DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F461E0"))) PPC_WEAK_FUNC(sub_82F461E0);
PPC_FUNC_IMPL(__imp__sub_82F461E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16008
	ctx.r3.s64 = r11.s64 + -16008;
}

__attribute__((alias("__imp__sub_82F461E8"))) PPC_WEAK_FUNC(sub_82F461E8);
PPC_FUNC_IMPL(__imp__sub_82F461E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F461EC"))) PPC_WEAK_FUNC(sub_82F461EC);
PPC_FUNC_IMPL(__imp__sub_82F461EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F461F0"))) PPC_WEAK_FUNC(sub_82F461F0);
PPC_FUNC_IMPL(__imp__sub_82F461F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-16000
	ctx.r3.s64 = r11.s64 + -16000;
}

__attribute__((alias("__imp__sub_82F461F8"))) PPC_WEAK_FUNC(sub_82F461F8);
PPC_FUNC_IMPL(__imp__sub_82F461F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F461FC"))) PPC_WEAK_FUNC(sub_82F461FC);
PPC_FUNC_IMPL(__imp__sub_82F461FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46200"))) PPC_WEAK_FUNC(sub_82F46200);
PPC_FUNC_IMPL(__imp__sub_82F46200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15992
	ctx.r3.s64 = r11.s64 + -15992;
}

__attribute__((alias("__imp__sub_82F46208"))) PPC_WEAK_FUNC(sub_82F46208);
PPC_FUNC_IMPL(__imp__sub_82F46208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4620C"))) PPC_WEAK_FUNC(sub_82F4620C);
PPC_FUNC_IMPL(__imp__sub_82F4620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46210"))) PPC_WEAK_FUNC(sub_82F46210);
PPC_FUNC_IMPL(__imp__sub_82F46210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15984
	ctx.r3.s64 = r11.s64 + -15984;
}

__attribute__((alias("__imp__sub_82F46218"))) PPC_WEAK_FUNC(sub_82F46218);
PPC_FUNC_IMPL(__imp__sub_82F46218) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4621C"))) PPC_WEAK_FUNC(sub_82F4621C);
PPC_FUNC_IMPL(__imp__sub_82F4621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46220"))) PPC_WEAK_FUNC(sub_82F46220);
PPC_FUNC_IMPL(__imp__sub_82F46220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15976
	ctx.r3.s64 = r11.s64 + -15976;
}

__attribute__((alias("__imp__sub_82F46228"))) PPC_WEAK_FUNC(sub_82F46228);
PPC_FUNC_IMPL(__imp__sub_82F46228) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4622C"))) PPC_WEAK_FUNC(sub_82F4622C);
PPC_FUNC_IMPL(__imp__sub_82F4622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46230"))) PPC_WEAK_FUNC(sub_82F46230);
PPC_FUNC_IMPL(__imp__sub_82F46230) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,16348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16348, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46258"))) PPC_WEAK_FUNC(sub_82F46258);
PPC_FUNC_IMPL(__imp__sub_82F46258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4625C"))) PPC_WEAK_FUNC(sub_82F4625C);
PPC_FUNC_IMPL(__imp__sub_82F4625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46260"))) PPC_WEAK_FUNC(sub_82F46260);
PPC_FUNC_IMPL(__imp__sub_82F46260) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,12700
	ctx.r3.s64 = r11.s64 + 12700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,16288
	ctx.r3.s64 = ctx.r10.s64 + 16288;
	// bl 0x826cb420
	sub_826CB420(ctx, base);
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r3,r9,-15968
	ctx.r3.s64 = ctx.r9.s64 + -15968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F462A4"))) PPC_WEAK_FUNC(sub_82F462A4);
PPC_FUNC_IMPL(__imp__sub_82F462A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F462A8"))) PPC_WEAK_FUNC(sub_82F462A8);
PPC_FUNC_IMPL(__imp__sub_82F462A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15952
	ctx.r3.s64 = r11.s64 + -15952;
}

__attribute__((alias("__imp__sub_82F462B0"))) PPC_WEAK_FUNC(sub_82F462B0);
PPC_FUNC_IMPL(__imp__sub_82F462B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F462B4"))) PPC_WEAK_FUNC(sub_82F462B4);
PPC_FUNC_IMPL(__imp__sub_82F462B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F462B8"))) PPC_WEAK_FUNC(sub_82F462B8);
PPC_FUNC_IMPL(__imp__sub_82F462B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15944
	ctx.r3.s64 = r11.s64 + -15944;
}

__attribute__((alias("__imp__sub_82F462C0"))) PPC_WEAK_FUNC(sub_82F462C0);
PPC_FUNC_IMPL(__imp__sub_82F462C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F462C4"))) PPC_WEAK_FUNC(sub_82F462C4);
PPC_FUNC_IMPL(__imp__sub_82F462C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F462C8"))) PPC_WEAK_FUNC(sub_82F462C8);
PPC_FUNC_IMPL(__imp__sub_82F462C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15936
	ctx.r3.s64 = r11.s64 + -15936;
}

__attribute__((alias("__imp__sub_82F462D0"))) PPC_WEAK_FUNC(sub_82F462D0);
PPC_FUNC_IMPL(__imp__sub_82F462D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F462D4"))) PPC_WEAK_FUNC(sub_82F462D4);
PPC_FUNC_IMPL(__imp__sub_82F462D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F462D8"))) PPC_WEAK_FUNC(sub_82F462D8);
PPC_FUNC_IMPL(__imp__sub_82F462D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15928
	ctx.r3.s64 = r11.s64 + -15928;
}

__attribute__((alias("__imp__sub_82F462E0"))) PPC_WEAK_FUNC(sub_82F462E0);
PPC_FUNC_IMPL(__imp__sub_82F462E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F462E4"))) PPC_WEAK_FUNC(sub_82F462E4);
PPC_FUNC_IMPL(__imp__sub_82F462E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F462E8"))) PPC_WEAK_FUNC(sub_82F462E8);
PPC_FUNC_IMPL(__imp__sub_82F462E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15920
	ctx.r3.s64 = r11.s64 + -15920;
}

__attribute__((alias("__imp__sub_82F462F0"))) PPC_WEAK_FUNC(sub_82F462F0);
PPC_FUNC_IMPL(__imp__sub_82F462F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F462F4"))) PPC_WEAK_FUNC(sub_82F462F4);
PPC_FUNC_IMPL(__imp__sub_82F462F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F462F8"))) PPC_WEAK_FUNC(sub_82F462F8);
PPC_FUNC_IMPL(__imp__sub_82F462F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15912
	ctx.r3.s64 = r11.s64 + -15912;
}

__attribute__((alias("__imp__sub_82F46300"))) PPC_WEAK_FUNC(sub_82F46300);
PPC_FUNC_IMPL(__imp__sub_82F46300) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46304"))) PPC_WEAK_FUNC(sub_82F46304);
PPC_FUNC_IMPL(__imp__sub_82F46304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46308"))) PPC_WEAK_FUNC(sub_82F46308);
PPC_FUNC_IMPL(__imp__sub_82F46308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15904
	ctx.r3.s64 = r11.s64 + -15904;
}

__attribute__((alias("__imp__sub_82F46310"))) PPC_WEAK_FUNC(sub_82F46310);
PPC_FUNC_IMPL(__imp__sub_82F46310) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46314"))) PPC_WEAK_FUNC(sub_82F46314);
PPC_FUNC_IMPL(__imp__sub_82F46314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46318"))) PPC_WEAK_FUNC(sub_82F46318);
PPC_FUNC_IMPL(__imp__sub_82F46318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15896
	ctx.r3.s64 = r11.s64 + -15896;
}

__attribute__((alias("__imp__sub_82F46320"))) PPC_WEAK_FUNC(sub_82F46320);
PPC_FUNC_IMPL(__imp__sub_82F46320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46324"))) PPC_WEAK_FUNC(sub_82F46324);
PPC_FUNC_IMPL(__imp__sub_82F46324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46328"))) PPC_WEAK_FUNC(sub_82F46328);
PPC_FUNC_IMPL(__imp__sub_82F46328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15888
	ctx.r3.s64 = r11.s64 + -15888;
}

__attribute__((alias("__imp__sub_82F46330"))) PPC_WEAK_FUNC(sub_82F46330);
PPC_FUNC_IMPL(__imp__sub_82F46330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46334"))) PPC_WEAK_FUNC(sub_82F46334);
PPC_FUNC_IMPL(__imp__sub_82F46334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46338"))) PPC_WEAK_FUNC(sub_82F46338);
PPC_FUNC_IMPL(__imp__sub_82F46338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15880
	ctx.r3.s64 = r11.s64 + -15880;
}

__attribute__((alias("__imp__sub_82F46340"))) PPC_WEAK_FUNC(sub_82F46340);
PPC_FUNC_IMPL(__imp__sub_82F46340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46344"))) PPC_WEAK_FUNC(sub_82F46344);
PPC_FUNC_IMPL(__imp__sub_82F46344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46348"))) PPC_WEAK_FUNC(sub_82F46348);
PPC_FUNC_IMPL(__imp__sub_82F46348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
}

__attribute__((alias("__imp__sub_82F46350"))) PPC_WEAK_FUNC(sub_82F46350);
PPC_FUNC_IMPL(__imp__sub_82F46350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46354"))) PPC_WEAK_FUNC(sub_82F46354);
PPC_FUNC_IMPL(__imp__sub_82F46354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46358"))) PPC_WEAK_FUNC(sub_82F46358);
PPC_FUNC_IMPL(__imp__sub_82F46358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15864
	ctx.r3.s64 = r11.s64 + -15864;
}

__attribute__((alias("__imp__sub_82F46360"))) PPC_WEAK_FUNC(sub_82F46360);
PPC_FUNC_IMPL(__imp__sub_82F46360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46364"))) PPC_WEAK_FUNC(sub_82F46364);
PPC_FUNC_IMPL(__imp__sub_82F46364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46368"))) PPC_WEAK_FUNC(sub_82F46368);
PPC_FUNC_IMPL(__imp__sub_82F46368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15856
	ctx.r3.s64 = r11.s64 + -15856;
}

__attribute__((alias("__imp__sub_82F46370"))) PPC_WEAK_FUNC(sub_82F46370);
PPC_FUNC_IMPL(__imp__sub_82F46370) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46374"))) PPC_WEAK_FUNC(sub_82F46374);
PPC_FUNC_IMPL(__imp__sub_82F46374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46378"))) PPC_WEAK_FUNC(sub_82F46378);
PPC_FUNC_IMPL(__imp__sub_82F46378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15848
	ctx.r3.s64 = r11.s64 + -15848;
}

__attribute__((alias("__imp__sub_82F46380"))) PPC_WEAK_FUNC(sub_82F46380);
PPC_FUNC_IMPL(__imp__sub_82F46380) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46384"))) PPC_WEAK_FUNC(sub_82F46384);
PPC_FUNC_IMPL(__imp__sub_82F46384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46388"))) PPC_WEAK_FUNC(sub_82F46388);
PPC_FUNC_IMPL(__imp__sub_82F46388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15840
	ctx.r3.s64 = r11.s64 + -15840;
}

__attribute__((alias("__imp__sub_82F46390"))) PPC_WEAK_FUNC(sub_82F46390);
PPC_FUNC_IMPL(__imp__sub_82F46390) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46394"))) PPC_WEAK_FUNC(sub_82F46394);
PPC_FUNC_IMPL(__imp__sub_82F46394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46398"))) PPC_WEAK_FUNC(sub_82F46398);
PPC_FUNC_IMPL(__imp__sub_82F46398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15832
	ctx.r3.s64 = r11.s64 + -15832;
}

__attribute__((alias("__imp__sub_82F463A0"))) PPC_WEAK_FUNC(sub_82F463A0);
PPC_FUNC_IMPL(__imp__sub_82F463A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F463A4"))) PPC_WEAK_FUNC(sub_82F463A4);
PPC_FUNC_IMPL(__imp__sub_82F463A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F463A8"))) PPC_WEAK_FUNC(sub_82F463A8);
PPC_FUNC_IMPL(__imp__sub_82F463A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15824
	ctx.r3.s64 = r11.s64 + -15824;
}

__attribute__((alias("__imp__sub_82F463B0"))) PPC_WEAK_FUNC(sub_82F463B0);
PPC_FUNC_IMPL(__imp__sub_82F463B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F463B4"))) PPC_WEAK_FUNC(sub_82F463B4);
PPC_FUNC_IMPL(__imp__sub_82F463B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F463B8"))) PPC_WEAK_FUNC(sub_82F463B8);
PPC_FUNC_IMPL(__imp__sub_82F463B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15816
	ctx.r3.s64 = r11.s64 + -15816;
}

__attribute__((alias("__imp__sub_82F463C0"))) PPC_WEAK_FUNC(sub_82F463C0);
PPC_FUNC_IMPL(__imp__sub_82F463C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F463C4"))) PPC_WEAK_FUNC(sub_82F463C4);
PPC_FUNC_IMPL(__imp__sub_82F463C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F463C8"))) PPC_WEAK_FUNC(sub_82F463C8);
PPC_FUNC_IMPL(__imp__sub_82F463C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15808
	ctx.r3.s64 = r11.s64 + -15808;
}

__attribute__((alias("__imp__sub_82F463D0"))) PPC_WEAK_FUNC(sub_82F463D0);
PPC_FUNC_IMPL(__imp__sub_82F463D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F463D4"))) PPC_WEAK_FUNC(sub_82F463D4);
PPC_FUNC_IMPL(__imp__sub_82F463D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F463D8"))) PPC_WEAK_FUNC(sub_82F463D8);
PPC_FUNC_IMPL(__imp__sub_82F463D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15800
	ctx.r3.s64 = r11.s64 + -15800;
}

__attribute__((alias("__imp__sub_82F463E0"))) PPC_WEAK_FUNC(sub_82F463E0);
PPC_FUNC_IMPL(__imp__sub_82F463E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F463E4"))) PPC_WEAK_FUNC(sub_82F463E4);
PPC_FUNC_IMPL(__imp__sub_82F463E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F463E8"))) PPC_WEAK_FUNC(sub_82F463E8);
PPC_FUNC_IMPL(__imp__sub_82F463E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15792
	ctx.r3.s64 = r11.s64 + -15792;
}

__attribute__((alias("__imp__sub_82F463F0"))) PPC_WEAK_FUNC(sub_82F463F0);
PPC_FUNC_IMPL(__imp__sub_82F463F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F463F4"))) PPC_WEAK_FUNC(sub_82F463F4);
PPC_FUNC_IMPL(__imp__sub_82F463F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F463F8"))) PPC_WEAK_FUNC(sub_82F463F8);
PPC_FUNC_IMPL(__imp__sub_82F463F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15784
	ctx.r3.s64 = r11.s64 + -15784;
}

__attribute__((alias("__imp__sub_82F46400"))) PPC_WEAK_FUNC(sub_82F46400);
PPC_FUNC_IMPL(__imp__sub_82F46400) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46404"))) PPC_WEAK_FUNC(sub_82F46404);
PPC_FUNC_IMPL(__imp__sub_82F46404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46408"))) PPC_WEAK_FUNC(sub_82F46408);
PPC_FUNC_IMPL(__imp__sub_82F46408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
}

__attribute__((alias("__imp__sub_82F46410"))) PPC_WEAK_FUNC(sub_82F46410);
PPC_FUNC_IMPL(__imp__sub_82F46410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46414"))) PPC_WEAK_FUNC(sub_82F46414);
PPC_FUNC_IMPL(__imp__sub_82F46414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46418"))) PPC_WEAK_FUNC(sub_82F46418);
PPC_FUNC_IMPL(__imp__sub_82F46418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15768
	ctx.r3.s64 = r11.s64 + -15768;
}

__attribute__((alias("__imp__sub_82F46420"))) PPC_WEAK_FUNC(sub_82F46420);
PPC_FUNC_IMPL(__imp__sub_82F46420) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46424"))) PPC_WEAK_FUNC(sub_82F46424);
PPC_FUNC_IMPL(__imp__sub_82F46424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46428"))) PPC_WEAK_FUNC(sub_82F46428);
PPC_FUNC_IMPL(__imp__sub_82F46428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,21808
	ctx.r8.s64 = ctx.r10.s64 + 21808;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46444"))) PPC_WEAK_FUNC(sub_82F46444);
PPC_FUNC_IMPL(__imp__sub_82F46444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46448"))) PPC_WEAK_FUNC(sub_82F46448);
PPC_FUNC_IMPL(__imp__sub_82F46448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,3872
	ctx.r9.s64 = r11.s64 + 3872;
	// addi r8,r10,21824
	ctx.r8.s64 = ctx.r10.s64 + 21824;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46464"))) PPC_WEAK_FUNC(sub_82F46464);
PPC_FUNC_IMPL(__imp__sub_82F46464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46468"))) PPC_WEAK_FUNC(sub_82F46468);
PPC_FUNC_IMPL(__imp__sub_82F46468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
}

__attribute__((alias("__imp__sub_82F46470"))) PPC_WEAK_FUNC(sub_82F46470);
PPC_FUNC_IMPL(__imp__sub_82F46470) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46474"))) PPC_WEAK_FUNC(sub_82F46474);
PPC_FUNC_IMPL(__imp__sub_82F46474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46478"))) PPC_WEAK_FUNC(sub_82F46478);
PPC_FUNC_IMPL(__imp__sub_82F46478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15752
	ctx.r3.s64 = r11.s64 + -15752;
}

__attribute__((alias("__imp__sub_82F46480"))) PPC_WEAK_FUNC(sub_82F46480);
PPC_FUNC_IMPL(__imp__sub_82F46480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46484"))) PPC_WEAK_FUNC(sub_82F46484);
PPC_FUNC_IMPL(__imp__sub_82F46484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46488"))) PPC_WEAK_FUNC(sub_82F46488);
PPC_FUNC_IMPL(__imp__sub_82F46488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15744
	ctx.r3.s64 = r11.s64 + -15744;
}

__attribute__((alias("__imp__sub_82F46490"))) PPC_WEAK_FUNC(sub_82F46490);
PPC_FUNC_IMPL(__imp__sub_82F46490) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46494"))) PPC_WEAK_FUNC(sub_82F46494);
PPC_FUNC_IMPL(__imp__sub_82F46494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46498"))) PPC_WEAK_FUNC(sub_82F46498);
PPC_FUNC_IMPL(__imp__sub_82F46498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15736
	ctx.r3.s64 = r11.s64 + -15736;
}

__attribute__((alias("__imp__sub_82F464A0"))) PPC_WEAK_FUNC(sub_82F464A0);
PPC_FUNC_IMPL(__imp__sub_82F464A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F464A4"))) PPC_WEAK_FUNC(sub_82F464A4);
PPC_FUNC_IMPL(__imp__sub_82F464A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F464A8"))) PPC_WEAK_FUNC(sub_82F464A8);
PPC_FUNC_IMPL(__imp__sub_82F464A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15728
	ctx.r3.s64 = r11.s64 + -15728;
}

__attribute__((alias("__imp__sub_82F464B0"))) PPC_WEAK_FUNC(sub_82F464B0);
PPC_FUNC_IMPL(__imp__sub_82F464B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F464B4"))) PPC_WEAK_FUNC(sub_82F464B4);
PPC_FUNC_IMPL(__imp__sub_82F464B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F464B8"))) PPC_WEAK_FUNC(sub_82F464B8);
PPC_FUNC_IMPL(__imp__sub_82F464B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15704
	ctx.r3.s64 = r11.s64 + -15704;
}

__attribute__((alias("__imp__sub_82F464C0"))) PPC_WEAK_FUNC(sub_82F464C0);
PPC_FUNC_IMPL(__imp__sub_82F464C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F464C4"))) PPC_WEAK_FUNC(sub_82F464C4);
PPC_FUNC_IMPL(__imp__sub_82F464C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F464C8"))) PPC_WEAK_FUNC(sub_82F464C8);
PPC_FUNC_IMPL(__imp__sub_82F464C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15696
	ctx.r3.s64 = r11.s64 + -15696;
}

__attribute__((alias("__imp__sub_82F464D0"))) PPC_WEAK_FUNC(sub_82F464D0);
PPC_FUNC_IMPL(__imp__sub_82F464D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F464D4"))) PPC_WEAK_FUNC(sub_82F464D4);
PPC_FUNC_IMPL(__imp__sub_82F464D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F464D8"))) PPC_WEAK_FUNC(sub_82F464D8);
PPC_FUNC_IMPL(__imp__sub_82F464D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22000
	ctx.r3.s64 = r11.s64 + 22000;
}

__attribute__((alias("__imp__sub_82F464E0"))) PPC_WEAK_FUNC(sub_82F464E0);
PPC_FUNC_IMPL(__imp__sub_82F464E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8270d698
	sub_8270D698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F464E4"))) PPC_WEAK_FUNC(sub_82F464E4);
PPC_FUNC_IMPL(__imp__sub_82F464E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F464E8"))) PPC_WEAK_FUNC(sub_82F464E8);
PPC_FUNC_IMPL(__imp__sub_82F464E8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,21964
	ctx.r3.s64 = r11.s64 + 21964;
	// bl 0x8271eb78
	sub_8271EB78(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15688
	ctx.r3.s64 = ctx.r10.s64 + -15688;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46518"))) PPC_WEAK_FUNC(sub_82F46518);
PPC_FUNC_IMPL(__imp__sub_82F46518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4651C"))) PPC_WEAK_FUNC(sub_82F4651C);
PPC_FUNC_IMPL(__imp__sub_82F4651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46520"))) PPC_WEAK_FUNC(sub_82F46520);
PPC_FUNC_IMPL(__imp__sub_82F46520) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22512
	ctx.r3.s64 = r11.s64 + 22512;
	// bl 0x8271e9e8
	sub_8271E9E8(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15672
	ctx.r3.s64 = ctx.r10.s64 + -15672;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46550"))) PPC_WEAK_FUNC(sub_82F46550);
PPC_FUNC_IMPL(__imp__sub_82F46550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46554"))) PPC_WEAK_FUNC(sub_82F46554);
PPC_FUNC_IMPL(__imp__sub_82F46554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46558"))) PPC_WEAK_FUNC(sub_82F46558);
PPC_FUNC_IMPL(__imp__sub_82F46558) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22528
	ctx.r3.s64 = r11.s64 + 22528;
	// bl 0x8271e940
	sub_8271E940(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15656
	ctx.r3.s64 = ctx.r10.s64 + -15656;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46588"))) PPC_WEAK_FUNC(sub_82F46588);
PPC_FUNC_IMPL(__imp__sub_82F46588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4658C"))) PPC_WEAK_FUNC(sub_82F4658C);
PPC_FUNC_IMPL(__imp__sub_82F4658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46590"))) PPC_WEAK_FUNC(sub_82F46590);
PPC_FUNC_IMPL(__imp__sub_82F46590) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22556
	ctx.r3.s64 = r11.s64 + 22556;
	// bl 0x8271e898
	sub_8271E898(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15640
	ctx.r3.s64 = ctx.r10.s64 + -15640;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F465C0"))) PPC_WEAK_FUNC(sub_82F465C0);
PPC_FUNC_IMPL(__imp__sub_82F465C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F465C4"))) PPC_WEAK_FUNC(sub_82F465C4);
PPC_FUNC_IMPL(__imp__sub_82F465C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F465C8"))) PPC_WEAK_FUNC(sub_82F465C8);
PPC_FUNC_IMPL(__imp__sub_82F465C8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22584
	ctx.r3.s64 = r11.s64 + 22584;
	// bl 0x82719588
	sub_82719588(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15624
	ctx.r3.s64 = ctx.r10.s64 + -15624;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F465F8"))) PPC_WEAK_FUNC(sub_82F465F8);
PPC_FUNC_IMPL(__imp__sub_82F465F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F465FC"))) PPC_WEAK_FUNC(sub_82F465FC);
PPC_FUNC_IMPL(__imp__sub_82F465FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46600"))) PPC_WEAK_FUNC(sub_82F46600);
PPC_FUNC_IMPL(__imp__sub_82F46600) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22616
	ctx.r3.s64 = r11.s64 + 22616;
	// bl 0x82714aa0
	sub_82714AA0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15608
	ctx.r3.s64 = ctx.r10.s64 + -15608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46630"))) PPC_WEAK_FUNC(sub_82F46630);
PPC_FUNC_IMPL(__imp__sub_82F46630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46634"))) PPC_WEAK_FUNC(sub_82F46634);
PPC_FUNC_IMPL(__imp__sub_82F46634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46638"))) PPC_WEAK_FUNC(sub_82F46638);
PPC_FUNC_IMPL(__imp__sub_82F46638) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,23752
	ctx.r3.s64 = r11.s64 + 23752;
	// bl 0x82714aa0
	sub_82714AA0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15592
	ctx.r3.s64 = ctx.r10.s64 + -15592;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46668"))) PPC_WEAK_FUNC(sub_82F46668);
PPC_FUNC_IMPL(__imp__sub_82F46668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4666C"))) PPC_WEAK_FUNC(sub_82F4666C);
PPC_FUNC_IMPL(__imp__sub_82F4666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46670"))) PPC_WEAK_FUNC(sub_82F46670);
PPC_FUNC_IMPL(__imp__sub_82F46670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r31,2
	r31.s64 = 2;
	// addi r30,r11,25344
	r30.s64 = r11.s64 + 25344;
loc_82F46690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// bge 0x82f46690
	if (!cr0.lt) goto loc_82F46690;
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15576
	ctx.r3.s64 = r11.s64 + -15576;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
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

__attribute__((alias("__imp__sub_82F466C4"))) PPC_WEAK_FUNC(sub_82F466C4);
PPC_FUNC_IMPL(__imp__sub_82F466C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F466C8"))) PPC_WEAK_FUNC(sub_82F466C8);
PPC_FUNC_IMPL(__imp__sub_82F466C8) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18748
	ctx.r3.s64 = ctx.r10.s64 + -18748;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,25672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46700"))) PPC_WEAK_FUNC(sub_82F46700);
PPC_FUNC_IMPL(__imp__sub_82F46700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46704"))) PPC_WEAK_FUNC(sub_82F46704);
PPC_FUNC_IMPL(__imp__sub_82F46704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46708"))) PPC_WEAK_FUNC(sub_82F46708);
PPC_FUNC_IMPL(__imp__sub_82F46708) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18692
	ctx.r3.s64 = ctx.r10.s64 + -18692;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,25668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46740"))) PPC_WEAK_FUNC(sub_82F46740);
PPC_FUNC_IMPL(__imp__sub_82F46740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46744"))) PPC_WEAK_FUNC(sub_82F46744);
PPC_FUNC_IMPL(__imp__sub_82F46744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46748"))) PPC_WEAK_FUNC(sub_82F46748);
PPC_FUNC_IMPL(__imp__sub_82F46748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15496
	ctx.r3.s64 = r11.s64 + -15496;
}

__attribute__((alias("__imp__sub_82F46750"))) PPC_WEAK_FUNC(sub_82F46750);
PPC_FUNC_IMPL(__imp__sub_82F46750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46754"))) PPC_WEAK_FUNC(sub_82F46754);
PPC_FUNC_IMPL(__imp__sub_82F46754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46758"))) PPC_WEAK_FUNC(sub_82F46758);
PPC_FUNC_IMPL(__imp__sub_82F46758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15488
	ctx.r3.s64 = r11.s64 + -15488;
}

__attribute__((alias("__imp__sub_82F46760"))) PPC_WEAK_FUNC(sub_82F46760);
PPC_FUNC_IMPL(__imp__sub_82F46760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46764"))) PPC_WEAK_FUNC(sub_82F46764);
PPC_FUNC_IMPL(__imp__sub_82F46764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46768"))) PPC_WEAK_FUNC(sub_82F46768);
PPC_FUNC_IMPL(__imp__sub_82F46768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r9,r11,25680
	ctx.r9.s64 = r11.s64 + 25680;
	// addi r8,r10,-15184
	ctx.r8.s64 = ctx.r10.s64 + -15184;
	// lis r7,-31979
	ctx.r7.s64 = -2095775744;
	// lfs f0,25680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25680);
	f0.f64 = double(temp.f32);
	// addi r3,r7,-15480
	ctx.r3.s64 = ctx.r7.s64 + -15480;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f13,20(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f12,24(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f11,28(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
}

__attribute__((alias("__imp__sub_82F467A0"))) PPC_WEAK_FUNC(sub_82F467A0);
PPC_FUNC_IMPL(__imp__sub_82F467A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F467A4"))) PPC_WEAK_FUNC(sub_82F467A4);
PPC_FUNC_IMPL(__imp__sub_82F467A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F467A8"))) PPC_WEAK_FUNC(sub_82F467A8);
PPC_FUNC_IMPL(__imp__sub_82F467A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15472
	ctx.r3.s64 = r11.s64 + -15472;
}

__attribute__((alias("__imp__sub_82F467B0"))) PPC_WEAK_FUNC(sub_82F467B0);
PPC_FUNC_IMPL(__imp__sub_82F467B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F467B4"))) PPC_WEAK_FUNC(sub_82F467B4);
PPC_FUNC_IMPL(__imp__sub_82F467B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F467B8"))) PPC_WEAK_FUNC(sub_82F467B8);
PPC_FUNC_IMPL(__imp__sub_82F467B8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,26304
	ctx.r3.s64 = r11.s64 + 26304;
	// bl 0x8271b6c0
	sub_8271B6C0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15464
	ctx.r3.s64 = ctx.r10.s64 + -15464;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F467E8"))) PPC_WEAK_FUNC(sub_82F467E8);
PPC_FUNC_IMPL(__imp__sub_82F467E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F467EC"))) PPC_WEAK_FUNC(sub_82F467EC);
PPC_FUNC_IMPL(__imp__sub_82F467EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F467F0"))) PPC_WEAK_FUNC(sub_82F467F0);
PPC_FUNC_IMPL(__imp__sub_82F467F0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,26368
	ctx.r3.s64 = r11.s64 + 26368;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-15448
	ctx.r3.s64 = ctx.r10.s64 + -15448;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F46820"))) PPC_WEAK_FUNC(sub_82F46820);
PPC_FUNC_IMPL(__imp__sub_82F46820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46824"))) PPC_WEAK_FUNC(sub_82F46824);
PPC_FUNC_IMPL(__imp__sub_82F46824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46828"))) PPC_WEAK_FUNC(sub_82F46828);
PPC_FUNC_IMPL(__imp__sub_82F46828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15432
	ctx.r3.s64 = r11.s64 + -15432;
}

__attribute__((alias("__imp__sub_82F46830"))) PPC_WEAK_FUNC(sub_82F46830);
PPC_FUNC_IMPL(__imp__sub_82F46830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46834"))) PPC_WEAK_FUNC(sub_82F46834);
PPC_FUNC_IMPL(__imp__sub_82F46834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46838"))) PPC_WEAK_FUNC(sub_82F46838);
PPC_FUNC_IMPL(__imp__sub_82F46838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15424
	ctx.r3.s64 = r11.s64 + -15424;
}

__attribute__((alias("__imp__sub_82F46840"))) PPC_WEAK_FUNC(sub_82F46840);
PPC_FUNC_IMPL(__imp__sub_82F46840) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46844"))) PPC_WEAK_FUNC(sub_82F46844);
PPC_FUNC_IMPL(__imp__sub_82F46844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46848"))) PPC_WEAK_FUNC(sub_82F46848);
PPC_FUNC_IMPL(__imp__sub_82F46848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15416
	ctx.r3.s64 = r11.s64 + -15416;
}

__attribute__((alias("__imp__sub_82F46850"))) PPC_WEAK_FUNC(sub_82F46850);
PPC_FUNC_IMPL(__imp__sub_82F46850) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46854"))) PPC_WEAK_FUNC(sub_82F46854);
PPC_FUNC_IMPL(__imp__sub_82F46854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46858"))) PPC_WEAK_FUNC(sub_82F46858);
PPC_FUNC_IMPL(__imp__sub_82F46858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15408
	ctx.r3.s64 = r11.s64 + -15408;
}

__attribute__((alias("__imp__sub_82F46860"))) PPC_WEAK_FUNC(sub_82F46860);
PPC_FUNC_IMPL(__imp__sub_82F46860) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46864"))) PPC_WEAK_FUNC(sub_82F46864);
PPC_FUNC_IMPL(__imp__sub_82F46864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46868"))) PPC_WEAK_FUNC(sub_82F46868);
PPC_FUNC_IMPL(__imp__sub_82F46868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15400
	ctx.r3.s64 = r11.s64 + -15400;
}

__attribute__((alias("__imp__sub_82F46870"))) PPC_WEAK_FUNC(sub_82F46870);
PPC_FUNC_IMPL(__imp__sub_82F46870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46874"))) PPC_WEAK_FUNC(sub_82F46874);
PPC_FUNC_IMPL(__imp__sub_82F46874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46878"))) PPC_WEAK_FUNC(sub_82F46878);
PPC_FUNC_IMPL(__imp__sub_82F46878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15392
	ctx.r3.s64 = r11.s64 + -15392;
}

__attribute__((alias("__imp__sub_82F46880"))) PPC_WEAK_FUNC(sub_82F46880);
PPC_FUNC_IMPL(__imp__sub_82F46880) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46884"))) PPC_WEAK_FUNC(sub_82F46884);
PPC_FUNC_IMPL(__imp__sub_82F46884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46888"))) PPC_WEAK_FUNC(sub_82F46888);
PPC_FUNC_IMPL(__imp__sub_82F46888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15384
	ctx.r3.s64 = r11.s64 + -15384;
}

__attribute__((alias("__imp__sub_82F46890"))) PPC_WEAK_FUNC(sub_82F46890);
PPC_FUNC_IMPL(__imp__sub_82F46890) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46894"))) PPC_WEAK_FUNC(sub_82F46894);
PPC_FUNC_IMPL(__imp__sub_82F46894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46898"))) PPC_WEAK_FUNC(sub_82F46898);
PPC_FUNC_IMPL(__imp__sub_82F46898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15376
	ctx.r3.s64 = r11.s64 + -15376;
}

__attribute__((alias("__imp__sub_82F468A0"))) PPC_WEAK_FUNC(sub_82F468A0);
PPC_FUNC_IMPL(__imp__sub_82F468A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F468A4"))) PPC_WEAK_FUNC(sub_82F468A4);
PPC_FUNC_IMPL(__imp__sub_82F468A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F468A8"))) PPC_WEAK_FUNC(sub_82F468A8);
PPC_FUNC_IMPL(__imp__sub_82F468A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15368
	ctx.r3.s64 = r11.s64 + -15368;
}

__attribute__((alias("__imp__sub_82F468B0"))) PPC_WEAK_FUNC(sub_82F468B0);
PPC_FUNC_IMPL(__imp__sub_82F468B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F468B4"))) PPC_WEAK_FUNC(sub_82F468B4);
PPC_FUNC_IMPL(__imp__sub_82F468B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F468B8"))) PPC_WEAK_FUNC(sub_82F468B8);
PPC_FUNC_IMPL(__imp__sub_82F468B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15360
	ctx.r3.s64 = r11.s64 + -15360;
}

__attribute__((alias("__imp__sub_82F468C0"))) PPC_WEAK_FUNC(sub_82F468C0);
PPC_FUNC_IMPL(__imp__sub_82F468C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F468C4"))) PPC_WEAK_FUNC(sub_82F468C4);
PPC_FUNC_IMPL(__imp__sub_82F468C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F468C8"))) PPC_WEAK_FUNC(sub_82F468C8);
PPC_FUNC_IMPL(__imp__sub_82F468C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15352
	ctx.r3.s64 = r11.s64 + -15352;
}

__attribute__((alias("__imp__sub_82F468D0"))) PPC_WEAK_FUNC(sub_82F468D0);
PPC_FUNC_IMPL(__imp__sub_82F468D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F468D4"))) PPC_WEAK_FUNC(sub_82F468D4);
PPC_FUNC_IMPL(__imp__sub_82F468D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F468D8"))) PPC_WEAK_FUNC(sub_82F468D8);
PPC_FUNC_IMPL(__imp__sub_82F468D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15344
	ctx.r3.s64 = r11.s64 + -15344;
}

__attribute__((alias("__imp__sub_82F468E0"))) PPC_WEAK_FUNC(sub_82F468E0);
PPC_FUNC_IMPL(__imp__sub_82F468E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F468E4"))) PPC_WEAK_FUNC(sub_82F468E4);
PPC_FUNC_IMPL(__imp__sub_82F468E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F468E8"))) PPC_WEAK_FUNC(sub_82F468E8);
PPC_FUNC_IMPL(__imp__sub_82F468E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15336
	ctx.r3.s64 = r11.s64 + -15336;
}

__attribute__((alias("__imp__sub_82F468F0"))) PPC_WEAK_FUNC(sub_82F468F0);
PPC_FUNC_IMPL(__imp__sub_82F468F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F468F4"))) PPC_WEAK_FUNC(sub_82F468F4);
PPC_FUNC_IMPL(__imp__sub_82F468F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F468F8"))) PPC_WEAK_FUNC(sub_82F468F8);
PPC_FUNC_IMPL(__imp__sub_82F468F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15328
	ctx.r3.s64 = r11.s64 + -15328;
}

__attribute__((alias("__imp__sub_82F46900"))) PPC_WEAK_FUNC(sub_82F46900);
PPC_FUNC_IMPL(__imp__sub_82F46900) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46904"))) PPC_WEAK_FUNC(sub_82F46904);
PPC_FUNC_IMPL(__imp__sub_82F46904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46908"))) PPC_WEAK_FUNC(sub_82F46908);
PPC_FUNC_IMPL(__imp__sub_82F46908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15320
	ctx.r3.s64 = r11.s64 + -15320;
}

__attribute__((alias("__imp__sub_82F46910"))) PPC_WEAK_FUNC(sub_82F46910);
PPC_FUNC_IMPL(__imp__sub_82F46910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46914"))) PPC_WEAK_FUNC(sub_82F46914);
PPC_FUNC_IMPL(__imp__sub_82F46914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46918"))) PPC_WEAK_FUNC(sub_82F46918);
PPC_FUNC_IMPL(__imp__sub_82F46918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15312
	ctx.r3.s64 = r11.s64 + -15312;
}

__attribute__((alias("__imp__sub_82F46920"))) PPC_WEAK_FUNC(sub_82F46920);
PPC_FUNC_IMPL(__imp__sub_82F46920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46924"))) PPC_WEAK_FUNC(sub_82F46924);
PPC_FUNC_IMPL(__imp__sub_82F46924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46928"))) PPC_WEAK_FUNC(sub_82F46928);
PPC_FUNC_IMPL(__imp__sub_82F46928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15304
	ctx.r3.s64 = r11.s64 + -15304;
}

__attribute__((alias("__imp__sub_82F46930"))) PPC_WEAK_FUNC(sub_82F46930);
PPC_FUNC_IMPL(__imp__sub_82F46930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46934"))) PPC_WEAK_FUNC(sub_82F46934);
PPC_FUNC_IMPL(__imp__sub_82F46934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46938"))) PPC_WEAK_FUNC(sub_82F46938);
PPC_FUNC_IMPL(__imp__sub_82F46938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15296
	ctx.r3.s64 = r11.s64 + -15296;
}

__attribute__((alias("__imp__sub_82F46940"))) PPC_WEAK_FUNC(sub_82F46940);
PPC_FUNC_IMPL(__imp__sub_82F46940) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F46944"))) PPC_WEAK_FUNC(sub_82F46944);
PPC_FUNC_IMPL(__imp__sub_82F46944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F46948"))) PPC_WEAK_FUNC(sub_82F46948);
PPC_FUNC_IMPL(__imp__sub_82F46948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15288
	ctx.r3.s64 = r11.s64 + -15288;
}

__attribute__((alias("__imp__sub_82F46950"))) PPC_WEAK_FUNC(sub_82F46950);
PPC_FUNC_IMPL(__imp__sub_82F46950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

