#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82665EA0"))) PPC_WEAK_FUNC(sub_82665EA0);
PPC_FUNC_IMPL(__imp__sub_82665EA0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18716
	ctx.r9.s64 = r11.s64 + 18716;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82665ed4
	if (cr6.eq) goto loc_82665ED4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82665ED4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82665EE4"))) PPC_WEAK_FUNC(sub_82665EE4);
PPC_FUNC_IMPL(__imp__sub_82665EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665EE8"))) PPC_WEAK_FUNC(sub_82665EE8);
PPC_FUNC_IMPL(__imp__sub_82665EE8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18744
	ctx.r9.s64 = r11.s64 + 18744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82665f1c
	if (cr6.eq) goto loc_82665F1C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82665F1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82665F2C"))) PPC_WEAK_FUNC(sub_82665F2C);
PPC_FUNC_IMPL(__imp__sub_82665F2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665F30"))) PPC_WEAK_FUNC(sub_82665F30);
PPC_FUNC_IMPL(__imp__sub_82665F30) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18768
	ctx.r9.s64 = r11.s64 + 18768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82665f64
	if (cr6.eq) goto loc_82665F64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82665F64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82665F74"))) PPC_WEAK_FUNC(sub_82665F74);
PPC_FUNC_IMPL(__imp__sub_82665F74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665F78"))) PPC_WEAK_FUNC(sub_82665F78);
PPC_FUNC_IMPL(__imp__sub_82665F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665F7C"))) PPC_WEAK_FUNC(sub_82665F7C);
PPC_FUNC_IMPL(__imp__sub_82665F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665F80"))) PPC_WEAK_FUNC(sub_82665F80);
PPC_FUNC_IMPL(__imp__sub_82665F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665F84"))) PPC_WEAK_FUNC(sub_82665F84);
PPC_FUNC_IMPL(__imp__sub_82665F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665F88"))) PPC_WEAK_FUNC(sub_82665F88);
PPC_FUNC_IMPL(__imp__sub_82665F88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665F94"))) PPC_WEAK_FUNC(sub_82665F94);
PPC_FUNC_IMPL(__imp__sub_82665F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665F98"))) PPC_WEAK_FUNC(sub_82665F98);
PPC_FUNC_IMPL(__imp__sub_82665F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665FB0"))) PPC_WEAK_FUNC(sub_82665FB0);
PPC_FUNC_IMPL(__imp__sub_82665FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665FB4"))) PPC_WEAK_FUNC(sub_82665FB4);
PPC_FUNC_IMPL(__imp__sub_82665FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665FB8"))) PPC_WEAK_FUNC(sub_82665FB8);
PPC_FUNC_IMPL(__imp__sub_82665FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665FBC"))) PPC_WEAK_FUNC(sub_82665FBC);
PPC_FUNC_IMPL(__imp__sub_82665FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665FC0"))) PPC_WEAK_FUNC(sub_82665FC0);
PPC_FUNC_IMPL(__imp__sub_82665FC0) {
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
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82657498
	sub_82657498(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82665FEC"))) PPC_WEAK_FUNC(sub_82665FEC);
PPC_FUNC_IMPL(__imp__sub_82665FEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665FF0"))) PPC_WEAK_FUNC(sub_82665FF0);
PPC_FUNC_IMPL(__imp__sub_82665FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// b 0x82657490
	sub_82657490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666004"))) PPC_WEAK_FUNC(sub_82666004);
PPC_FUNC_IMPL(__imp__sub_82666004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666008"))) PPC_WEAK_FUNC(sub_82666008);
PPC_FUNC_IMPL(__imp__sub_82666008) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82c68548
	sub_82C68548(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82666058
	if (cr6.eq) goto loc_82666058;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// b 0x82666060
	goto loc_82666060;
loc_82666058:
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
loc_82666060:
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f31,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// beq cr6,0x8266610c
	if (cr6.eq) goto loc_8266610C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r7,r8,18836
	ctx.r7.s64 = ctx.r8.s64 + 18836;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// beq cr6,0x826660c8
	if (cr6.eq) goto loc_826660C8;
	// addi r8,r30,20
	ctx.r8.s64 = r30.s64 + 20;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r8,r30,16
	ctx.r8.s64 = r30.s64 + 16;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// b 0x826660d0
	goto loc_826660D0;
loc_826660C8:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_826660D0:
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// stfs f31,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x82c0f778
	sub_82C0F778(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,18768
	ctx.r6.s64 = ctx.r7.s64 + 18768;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_8266610C:
	// lbz r11,36(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82666130
	if (cr6.eq) goto loc_82666130;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c0da08
	sub_82C0DA08(ctx, base);
loc_82666130:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_82666138"))) PPC_WEAK_FUNC(sub_82666138);
PPC_FUNC_IMPL(__imp__sub_82666138) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266613C"))) PPC_WEAK_FUNC(sub_8266613C);
PPC_FUNC_IMPL(__imp__sub_8266613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666140"))) PPC_WEAK_FUNC(sub_82666140);
PPC_FUNC_IMPL(__imp__sub_82666140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stb r10,105(r11)
	PPC_STORE_U8(r11.u32 + 105, ctx.r10.u8);
	// b 0x82bfcaf8
	sub_82BFCAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666154"))) PPC_WEAK_FUNC(sub_82666154);
PPC_FUNC_IMPL(__imp__sub_82666154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666158"))) PPC_WEAK_FUNC(sub_82666158);
PPC_FUNC_IMPL(__imp__sub_82666158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, r11.u8);
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266616C"))) PPC_WEAK_FUNC(sub_8266616C);
PPC_FUNC_IMPL(__imp__sub_8266616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666170"))) PPC_WEAK_FUNC(sub_82666170);
PPC_FUNC_IMPL(__imp__sub_82666170) {
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
	// lbz r11,36(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82666228
	if (cr6.eq) goto loc_82666228;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82657498
	sub_82657498(ctx, base);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x826661e8
	if (!cr6.gt) goto loc_826661E8;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
loc_826661C0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x826661e0
	if (cr6.eq) goto loc_826661E0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x826661c0
	if (cr6.lt) goto loc_826661C0;
	// b 0x826661e8
	goto loc_826661E8;
loc_826661E0:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82666200
	if (!cr6.eq) goto loc_82666200;
loc_826661E8:
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x82666228
	if (cr6.eq) goto loc_82666228;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82c13168
	sub_82C13168(ctx, base);
	// b 0x82666228
	goto loc_82666228;
loc_82666200:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82666228
	if (cr6.eq) goto loc_82666228;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82666228:
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

__attribute__((alias("__imp__sub_8266623C"))) PPC_WEAK_FUNC(sub_8266623C);
PPC_FUNC_IMPL(__imp__sub_8266623C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666240"))) PPC_WEAK_FUNC(sub_82666240);
PPC_FUNC_IMPL(__imp__sub_82666240) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82c68548
	sub_82C68548(ctx, base);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8266628c
	if (cr6.eq) goto loc_8266628C;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// b 0x82666294
	goto loc_82666294;
loc_8266628C:
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
loc_82666294:
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826662d8
	if (!cr6.lt) goto loc_826662D8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,18952
	ctx.r6.s64 = ctx.r8.s64 + 18952;
	// addi r5,r7,18936
	ctx.r5.s64 = ctx.r7.s64 + 18936;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_826662D8:
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82666340
	if (cr6.eq) goto loc_82666340;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r10,r11,18836
	ctx.r10.s64 = r11.s64 + 18836;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82666318
	if (cr6.eq) goto loc_82666318;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// b 0x82666320
	goto loc_82666320;
loc_82666318:
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_82666320:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r29,16
	ctx.r6.s64 = r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0f778
	sub_82C0F778(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,18768
	ctx.r10.s64 = r11.s64 + 18768;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82666340:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82666370
	if (!cr6.lt) goto loc_82666370;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,18920
	ctx.r8.s64 = ctx.r9.s64 + 18920;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82666370:
	// lbz r11,36(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82666398
	if (cr6.eq) goto loc_82666398;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c0da08
	sub_82C0DA08(ctx, base);
loc_82666398:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826663c8
	if (!cr6.lt) goto loc_826663C8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826663C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_826663CC"))) PPC_WEAK_FUNC(sub_826663CC);
PPC_FUNC_IMPL(__imp__sub_826663CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826663D0"))) PPC_WEAK_FUNC(sub_826663D0);
PPC_FUNC_IMPL(__imp__sub_826663D0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f31,7832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	f31.f64 = double(temp.f32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82666454
	if (cr6.eq) goto loc_82666454;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f31,384(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r7,r11,18856
	ctx.r7.s64 = r11.s64 + 18856;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r7,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82c68370
	sub_82C68370(ctx, base);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r6,18768
	ctx.r5.s64 = ctx.r6.s64 + 18768;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
loc_82666454:
	// lbz r11,36(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826664bc
	if (cr6.eq) goto loc_826664BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfs f31,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r10,18900
	ctx.r6.s64 = ctx.r10.s64 + 18900;
	// addi r5,r9,18888
	ctx.r5.s64 = ctx.r9.s64 + 18888;
	// addi r3,r8,18876
	ctx.r3.s64 = ctx.r8.s64 + 18876;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r7,r11,18912
	ctx.r7.s64 = r11.s64 + 18912;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c68900
	sub_82C68900(ctx, base);
loc_826664BC:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_826664C4"))) PPC_WEAK_FUNC(sub_826664C4);
PPC_FUNC_IMPL(__imp__sub_826664C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826664C8"))) PPC_WEAK_FUNC(sub_826664C8);
PPC_FUNC_IMPL(__imp__sub_826664C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,92(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82666594
	if (cr6.eq) goto loc_82666594;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82666588
	if (cr0.lt) goto loc_82666588;
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_826664F8:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8266657c
	if (!cr6.eq) goto loc_8266657C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8266657c
	if (cr6.eq) goto loc_8266657C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263af90
	sub_8263AF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266657c
	if (!cr6.eq) goto loc_8266657C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x8266657c
	if (cr6.eq) goto loc_8266657C;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r11,r29,r10
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, r11.u32);
loc_8266657C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826664f8
	if (!cr0.lt) goto loc_826664F8;
loc_82666588:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82666594:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x826665ac
	if (cr6.lt) goto loc_826665AC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826665AC:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r26,0
	r26.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82666680
	if (!cr6.gt) goto loc_82666680;
loc_826665C4:
	// lwz r28,96(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// blt cr6,0x82666678
	if (cr6.lt) goto loc_82666678;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82666660
	if (!cr6.eq) goto loc_82666660;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82666660
	if (cr6.eq) goto loc_82666660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263af90
	sub_8263AF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82666660
	if (!cr6.eq) goto loc_82666660;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x82666660
	if (cr6.eq) goto loc_82666660;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
loc_82666660:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826665c4
	if (cr6.lt) goto loc_826665C4;
	// b 0x82666680
	goto loc_82666680;
loc_82666678:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82666680:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82666694"))) PPC_WEAK_FUNC(sub_82666694);
PPC_FUNC_IMPL(__imp__sub_82666694) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82666698"))) PPC_WEAK_FUNC(sub_82666698);
PPC_FUNC_IMPL(__imp__sub_82666698) {
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
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82bfc968
	sub_82BFC968(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826666e4
	if (cr6.eq) goto loc_826666E4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
loc_826666E4:
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

__attribute__((alias("__imp__sub_826666F8"))) PPC_WEAK_FUNC(sub_826666F8);
PPC_FUNC_IMPL(__imp__sub_826666F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826666FC"))) PPC_WEAK_FUNC(sub_826666FC);
PPC_FUNC_IMPL(__imp__sub_826666FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666700"))) PPC_WEAK_FUNC(sub_82666700);
PPC_FUNC_IMPL(__imp__sub_82666700) {
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
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82bfc968
	sub_82BFC968(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8266674c
	if (cr6.eq) goto loc_8266674C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
loc_8266674C:
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

__attribute__((alias("__imp__sub_82666760"))) PPC_WEAK_FUNC(sub_82666760);
PPC_FUNC_IMPL(__imp__sub_82666760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666764"))) PPC_WEAK_FUNC(sub_82666764);
PPC_FUNC_IMPL(__imp__sub_82666764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666768"))) PPC_WEAK_FUNC(sub_82666768);
PPC_FUNC_IMPL(__imp__sub_82666768) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_8266676C"))) PPC_WEAK_FUNC(sub_8266676C);
PPC_FUNC_IMPL(__imp__sub_8266676C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82666170
	sub_82666170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666770"))) PPC_WEAK_FUNC(sub_82666770);
PPC_FUNC_IMPL(__imp__sub_82666770) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_82666774"))) PPC_WEAK_FUNC(sub_82666774);
PPC_FUNC_IMPL(__imp__sub_82666774) {
	PPC_FUNC_PROLOGUE();
	// b 0x82666170
	sub_82666170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666778"))) PPC_WEAK_FUNC(sub_82666778);
PPC_FUNC_IMPL(__imp__sub_82666778) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_8266677C"))) PPC_WEAK_FUNC(sub_8266677C);
PPC_FUNC_IMPL(__imp__sub_8266677C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82666170
	sub_82666170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666780"))) PPC_WEAK_FUNC(sub_82666780);
PPC_FUNC_IMPL(__imp__sub_82666780) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266682c
	if (cr6.eq) goto loc_8266682C;
	// li r29,0
	r29.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stb r29,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r29.u8);
	// mr r27,r29
	r27.u64 = r29.u64;
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8266682c
	if (!cr6.gt) goto loc_8266682C;
	// li r25,-1
	r25.s64 = -1;
loc_826667C4:
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82666818
	if (!cr6.eq) goto loc_82666818;
	// addi r11,r26,-28
	r11.s64 = r26.s64 + -28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,80
	r30.s64 = r11.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfc968
	sub_82BFC968(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82666818
	if (cr6.eq) goto loc_82666818;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
loc_82666818:
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826667c4
	if (cr6.lt) goto loc_826667C4;
loc_8266682C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82666830"))) PPC_WEAK_FUNC(sub_82666830);
PPC_FUNC_IMPL(__imp__sub_82666830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82666834"))) PPC_WEAK_FUNC(sub_82666834);
PPC_FUNC_IMPL(__imp__sub_82666834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666838"))) PPC_WEAK_FUNC(sub_82666838);
PPC_FUNC_IMPL(__imp__sub_82666838) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826668e0
	if (cr6.eq) goto loc_826668E0;
	// li r29,0
	r29.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stb r29,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r29.u8);
	// mr r27,r29
	r27.u64 = r29.u64;
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826668e0
	if (!cr6.gt) goto loc_826668E0;
loc_82666878:
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826668cc
	if (!cr6.eq) goto loc_826668CC;
	// addi r11,r26,-28
	r11.s64 = r26.s64 + -28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,80
	r30.s64 = r11.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfc968
	sub_82BFC968(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826668cc
	if (cr6.eq) goto loc_826668CC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
loc_826668CC:
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82666878
	if (cr6.lt) goto loc_82666878;
loc_826668E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826668E4"))) PPC_WEAK_FUNC(sub_826668E4);
PPC_FUNC_IMPL(__imp__sub_826668E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826668E8"))) PPC_WEAK_FUNC(sub_826668E8);
PPC_FUNC_IMPL(__imp__sub_826668E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stb r10,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r10.u8);
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
}

__attribute__((alias("__imp__sub_8266690C"))) PPC_WEAK_FUNC(sub_8266690C);
PPC_FUNC_IMPL(__imp__sub_8266690C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82666698
	sub_82666698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666910"))) PPC_WEAK_FUNC(sub_82666910);
PPC_FUNC_IMPL(__imp__sub_82666910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666914"))) PPC_WEAK_FUNC(sub_82666914);
PPC_FUNC_IMPL(__imp__sub_82666914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666918"))) PPC_WEAK_FUNC(sub_82666918);
PPC_FUNC_IMPL(__imp__sub_82666918) {
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
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r26,r4,40
	r26.s64 = ctx.r4.s64 + 40;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826669e4
	if (!cr6.gt) goto loc_826669E4;
	// li r28,0
	r28.s64 = 0;
loc_82666944:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x826669d0
	if (!cr6.gt) goto loc_826669D0;
	// li r30,0
	r30.s64 = 0;
loc_82666960:
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// addi r27,r11,16
	r27.s64 = r11.s64 + 16;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82666998
	if (!cr6.eq) goto loc_82666998;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82666998:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r27.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x82666960
	if (cr6.lt) goto loc_82666960;
loc_826669D0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82666944
	if (cr6.lt) goto loc_82666944;
loc_826669E4:
	// lwz r11,280(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 280);
	// addi r28,r24,276
	r28.s64 = r24.s64 + 276;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82666a6c
	if (!cr6.gt) goto loc_82666A6C;
	// li r29,0
	r29.s64 = 0;
loc_826669FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82666a58
	if (cr6.eq) goto loc_82666A58;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82666a3c
	if (!cr6.eq) goto loc_82666A3C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82666A3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82666A58:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826669fc
	if (cr6.lt) goto loc_826669FC;
loc_82666A6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82666A70"))) PPC_WEAK_FUNC(sub_82666A70);
PPC_FUNC_IMPL(__imp__sub_82666A70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82666A74"))) PPC_WEAK_FUNC(sub_82666A74);
PPC_FUNC_IMPL(__imp__sub_82666A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666A78"))) PPC_WEAK_FUNC(sub_82666A78);
PPC_FUNC_IMPL(__imp__sub_82666A78) {
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
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r26,r4,52
	r26.s64 = ctx.r4.s64 + 52;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82666b44
	if (!cr6.gt) goto loc_82666B44;
	// li r28,0
	r28.s64 = 0;
loc_82666AA4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82666b30
	if (!cr6.gt) goto loc_82666B30;
	// li r30,0
	r30.s64 = 0;
loc_82666AC0:
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// addi r27,r11,16
	r27.s64 = r11.s64 + 16;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82666af8
	if (!cr6.eq) goto loc_82666AF8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82666AF8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r27.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x82666ac0
	if (cr6.lt) goto loc_82666AC0;
loc_82666B30:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82666aa4
	if (cr6.lt) goto loc_82666AA4;
loc_82666B44:
	// lwz r28,32(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// li r27,0
	r27.s64 = 0;
	// lwz r26,36(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82666bcc
	if (!cr6.gt) goto loc_82666BCC;
	// li r29,0
	r29.s64 = 0;
loc_82666B60:
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82666bb8
	if (cr6.eq) goto loc_82666BB8;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82666b9c
	if (!cr6.eq) goto loc_82666B9C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82666B9C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82666BB8:
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82666b60
	if (cr6.lt) goto loc_82666B60;
loc_82666BCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82666BD0"))) PPC_WEAK_FUNC(sub_82666BD0);
PPC_FUNC_IMPL(__imp__sub_82666BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82666BD4"))) PPC_WEAK_FUNC(sub_82666BD4);
PPC_FUNC_IMPL(__imp__sub_82666BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666BD8"))) PPC_WEAK_FUNC(sub_82666BD8);
PPC_FUNC_IMPL(__imp__sub_82666BD8) {
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
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82657498
	sub_82657498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r11,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_82666C28"))) PPC_WEAK_FUNC(sub_82666C28);
PPC_FUNC_IMPL(__imp__sub_82666C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666C2C"))) PPC_WEAK_FUNC(sub_82666C2C);
PPC_FUNC_IMPL(__imp__sub_82666C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666C30"))) PPC_WEAK_FUNC(sub_82666C30);
PPC_FUNC_IMPL(__imp__sub_82666C30) {
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
	// lbz r11,36(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82666cb8
	if (cr6.eq) goto loc_82666CB8;
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lis r4,0
	ctx.r4.s64 = 0;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82657490
	sub_82657490(ctx, base);
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82666c9c
	if (!cr6.eq) goto loc_82666C9C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82666C9C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82666CB8:
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

__attribute__((alias("__imp__sub_82666CCC"))) PPC_WEAK_FUNC(sub_82666CCC);
PPC_FUNC_IMPL(__imp__sub_82666CCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666CD0"))) PPC_WEAK_FUNC(sub_82666CD0);
PPC_FUNC_IMPL(__imp__sub_82666CD0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// addi r8,r11,18716
	ctx.r8.s64 = r11.s64 + 18716;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// addi r6,r10,18744
	ctx.r6.s64 = ctx.r10.s64 + 18744;
	// sth r24,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r24.u16);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r9,18684
	ctx.r6.s64 = ctx.r9.s64 + 18684;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r7,18700
	ctx.r9.s64 = ctx.r7.s64 + 18700;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// addi r7,r5,19052
	ctx.r7.s64 = ctx.r5.s64 + 19052;
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// addi r6,r3,19024
	ctx.r6.s64 = ctx.r3.s64 + 19024;
	// addi r5,r11,19000
	ctx.r5.s64 = r11.s64 + 19000;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r3,r10,18984
	ctx.r3.s64 = ctx.r10.s64 + 18984;
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r11,r8,18968
	r11.s64 = ctx.r8.s64 + 18968;
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// addi r27,r31,28
	r27.s64 = r31.s64 + 28;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r26,r31,32
	r26.s64 = r31.s64 + 32;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82666e18
	if (cr6.eq) goto loc_82666E18;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bfaa68
	sub_82BFAA68(ctx, base);
	// b 0x82666e1c
	goto loc_82666E1C;
loc_82666E18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82666E1C:
	// stfs f31,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bne cr6,0x82666e40
	if (!cr6.eq) goto loc_82666E40;
	// stb r24,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r24.u8);
	// b 0x82666e4c
	goto loc_82666E4C;
loc_82666E40:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x82666e4c
	if (!cr6.eq) goto loc_82666E4C;
	// stb r30,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r30.u8);
loc_82666E4C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82641228
	sub_82641228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x826412a0
	sub_826412A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82641318
	sub_82641318(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82641408
	sub_82641408(ctx, base);
	// lbz r11,36(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82666ed4
	if (cr6.eq) goto loc_82666ED4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r29,r11,32
	r29.s64 = r11.s64 + 32;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82666ecc
	if (cr6.eq) goto loc_82666ECC;
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82c128c0
	sub_82C128C0(ctx, base);
	// b 0x82666ed0
	goto loc_82666ED0;
loc_82666ECC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82666ED0:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82666ED4:
	// li r11,30
	r11.s64 = 30;
	// stb r30,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r30.u8);
	// stb r30,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r30.u8);
	// stb r30,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_82666F00"))) PPC_WEAK_FUNC(sub_82666F00);
PPC_FUNC_IMPL(__imp__sub_82666F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82666F04"))) PPC_WEAK_FUNC(sub_82666F04);
PPC_FUNC_IMPL(__imp__sub_82666F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666F08"))) PPC_WEAK_FUNC(sub_82666F08);
PPC_FUNC_IMPL(__imp__sub_82666F08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r11,19052
	ctx.r6.s64 = r11.s64 + 19052;
	// addi r5,r10,19024
	ctx.r5.s64 = ctx.r10.s64 + 19024;
	// addi r4,r9,19000
	ctx.r4.s64 = ctx.r9.s64 + 19000;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r11,r8,18984
	r11.s64 = ctx.r8.s64 + 18984;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// addi r10,r7,18968
	ctx.r10.s64 = ctx.r7.s64 + 18968;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r28,r3,20
	r28.s64 = ctx.r3.s64 + 20;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r26,r31,28
	r26.s64 = r31.s64 + 28;
	// addi r25,r31,32
	r25.s64 = r31.s64 + 32;
	// bl 0x8263e8a0
	sub_8263E8A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8263e8e8
	sub_8263E8E8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8263e930
	sub_8263E930(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8263e9c0
	sub_8263E9C0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82666fb4
	if (cr6.eq) goto loc_82666FB4;
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
loc_82666FB4:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82666fe8
	if (cr6.eq) goto loc_82666FE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c0cf10
	sub_82C0CF10(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82666FE8:
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82667040
	if (cr6.eq) goto loc_82667040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfaaa8
	sub_82BFAAA8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82667040:
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826670a0
	if (!cr6.eq) goto loc_826670A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826670A0:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r11,18700
	ctx.r5.s64 = r11.s64 + 18700;
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// addi r3,r9,18744
	ctx.r3.s64 = ctx.r9.s64 + 18744;
	// addi r11,r8,18716
	r11.s64 = ctx.r8.s64 + 18716;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// addi r10,r7,-13048
	ctx.r10.s64 = ctx.r7.s64 + -13048;
	// stw r5,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r5.u32);
	// stw r4,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r4.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826670EC"))) PPC_WEAK_FUNC(sub_826670EC);
PPC_FUNC_IMPL(__imp__sub_826670EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826670F0"))) PPC_WEAK_FUNC(sub_826670F0);
PPC_FUNC_IMPL(__imp__sub_826670F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r11.u8);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_82667108"))) PPC_WEAK_FUNC(sub_82667108);
PPC_FUNC_IMPL(__imp__sub_82667108) {
	PPC_FUNC_PROLOGUE();
	// b 0x82666c30
	sub_82666C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266710C"))) PPC_WEAK_FUNC(sub_8266710C);
PPC_FUNC_IMPL(__imp__sub_8266710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667110"))) PPC_WEAK_FUNC(sub_82667110);
PPC_FUNC_IMPL(__imp__sub_82667110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, r11.u8);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stb r10,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r10.u8);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_82667128"))) PPC_WEAK_FUNC(sub_82667128);
PPC_FUNC_IMPL(__imp__sub_82667128) {
	PPC_FUNC_PROLOGUE();
	// b 0x82666c30
	sub_82666C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266712C"))) PPC_WEAK_FUNC(sub_8266712C);
PPC_FUNC_IMPL(__imp__sub_8266712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667130"))) PPC_WEAK_FUNC(sub_82667130);
PPC_FUNC_IMPL(__imp__sub_82667130) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82666918
	sub_82666918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666a78
	sub_82666A78(ctx, base);
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

__attribute__((alias("__imp__sub_82667178"))) PPC_WEAK_FUNC(sub_82667178);
PPC_FUNC_IMPL(__imp__sub_82667178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266717C"))) PPC_WEAK_FUNC(sub_8266717C);
PPC_FUNC_IMPL(__imp__sub_8266717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667180"))) PPC_WEAK_FUNC(sub_82667180);
PPC_FUNC_IMPL(__imp__sub_82667180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lwz r19,12(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r20,-32768
	r20.s64 = -2147483648;
	// lwz r28,4(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r22.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r20.u32);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r28,5,0,26
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// or r31,r28,r20
	r31.u64 = r28.u64 | r20.u64;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r8,2
	r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82667220
	if (!cr6.lt) goto loc_82667220;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82667210
	if (cr6.lt) goto loc_82667210;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82667210:
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82667220:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r20.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r8,2
	r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82667290
	if (!cr6.lt) goto loc_82667290;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82667280
	if (cr6.lt) goto loc_82667280;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82667280:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82667290:
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826672cc
	if (!cr6.lt) goto loc_826672CC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19104
	ctx.r8.s64 = ctx.r9.s64 + 19104;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826672CC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r29,r11,32
	r29.s64 = r11.s64 + 32;
	// ble cr6,0x82667474
	if (!cr6.gt) goto loc_82667474;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// li r26,32
	r26.s64 = 32;
	// addi r27,r11,7536
	r27.s64 = r11.s64 + 7536;
loc_82667300:
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwzx r11,r9,r30
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8266742c
	if (cr6.gt) goto loc_8266742C;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// add r9,r31,r8
	ctx.r9.u64 = r31.u64 + ctx.r8.u64;
	// addi r11,r9,16
	r11.s64 = ctx.r9.s64 + 16;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f3,120(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f5
	f0.f64 = double(ctx.f5.s64);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// frsp f13,f2
	ctx.f13.f64 = double(float(ctx.f2.f64));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r29,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + r26.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v13,v11,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 1));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v10,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v11,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r29
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r31,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v7,v8,v9
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r29
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v4,v5,v6
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82667454
	goto loc_82667454;
loc_8266742C:
	// lwzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + r11.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82667454:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stwx r9,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82667300
	if (!cr0.eq) goto loc_82667300;
loc_82667474:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r31,r11,8956
	r31.s64 = r11.s64 + 8956;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826674a4
	if (!cr6.lt) goto loc_826674A4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826674A4:
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r20.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826674e0
	if (!cr6.lt) goto loc_826674E0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19096
	ctx.r8.s64 = ctx.r9.s64 + 19096;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826674E0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82667500
	if (!cr6.gt) goto loc_82667500;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82c13d10
	sub_82C13D10(ctx, base);
loc_82667500:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667528
	if (!cr6.lt) goto loc_82667528;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82667528:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8266756c
	if (!cr6.gt) goto loc_8266756C;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8266753C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lhzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + ctx.r10.u32);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82657490
	sub_82657490(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x8266753c
	if (!cr0.eq) goto loc_8266753C;
loc_8266756C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826675a4
	if (!cr6.eq) goto loc_826675A4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826675A4:
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r20.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82667610
	if (!cr6.eq) goto loc_82667610;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82667610:
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r20.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266767c
	if (!cr6.eq) goto loc_8266767C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,32
	ctx.r6.s64 = 32;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266767C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
}

__attribute__((alias("__imp__sub_82667684"))) PPC_WEAK_FUNC(sub_82667684);
PPC_FUNC_IMPL(__imp__sub_82667684) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_82667688"))) PPC_WEAK_FUNC(sub_82667688);
PPC_FUNC_IMPL(__imp__sub_82667688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82667b2c
	if (cr6.eq) goto loc_82667B2C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82667b2c
	if (cr6.eq) goto loc_82667B2C;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x82667b2c
	if (cr6.lt) goto loc_82667B2C;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266770c
	if (!cr6.lt) goto loc_8266770C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19236
	ctx.r7.s64 = ctx.r9.s64 + 19236;
	// addi r6,r8,19224
	ctx.r6.s64 = ctx.r8.s64 + 19224;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_8266770C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r21,4(r27)
	r21.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82c0cd18
	sub_82C0CD18(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r25,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, r25.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82667758
	if (cr6.eq) goto loc_82667758;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c0cfb8
	sub_82C0CFB8(ctx, base);
	// b 0x82667790
	goto loc_82667790;
loc_82667758:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82667788
	if (cr6.eq) goto loc_82667788;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c0d098
	sub_82C0D098(ctx, base);
	// b 0x8266778c
	goto loc_8266778C;
loc_82667788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266778C:
	// stw r3,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r3.u32);
loc_82667790:
	// lwz r11,60(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 60);
	// li r29,4
	r29.s64 = 4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r18,r11
	r18.u64 = r11.u64;
	// bne cr6,0x826677d8
	if (!cr6.eq) goto loc_826677D8;
	// lis r18,-32768
	r18.s64 = -2147483648;
loc_826677D8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r19,r11
	r19.u64 = r11.u64;
	// bne cr6,0x82667814
	if (!cr6.eq) goto loc_82667814;
	// lis r19,-32768
	r19.s64 = -2147483648;
loc_82667814:
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,120(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,60(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 60);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r5,48(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// li r28,0
	r28.s64 = 0;
	// lwz r27,108(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// lwz r17,0(r24)
	r17.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stb r10,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// sth r8,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r8.u16);
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stb r25,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, r25.u8);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r27.u32);
	// stb r6,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r6.u8);
	// sth r4,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r4.u16);
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r20.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r29.u32);
	// lwz r11,16(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lwz r10,20(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 20);
	// lwz r9,24(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 24);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// lwz r8,28(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// lwz r7,24(r17)
	ctx.r7.u64 = PPC_LOAD_U32(r17.u32 + 24);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x826678dc
	if (!cr6.lt) goto loc_826678DC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19216
	ctx.r8.s64 = ctx.r9.s64 + 19216;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_826678DC:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667918
	if (!cr6.lt) goto loc_82667918;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19192
	ctx.r7.s64 = ctx.r9.s64 + 19192;
	// addi r6,r8,19184
	ctx.r6.s64 = ctx.r8.s64 + 19184;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82667918:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82bf86b8
	sub_82BF86B8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667958
	if (!cr6.lt) goto loc_82667958;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19176
	ctx.r8.s64 = ctx.r9.s64 + 19176;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82667958:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82bf8ca8
	sub_82BF8CA8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826679ac
	if (!cr6.lt) goto loc_826679AC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19156
	ctx.r8.s64 = ctx.r9.s64 + 19156;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826679AC:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826679f0
	if (!cr6.lt) goto loc_826679F0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19140
	ctx.r8.s64 = ctx.r9.s64 + 19140;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826679F0:
	// lwz r3,108(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// bl 0x82bfaab0
	sub_82BFAAB0(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667a28
	if (!cr6.lt) goto loc_82667A28;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19128
	ctx.r8.s64 = ctx.r9.s64 + 19128;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82667A28:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82c14ac8
	sub_82C14AC8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,12864
	ctx.r9.s64 = r11.s64 + 12864;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82667a6c
	if (!cr6.lt) goto loc_82667A6C;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_82667A6C:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82667a9c
	if (!cr6.lt) goto loc_82667A9C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,19116
	ctx.r7.s64 = ctx.r8.s64 + 19116;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82667A9C:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82667ac4
	if (!cr6.lt) goto loc_82667AC4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82667AC4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r19,0,0,0
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82667af4
	if (!cr6.eq) goto loc_82667AF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r19,2
	ctx.r5.u64 = r19.u32 & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82667AF4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r18,0,0,0
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82667bec
	if (!cr6.eq) goto loc_82667BEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r18,2
	ctx.r5.u64 = r18.u32 & 0x3FFFFFFF;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x828e943c
	return;
loc_82667B2C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c68c80
	sub_82C68C80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c68d70
	sub_82C68D70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c0cd18
	sub_82C0CD18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, r11.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82667b90
	if (cr6.eq) goto loc_82667B90;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c0cfb8
	sub_82C0CFB8(ctx, base);
	// b 0x82667bc8
	goto loc_82667BC8;
loc_82667B90:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82667bc0
	if (cr6.eq) goto loc_82667BC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c0d098
	sub_82C0D098(ctx, base);
	// b 0x82667bc4
	goto loc_82667BC4;
loc_82667BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82667BC4:
	// stw r3,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r3.u32);
loc_82667BC8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,48(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r26,48
	r31.s64 = r26.s64 + 48;
	// bl 0x82c14c90
	sub_82C14C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82c14d30
	sub_82C14D30(ctx, base);
loc_82667BEC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_82667BF0"))) PPC_WEAK_FUNC(sub_82667BF0);
PPC_FUNC_IMPL(__imp__sub_82667BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_82667BF4"))) PPC_WEAK_FUNC(sub_82667BF4);
PPC_FUNC_IMPL(__imp__sub_82667BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667BF8"))) PPC_WEAK_FUNC(sub_82667BF8);
PPC_FUNC_IMPL(__imp__sub_82667BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// b 0x82667688
	sub_82667688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667C1C"))) PPC_WEAK_FUNC(sub_82667C1C);
PPC_FUNC_IMPL(__imp__sub_82667C1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667C20"))) PPC_WEAK_FUNC(sub_82667C20);
PPC_FUNC_IMPL(__imp__sub_82667C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// lwz r31,72(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// oris r26,r31,32768
	r26.u64 = r31.u64 | 2147483648;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r19,r23
	r19.u64 = r23.u64;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r20,r11
	r20.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82667ff4
	if (cr6.eq) goto loc_82667FF4;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667cd0
	if (!cr6.lt) goto loc_82667CD0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19444
	ctx.r7.s64 = ctx.r9.s64 + 19444;
	// addi r6,r8,19428
	ctx.r6.s64 = ctx.r8.s64 + 19428;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82667CD0:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667d00
	if (!cr6.lt) goto loc_82667D00;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19408
	ctx.r8.s64 = ctx.r9.s64 + 19408;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82667D00:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lbz r10,105(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 105);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82667dfc
	if (cr6.eq) goto loc_82667DFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826664c8
	sub_826664C8(ctx, base);
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667d54
	if (!cr6.lt) goto loc_82667D54;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19384
	ctx.r8.s64 = ctx.r9.s64 + 19384;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82667D54:
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,12(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82667df4
	if (!cr6.gt) goto loc_82667DF4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r29,r20,-4
	r29.s64 = r20.s64 + -4;
	// addi r26,r11,19360
	r26.s64 = r11.s64 + 19360;
	// lfs f30,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f30.f64 = double(temp.f32);
loc_82667D7C:
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667dc4
	if (!cr6.lt) goto loc_82667DC4;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82667DC4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c12fa8
	sub_82C12FA8(ctx, base);
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82657490
	sub_82657490(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82667d7c
	if (!cr0.eq) goto loc_82667D7C;
loc_82667DF4:
	// lwz r26,88(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r23,105(r30)
	PPC_STORE_U8(r30.u32 + 105, r23.u8);
loc_82667DFC:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667e2c
	if (!cr6.lt) goto loc_82667E2C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19340
	ctx.r8.s64 = ctx.r9.s64 + 19340;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82667E2C:
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwz r27,12(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82667e60
	if (cr6.lt) goto loc_82667E60;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
loc_82667E44:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82667e60
	if (!cr6.eq) goto loc_82667E60;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82667e44
	if (!cr6.gt) goto loc_82667E44;
loc_82667E60:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82667f68
	if (cr6.gt) goto loc_82667F68;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r28,r11,19316
	r28.s64 = r11.s64 + 19316;
loc_82667E78:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r18,4(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x82657498
	sub_82657498(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r18,1
	cr6.compare<int32_t>(r18.s32, 1, xer);
	// bne cr6,0x82667eb8
	if (!cr6.eq) goto loc_82667EB8;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82667ebc
	if (!cr6.eq) goto loc_82667EBC;
loc_82667EB8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82667EBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82667f20
	if (cr6.eq) goto loc_82667F20;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82667f20
	if (!cr6.eq) goto loc_82667F20;
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667ef8
	if (!cr6.lt) goto loc_82667EF8;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82667EF8:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x82657498
	sub_82657498(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c13168
	sub_82C13168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82666c30
	sub_82666C30(ctx, base);
loc_82667F20:
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x82667f58
	if (cr6.gt) goto loc_82667F58;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82667F3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82667f58
	if (!cr6.eq) goto loc_82667F58;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x82667f3c
	if (!cr6.gt) goto loc_82667F3C;
loc_82667F58:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82667e78
	if (!cr6.gt) goto loc_82667E78;
loc_82667F68:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82667f98
	if (!cr6.lt) goto loc_82667F98;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19300
	ctx.r8.s64 = ctx.r9.s64 + 19300;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82667F98:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82667fc0
	if (cr6.eq) goto loc_82667FC0;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r5,r30,68
	ctx.r5.s64 = r30.s64 + 68;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82667688
	sub_82667688(ctx, base);
loc_82667FC0:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266810c
	if (!cr6.lt) goto loc_8266810C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// b 0x8266810c
	goto loc_8266810C;
loc_82667FF4:
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,12
	r28.s64 = 12;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668038
	if (!cr6.lt) goto loc_82668038;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19284
	ctx.r7.s64 = ctx.r9.s64 + 19284;
	// addi r6,r8,19272
	ctx.r6.s64 = ctx.r8.s64 + 19272;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82668038:
	// lwz r27,40(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// stw r23,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r23.u32);
	// stw r23,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82666918
	sub_82666918(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666a78
	sub_82666A78(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668090
	if (!cr6.lt) goto loc_82668090;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19264
	ctx.r8.s64 = ctx.r9.s64 + 19264;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82668090:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826680c0
	if (!cr6.lt) goto loc_826680C0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19252
	ctx.r8.s64 = ctx.r9.s64 + 19252;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826680C0:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82667688
	sub_82667688(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266810c
	if (!cr6.lt) goto loc_8266810C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_8266810C:
	// stb r23,105(r30)
	PPC_STORE_U8(r30.u32 + 105, r23.u8);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82bfcaf8
	sub_82BFCAF8(ctx, base);
	// clrlwi r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266812c
	if (cr6.eq) goto loc_8266812C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,105(r30)
	PPC_STORE_U8(r30.u32 + 105, r11.u8);
loc_8266812C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r10,r26,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82668168
	if (!cr6.eq) goto loc_82668168;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r26,2
	ctx.r5.u64 = r26.u32 & 0x3FFFFFFF;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82668168:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
}

__attribute__((alias("__imp__sub_82668174"))) PPC_WEAK_FUNC(sub_82668174);
PPC_FUNC_IMPL(__imp__sub_82668174) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_82668178"))) PPC_WEAK_FUNC(sub_82668178);
PPC_FUNC_IMPL(__imp__sub_82668178) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// li r24,0
	r24.s64 = 0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r23,r11,19272
	r23.s64 = r11.s64 + 19272;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826681e8
	if (!cr6.lt) goto loc_826681E8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r23,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r23.u32);
	// addi r8,r9,19480
	ctx.r8.s64 = ctx.r9.s64 + 19480;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826681E8:
	// stw r24,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r24.u32);
	// addi r26,r29,68
	r26.s64 = r29.s64 + 68;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82666918
	sub_82666918(ctx, base);
	// lbz r11,36(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82668214
	if (!cr6.eq) goto loc_82668214;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x82666a78
	sub_82666A78(ctx, base);
loc_82668214:
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266825c
	if (!cr6.gt) goto loc_8266825C;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82668228:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82657490
	sub_82657490(ctx, base);
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82668228
	if (cr6.lt) goto loc_82668228;
loc_8266825C:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r25,r11,19264
	r25.s64 = r11.s64 + 19264;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266828c
	if (!cr6.lt) goto loc_8266828C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266828C:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r30,r11,19252
	r30.s64 = r11.s64 + 19252;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826682bc
	if (!cr6.lt) goto loc_826682BC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826682BC:
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826682e4
	if (cr6.eq) goto loc_826682E4;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82667688
	sub_82667688(ctx, base);
loc_826682E4:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r31,r11,12864
	r31.s64 = r11.s64 + 12864;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668314
	if (!cr6.lt) goto loc_82668314;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82668314:
	// lbz r11,36(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826683f8
	if (cr6.eq) goto loc_826683F8;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668354
	if (!cr6.lt) goto loc_82668354;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r23,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r23.u32);
	// addi r8,r9,19464
	ctx.r8.s64 = ctx.r9.s64 + 19464;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82668354:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x82666a78
	sub_82666A78(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266838c
	if (!cr6.lt) goto loc_8266838C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266838C:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82c12510
	sub_82C12510(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826683bc
	if (!cr6.lt) goto loc_826683BC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826683BC:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82667180
	sub_82667180(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826683f8
	if (!cr6.lt) goto loc_826683F8;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826683F8:
	// stb r24,105(r29)
	PPC_STORE_U8(r29.u32 + 105, r24.u8);
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x82bfcaf8
	sub_82BFCAF8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266843c
	if (!cr6.eq) goto loc_8266843C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266843C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82668440"))) PPC_WEAK_FUNC(sub_82668440);
PPC_FUNC_IMPL(__imp__sub_82668440) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82668444"))) PPC_WEAK_FUNC(sub_82668444);
PPC_FUNC_IMPL(__imp__sub_82668444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668448"))) PPC_WEAK_FUNC(sub_82668448);
PPC_FUNC_IMPL(__imp__sub_82668448) {
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
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668490
	if (!cr6.lt) goto loc_82668490;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19496
	ctx.r8.s64 = ctx.r9.s64 + 19496;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_82668490:
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// li r28,1
	r28.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826684b4
	if (!cr6.eq) goto loc_826684B4;
	// bl 0x82668178
	sub_82668178(ctx, base);
	// stb r28,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r28.u8);
	// b 0x826684b8
	goto loc_826684B8;
loc_826684B4:
	// bl 0x82667c20
	sub_82667C20(ctx, base);
loc_826684B8:
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826684e8
	if (!cr6.lt) goto loc_826684E8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_826684E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826684EC"))) PPC_WEAK_FUNC(sub_826684EC);
PPC_FUNC_IMPL(__imp__sub_826684EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826684F0"))) PPC_WEAK_FUNC(sub_826684F0);
PPC_FUNC_IMPL(__imp__sub_826684F0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18788
	ctx.r9.s64 = r11.s64 + 18788;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82668524
	if (cr6.eq) goto loc_82668524;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82668524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82668534"))) PPC_WEAK_FUNC(sub_82668534);
PPC_FUNC_IMPL(__imp__sub_82668534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668538"))) PPC_WEAK_FUNC(sub_82668538);
PPC_FUNC_IMPL(__imp__sub_82668538) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18800
	ctx.r9.s64 = r11.s64 + 18800;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8266856c
	if (cr6.eq) goto loc_8266856C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8266856C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8266857C"))) PPC_WEAK_FUNC(sub_8266857C);
PPC_FUNC_IMPL(__imp__sub_8266857C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668580"))) PPC_WEAK_FUNC(sub_82668580);
PPC_FUNC_IMPL(__imp__sub_82668580) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18812
	ctx.r9.s64 = r11.s64 + 18812;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826685b4
	if (cr6.eq) goto loc_826685B4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826685B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826685C4"))) PPC_WEAK_FUNC(sub_826685C4);
PPC_FUNC_IMPL(__imp__sub_826685C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826685C8"))) PPC_WEAK_FUNC(sub_826685C8);
PPC_FUNC_IMPL(__imp__sub_826685C8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18824
	ctx.r9.s64 = r11.s64 + 18824;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826685fc
	if (cr6.eq) goto loc_826685FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826685FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8266860C"))) PPC_WEAK_FUNC(sub_8266860C);
PPC_FUNC_IMPL(__imp__sub_8266860C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668610"))) PPC_WEAK_FUNC(sub_82668610);
PPC_FUNC_IMPL(__imp__sub_82668610) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18768
	ctx.r9.s64 = r11.s64 + 18768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8266865c
	if (cr6.eq) goto loc_8266865C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266865C:
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

__attribute__((alias("__imp__sub_82668670"))) PPC_WEAK_FUNC(sub_82668670);
PPC_FUNC_IMPL(__imp__sub_82668670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668674"))) PPC_WEAK_FUNC(sub_82668674);
PPC_FUNC_IMPL(__imp__sub_82668674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668678"))) PPC_WEAK_FUNC(sub_82668678);
PPC_FUNC_IMPL(__imp__sub_82668678) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r11,18824
	ctx.r7.s64 = r11.s64 + 18824;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r3,r8,18788
	ctx.r3.s64 = ctx.r8.s64 + 18788;
	// addi r6,r10,18812
	ctx.r6.s64 = ctx.r10.s64 + 18812;
	// addi r5,r9,18800
	ctx.r5.s64 = ctx.r9.s64 + 18800;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826686d4
	if (cr6.eq) goto loc_826686D4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826686D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826686E4"))) PPC_WEAK_FUNC(sub_826686E4);
PPC_FUNC_IMPL(__imp__sub_826686E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826686E8"))) PPC_WEAK_FUNC(sub_826686E8);
PPC_FUNC_IMPL(__imp__sub_826686E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
}

__attribute__((alias("__imp__sub_826686EC"))) PPC_WEAK_FUNC(sub_826686EC);
PPC_FUNC_IMPL(__imp__sub_826686EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668678
	sub_82668678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826686F0"))) PPC_WEAK_FUNC(sub_826686F0);
PPC_FUNC_IMPL(__imp__sub_826686F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_826686F4"))) PPC_WEAK_FUNC(sub_826686F4);
PPC_FUNC_IMPL(__imp__sub_826686F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668678
	sub_82668678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826686F8"))) PPC_WEAK_FUNC(sub_826686F8);
PPC_FUNC_IMPL(__imp__sub_826686F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_826686FC"))) PPC_WEAK_FUNC(sub_826686FC);
PPC_FUNC_IMPL(__imp__sub_826686FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668678
	sub_82668678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668700"))) PPC_WEAK_FUNC(sub_82668700);
PPC_FUNC_IMPL(__imp__sub_82668700) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668708"))) PPC_WEAK_FUNC(sub_82668708);
PPC_FUNC_IMPL(__imp__sub_82668708) {
	PPC_FUNC_PROLOGUE();
	// stb r4,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668710"))) PPC_WEAK_FUNC(sub_82668710);
PPC_FUNC_IMPL(__imp__sub_82668710) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_82668714"))) PPC_WEAK_FUNC(sub_82668714);
PPC_FUNC_IMPL(__imp__sub_82668714) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668730
	sub_82668730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668718"))) PPC_WEAK_FUNC(sub_82668718);
PPC_FUNC_IMPL(__imp__sub_82668718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_8266871C"))) PPC_WEAK_FUNC(sub_8266871C);
PPC_FUNC_IMPL(__imp__sub_8266871C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668730
	sub_82668730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668720"))) PPC_WEAK_FUNC(sub_82668720);
PPC_FUNC_IMPL(__imp__sub_82668720) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_82668724"))) PPC_WEAK_FUNC(sub_82668724);
PPC_FUNC_IMPL(__imp__sub_82668724) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668730
	sub_82668730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668728"))) PPC_WEAK_FUNC(sub_82668728);
PPC_FUNC_IMPL(__imp__sub_82668728) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
}

__attribute__((alias("__imp__sub_8266872C"))) PPC_WEAK_FUNC(sub_8266872C);
PPC_FUNC_IMPL(__imp__sub_8266872C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82668730
	goto loc_82668730;
loc_82668730:
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
	// bl 0x82666f08
	sub_82666F08(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266877c
	if (cr6.eq) goto loc_8266877C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266877C:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668730"))) PPC_WEAK_FUNC(sub_82668730);
PPC_FUNC_IMPL(__imp__sub_82668730) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82666f08
	sub_82666F08(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266877c
	if (cr6.eq) goto loc_8266877C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266877C:
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

__attribute__((alias("__imp__sub_82668798"))) PPC_WEAK_FUNC(sub_82668798);
PPC_FUNC_IMPL(__imp__sub_82668798) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// b 0x82c0cd70
	sub_82C0CD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826687A4"))) PPC_WEAK_FUNC(sub_826687A4);
PPC_FUNC_IMPL(__imp__sub_826687A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826687A8"))) PPC_WEAK_FUNC(sub_826687A8);
PPC_FUNC_IMPL(__imp__sub_826687A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826687B4"))) PPC_WEAK_FUNC(sub_826687B4);
PPC_FUNC_IMPL(__imp__sub_826687B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826687B8"))) PPC_WEAK_FUNC(sub_826687B8);
PPC_FUNC_IMPL(__imp__sub_826687B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826687BC"))) PPC_WEAK_FUNC(sub_826687BC);
PPC_FUNC_IMPL(__imp__sub_826687BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826687C0"))) PPC_WEAK_FUNC(sub_826687C0);
PPC_FUNC_IMPL(__imp__sub_826687C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826687D8"))) PPC_WEAK_FUNC(sub_826687D8);
PPC_FUNC_IMPL(__imp__sub_826687D8) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r9,r9,18716
	ctx.r9.s64 = ctx.r9.s64 + 18716;
	// addi r8,r8,18744
	ctx.r8.s64 = ctx.r8.s64 + 18744;
	// addi r3,r3,19512
	ctx.r3.s64 = ctx.r3.s64 + 19512;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r7,r7,19564
	ctx.r7.s64 = ctx.r7.s64 + 19564;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// addi r6,r6,19536
	ctx.r6.s64 = ctx.r6.s64 + 19536;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stb r10,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// stb r5,33(r31)
	PPC_STORE_U8(r31.u32 + 33, ctx.r5.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82641228
	sub_82641228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x826412a0
	sub_826412A0(ctx, base);
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

__attribute__((alias("__imp__sub_82668884"))) PPC_WEAK_FUNC(sub_82668884);
PPC_FUNC_IMPL(__imp__sub_82668884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668888"))) PPC_WEAK_FUNC(sub_82668888);
PPC_FUNC_IMPL(__imp__sub_82668888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826688a0
	if (!cr6.eq) goto loc_826688A0;
	// li r11,1
	r11.s64 = 1;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// blr 
	return;
loc_826688A0:
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// b 0x82c0cd70
	sub_82C0CD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826688AC"))) PPC_WEAK_FUNC(sub_826688AC);
PPC_FUNC_IMPL(__imp__sub_826688AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826688B0"))) PPC_WEAK_FUNC(sub_826688B0);
PPC_FUNC_IMPL(__imp__sub_826688B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,9(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826688d8
	if (!cr6.eq) goto loc_826688D8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// blr 
	return;
loc_826688D8:
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// b 0x82c0cd70
	sub_82C0CD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826688E0"))) PPC_WEAK_FUNC(sub_826688E0);
PPC_FUNC_IMPL(__imp__sub_826688E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r8,r9,18836
	ctx.r8.s64 = ctx.r9.s64 + 18836;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// beq cr6,0x8266894c
	if (cr6.eq) goto loc_8266894C;
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0f778
	sub_82C0F778(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8266894C:
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82668950"))) PPC_WEAK_FUNC(sub_82668950);
PPC_FUNC_IMPL(__imp__sub_82668950) {
	PPC_FUNC_PROLOGUE();
	// b 0x82668920
	// ERROR 82668920
	return;
}

__attribute__((alias("__imp__sub_82668954"))) PPC_WEAK_FUNC(sub_82668954);
PPC_FUNC_IMPL(__imp__sub_82668954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668958"))) PPC_WEAK_FUNC(sub_82668958);
PPC_FUNC_IMPL(__imp__sub_82668958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r8,r9,18836
	ctx.r8.s64 = ctx.r9.s64 + 18836;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// beq cr6,0x8266899c
	if (cr6.eq) goto loc_8266899C;
	// addi r9,r5,20
	ctx.r9.s64 = ctx.r5.s64 + 20;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// b 0x826689a4
	goto loc_826689A4;
loc_8266899C:
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_826689A4:
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0f778
	sub_82C0F778(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826689F4"))) PPC_WEAK_FUNC(sub_826689F4);
PPC_FUNC_IMPL(__imp__sub_826689F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826689F8"))) PPC_WEAK_FUNC(sub_826689F8);
PPC_FUNC_IMPL(__imp__sub_826689F8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r30,-32250
	r30.s64 = -2113536000;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r31,r3,18856
	r31.s64 = ctx.r3.s64 + 18856;
	// lfs f0,7832(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 7832);
	f0.f64 = double(temp.f32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c68370
	sub_82C68370(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82668A68"))) PPC_WEAK_FUNC(sub_82668A68);
PPC_FUNC_IMPL(__imp__sub_82668A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668A6C"))) PPC_WEAK_FUNC(sub_82668A6C);
PPC_FUNC_IMPL(__imp__sub_82668A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668A70"))) PPC_WEAK_FUNC(sub_82668A70);
PPC_FUNC_IMPL(__imp__sub_82668A70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,19564
	ctx.r8.s64 = r11.s64 + 19564;
	// addi r7,r10,19536
	ctx.r7.s64 = ctx.r10.s64 + 19536;
	// addi r6,r9,19512
	ctx.r6.s64 = ctx.r9.s64 + 19512;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8263e8a0
	sub_8263E8A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8263e8e8
	sub_8263E8E8(ctx, base);
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82668af8
	if (cr6.eq) goto loc_82668AF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82c0cf10
	sub_82C0CF10(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82668AF8:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,18744
	ctx.r8.s64 = r11.s64 + 18744;
	// addi r7,r10,18716
	ctx.r7.s64 = ctx.r10.s64 + 18716;
	// addi r6,r9,-13048
	ctx.r6.s64 = ctx.r9.s64 + -13048;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82668B20"))) PPC_WEAK_FUNC(sub_82668B20);
PPC_FUNC_IMPL(__imp__sub_82668B20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82668B24"))) PPC_WEAK_FUNC(sub_82668B24);
PPC_FUNC_IMPL(__imp__sub_82668B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668B28"))) PPC_WEAK_FUNC(sub_82668B28);
PPC_FUNC_IMPL(__imp__sub_82668B28) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82c68c80
	sub_82C68C80(ctx, base);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82668b80
	if (cr6.eq) goto loc_82668B80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c0cf10
	sub_82C0CF10(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82668B80:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c68d70
	sub_82C68D70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c0cd18
	sub_82C0CD18(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82668bf0
	if (cr6.eq) goto loc_82668BF0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82c0d098
	sub_82C0D098(ctx, base);
	// b 0x82668bf4
	goto loc_82668BF4;
loc_82668BF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82668BF4:
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668c30
	if (!cr6.lt) goto loc_82668C30;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19608
	ctx.r8.s64 = ctx.r9.s64 + 19608;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82668C30:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c14918
	sub_82C14918(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c14c90
	sub_82C14C90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82c14d30
	sub_82C14D30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c14990
	sub_82C14990(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82668c98
	if (!cr6.lt) goto loc_82668C98;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82668C98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82668C9C"))) PPC_WEAK_FUNC(sub_82668C9C);
PPC_FUNC_IMPL(__imp__sub_82668C9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82668CA0"))) PPC_WEAK_FUNC(sub_82668CA0);
PPC_FUNC_IMPL(__imp__sub_82668CA0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r7,2
	r11.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82668d10
	if (!cr6.lt) goto loc_82668D10;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82668d00
	if (cr6.lt) goto loc_82668D00;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82668D00:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82668D10:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,40
	ctx.r5.s64 = r11.s64 + 40;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82668da4
	if (!cr6.gt) goto loc_82668DA4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82668D2C:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82668d90
	if (!cr6.gt) goto loc_82668D90;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82668D48:
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwzx r11,r3,r9
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82668d48
	if (cr6.lt) goto loc_82668D48;
loc_82668D90:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x82668d2c
	if (cr6.lt) goto loc_82668D2C;
loc_82668DA4:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,52
	ctx.r5.s64 = r11.s64 + 52;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82668e38
	if (!cr6.gt) goto loc_82668E38;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82668DC0:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82668e24
	if (!cr6.gt) goto loc_82668E24;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82668DDC:
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwzx r11,r3,r9
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82668ddc
	if (cr6.lt) goto loc_82668DDC;
loc_82668E24:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x82668dc0
	if (cr6.lt) goto loc_82668DC0;
loc_82668E38:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,276
	ctx.r7.s64 = r11.s64 + 276;
	// lwz r11,280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82668e9c
	if (!cr6.gt) goto loc_82668E9C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82668E54:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82668e88
	if (cr6.eq) goto loc_82668E88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_82668E88:
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x82668e54
	if (cr6.lt) goto loc_82668E54;
loc_82668E9C:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r10,76(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82668f00
	if (!cr6.gt) goto loc_82668F00;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82668EBC:
	// lwz r11,72(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82668eec
	if (cr6.eq) goto loc_82668EEC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_82668EEC:
	// lwz r11,76(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x82668ebc
	if (cr6.lt) goto loc_82668EBC;
loc_82668F00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82668F04"))) PPC_WEAK_FUNC(sub_82668F04);
PPC_FUNC_IMPL(__imp__sub_82668F04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82668F08"))) PPC_WEAK_FUNC(sub_82668F08);
PPC_FUNC_IMPL(__imp__sub_82668F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82668f5c
	if (cr6.eq) goto loc_82668F5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c0cf10
	sub_82C0CF10(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82668F5C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r20,4(r28)
	r20.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82c0cd18
	sub_82C0CD18(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r20.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stb r26,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, r26.u8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82668fc8
	if (cr6.eq) goto loc_82668FC8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82c0d098
	sub_82C0D098(ctx, base);
	// b 0x82668fcc
	goto loc_82668FCC;
loc_82668FC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82668FCC:
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c14918
	sub_82C14918(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,4
	r30.s64 = 4;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r17,r11
	r17.u64 = r11.u64;
	// bne cr6,0x82669040
	if (!cr6.eq) goto loc_82669040;
	// lis r17,-32768
	r17.s64 = -2147483648;
loc_82669040:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r18,r11
	r18.u64 = r11.u64;
	// bne cr6,0x8266907c
	if (!cr6.eq) goto loc_8266907C;
	// lis r18,-32768
	r18.s64 = -2147483648;
loc_8266907C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826690b4
	if (cr6.eq) goto loc_826690B4;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bfaa68
	sub_82BFAA68(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x826690b8
	goto loc_826690B8;
loc_826690B4:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_826690B8:
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r11,-1
	r11.s64 = -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r30,12
	r30.s64 = 12;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// stb r26,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r26.u8);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// sth r7,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// lwz r11,120(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82669194
	if (!cr6.lt) goto loc_82669194;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19192
	ctx.r7.s64 = ctx.r9.s64 + 19192;
	// addi r6,r8,19184
	ctx.r6.s64 = ctx.r8.s64 + 19184;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_82669194:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bf86b8
	sub_82BF86B8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826691d4
	if (!cr6.lt) goto loc_826691D4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19176
	ctx.r8.s64 = ctx.r9.s64 + 19176;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826691D4:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bf8ca8
	sub_82BF8CA8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669228
	if (!cr6.lt) goto loc_82669228;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19156
	ctx.r8.s64 = ctx.r9.s64 + 19156;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669228:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266926c
	if (!cr6.lt) goto loc_8266926C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19140
	ctx.r8.s64 = ctx.r9.s64 + 19140;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266926C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bfaab0
	sub_82BFAAB0(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826692a4
	if (!cr6.lt) goto loc_826692A4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19128
	ctx.r8.s64 = ctx.r9.s64 + 19128;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826692A4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82c14ac8
	sub_82C14AC8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826692e8
	if (!cr6.lt) goto loc_826692E8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826692E8:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c14990
	sub_82C14990(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82669344
	if (cr6.eq) goto loc_82669344;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bfaaa8
	sub_82BFAAA8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669344:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r18,0,0,0
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x80000000;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82669374
	if (!cr6.eq) goto loc_82669374;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r18,2
	ctx.r5.u64 = r18.u32 & 0x3FFFFFFF;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669374:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r17,0,0,0
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x80000000;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826693a4
	if (!cr6.eq) goto loc_826693A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r17,2
	ctx.r5.u64 = r17.u32 & 0x3FFFFFFF;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826693A4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
}

__attribute__((alias("__imp__sub_826693A8"))) PPC_WEAK_FUNC(sub_826693A8);
PPC_FUNC_IMPL(__imp__sub_826693A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_826693AC"))) PPC_WEAK_FUNC(sub_826693AC);
PPC_FUNC_IMPL(__imp__sub_826693AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826693B0"))) PPC_WEAK_FUNC(sub_826693B0);
PPC_FUNC_IMPL(__imp__sub_826693B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826693c4
	if (cr6.eq) goto loc_826693C4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826693c4
	if (cr6.eq) goto loc_826693C4;
	// b 0x82668f08
	sub_82668F08(ctx, base);
	return;
loc_826693C4:
	// b 0x82668b28
	sub_82668B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826693C8"))) PPC_WEAK_FUNC(sub_826693C8);
PPC_FUNC_IMPL(__imp__sub_826693C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669424
	if (!cr6.lt) goto loc_82669424;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19660
	ctx.r7.s64 = ctx.r9.s64 + 19660;
	// addi r6,r8,19648
	ctx.r6.s64 = ctx.r8.s64 + 19648;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82669424:
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82668ca0
	sub_82668CA0(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669474
	if (!cr6.lt) goto loc_82669474;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19636
	ctx.r8.s64 = ctx.r9.s64 + 19636;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669474:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826694a0
	if (cr6.eq) goto loc_826694A0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826694a0
	if (cr6.eq) goto loc_826694A0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82668f08
	sub_82668F08(ctx, base);
	// b 0x826694ac
	goto loc_826694AC;
loc_826694A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82668b28
	sub_82668B28(ctx, base);
loc_826694AC:
	// stb r28,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r28.u8);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826694e0
	if (!cr6.lt) goto loc_826694E0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826694E0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82669518
	if (!cr6.eq) goto loc_82669518;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669518:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8266951C"))) PPC_WEAK_FUNC(sub_8266951C);
PPC_FUNC_IMPL(__imp__sub_8266951C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82669520"))) PPC_WEAK_FUNC(sub_82669520);
PPC_FUNC_IMPL(__imp__sub_82669520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669530"))) PPC_WEAK_FUNC(sub_82669530);
PPC_FUNC_IMPL(__imp__sub_82669530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669544"))) PPC_WEAK_FUNC(sub_82669544);
PPC_FUNC_IMPL(__imp__sub_82669544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669548"))) PPC_WEAK_FUNC(sub_82669548);
PPC_FUNC_IMPL(__imp__sub_82669548) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_8266954C"))) PPC_WEAK_FUNC(sub_8266954C);
PPC_FUNC_IMPL(__imp__sub_8266954C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82669558
	sub_82669558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669550"))) PPC_WEAK_FUNC(sub_82669550);
PPC_FUNC_IMPL(__imp__sub_82669550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_82669554"))) PPC_WEAK_FUNC(sub_82669554);
PPC_FUNC_IMPL(__imp__sub_82669554) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82669558
	goto loc_82669558;
loc_82669558:
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
	// bl 0x82668a70
	sub_82668A70(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826695a4
	if (cr6.eq) goto loc_826695A4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826695A4:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669558"))) PPC_WEAK_FUNC(sub_82669558);
PPC_FUNC_IMPL(__imp__sub_82669558) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82668a70
	sub_82668A70(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826695a4
	if (cr6.eq) goto loc_826695A4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826695A4:
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

__attribute__((alias("__imp__sub_826695C0"))) PPC_WEAK_FUNC(sub_826695C0);
PPC_FUNC_IMPL(__imp__sub_826695C0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,19680
	ctx.r9.s64 = r11.s64 + 19680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826695f4
	if (cr6.eq) goto loc_826695F4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826695F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82669604"))) PPC_WEAK_FUNC(sub_82669604);
PPC_FUNC_IMPL(__imp__sub_82669604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669608"))) PPC_WEAK_FUNC(sub_82669608);
PPC_FUNC_IMPL(__imp__sub_82669608) {
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
	// lwz r31,448(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x82669660
	if (!cr0.eq) goto loc_82669660;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8267a488
	sub_8267A488(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e858
	sub_8263E858(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263eb28
	sub_8263EB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82669660:
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

__attribute__((alias("__imp__sub_82669674"))) PPC_WEAK_FUNC(sub_82669674);
PPC_FUNC_IMPL(__imp__sub_82669674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669678"))) PPC_WEAK_FUNC(sub_82669678);
PPC_FUNC_IMPL(__imp__sub_82669678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8267a488
	sub_8267A488(ctx, base);
	// addic. r29,r31,-12
	xer.ca = r31.u32 > 11;
	r29.s64 = r31.s64 + -12;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// bne 0x826696a4
	if (!cr0.eq) goto loc_826696A4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_826696A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e858
	sub_8263E858(ctx, base);
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 & r31.u64;
	// bl 0x8263eb28
	sub_8263EB28(ctx, base);
	// addi r3,r31,-12
	ctx.r3.s64 = r31.s64 + -12;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826696CC"))) PPC_WEAK_FUNC(sub_826696CC);
PPC_FUNC_IMPL(__imp__sub_826696CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826696D0"))) PPC_WEAK_FUNC(sub_826696D0);
PPC_FUNC_IMPL(__imp__sub_826696D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,12
	r28.s64 = 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669718
	if (!cr6.lt) goto loc_82669718;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19692
	ctx.r8.s64 = ctx.r9.s64 + 19692;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669718:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bne cr6,0x82669790
	if (!cr6.eq) goto loc_82669790;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826799e0
	sub_826799E0(ctx, base);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r11,2
	r11.s64 = 2;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x826597d0
	sub_826597D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826580b0
	sub_826580B0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826580b0
	sub_826580B0(ctx, base);
loc_82669790:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826697c0
	if (!cr6.lt) goto loc_826697C0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826697C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826697C4"))) PPC_WEAK_FUNC(sub_826697C4);
PPC_FUNC_IMPL(__imp__sub_826697C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826697C8"))) PPC_WEAK_FUNC(sub_826697C8);
PPC_FUNC_IMPL(__imp__sub_826697C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,12
	r28.s64 = 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669810
	if (!cr6.lt) goto loc_82669810;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19708
	ctx.r8.s64 = ctx.r9.s64 + 19708;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669810:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bne cr6,0x82669888
	if (!cr6.eq) goto loc_82669888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826799e0
	sub_826799E0(ctx, base);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r11,2
	r11.s64 = 2;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x826598a8
	sub_826598A8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658188
	sub_82658188(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658188
	sub_82658188(ctx, base);
loc_82669888:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826698b8
	if (!cr6.lt) goto loc_826698B8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_826698B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826698BC"))) PPC_WEAK_FUNC(sub_826698BC);
PPC_FUNC_IMPL(__imp__sub_826698BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826698C0"))) PPC_WEAK_FUNC(sub_826698C0);
PPC_FUNC_IMPL(__imp__sub_826698C0) {
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
	// lwz r11,448(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826698f4
	if (cr6.eq) goto loc_826698F4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// b 0x82669960
	goto loc_82669960;
loc_826698F4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,76
	ctx.r9.s64 = 76;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82669a80
	sub_82669A80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,448(r30)
	PPC_STORE_U32(r30.u32 + 448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x82669934
	if (!cr6.eq) goto loc_82669934;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82669934:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82641660
	sub_82641660(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bne cr6,0x8266994c
	if (!cr6.eq) goto loc_8266994C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8266994C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826411b0
	sub_826411B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8267a468
	sub_8267A468(ctx, base);
loc_82669960:
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

__attribute__((alias("__imp__sub_82669974"))) PPC_WEAK_FUNC(sub_82669974);
PPC_FUNC_IMPL(__imp__sub_82669974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669978"))) PPC_WEAK_FUNC(sub_82669978);
PPC_FUNC_IMPL(__imp__sub_82669978) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826699c8
	if (!cr6.eq) goto loc_826699C8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826699C8:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r31,r28,32
	r31.s64 = r28.s64 + 32;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82669a10
	if (!cr6.eq) goto loc_82669A10;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669A10:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r30,r28,20
	r30.s64 = r28.s64 + 20;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82669a54
	if (!cr6.eq) goto loc_82669A54;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669A54:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// addi r9,r11,18700
	ctx.r9.s64 = r11.s64 + 18700;
	// addi r8,r10,-13048
	ctx.r8.s64 = ctx.r10.s64 + -13048;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82669A78"))) PPC_WEAK_FUNC(sub_82669A78);
PPC_FUNC_IMPL(__imp__sub_82669A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82669A7C"))) PPC_WEAK_FUNC(sub_82669A7C);
PPC_FUNC_IMPL(__imp__sub_82669A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669A80"))) PPC_WEAK_FUNC(sub_82669A80);
PPC_FUNC_IMPL(__imp__sub_82669A80) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,1
	r11.s64 = 1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r10,-13076
	ctx.r5.s64 = ctx.r10.s64 + -13076;
	// addi r4,r9,19680
	ctx.r4.s64 = ctx.r9.s64 + 19680;
	// addi r3,r8,19772
	ctx.r3.s64 = ctx.r8.s64 + 19772;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r10,r7,19744
	ctx.r10.s64 = ctx.r7.s64 + 19744;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// addi r9,r6,19728
	ctx.r9.s64 = ctx.r6.s64 + 19728;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8267abf0
	sub_8267ABF0(ctx, base);
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

__attribute__((alias("__imp__sub_82669AF8"))) PPC_WEAK_FUNC(sub_82669AF8);
PPC_FUNC_IMPL(__imp__sub_82669AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669AFC"))) PPC_WEAK_FUNC(sub_82669AFC);
PPC_FUNC_IMPL(__imp__sub_82669AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669B00"))) PPC_WEAK_FUNC(sub_82669B00);
PPC_FUNC_IMPL(__imp__sub_82669B00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_82669B04"))) PPC_WEAK_FUNC(sub_82669B04);
PPC_FUNC_IMPL(__imp__sub_82669B04) {
	PPC_FUNC_PROLOGUE();
	// b 0x82669b10
	sub_82669B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669B08"))) PPC_WEAK_FUNC(sub_82669B08);
PPC_FUNC_IMPL(__imp__sub_82669B08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82669B0C"))) PPC_WEAK_FUNC(sub_82669B0C);
PPC_FUNC_IMPL(__imp__sub_82669B0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82669b10
	goto loc_82669B10;
loc_82669B10:
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82669978
	sub_82669978(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,19680
	ctx.r8.s64 = r11.s64 + 19680;
	// addi r7,r10,-13076
	ctx.r7.s64 = ctx.r10.s64 + -13076;
	// addi r6,r9,-13048
	ctx.r6.s64 = ctx.r9.s64 + -13048;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// clrlwi r5,r30,31
	ctx.r5.u64 = r30.u32 & 0x1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82669b84
	if (cr6.eq) goto loc_82669B84;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669B84:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669B10"))) PPC_WEAK_FUNC(sub_82669B10);
PPC_FUNC_IMPL(__imp__sub_82669B10) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82669978
	sub_82669978(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,19680
	ctx.r8.s64 = r11.s64 + 19680;
	// addi r7,r10,-13076
	ctx.r7.s64 = ctx.r10.s64 + -13076;
	// addi r6,r9,-13048
	ctx.r6.s64 = ctx.r9.s64 + -13048;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// clrlwi r5,r30,31
	ctx.r5.u64 = r30.u32 & 0x1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82669b84
	if (cr6.eq) goto loc_82669B84;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82669B84:
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

__attribute__((alias("__imp__sub_82669BA0"))) PPC_WEAK_FUNC(sub_82669BA0);
PPC_FUNC_IMPL(__imp__sub_82669BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669BB8"))) PPC_WEAK_FUNC(sub_82669BB8);
PPC_FUNC_IMPL(__imp__sub_82669BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,19788
	ctx.r7.s64 = ctx.r9.s64 + 19788;
	// lfs f0,19816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 19816);
	f0.f64 = double(temp.f32);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lfs f13,19812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19812);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82669BE4"))) PPC_WEAK_FUNC(sub_82669BE4);
PPC_FUNC_IMPL(__imp__sub_82669BE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669BE8"))) PPC_WEAK_FUNC(sub_82669BE8);
PPC_FUNC_IMPL(__imp__sub_82669BE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669c44
	if (!cr6.lt) goto loc_82669C44;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19840
	ctx.r7.s64 = ctx.r9.s64 + 19840;
	// addi r6,r8,19832
	ctx.r6.s64 = ctx.r8.s64 + 19832;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82669C44:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82650ec8
	sub_82650EC8(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82669c9c
	if (cr6.lt) goto loc_82669C9C;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669c8c
	if (!cr6.lt) goto loc_82669C8C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19820
	ctx.r8.s64 = ctx.r9.s64 + 19820;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669C8C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82669d90
	sub_82669D90(ctx, base);
loc_82669C9C:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669ccc
	if (!cr6.lt) goto loc_82669CCC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82669CD0"))) PPC_WEAK_FUNC(sub_82669CD0);
PPC_FUNC_IMPL(__imp__sub_82669CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82669CD4"))) PPC_WEAK_FUNC(sub_82669CD4);
PPC_FUNC_IMPL(__imp__sub_82669CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669CD8"))) PPC_WEAK_FUNC(sub_82669CD8);
PPC_FUNC_IMPL(__imp__sub_82669CD8) {
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
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669d30
	if (!cr6.lt) goto loc_82669D30;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,19840
	ctx.r7.s64 = ctx.r9.s64 + 19840;
	// addi r6,r8,19820
	ctx.r6.s64 = ctx.r8.s64 + 19820;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82669D30:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82669d44
	if (cr6.lt) goto loc_82669D44;
	// bl 0x82669d90
	sub_82669D90(ctx, base);
loc_82669D44:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82669d74
	if (!cr6.lt) goto loc_82669D74;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82669D74:
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

__attribute__((alias("__imp__sub_82669D88"))) PPC_WEAK_FUNC(sub_82669D88);
PPC_FUNC_IMPL(__imp__sub_82669D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669D8C"))) PPC_WEAK_FUNC(sub_82669D8C);
PPC_FUNC_IMPL(__imp__sub_82669D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669D90"))) PPC_WEAK_FUNC(sub_82669D90);
PPC_FUNC_IMPL(__imp__sub_82669D90) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,464(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 464, temp.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r30,r4,464
	r30.s64 = ctx.r4.s64 + 464;
	// stfs f12,472(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 472, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f13,6240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,468(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 468, temp.u32);
	// fdivs f7,f0,f12
	ctx.f7.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f7,476(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 476, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f31,f11,f6
	f31.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f5,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + f31.f64));
	// stfs f4,20(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lfs f3,464(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,24(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lfs f2,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// beq cr6,0x82669e28
	if (cr6.eq) goto loc_82669E28;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 + f31.f64));
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_82669E28:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// addi r28,r27,40
	r28.s64 = r27.s64 + 40;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82669ea8
	if (!cr6.gt) goto loc_82669EA8;
	// li r31,0
	r31.s64 = 0;
loc_82669E40:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82669e84
	if (!cr6.gt) goto loc_82669E84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82669E5C:
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,316(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 + f31.f64));
	// stfs f13,316(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 316, temp.u32);
	// lwz r8,76(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82669e5c
	if (cr6.lt) goto loc_82669E5C;
loc_82669E84:
	// lwz r6,120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82665940
	sub_82665940(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82669e40
	if (cr6.lt) goto loc_82669E40;
loc_82669EA8:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r9,0(r26)
	PPC_STORE_U64(r26.u32 + 0, ctx.r9.u64);
	// ld r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r8,8(r26)
	PPC_STORE_U64(r26.u32 + 8, ctx.r8.u64);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// addi r6,r11,80
	ctx.r6.s64 = r11.s64 + 80;
	// std r7,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r5,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r5.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82669EF0"))) PPC_WEAK_FUNC(sub_82669EF0);
PPC_FUNC_IMPL(__imp__sub_82669EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82669EF4"))) PPC_WEAK_FUNC(sub_82669EF4);
PPC_FUNC_IMPL(__imp__sub_82669EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669EF8"))) PPC_WEAK_FUNC(sub_82669EF8);
PPC_FUNC_IMPL(__imp__sub_82669EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669EFC"))) PPC_WEAK_FUNC(sub_82669EFC);
PPC_FUNC_IMPL(__imp__sub_82669EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669F00"))) PPC_WEAK_FUNC(sub_82669F00);
PPC_FUNC_IMPL(__imp__sub_82669F00) {
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
	// addi r30,r3,-8
	r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subfic r11,r30,0
	xer.ca = r30.u32 <= 0;
	r11.s64 = 0 - r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 & r31.u64;
	// bl 0x8263eb28
	sub_8263EB28(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bne cr6,0x82669f40
	if (!cr6.eq) goto loc_82669F40;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82669F40:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8263e9c0
	sub_8263E9C0(ctx, base);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x82628608
	sub_82628608(ctx, base);
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

__attribute__((alias("__imp__sub_82669F64"))) PPC_WEAK_FUNC(sub_82669F64);
PPC_FUNC_IMPL(__imp__sub_82669F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669F68"))) PPC_WEAK_FUNC(sub_82669F68);
PPC_FUNC_IMPL(__imp__sub_82669F68) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82669fe0
	if (cr6.eq) goto loc_82669FE0;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82643aa0
	sub_82643AA0(ctx, base);
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// li r30,6
	r30.s64 = 6;
	// li r27,0
	r27.s64 = 0;
loc_82669FA4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8264a2e8
	sub_8264A2E8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stwu r27,4(r31)
	ea = 4 + r31.u32;
	PPC_STORE_U32(ea, r27.u32);
	r31.u32 = ea;
	// bne 0x82669fa4
	if (!cr0.eq) goto loc_82669FA4;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
loc_82669FE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82669FE4"))) PPC_WEAK_FUNC(sub_82669FE4);
PPC_FUNC_IMPL(__imp__sub_82669FE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82669FE8"))) PPC_WEAK_FUNC(sub_82669FE8);
PPC_FUNC_IMPL(__imp__sub_82669FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r10,212(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A000"))) PPC_WEAK_FUNC(sub_8266A000);
PPC_FUNC_IMPL(__imp__sub_8266A000) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,48(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8266a058
	if (cr6.lt) goto loc_8266A058;
	// beq cr6,0x8266a058
	if (cr6.eq) goto loc_8266A058;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8266a068
	if (!cr6.lt) goto loc_8266A068;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8266a068
	if (!cr6.eq) goto loc_8266A068;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8266A058:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8264aee0
	sub_8264AEE0(ctx, base);
loc_8266A068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8266A074"))) PPC_WEAK_FUNC(sub_8266A074);
PPC_FUNC_IMPL(__imp__sub_8266A074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A078"))) PPC_WEAK_FUNC(sub_8266A078);
PPC_FUNC_IMPL(__imp__sub_8266A078) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266a114
	if (cr6.eq) goto loc_8266A114;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8266a0b4
	if (!cr6.gt) goto loc_8266A0B4;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r10,-24600
	ctx.r6.s64 = ctx.r10.s64 + -24600;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07788
	sub_82C07788(ctx, base);
loc_8266A0B4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266a0fc
	if (!cr6.gt) goto loc_8266A0FC;
	// addi r28,r31,-16
	r28.s64 = r31.s64 + -16;
	// li r30,0
	r30.s64 = 0;
loc_8266A0CC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x8266a0cc
	if (cr6.lt) goto loc_8266A0CC;
loc_8266A0FC:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x826287d8
	sub_826287D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_8266A114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8266A118"))) PPC_WEAK_FUNC(sub_8266A118);
PPC_FUNC_IMPL(__imp__sub_8266A118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266A11C"))) PPC_WEAK_FUNC(sub_8266A11C);
PPC_FUNC_IMPL(__imp__sub_8266A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A120"))) PPC_WEAK_FUNC(sub_8266A120);
PPC_FUNC_IMPL(__imp__sub_8266A120) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8266a1d0
	if (!cr6.eq) goto loc_8266A1D0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8266a1d0
	if (cr6.eq) goto loc_8266A1D0;
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266a1b8
	if (cr6.eq) goto loc_8266A1B8;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266a190
	if (!cr6.eq) goto loc_8266A190;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266A190:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// b 0x8266a1d0
	goto loc_8266A1D0;
loc_8266A1B8:
	// lwz r11,-12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266A1D0:
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

__attribute__((alias("__imp__sub_8266A1E4"))) PPC_WEAK_FUNC(sub_8266A1E4);
PPC_FUNC_IMPL(__imp__sub_8266A1E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A1E8"))) PPC_WEAK_FUNC(sub_8266A1E8);
PPC_FUNC_IMPL(__imp__sub_8266A1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x828eaaec
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r11,19680
	ctx.r7.s64 = r11.s64 + 19680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,27212
	ctx.r7.s64 = ctx.r10.s64 + 27212;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r10,r8,18700
	ctx.r10.s64 = ctx.r8.s64 + 18700;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r7,r3,19892
	ctx.r7.s64 = ctx.r3.s64 + 19892;
	// addi r8,r4,19908
	ctx.r8.s64 = ctx.r4.s64 + 19908;
	// addi r4,r11,19876
	ctx.r4.s64 = r11.s64 + 19876;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r3,r9,19860
	ctx.r3.s64 = ctx.r9.s64 + 19860;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// stb r6,52(r31)
	PPC_STORE_U8(r31.u32 + 52, ctx.r6.u8);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82641660
	sub_82641660(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82641408
	sub_82641408(ctx, base);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// li r7,800
	ctx.r7.s64 = 800;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r9,784
	ctx.r9.s64 = 784;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f31,21036(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f31.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lvx128 v13,r5,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f27,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f27.f64 = double(temp.f32);
	// lfs f26,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f26.f64 = double(temp.f32);
	// lvx128 v0,r5,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f30,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// lfs f29,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f29.f64 = double(temp.f32);
	// lfs f28,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f28.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v11,r0,r3
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,224
	r28.s64 = 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// li r29,3
	r29.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8264a4c0
	sub_8264A4C0(ctx, base);
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f25.f64 = double(temp.f32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f25,96(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stfs f25,96(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8264a4c0
	sub_8264A4C0(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// bl 0x8264a4c0
	sub_8264A4C0(ctx, base);
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f26,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v5,r0,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stfs f25,80(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8264a4c0
	sub_8264A4C0(ctx, base);
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f25,96(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v3,r0,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v4,r0,r6
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v4,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8264a4c0
	sub_8264A4C0(ctx, base);
	// stw r26,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v2,r0,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v1,r0,r8
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v2,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8264a4c0
	sub_8264A4C0(ctx, base);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_8266A650"))) PPC_WEAK_FUNC(sub_8266A650);
PPC_FUNC_IMPL(__imp__sub_8266A650) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8266A654"))) PPC_WEAK_FUNC(sub_8266A654);
PPC_FUNC_IMPL(__imp__sub_8266A654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A658"))) PPC_WEAK_FUNC(sub_8266A658);
PPC_FUNC_IMPL(__imp__sub_8266A658) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r11,19908
	ctx.r7.s64 = r11.s64 + 19908;
	// addi r6,r10,19892
	ctx.r6.s64 = ctx.r10.s64 + 19892;
	// addi r5,r9,19876
	ctx.r5.s64 = ctx.r9.s64 + 19876;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,19860
	ctx.r4.s64 = ctx.r8.s64 + 19860;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r29,6
	r29.s64 = 6;
	// li r28,0
	r28.s64 = 0;
loc_8266A6A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8266a6b8
	if (cr6.eq) goto loc_8266A6B8;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_8266A6B8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8266a6a4
	if (!cr0.eq) goto loc_8266A6A4;
	// addi r31,r30,56
	r31.s64 = r30.s64 + 56;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266a700
	if (!cr6.eq) goto loc_8266A700;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266A700:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r6,r11,18700
	ctx.r6.s64 = r11.s64 + 18700;
	// addi r5,r10,27212
	ctx.r5.s64 = ctx.r10.s64 + 27212;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r4,r9,19680
	ctx.r4.s64 = ctx.r9.s64 + 19680;
	// stw r6,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r6.u32);
	// addi r3,r8,-13048
	ctx.r3.s64 = ctx.r8.s64 + -13048;
	// stw r5,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r5.u32);
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8266A740"))) PPC_WEAK_FUNC(sub_8266A740);
PPC_FUNC_IMPL(__imp__sub_8266A740) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266A744"))) PPC_WEAK_FUNC(sub_8266A744);
PPC_FUNC_IMPL(__imp__sub_8266A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A748"))) PPC_WEAK_FUNC(sub_8266A748);
PPC_FUNC_IMPL(__imp__sub_8266A748) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_8266A74C"))) PPC_WEAK_FUNC(sub_8266A74C);
PPC_FUNC_IMPL(__imp__sub_8266A74C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8266a760
	sub_8266A760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A750"))) PPC_WEAK_FUNC(sub_8266A750);
PPC_FUNC_IMPL(__imp__sub_8266A750) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8266A754"))) PPC_WEAK_FUNC(sub_8266A754);
PPC_FUNC_IMPL(__imp__sub_8266A754) {
	PPC_FUNC_PROLOGUE();
	// b 0x8266a760
	sub_8266A760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A758"))) PPC_WEAK_FUNC(sub_8266A758);
PPC_FUNC_IMPL(__imp__sub_8266A758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_8266A75C"))) PPC_WEAK_FUNC(sub_8266A75C);
PPC_FUNC_IMPL(__imp__sub_8266A75C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8266a760
	goto loc_8266A760;
loc_8266A760:
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
	// bl 0x8266a658
	sub_8266A658(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266a7ac
	if (cr6.eq) goto loc_8266A7AC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266A7AC:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A760"))) PPC_WEAK_FUNC(sub_8266A760);
PPC_FUNC_IMPL(__imp__sub_8266A760) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8266a658
	sub_8266A658(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266a7ac
	if (cr6.eq) goto loc_8266A7AC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266A7AC:
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

__attribute__((alias("__imp__sub_8266A7C8"))) PPC_WEAK_FUNC(sub_8266A7C8);
PPC_FUNC_IMPL(__imp__sub_8266A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r10,7600
	ctx.r6.s64 = ctx.r10.s64 + 7600;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// addi r7,r3,64
	ctx.r7.s64 = ctx.r3.s64 + 64;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// stvx128 v0,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vxor v8,v9,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_setzero_si128());
	// stvx128 v8,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stvx128 v12,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stvx128 v12,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_setzero_si128());
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f13,11504(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11504);
	ctx.f13.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f12,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f11,-31316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31316);
	ctx.f11.f64 = double(temp.f32);
	// stb r6,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r6.u8);
	// lfs f10,3792(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3792);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-15528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15528);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,6240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 6240);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f11,152(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f10,160(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f9,164(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f8,176(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stb r6,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r6.u8);
	// stb r9,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r9.u8);
	// stb r5,183(r3)
	PPC_STORE_U8(ctx.r3.u32 + 183, ctx.r5.u8);
	// stb r6,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r6.u8);
	// sth r8,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r8.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, r11.u8);
	// stb r11,185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 185, r11.u8);
	// stb r11,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, r11.u8);
	// stb r11,187(r3)
	PPC_STORE_U8(ctx.r3.u32 + 187, r11.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8266A8F4"))) PPC_WEAK_FUNC(sub_8266A8F4);
PPC_FUNC_IMPL(__imp__sub_8266A8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A8F8"))) PPC_WEAK_FUNC(sub_8266A8F8);
PPC_FUNC_IMPL(__imp__sub_8266A8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,128
	ctx.r7.s64 = 128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A938"))) PPC_WEAK_FUNC(sub_8266A938);
PPC_FUNC_IMPL(__imp__sub_8266A938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8262b8e0
	sub_8262B8E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A954"))) PPC_WEAK_FUNC(sub_8266A954);
PPC_FUNC_IMPL(__imp__sub_8266A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A958"))) PPC_WEAK_FUNC(sub_8266A958);
PPC_FUNC_IMPL(__imp__sub_8266A958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r11,39(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 39);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,39(r30)
	PPC_STORE_U8(r30.u32 + 39, ctx.r10.u8);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,39(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 39);
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r5,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_8266A9C4"))) PPC_WEAK_FUNC(sub_8266A9C4);
PPC_FUNC_IMPL(__imp__sub_8266A9C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A9C8"))) PPC_WEAK_FUNC(sub_8266A9C8);
PPC_FUNC_IMPL(__imp__sub_8266A9C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A9CC"))) PPC_WEAK_FUNC(sub_8266A9CC);
PPC_FUNC_IMPL(__imp__sub_8266A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A9D0"))) PPC_WEAK_FUNC(sub_8266A9D0);
PPC_FUNC_IMPL(__imp__sub_8266A9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,212(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// lwz r10,212(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A9EC"))) PPC_WEAK_FUNC(sub_8266A9EC);
PPC_FUNC_IMPL(__imp__sub_8266A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A9F0"))) PPC_WEAK_FUNC(sub_8266A9F0);
PPC_FUNC_IMPL(__imp__sub_8266A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lbz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// lbz r8,26(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r9,212(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// lwz r8,212(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8266aa34
	if (!cr6.lt) goto loc_8266AA34;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8266AA34:
	// lbz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// lbz r8,26(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lwz r8,212(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8266aa78
	if (!cr6.eq) goto loc_8266AA78;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// blr 
	return;
loc_8266AA78:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AA84"))) PPC_WEAK_FUNC(sub_8266AA84);
PPC_FUNC_IMPL(__imp__sub_8266AA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266AA88"))) PPC_WEAK_FUNC(sub_8266AA88);
PPC_FUNC_IMPL(__imp__sub_8266AA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AA8C"))) PPC_WEAK_FUNC(sub_8266AA8C);
PPC_FUNC_IMPL(__imp__sub_8266AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266AA90"))) PPC_WEAK_FUNC(sub_8266AA90);
PPC_FUNC_IMPL(__imp__sub_8266AA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,52(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	r11.s64 = 0;
loc_8266AAAC:
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r9,52(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8266aaac
	if (cr6.lt) goto loc_8266AAAC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AAD8"))) PPC_WEAK_FUNC(sub_8266AAD8);
PPC_FUNC_IMPL(__imp__sub_8266AAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r9,r7,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,7252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7252);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blt cr6,0x8266ab9c
	if (cr6.lt) goto loc_8266AB9C;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8266AB20:
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8266ab3c
	if (!cr6.gt) goto loc_8266AB3C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8266AB3C:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8266ab58
	if (!cr6.gt) goto loc_8266AB58;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_8266AB58:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8266ab74
	if (!cr6.gt) goto loc_8266AB74;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
loc_8266AB74:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8266ab90
	if (!cr6.gt) goto loc_8266AB90;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
loc_8266AB90:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8266ab20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266AB20;
loc_8266AB9C:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - r11.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266ABB4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8266abd0
	if (!cr6.gt) goto loc_8266ABD0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8266ABD0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8266abb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266ABB4;
}

__attribute__((alias("__imp__sub_8266ABDC"))) PPC_WEAK_FUNC(sub_8266ABDC);
PPC_FUNC_IMPL(__imp__sub_8266ABDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266ABE0"))) PPC_WEAK_FUNC(sub_8266ABE0);
PPC_FUNC_IMPL(__imp__sub_8266ABE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r7,r5,r11
	ctx.r7.s64 = r11.s64 - ctx.r5.s64;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// bge cr6,0x8266acd0
	if (!cr6.lt) goto loc_8266ACD0;
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8266AC04:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r11,232(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266ac2c
	if (cr6.eq) goto loc_8266AC2C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266ac30
	if (!cr6.eq) goto loc_8266AC30;
loc_8266AC2C:
	// li r11,1
	r11.s64 = 1;
loc_8266AC30:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266ac68
	if (!cr6.eq) goto loc_8266AC68;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r11,232(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266ac58
	if (cr6.eq) goto loc_8266AC58;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266ac5c
	if (!cr6.eq) goto loc_8266AC5C;
loc_8266AC58:
	// li r11,1
	r11.s64 = 1;
loc_8266AC5C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266acbc
	if (cr6.eq) goto loc_8266ACBC;
loc_8266AC68:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,4(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// lwz r30,8(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r31.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_8266ACBC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x8266ac04
	if (cr6.lt) goto loc_8266AC04;
loc_8266ACD0:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8266ACD8"))) PPC_WEAK_FUNC(sub_8266ACD8);
PPC_FUNC_IMPL(__imp__sub_8266ACD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266ACDC"))) PPC_WEAK_FUNC(sub_8266ACDC);
PPC_FUNC_IMPL(__imp__sub_8266ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266ACE0"))) PPC_WEAK_FUNC(sub_8266ACE0);
PPC_FUNC_IMPL(__imp__sub_8266ACE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266ad80
	if (!cr6.gt) goto loc_8266AD80;
	// li r29,0
	r29.s64 = 0;
	// li r25,208
	r25.s64 = 208;
	// li r26,16
	r26.s64 = 16;
loc_8266AD18:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// addi r9,r10,224
	ctx.r9.s64 = ctx.r10.s64 + 224;
	// addi r5,r9,224
	ctx.r5.s64 = ctx.r9.s64 + 224;
	// lwz r8,164(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lvx128 v0,r9,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + r25.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,80
	r31.s64 = r11.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stvx128 v0,r11,r26
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// rlwinm r11,r9,30,2,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lvx128 v127,r0,r31
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r8,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stvx128 v127,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r7
	cr6.compare<int32_t>(r30.s32, ctx.r7.s32, xer);
	// blt cr6,0x8266ad18
	if (cr6.lt) goto loc_8266AD18;
loc_8266AD80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_8266AD8C"))) PPC_WEAK_FUNC(sub_8266AD8C);
PPC_FUNC_IMPL(__imp__sub_8266AD8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8266AD90"))) PPC_WEAK_FUNC(sub_8266AD90);
PPC_FUNC_IMPL(__imp__sub_8266AD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addic. r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// mulli r7,r6,112
	ctx.r7.s64 = ctx.r6.s64 * 112;
loc_8266ADA0:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r7
	ctx.r9.u64 = r11.u64 + ctx.r7.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x8266adf8
	if (!cr6.eq) goto loc_8266ADF8;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// beq cr6,0x8266adf8
	if (cr6.eq) goto loc_8266ADF8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r7,r10
	r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266ADE8:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266ade8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266ADE8;
loc_8266ADF8:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,-112
	ctx.r7.s64 = ctx.r7.s64 + -112;
	// bge 0x8266ada0
	if (!cr0.lt) goto loc_8266ADA0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AE08"))) PPC_WEAK_FUNC(sub_8266AE08);
PPC_FUNC_IMPL(__imp__sub_8266AE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8266b09c
	if (cr6.eq) goto loc_8266B09C;
	// lwz r19,0(r13)
	r19.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r18,12
	r18.s64 = 12;
	// lwzx r10,r18,r19
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266ae74
	if (!cr6.lt) goto loc_8266AE74;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17832
	ctx.r7.s64 = ctx.r9.s64 + 17832;
	// addi r6,r8,19960
	ctx.r6.s64 = ctx.r8.s64 + 19960;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_8266AE74:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r25,5,0,26
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r29,r25,-1
	xer.ca = r25.u32 > 0;
	r29.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r9,r11,127
	ctx.r9.s64 = r11.s64 + 127;
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// add r8,r11,r26
	ctx.r8.u64 = r11.u64 + r26.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blt 0x8266af90
	if (cr0.lt) goto loc_8266AF90;
	// addi r30,r27,-8
	r30.s64 = r27.s64 + -8;
	// subf r24,r28,r26
	r24.s64 = r26.s64 - r28.s64;
	// li r23,16
	r23.s64 = 16;
loc_8266AEC0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x8266aed8
	if (cr6.lt) goto loc_8266AED8;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// dcbt r10,r23
loc_8266AED8:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// addi r31,r11,32
	r31.s64 = r11.s64 + 32;
	// stwx r10,r24,r28
	PPC_STORE_U32(r24.u32 + r28.u32, ctx.r10.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x8266af08
	if (!cr6.gt) goto loc_8266AF08;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,120(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8266AF08:
	// lbz r6,15(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// slw r11,r5,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// slw r9,r4,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r7,r3,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r11,r7,r5
	r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// lbz r5,30(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r4,29(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 29);
	// slw r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stwu r9,32(r30)
	ea = 32 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// bge 0x8266aec0
	if (!cr0.lt) goto loc_8266AEC0;
loc_8266AF90:
	// lwzx r10,r18,r19
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266afc0
	if (!cr6.lt) goto loc_8266AFC0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17792
	ctx.r8.s64 = ctx.r9.s64 + 17792;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266AFC0:
	// lwz r3,88(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 88);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266afd4
	if (cr6.eq) goto loc_8266AFD4;
	// bl 0x82c66db0
	sub_82C66DB0(ctx, base);
loc_8266AFD4:
	// lwz r3,88(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 88);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 88);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8266b010
	if (cr6.eq) goto loc_8266B010;
	// bl 0x82c66db8
	sub_82C66DB8(ctx, base);
loc_8266B010:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8266b06c
	if (!cr0.gt) goto loc_8266B06C;
	// lwzx r10,r18,r19
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266b060
	if (!cr6.lt) goto loc_8266B060;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17780
	ctx.r8.s64 = ctx.r9.s64 + 17780;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266B060:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
loc_8266B06C:
	// lwzx r10,r18,r19
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266b09c
	if (!cr6.lt) goto loc_8266B09C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266B09C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8266B0A0"))) PPC_WEAK_FUNC(sub_8266B0A0);
PPC_FUNC_IMPL(__imp__sub_8266B0A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8266B0A4"))) PPC_WEAK_FUNC(sub_8266B0A4);
PPC_FUNC_IMPL(__imp__sub_8266B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

