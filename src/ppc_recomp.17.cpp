#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82301640"))) PPC_WEAK_FUNC(sub_82301640);
PPC_FUNC_IMPL(__imp__sub_82301640) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301644"))) PPC_WEAK_FUNC(sub_82301644);
PPC_FUNC_IMPL(__imp__sub_82301644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301648"))) PPC_WEAK_FUNC(sub_82301648);
PPC_FUNC_IMPL(__imp__sub_82301648) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300a18
	sub_82300A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82301658"))) PPC_WEAK_FUNC(sub_82301658);
PPC_FUNC_IMPL(__imp__sub_82301658) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300b00
	sub_82300B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82301668"))) PPC_WEAK_FUNC(sub_82301668);
PPC_FUNC_IMPL(__imp__sub_82301668) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300bd8
	sub_82300BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82301678"))) PPC_WEAK_FUNC(sub_82301678);
PPC_FUNC_IMPL(__imp__sub_82301678) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300cd0
	sub_82300CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82301688"))) PPC_WEAK_FUNC(sub_82301688);
PPC_FUNC_IMPL(__imp__sub_82301688) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300dc8
	sub_82300DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82301698"))) PPC_WEAK_FUNC(sub_82301698);
PPC_FUNC_IMPL(__imp__sub_82301698) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300eb0
	sub_82300EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823016A8"))) PPC_WEAK_FUNC(sub_823016A8);
PPC_FUNC_IMPL(__imp__sub_823016A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82300fb8
	sub_82300FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823016B8"))) PPC_WEAK_FUNC(sub_823016B8);
PPC_FUNC_IMPL(__imp__sub_823016B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r7,r8,22188
	ctx.r7.s64 = ctx.r8.s64 + 22188;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,22204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22204);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lfs f0,22188(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22188);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lfs f0,22188(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22188);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
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
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stb r10,72(r31)
	PPC_STORE_U8(r31.u32 + 72, ctx.r10.u8);
	// stb r10,73(r31)
	PPC_STORE_U8(r31.u32 + 73, ctx.r10.u8);
	// bl 0x823010e0
	sub_823010E0(ctx, base);
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

__attribute__((alias("__imp__sub_82301780"))) PPC_WEAK_FUNC(sub_82301780);
PPC_FUNC_IMPL(__imp__sub_82301780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82301784"))) PPC_WEAK_FUNC(sub_82301784);
PPC_FUNC_IMPL(__imp__sub_82301784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301788"))) PPC_WEAK_FUNC(sub_82301788);
PPC_FUNC_IMPL(__imp__sub_82301788) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824dddd8
	sub_824DDDD8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82300250
	sub_82300250(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301808
	if (cr6.eq) goto loc_82301808;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301804
	if (cr6.eq) goto loc_82301804;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301804:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301808:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff608
	sub_822FF608(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230185c
	if (cr6.eq) goto loc_8230185C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301858
	if (cr6.eq) goto loc_82301858;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301858:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8230185C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9480
	ctx.r10.s64 = r11.s64 + 9480;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301888"))) PPC_WEAK_FUNC(sub_82301888);
PPC_FUNC_IMPL(__imp__sub_82301888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8230188C"))) PPC_WEAK_FUNC(sub_8230188C);
PPC_FUNC_IMPL(__imp__sub_8230188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301890"))) PPC_WEAK_FUNC(sub_82301890);
PPC_FUNC_IMPL(__imp__sub_82301890) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822fec70
	sub_822FEC70(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823002d0
	sub_823002D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301910
	if (cr6.eq) goto loc_82301910;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230190c
	if (cr6.eq) goto loc_8230190C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8230190C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301910:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff688
	sub_822FF688(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301964
	if (cr6.eq) goto loc_82301964;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301960
	if (cr6.eq) goto loc_82301960;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301960:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301964:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5704
	ctx.r10.s64 = r11.s64 + 5704;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301990"))) PPC_WEAK_FUNC(sub_82301990);
PPC_FUNC_IMPL(__imp__sub_82301990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301994"))) PPC_WEAK_FUNC(sub_82301994);
PPC_FUNC_IMPL(__imp__sub_82301994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301998"))) PPC_WEAK_FUNC(sub_82301998);
PPC_FUNC_IMPL(__imp__sub_82301998) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822fed20
	sub_822FED20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82300350
	sub_82300350(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301a18
	if (cr6.eq) goto loc_82301A18;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301a14
	if (cr6.eq) goto loc_82301A14;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301A14:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301A18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff708
	sub_822FF708(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301a6c
	if (cr6.eq) goto loc_82301A6C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301a68
	if (cr6.eq) goto loc_82301A68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301A68:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301A6C:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5720
	ctx.r10.s64 = r11.s64 + 5720;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301A98"))) PPC_WEAK_FUNC(sub_82301A98);
PPC_FUNC_IMPL(__imp__sub_82301A98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301A9C"))) PPC_WEAK_FUNC(sub_82301A9C);
PPC_FUNC_IMPL(__imp__sub_82301A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301AA0"))) PPC_WEAK_FUNC(sub_82301AA0);
PPC_FUNC_IMPL(__imp__sub_82301AA0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822fedc0
	sub_822FEDC0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823003d0
	sub_823003D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301b20
	if (cr6.eq) goto loc_82301B20;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301b1c
	if (cr6.eq) goto loc_82301B1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301B1C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301B20:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff788
	sub_822FF788(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301b74
	if (cr6.eq) goto loc_82301B74;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301b70
	if (cr6.eq) goto loc_82301B70;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301B70:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301B74:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5736
	ctx.r10.s64 = r11.s64 + 5736;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301BA0"))) PPC_WEAK_FUNC(sub_82301BA0);
PPC_FUNC_IMPL(__imp__sub_82301BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301BA4"))) PPC_WEAK_FUNC(sub_82301BA4);
PPC_FUNC_IMPL(__imp__sub_82301BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301BA8"))) PPC_WEAK_FUNC(sub_82301BA8);
PPC_FUNC_IMPL(__imp__sub_82301BA8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822fee80
	sub_822FEE80(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823004d0
	sub_823004D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301c28
	if (cr6.eq) goto loc_82301C28;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301c24
	if (cr6.eq) goto loc_82301C24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301C24:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301C28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff888
	sub_822FF888(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301c7c
	if (cr6.eq) goto loc_82301C7C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301c78
	if (cr6.eq) goto loc_82301C78;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301C78:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301C7C:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5752
	ctx.r10.s64 = r11.s64 + 5752;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301CA8"))) PPC_WEAK_FUNC(sub_82301CA8);
PPC_FUNC_IMPL(__imp__sub_82301CA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301CAC"))) PPC_WEAK_FUNC(sub_82301CAC);
PPC_FUNC_IMPL(__imp__sub_82301CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301CB0"))) PPC_WEAK_FUNC(sub_82301CB0);
PPC_FUNC_IMPL(__imp__sub_82301CB0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824dd9a8
	sub_824DD9A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82300550
	sub_82300550(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301d30
	if (cr6.eq) goto loc_82301D30;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301d2c
	if (cr6.eq) goto loc_82301D2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301D2C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301D30:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff908
	sub_822FF908(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301d84
	if (cr6.eq) goto loc_82301D84;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301d80
	if (cr6.eq) goto loc_82301D80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301D80:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301D84:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,30464
	ctx.r10.s64 = r11.s64 + 30464;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301DB0"))) PPC_WEAK_FUNC(sub_82301DB0);
PPC_FUNC_IMPL(__imp__sub_82301DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301DB4"))) PPC_WEAK_FUNC(sub_82301DB4);
PPC_FUNC_IMPL(__imp__sub_82301DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301DB8"))) PPC_WEAK_FUNC(sub_82301DB8);
PPC_FUNC_IMPL(__imp__sub_82301DB8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822ff1b0
	sub_822FF1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823005d0
	sub_823005D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301e38
	if (cr6.eq) goto loc_82301E38;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301e34
	if (cr6.eq) goto loc_82301E34;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301E34:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301E38:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ff988
	sub_822FF988(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301e8c
	if (cr6.eq) goto loc_82301E8C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301e88
	if (cr6.eq) goto loc_82301E88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301E88:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301E8C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9352
	ctx.r10.s64 = r11.s64 + 9352;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301EB8"))) PPC_WEAK_FUNC(sub_82301EB8);
PPC_FUNC_IMPL(__imp__sub_82301EB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301EBC"))) PPC_WEAK_FUNC(sub_82301EBC);
PPC_FUNC_IMPL(__imp__sub_82301EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301EC0"))) PPC_WEAK_FUNC(sub_82301EC0);
PPC_FUNC_IMPL(__imp__sub_82301EC0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822fef38
	sub_822FEF38(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82300750
	sub_82300750(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301f40
	if (cr6.eq) goto loc_82301F40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301f3c
	if (cr6.eq) goto loc_82301F3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301F3C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82301F40:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ffb08
	sub_822FFB08(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301f94
	if (cr6.eq) goto loc_82301F94;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82301f90
	if (cr6.eq) goto loc_82301F90;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82301F90:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82301F94:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5768
	ctx.r10.s64 = r11.s64 + 5768;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82301FC0"))) PPC_WEAK_FUNC(sub_82301FC0);
PPC_FUNC_IMPL(__imp__sub_82301FC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82301FC4"))) PPC_WEAK_FUNC(sub_82301FC4);
PPC_FUNC_IMPL(__imp__sub_82301FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82301FC8"))) PPC_WEAK_FUNC(sub_82301FC8);
PPC_FUNC_IMPL(__imp__sub_82301FC8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822fefe8
	sub_822FEFE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823007d0
	sub_823007D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302048
	if (cr6.eq) goto loc_82302048;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302044
	if (cr6.eq) goto loc_82302044;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82302044:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82302048:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ffb88
	sub_822FFB88(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230209c
	if (cr6.eq) goto loc_8230209C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302098
	if (cr6.eq) goto loc_82302098;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82302098:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8230209C:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5784
	ctx.r10.s64 = r11.s64 + 5784;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_823020C8"))) PPC_WEAK_FUNC(sub_823020C8);
PPC_FUNC_IMPL(__imp__sub_823020C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823020CC"))) PPC_WEAK_FUNC(sub_823020CC);
PPC_FUNC_IMPL(__imp__sub_823020CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823020D0"))) PPC_WEAK_FUNC(sub_823020D0);
PPC_FUNC_IMPL(__imp__sub_823020D0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822ff0b8
	sub_822FF0B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82300850
	sub_82300850(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302150
	if (cr6.eq) goto loc_82302150;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230214c
	if (cr6.eq) goto loc_8230214C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8230214C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82302150:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ffc08
	sub_822FFC08(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823021a4
	if (cr6.eq) goto loc_823021A4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823021a0
	if (cr6.eq) goto loc_823021A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823021A0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_823021A4:
	// lis r11,-32208
	r11.s64 = -2110783488;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5800
	ctx.r10.s64 = r11.s64 + 5800;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_823021D0"))) PPC_WEAK_FUNC(sub_823021D0);
PPC_FUNC_IMPL(__imp__sub_823021D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823021D4"))) PPC_WEAK_FUNC(sub_823021D4);
PPC_FUNC_IMPL(__imp__sub_823021D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823021D8"))) PPC_WEAK_FUNC(sub_823021D8);
PPC_FUNC_IMPL(__imp__sub_823021D8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822ff1b0
	sub_822FF1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823008d0
	sub_823008D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302258
	if (cr6.eq) goto loc_82302258;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302254
	if (cr6.eq) goto loc_82302254;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82302254:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82302258:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822ffc88
	sub_822FFC88(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823022ac
	if (cr6.eq) goto loc_823022AC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823022a8
	if (cr6.eq) goto loc_823022A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823022A8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_823022AC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9352
	ctx.r10.s64 = r11.s64 + 9352;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_823022D8"))) PPC_WEAK_FUNC(sub_823022D8);
PPC_FUNC_IMPL(__imp__sub_823022D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823022DC"))) PPC_WEAK_FUNC(sub_823022DC);
PPC_FUNC_IMPL(__imp__sub_823022DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823022E0"))) PPC_WEAK_FUNC(sub_823022E0);
PPC_FUNC_IMPL(__imp__sub_823022E0) {
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
	// bl 0x822fafa0
	sub_822FAFA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82302318
	if (cr6.eq) goto loc_82302318;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82302318:
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

__attribute__((alias("__imp__sub_8230232C"))) PPC_WEAK_FUNC(sub_8230232C);
PPC_FUNC_IMPL(__imp__sub_8230232C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302330"))) PPC_WEAK_FUNC(sub_82302330);
PPC_FUNC_IMPL(__imp__sub_82302330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
}

__attribute__((alias("__imp__sub_82302338"))) PPC_WEAK_FUNC(sub_82302338);
PPC_FUNC_IMPL(__imp__sub_82302338) {
	PPC_FUNC_PROLOGUE();
	// b 0x826cf610
	sub_826CF610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230233C"))) PPC_WEAK_FUNC(sub_8230233C);
PPC_FUNC_IMPL(__imp__sub_8230233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302340"))) PPC_WEAK_FUNC(sub_82302340);
PPC_FUNC_IMPL(__imp__sub_82302340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82302344"))) PPC_WEAK_FUNC(sub_82302344);
PPC_FUNC_IMPL(__imp__sub_82302344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302348"))) PPC_WEAK_FUNC(sub_82302348);
PPC_FUNC_IMPL(__imp__sub_82302348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230234C"))) PPC_WEAK_FUNC(sub_8230234C);
PPC_FUNC_IMPL(__imp__sub_8230234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82302350"))) PPC_WEAK_FUNC(sub_82302350);
PPC_FUNC_IMPL(__imp__sub_82302350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302388
	if (cr6.eq) goto loc_82302388;
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
	// stw r29,20(r26)
	PPC_STORE_U32(r26.u32 + 20, r29.u32);
loc_82302388:
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823023ac
	if (cr6.eq) goto loc_823023AC;
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
	// stw r29,24(r26)
	PPC_STORE_U32(r26.u32 + 24, r29.u32);
loc_823023AC:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823023e0
	if (cr6.eq) goto loc_823023E0;
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
	// stw r29,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r29.u32);
loc_823023E0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302404
	if (cr6.eq) goto loc_82302404;
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
loc_82302404:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302438
	if (cr6.eq) goto loc_82302438;
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
	// stw r29,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r29.u32);
loc_82302438:
	// lis r31,-31934
	r31.s64 = -2092826624;
	// lwz r3,22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22308);
	// bl 0x8238a550
	sub_8238A550(ctx, base);
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lwz r11,22220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22220);
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
loc_82302450:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r29.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82302450
	if (!cr0.eq) goto loc_82302450;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82605348
	sub_82605348(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,21640(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21640);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825d1450
	sub_825D1450(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825d2990
	sub_825D2990(ctx, base);
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825d1490
	sub_825D1490(ctx, base);
	// lwz r11,21640(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21640);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// lwz r3,22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823024d0
	if (cr6.eq) goto loc_823024D0;
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
loc_823024D0:
	// lwz r3,22220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823024f0
	if (cr6.eq) goto loc_823024F0;
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
loc_823024F0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302514
	if (cr6.eq) goto loc_82302514;
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
loc_82302514:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302548
	if (cr6.eq) goto loc_82302548;
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
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
loc_82302548:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22308);
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302574
	if (cr6.eq) goto loc_82302574;
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
loc_82302574:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823025a8
	if (cr6.eq) goto loc_823025A8;
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
	// stw r29,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r29.u32);
loc_823025A8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823025dc
	if (cr6.eq) goto loc_823025DC;
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
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
loc_823025DC:
	// lis r31,-31934
	r31.s64 = -2092826624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230dfb8
	sub_8230DFB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230e0b0
	sub_8230E0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230e1a8
	sub_8230E1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230e2a0
	sub_8230E2A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230e3a0
	sub_8230E3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230e4a0
	sub_8230E4A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22268(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// bl 0x8230e598
	sub_8230E598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243e008
	sub_8243E008(ctx, base);
	// lwz r3,22268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823026a8
	if (cr6.eq) goto loc_823026A8;
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
loc_823026A8:
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,23216
	ctx.r4.s64 = r11.s64 + 23216;
	// lwz r3,22272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22272);
	// bl 0x825a1ff0
	sub_825A1FF0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,22272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22272);
	// addi r4,r10,23212
	ctx.r4.s64 = ctx.r10.s64 + 23212;
	// bl 0x825a1ff0
	sub_825A1FF0(ctx, base);
	// lwz r3,22268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823026ec
	if (cr6.eq) goto loc_823026EC;
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
loc_823026EC:
	// lis r31,-31934
	r31.s64 = -2092826624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,23256
	ctx.r4.s64 = r11.s64 + 23256;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r10,23260
	ctx.r4.s64 = ctx.r10.s64 + 23260;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r9,23264
	ctx.r4.s64 = ctx.r9.s64 + 23264;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r8,23268
	ctx.r4.s64 = ctx.r8.s64 + 23268;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r7,23272
	ctx.r4.s64 = ctx.r7.s64 + 23272;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r6,23280
	ctx.r4.s64 = ctx.r6.s64 + 23280;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r5,23276
	ctx.r4.s64 = ctx.r5.s64 + 23276;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r4,23284
	ctx.r4.s64 = ctx.r4.s64 + 23284;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r11,23288
	ctx.r4.s64 = r11.s64 + 23288;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r10,23292
	ctx.r4.s64 = ctx.r10.s64 + 23292;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r9,23296
	ctx.r4.s64 = ctx.r9.s64 + 23296;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r8,23308
	ctx.r4.s64 = ctx.r8.s64 + 23308;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r7,23304
	ctx.r4.s64 = ctx.r7.s64 + 23304;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r6,23300
	ctx.r4.s64 = ctx.r6.s64 + 23300;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r5,23312
	ctx.r4.s64 = ctx.r5.s64 + 23312;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r4,23316
	ctx.r4.s64 = ctx.r4.s64 + 23316;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r11,23320
	ctx.r4.s64 = r11.s64 + 23320;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r10,23328
	ctx.r4.s64 = ctx.r10.s64 + 23328;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r9,23324
	ctx.r4.s64 = ctx.r9.s64 + 23324;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r8,23332
	ctx.r4.s64 = ctx.r8.s64 + 23332;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r7,23336
	ctx.r4.s64 = ctx.r7.s64 + 23336;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r6,23340
	ctx.r4.s64 = ctx.r6.s64 + 23340;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r5,23252
	ctx.r4.s64 = ctx.r5.s64 + 23252;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r4,23248
	ctx.r4.s64 = ctx.r4.s64 + 23248;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r11,23244
	ctx.r4.s64 = r11.s64 + 23244;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r10,23240
	ctx.r4.s64 = ctx.r10.s64 + 23240;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r9,23236
	ctx.r4.s64 = ctx.r9.s64 + 23236;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r8,23232
	ctx.r4.s64 = ctx.r8.s64 + 23232;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r7,23228
	ctx.r4.s64 = ctx.r7.s64 + 23228;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r6,23224
	ctx.r4.s64 = ctx.r6.s64 + 23224;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// addi r4,r5,23220
	ctx.r4.s64 = ctx.r5.s64 + 23220;
	// bl 0x826f45c0
	sub_826F45C0(ctx, base);
	// lwz r3,22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302900
	if (cr6.eq) goto loc_82302900;
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
loc_82302900:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302924
	if (cr6.eq) goto loc_82302924;
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
loc_82302924:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302948
	if (cr6.eq) goto loc_82302948;
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
loc_82302948:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230296c
	if (cr6.eq) goto loc_8230296C;
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
loc_8230296C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302990
	if (cr6.eq) goto loc_82302990;
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
loc_82302990:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823029b4
	if (cr6.eq) goto loc_823029B4;
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
loc_823029B4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823029d8
	if (cr6.eq) goto loc_823029D8;
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
loc_823029D8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823029fc
	if (cr6.eq) goto loc_823029FC;
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
loc_823029FC:
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302a1c
	if (cr6.eq) goto loc_82302A1C;
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
loc_82302A1C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302a40
	if (cr6.eq) goto loc_82302A40;
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
loc_82302A40:
	// lis r25,-31934
	r25.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,18432(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// lwz r31,44(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302a7c
	if (cr6.eq) goto loc_82302A7C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,30988
	ctx.r9.s64 = ctx.r10.s64 + 30988;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82302A7C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302aa0
	if (cr6.eq) goto loc_82302AA0;
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
loc_82302AA0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82302ac4
	if (cr6.eq) goto loc_82302AC4;
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
loc_82302AC4:
	// addi r4,r26,36
	ctx.r4.s64 = r26.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r4,r26,28
	ctx.r4.s64 = r26.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// lwz r3,18432(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// bl 0x826ce060
	sub_826CE060(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,25232
	ctx.r9.s64 = r11.s64 + 25232;
	// addi r8,r10,31796
	ctx.r8.s64 = ctx.r10.s64 + 31796;
	// stw r9,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r9.u32);
	// lis r27,-31934
	r27.s64 = -2092826624;
	// stw r8,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r8.u32);
	// addi r4,r1,584
	ctx.r4.s64 = ctx.r1.s64 + 584;
	// lwz r3,21540(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21540);
	// bl 0x826cf1e0
	sub_826CF1E0(ctx, base);
	// lis r7,-31932
	ctx.r7.s64 = -2092695552;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// addi r29,r7,-3784
	r29.s64 = ctx.r7.s64 + -3784;
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,-676
	ctx.r3.s64 = ctx.r6.s64 + -676;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,460
	ctx.r4.s64 = ctx.r1.s64 + 460;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,-636
	ctx.r3.s64 = ctx.r5.s64 + -636;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,-596
	ctx.r3.s64 = ctx.r3.s64 + -596;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-556
	ctx.r3.s64 = r11.s64 + -556;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-512
	ctx.r3.s64 = ctx.r10.s64 + -512;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,-472
	ctx.r3.s64 = ctx.r9.s64 + -472;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,524
	ctx.r4.s64 = ctx.r1.s64 + 524;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,-432
	ctx.r3.s64 = ctx.r8.s64 + -432;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,-388
	ctx.r3.s64 = ctx.r7.s64 + -388;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,-344
	ctx.r3.s64 = ctx.r6.s64 + -344;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,-300
	ctx.r3.s64 = ctx.r5.s64 + -300;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-208
	ctx.r3.s64 = r11.s64 + -208;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-160
	ctx.r3.s64 = ctx.r10.s64 + -160;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,-120
	ctx.r3.s64 = ctx.r9.s64 + -120;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,556
	ctx.r4.s64 = ctx.r1.s64 + 556;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// addi r3,r8,-80
	ctx.r3.s64 = ctx.r8.s64 + -80;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,-36
	ctx.r3.s64 = ctx.r7.s64 + -36;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,8
	ctx.r3.s64 = ctx.r6.s64 + 8;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,56
	ctx.r3.s64 = ctx.r5.s64 + 56;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,476
	ctx.r4.s64 = ctx.r1.s64 + 476;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,204
	ctx.r3.s64 = r11.s64 + 204;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,252
	ctx.r3.s64 = ctx.r10.s64 + 252;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,304
	ctx.r3.s64 = ctx.r9.s64 + 304;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,356
	ctx.r3.s64 = ctx.r8.s64 + 356;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,404
	ctx.r3.s64 = ctx.r7.s64 + 404;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,380
	ctx.r4.s64 = ctx.r1.s64 + 380;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,448
	ctx.r3.s64 = ctx.r6.s64 + 448;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,496
	ctx.r3.s64 = ctx.r5.s64 + 496;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,552
	ctx.r3.s64 = ctx.r3.s64 + 552;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,616
	ctx.r3.s64 = r11.s64 + 616;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,680
	ctx.r3.s64 = ctx.r10.s64 + 680;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,736
	ctx.r3.s64 = ctx.r9.s64 + 736;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,572
	ctx.r4.s64 = ctx.r1.s64 + 572;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,792
	ctx.r3.s64 = ctx.r8.s64 + 792;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,852
	ctx.r3.s64 = ctx.r7.s64 + 852;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,912
	ctx.r3.s64 = ctx.r6.s64 + 912;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,960
	ctx.r3.s64 = ctx.r5.s64 + 960;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r3.u32);
	// addi r4,r1,492
	ctx.r4.s64 = ctx.r1.s64 + 492;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,1012
	ctx.r3.s64 = ctx.r3.s64 + 1012;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1068
	ctx.r3.s64 = r11.s64 + 1068;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,1124
	ctx.r3.s64 = ctx.r10.s64 + 1124;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,1180
	ctx.r3.s64 = ctx.r9.s64 + 1180;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,540
	ctx.r4.s64 = ctx.r1.s64 + 540;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,1232
	ctx.r3.s64 = ctx.r8.s64 + 1232;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,1276
	ctx.r3.s64 = ctx.r7.s64 + 1276;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,1328
	ctx.r3.s64 = ctx.r6.s64 + 1328;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,1380
	ctx.r3.s64 = ctx.r5.s64 + 1380;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,1468
	ctx.r3.s64 = ctx.r3.s64 + 1468;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1420
	ctx.r3.s64 = r11.s64 + 1420;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,1516
	ctx.r3.s64 = ctx.r10.s64 + 1516;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,1556
	ctx.r3.s64 = ctx.r9.s64 + 1556;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,564
	ctx.r4.s64 = ctx.r1.s64 + 564;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,1604
	ctx.r3.s64 = ctx.r8.s64 + 1604;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,1648
	ctx.r3.s64 = ctx.r7.s64 + 1648;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,428
	ctx.r4.s64 = ctx.r1.s64 + 428;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,1828
	ctx.r3.s64 = ctx.r6.s64 + 1828;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,1876
	ctx.r3.s64 = ctx.r5.s64 + 1876;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,508
	ctx.r4.s64 = ctx.r1.s64 + 508;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,1688
	ctx.r3.s64 = ctx.r3.s64 + 1688;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1732
	ctx.r3.s64 = r11.s64 + 1732;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,436
	ctx.r4.s64 = ctx.r1.s64 + 436;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,1776
	ctx.r3.s64 = ctx.r10.s64 + 1776;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,1928
	ctx.r3.s64 = ctx.r9.s64 + 1928;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,548
	ctx.r4.s64 = ctx.r1.s64 + 548;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,1984
	ctx.r3.s64 = ctx.r8.s64 + 1984;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,2040
	ctx.r3.s64 = ctx.r7.s64 + 2040;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,444
	ctx.r4.s64 = ctx.r1.s64 + 444;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,2096
	ctx.r3.s64 = ctx.r6.s64 + 2096;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,2148
	ctx.r3.s64 = ctx.r5.s64 + 2148;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31970
	ctx.r3.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,22312
	ctx.r3.s64 = ctx.r3.s64 + 22312;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,22592
	ctx.r3.s64 = r11.s64 + 22592;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,22120
	ctx.r3.s64 = ctx.r10.s64 + 22120;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,2196
	ctx.r3.s64 = ctx.r9.s64 + 2196;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,2252
	ctx.r3.s64 = ctx.r8.s64 + 2252;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,2308
	ctx.r3.s64 = ctx.r7.s64 + 2308;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,2352
	ctx.r3.s64 = ctx.r6.s64 + 2352;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,2396
	ctx.r3.s64 = ctx.r5.s64 + 2396;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,2444
	ctx.r3.s64 = ctx.r3.s64 + 2444;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,2492
	ctx.r3.s64 = r11.s64 + 2492;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,2548
	ctx.r3.s64 = ctx.r10.s64 + 2548;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,2608
	ctx.r3.s64 = ctx.r9.s64 + 2608;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,2664
	ctx.r3.s64 = ctx.r8.s64 + 2664;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,2724
	ctx.r3.s64 = ctx.r7.s64 + 2724;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,2768
	ctx.r3.s64 = ctx.r6.s64 + 2768;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,2816
	ctx.r3.s64 = ctx.r5.s64 + 2816;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,2864
	ctx.r3.s64 = ctx.r3.s64 + 2864;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,2916
	ctx.r3.s64 = r11.s64 + 2916;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,2968
	ctx.r3.s64 = ctx.r10.s64 + 2968;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,25292
	ctx.r3.s64 = ctx.r9.s64 + 25292;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,3024
	ctx.r3.s64 = ctx.r8.s64 + 3024;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,3068
	ctx.r3.s64 = ctx.r7.s64 + 3068;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,25004
	ctx.r3.s64 = ctx.r6.s64 + 25004;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,3108
	ctx.r3.s64 = ctx.r5.s64 + 3108;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,3152
	ctx.r3.s64 = ctx.r3.s64 + 3152;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,3204
	ctx.r3.s64 = r11.s64 + 3204;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,3296
	ctx.r3.s64 = ctx.r10.s64 + 3296;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,3352
	ctx.r3.s64 = ctx.r9.s64 + 3352;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,3520
	ctx.r3.s64 = ctx.r8.s64 + 3520;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,3460
	ctx.r3.s64 = ctx.r7.s64 + 3460;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,3400
	ctx.r3.s64 = ctx.r6.s64 + 3400;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,3244
	ctx.r3.s64 = ctx.r5.s64 + 3244;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,3572
	ctx.r3.s64 = ctx.r3.s64 + 3572;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,3616
	ctx.r3.s64 = r11.s64 + 3616;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,3668
	ctx.r3.s64 = ctx.r10.s64 + 3668;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,3712
	ctx.r3.s64 = ctx.r9.s64 + 3712;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,3760
	ctx.r3.s64 = ctx.r8.s64 + 3760;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// addi r3,r7,3812
	ctx.r3.s64 = ctx.r7.s64 + 3812;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,3860
	ctx.r3.s64 = ctx.r6.s64 + 3860;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,27176
	ctx.r3.s64 = ctx.r5.s64 + 27176;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,3900
	ctx.r3.s64 = ctx.r3.s64 + 3900;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,3952
	ctx.r3.s64 = r11.s64 + 3952;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,26672
	ctx.r3.s64 = ctx.r10.s64 + 26672;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,4004
	ctx.r3.s64 = ctx.r9.s64 + 4004;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,4056
	ctx.r3.s64 = ctx.r8.s64 + 4056;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,4108
	ctx.r3.s64 = ctx.r7.s64 + 4108;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,4152
	ctx.r3.s64 = ctx.r6.s64 + 4152;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,4200
	ctx.r3.s64 = ctx.r5.s64 + 4200;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,4252
	ctx.r3.s64 = ctx.r3.s64 + 4252;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,25852
	ctx.r3.s64 = r11.s64 + 25852;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r3.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,25796
	ctx.r3.s64 = ctx.r10.s64 + 25796;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,4304
	ctx.r3.s64 = ctx.r9.s64 + 4304;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,4356
	ctx.r3.s64 = ctx.r8.s64 + 4356;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,4408
	ctx.r3.s64 = ctx.r7.s64 + 4408;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,4456
	ctx.r3.s64 = ctx.r6.s64 + 4456;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,4504
	ctx.r3.s64 = ctx.r5.s64 + 4504;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31969
	ctx.r3.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,4544
	ctx.r3.s64 = ctx.r3.s64 + 4544;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r3.u32);
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,4588
	ctx.r3.s64 = r11.s64 + 4588;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,4640
	ctx.r3.s64 = ctx.r10.s64 + 4640;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r9,4692
	ctx.r3.s64 = ctx.r9.s64 + 4692;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r8,4744
	ctx.r3.s64 = ctx.r8.s64 + 4744;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,520
	ctx.r4.s64 = ctx.r1.s64 + 520;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r7,4796
	ctx.r3.s64 = ctx.r7.s64 + 4796;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r6,4836
	ctx.r3.s64 = ctx.r6.s64 + 4836;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,4884
	ctx.r3.s64 = ctx.r5.s64 + 4884;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r3,-31970
	ctx.r3.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,23180
	ctx.r3.s64 = ctx.r3.s64 + 23180;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r3.u32);
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,23520
	ctx.r3.s64 = r11.s64 + 23520;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,23376
	ctx.r3.s64 = ctx.r10.s64 + 23376;
	// lwz r30,22244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r3.u32);
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e6d60
	sub_826E6D60(ctx, base);
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,31780
	ctx.r4.s64 = ctx.r9.s64 + 31780;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// bl 0x82307298
	sub_82307298(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r8,31768
	ctx.r4.s64 = ctx.r8.s64 + 31768;
	// bl 0x82307338
	sub_82307338(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r7,31752
	ctx.r4.s64 = ctx.r7.s64 + 31752;
	// bl 0x823073d8
	sub_823073D8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r6,31736
	ctx.r4.s64 = ctx.r6.s64 + 31736;
	// bl 0x82307478
	sub_82307478(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r5,31712
	ctx.r4.s64 = ctx.r5.s64 + 31712;
	// bl 0x82307478
	sub_82307478(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r4,31692
	ctx.r4.s64 = ctx.r4.s64 + 31692;
	// bl 0x82307518
	sub_82307518(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r11,31676
	ctx.r4.s64 = r11.s64 + 31676;
	// bl 0x823075b8
	sub_823075B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r10,31668
	ctx.r4.s64 = ctx.r10.s64 + 31668;
	// bl 0x82307658
	sub_82307658(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r9,31656
	ctx.r4.s64 = ctx.r9.s64 + 31656;
	// bl 0x823076f8
	sub_823076F8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r8,31636
	ctx.r4.s64 = ctx.r8.s64 + 31636;
	// bl 0x82307798
	sub_82307798(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r7,31620
	ctx.r4.s64 = ctx.r7.s64 + 31620;
	// bl 0x82307838
	sub_82307838(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r6,31604
	ctx.r4.s64 = ctx.r6.s64 + 31604;
	// bl 0x823078d8
	sub_823078D8(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r5,31588
	ctx.r4.s64 = ctx.r5.s64 + 31588;
	// bl 0x82307978
	sub_82307978(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r4,31580
	ctx.r4.s64 = ctx.r4.s64 + 31580;
	// bl 0x82307a18
	sub_82307A18(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// addi r4,r11,31564
	ctx.r4.s64 = r11.s64 + 31564;
	// bl 0x82307ab8
	sub_82307AB8(ctx, base);
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,31560
	ctx.r4.s64 = ctx.r10.s64 + 31560;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r9,31556
	ctx.r4.s64 = ctx.r9.s64 + 31556;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r8,31552
	ctx.r4.s64 = ctx.r8.s64 + 31552;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r7,31548
	ctx.r4.s64 = ctx.r7.s64 + 31548;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r6,31544
	ctx.r4.s64 = ctx.r6.s64 + 31544;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r5,31540
	ctx.r4.s64 = ctx.r5.s64 + 31540;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r4,31536
	ctx.r4.s64 = ctx.r4.s64 + 31536;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r11,31532
	ctx.r4.s64 = r11.s64 + 31532;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r10,31528
	ctx.r4.s64 = ctx.r10.s64 + 31528;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r9,31524
	ctx.r4.s64 = ctx.r9.s64 + 31524;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r8,31520
	ctx.r4.s64 = ctx.r8.s64 + 31520;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r7,31516
	ctx.r4.s64 = ctx.r7.s64 + 31516;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r6,31512
	ctx.r4.s64 = ctx.r6.s64 + 31512;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r5,31508
	ctx.r4.s64 = ctx.r5.s64 + 31508;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r24,r4,31504
	r24.s64 = ctx.r4.s64 + 31504;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r11,31500
	ctx.r4.s64 = r11.s64 + 31500;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r10,31496
	ctx.r4.s64 = ctx.r10.s64 + 31496;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// addi r4,r9,31492
	ctx.r4.s64 = ctx.r9.s64 + 31492;
	// bl 0x826d7fb8
	sub_826D7FB8(ctx, base);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// bl 0x826d9430
	sub_826D9430(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304130
	if (cr6.eq) goto loc_82304130;
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
loc_82304130:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// addi r4,r11,31484
	ctx.r4.s64 = r11.s64 + 31484;
	// bl 0x826d93a8
	sub_826D93A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230415c
	if (cr6.eq) goto loc_8230415C;
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
loc_8230415C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// addi r4,r11,31476
	ctx.r4.s64 = r11.s64 + 31476;
	// bl 0x826d93a8
	sub_826D93A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304188
	if (cr6.eq) goto loc_82304188;
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
loc_82304188:
	// lwz r11,18432(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,22244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823041b8
	if (cr6.eq) goto loc_823041B8;
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
loc_823041B8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,18088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18088);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823041dc
	if (cr6.eq) goto loc_823041DC;
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
loc_823041DC:
	// lwz r3,22240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823041fc
	if (cr6.eq) goto loc_823041FC;
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
loc_823041FC:
	// lwz r3,18432(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 18432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230421c
	if (cr6.eq) goto loc_8230421C;
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
loc_8230421C:
	// lwz r3,22236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230423c
	if (cr6.eq) goto loc_8230423C;
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
loc_8230423C:
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304268
	if (cr6.eq) goto loc_82304268;
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
loc_82304268:
	// lwz r3,21540(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304288
	if (cr6.eq) goto loc_82304288;
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
loc_82304288:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6300
	sub_826C6300(ctx, base);
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823042b0
	if (cr6.eq) goto loc_823042B0;
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
loc_823042B0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823042d4
	if (cr6.eq) goto loc_823042D4;
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
loc_823042D4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823042f8
	if (cr6.eq) goto loc_823042F8;
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
loc_823042F8:
	// bl 0x8273d678
	sub_8273D678(ctx, base);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,22304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22304);
	// bl 0x826d05c8
	sub_826D05C8(ctx, base);
	// lwz r3,22304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230432c
	if (cr6.eq) goto loc_8230432C;
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
loc_8230432C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,22300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304350
	if (cr6.eq) goto loc_82304350;
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
loc_82304350:
	// lis r31,-31934
	r31.s64 = -2092826624;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da838
	sub_826DA838(ctx, base);
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304388
	if (cr6.eq) goto loc_82304388;
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
loc_82304388:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
}

__attribute__((alias("__imp__sub_8230438C"))) PPC_WEAK_FUNC(sub_8230438C);
PPC_FUNC_IMPL(__imp__sub_8230438C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82304390"))) PPC_WEAK_FUNC(sub_82304390);
PPC_FUNC_IMPL(__imp__sub_82304390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,64
	r11.s64 = 64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// li r25,5
	r25.s64 = 5;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r11.u32);
	// li r17,2
	r17.s64 = 2;
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// stw r25,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r25.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r17,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r17.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r8,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// bl 0x82605510
	sub_82605510(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304400
	if (cr6.eq) goto loc_82304400;
	// bl 0x82420e58
	sub_82420E58(ctx, base);
loc_82304400:
	// bl 0x8257aba0
	sub_8257ABA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,258
	ctx.r8.s64 = 258;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r29,r10,32656
	r29.s64 = ctx.r10.s64 + 32656;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304448
	if (cr6.eq) goto loc_82304448;
	// bl 0x826da960
	sub_826DA960(ctx, base);
loc_82304448:
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da500
	sub_826DA500(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r20,1
	r20.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// li r8,263
	ctx.r8.s64 = 263;
	// li r3,88
	ctx.r3.s64 = 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823044a8
	if (cr6.eq) goto loc_823044A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r5,r11,32648
	ctx.r5.s64 = r11.s64 + 32648;
	// bl 0x8231abd0
	sub_8231ABD0(ctx, base);
loc_823044A8:
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r11,19968(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19968);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823044ec
	if (!cr6.eq) goto loc_823044EC;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r6,r7,19964
	ctx.r6.s64 = ctx.r7.s64 + 19964;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,19968(r9)
	PPC_STORE_U32(ctx.r9.u32 + 19968, r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stb r8,19964(r7)
	PPC_STORE_U8(ctx.r7.u32 + 19964, ctx.r8.u8);
	// stb r10,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r10.u8);
	// stb r31,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, r31.u8);
	// stb r31,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r31.u8);
loc_823044EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r11,19976(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19976);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82304538
	if (!cr6.eq) goto loc_82304538;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r6,r7,19972
	ctx.r6.s64 = ctx.r7.s64 + 19972;
	// stw r11,19976(r9)
	PPC_STORE_U32(ctx.r9.u32 + 19976, r11.u32);
	// li r11,255
	r11.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stb r8,19972(r7)
	PPC_STORE_U8(ctx.r7.u32 + 19972, ctx.r8.u8);
	// stb r31,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, r31.u8);
	// stb r11,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, r11.u8);
	// stb r31,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r31.u8);
loc_82304538:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r11,22316(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22316);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82304584
	if (!cr6.eq) goto loc_82304584;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r6,r7,22312
	ctx.r6.s64 = ctx.r7.s64 + 22312;
	// stw r11,22316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22316, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stb r8,22312(r7)
	PPC_STORE_U8(ctx.r7.u32 + 22312, ctx.r8.u8);
	// stb r31,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, r31.u8);
	// stb r31,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, r31.u8);
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
loc_82304584:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lis r27,-31934
	r27.s64 = -2092826624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r28,r11,22320
	r28.s64 = r11.s64 + 22320;
	// lwz r11,22324(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 22324);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823045d0
	if (!cr6.eq) goto loc_823045D0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r31,3(r28)
	PPC_STORE_U8(r28.u32 + 3, r31.u8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,22324(r27)
	PPC_STORE_U32(r27.u32 + 22324, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r9,2(r28)
	PPC_STORE_U8(r28.u32 + 2, ctx.r9.u8);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
loc_823045D0:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lwz r11,22324(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 22324);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82304610
	if (!cr6.eq) goto loc_82304610;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r31,3(r28)
	PPC_STORE_U8(r28.u32 + 3, r31.u8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,22324(r27)
	PPC_STORE_U32(r27.u32 + 22324, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r9,2(r28)
	PPC_STORE_U8(r28.u32 + 2, ctx.r9.u8);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
loc_82304610:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lwz r11,22324(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 22324);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82304650
	if (!cr6.eq) goto loc_82304650;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r31,3(r28)
	PPC_STORE_U8(r28.u32 + 3, r31.u8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,22324(r27)
	PPC_STORE_U32(r27.u32 + 22324, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r9,2(r28)
	PPC_STORE_U8(r28.u32 + 2, ctx.r9.u8);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
loc_82304650:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,272
	ctx.r8.s64 = 272;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
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
	// beq cr6,0x82304690
	if (cr6.eq) goto loc_82304690;
	// bl 0x82389e38
	sub_82389E38(ctx, base);
loc_82304690:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,22304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22304);
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r18,22
	r18.s64 = 22;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,277
	ctx.r8.s64 = 277;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// li r3,528
	ctx.r3.s64 = 528;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823046f0
	if (cr6.eq) goto loc_823046F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823903f0
	sub_823903F0(ctx, base);
	// b 0x823046f4
	goto loc_823046F4;
loc_823046F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823046F4:
	// stw r3,4(r22)
	PPC_STORE_U32(r22.u32 + 4, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r19,21
	r19.s64 = 21;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// li r8,282
	ctx.r8.s64 = 282;
	// li r3,216
	ctx.r3.s64 = 216;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304750
	if (cr6.eq) goto loc_82304750;
	// bl 0x82418580
	sub_82418580(ctx, base);
	// b 0x82304754
	goto loc_82304754;
loc_82304750:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82304754:
	// stw r3,8(r22)
	PPC_STORE_U32(r22.u32 + 8, ctx.r3.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,292
	ctx.r8.s64 = 292;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
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
	// beq cr6,0x823047a8
	if (cr6.eq) goto loc_823047A8;
	// bl 0x826db058
	sub_826DB058(ctx, base);
loc_823047A8:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r8,295
	ctx.r8.s64 = 295;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823047e0
	if (cr6.eq) goto loc_823047E0;
	// bl 0x82421138
	sub_82421138(ctx, base);
loc_823047E0:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r27,20
	r27.s64 = 20;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r8,310
	ctx.r8.s64 = 310;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304838
	if (cr6.eq) goto loc_82304838;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826d9d60
	sub_826D9D60(ctx, base);
loc_82304838:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,313
	ctx.r8.s64 = 313;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304878
	if (cr6.eq) goto loc_82304878;
	// bl 0x8273d888
	sub_8273D888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8230487c
	goto loc_8230487C;
loc_82304878:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8230487C:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,31484
	ctx.r4.s64 = r11.s64 + 31484;
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// bl 0x826d96d8
	sub_826D96D8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,314
	ctx.r8.s64 = 314;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x823048d0
	if (cr6.eq) goto loc_823048D0;
	// bl 0x826dbb88
	sub_826DBB88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x823048d4
	goto loc_823048D4;
loc_823048D0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823048D4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// addi r4,r10,31476
	ctx.r4.s64 = ctx.r10.s64 + 31476;
	// bl 0x826d96d8
	sub_826D96D8(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,317
	ctx.r8.s64 = 317;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230492c
	if (cr6.eq) goto loc_8230492C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,30856
	ctx.r10.s64 = r11.s64 + 30856;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304930
	goto loc_82304930;
loc_8230492C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304930:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22232);
	// addi r21,r11,31504
	r21.s64 = r11.s64 + 31504;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x826d9750
	sub_826D9750(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,320
	ctx.r8.s64 = 320;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,48
	ctx.r3.s64 = 48;
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
	// beq cr6,0x8230497c
	if (cr6.eq) goto loc_8230497C;
	// bl 0x826cf498
	sub_826CF498(ctx, base);
loc_8230497C:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r8,321
	ctx.r8.s64 = 321;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r3,24
	ctx.r3.s64 = 24;
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
	// beq cr6,0x823049b4
	if (cr6.eq) goto loc_823049B4;
	// bl 0x826dba38
	sub_826DBA38(ctx, base);
loc_823049B4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,322
	ctx.r8.s64 = 322;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r23,r11,25292
	r23.s64 = r11.s64 + 25292;
	// beq cr6,0x823049fc
	if (cr6.eq) goto loc_823049FC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// b 0x82304a00
	goto loc_82304A00;
loc_823049FC:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82304A00:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,323
	ctx.r8.s64 = 323;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r10,44(r22)
	PPC_STORE_U32(r22.u32 + 44, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304a40
	if (cr6.eq) goto loc_82304A40;
	// lwz r4,44(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// bl 0x826d82c8
	sub_826D82C8(ctx, base);
loc_82304A40:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,324
	ctx.r8.s64 = 324;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304afc
	if (cr6.eq) goto loc_82304AFC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lbz r27,4(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r26,20(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r24,16(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r16,12(r8)
	r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r15,8(r7)
	r15.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r15,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r15.u32);
	// stw r16,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r16.u32);
	// stw r24,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r24.u32);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r26.u32);
	// stw r5,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// stb r27,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, r27.u8);
	// bl 0x826cd360
	sub_826CD360(ctx, base);
loc_82304AFC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,331
	ctx.r8.s64 = 331;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,20
	ctx.r3.s64 = 20;
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
	// beq cr6,0x82304b34
	if (cr6.eq) goto loc_82304B34;
	// bl 0x826d0ec0
	sub_826D0EC0(ctx, base);
loc_82304B34:
	// li r26,15
	r26.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r8,332
	ctx.r8.s64 = 332;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x82304b70
	if (cr6.eq) goto loc_82304B70;
	// bl 0x826e5bb0
	sub_826E5BB0(ctx, base);
loc_82304B70:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r8,333
	ctx.r8.s64 = 333;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
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
	// beq cr6,0x82304ba8
	if (cr6.eq) goto loc_82304BA8;
	// bl 0x826e7270
	sub_826E7270(ctx, base);
loc_82304BA8:
	// lis r27,-31934
	r27.s64 = -2092826624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18432(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 18432);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// lis r24,-31934
	r24.s64 = -2092826624;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,32628
	ctx.r4.s64 = r11.s64 + 32628;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,341
	ctx.r8.s64 = 341;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304c10
	if (cr6.eq) goto loc_82304C10;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// b 0x82304c14
	goto loc_82304C14;
loc_82304C10:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304C14:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,31560
	ctx.r4.s64 = r11.s64 + 31560;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,342
	ctx.r8.s64 = 342;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304c68
	if (cr6.eq) goto loc_82304C68;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// b 0x82304c6c
	goto loc_82304C6C;
loc_82304C68:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304C6C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,32620
	ctx.r4.s64 = r11.s64 + 32620;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,343
	ctx.r8.s64 = 343;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82304cc4
	if (cr6.eq) goto loc_82304CC4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25444
	ctx.r10.s64 = r11.s64 + 25444;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304cc8
	goto loc_82304CC8;
loc_82304CC4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304CC8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31556
	ctx.r4.s64 = r11.s64 + 31556;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,344
	ctx.r8.s64 = 344;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304d18
	if (cr6.eq) goto loc_82304D18;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// b 0x82304d1c
	goto loc_82304D1C;
loc_82304D18:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304D1C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31552
	ctx.r4.s64 = r11.s64 + 31552;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,345
	ctx.r8.s64 = 345;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304d6c
	if (cr6.eq) goto loc_82304D6C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// b 0x82304d70
	goto loc_82304D70;
loc_82304D6C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304D70:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31548
	ctx.r4.s64 = r11.s64 + 31548;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,346
	ctx.r8.s64 = 346;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304dc8
	if (cr6.eq) goto loc_82304DC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25456
	ctx.r10.s64 = r11.s64 + 25456;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304dcc
	goto loc_82304DCC;
loc_82304DC8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304DCC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31544
	ctx.r4.s64 = r11.s64 + 31544;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,347
	ctx.r8.s64 = 347;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304e24
	if (cr6.eq) goto loc_82304E24;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25516
	ctx.r10.s64 = r11.s64 + 25516;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304e28
	goto loc_82304E28;
loc_82304E24:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304E28:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31540
	ctx.r4.s64 = r11.s64 + 31540;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,348
	ctx.r8.s64 = 348;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304e80
	if (cr6.eq) goto loc_82304E80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25576
	ctx.r10.s64 = r11.s64 + 25576;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304e84
	goto loc_82304E84;
loc_82304E80:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304E84:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31536
	ctx.r4.s64 = r11.s64 + 31536;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,350
	ctx.r8.s64 = 350;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304edc
	if (cr6.eq) goto loc_82304EDC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25636
	ctx.r10.s64 = r11.s64 + 25636;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304ee0
	goto loc_82304EE0;
loc_82304EDC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304EE0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31532
	ctx.r4.s64 = r11.s64 + 31532;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,352
	ctx.r8.s64 = 352;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304f38
	if (cr6.eq) goto loc_82304F38;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25696
	ctx.r10.s64 = r11.s64 + 25696;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304f3c
	goto loc_82304F3C;
loc_82304F38:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304F3C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,32616
	ctx.r4.s64 = r11.s64 + 32616;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,353
	ctx.r8.s64 = 353;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304f94
	if (cr6.eq) goto loc_82304F94;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25756
	ctx.r10.s64 = r11.s64 + 25756;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304f98
	goto loc_82304F98;
loc_82304F94:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304F98:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31528
	ctx.r4.s64 = r11.s64 + 31528;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,354
	ctx.r8.s64 = 354;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82304ff0
	if (cr6.eq) goto loc_82304FF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25816
	ctx.r10.s64 = r11.s64 + 25816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82304ff4
	goto loc_82304FF4;
loc_82304FF0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82304FF4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31520
	ctx.r4.s64 = r11.s64 + 31520;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,355
	ctx.r8.s64 = 355;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x8230504c
	if (cr6.eq) goto loc_8230504C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25828
	ctx.r10.s64 = r11.s64 + 25828;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82305050
	goto loc_82305050;
loc_8230504C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82305050:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31516
	ctx.r4.s64 = r11.s64 + 31516;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,356
	ctx.r8.s64 = 356;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x823050a8
	if (cr6.eq) goto loc_823050A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25840
	ctx.r10.s64 = r11.s64 + 25840;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823050ac
	goto loc_823050AC;
loc_823050A8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823050AC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31512
	ctx.r4.s64 = r11.s64 + 31512;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,357
	ctx.r8.s64 = 357;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82305104
	if (cr6.eq) goto loc_82305104;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25852
	ctx.r10.s64 = r11.s64 + 25852;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82305108
	goto loc_82305108;
loc_82305104:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82305108:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31508
	ctx.r4.s64 = r11.s64 + 31508;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,358
	ctx.r8.s64 = 358;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82305160
	if (cr6.eq) goto loc_82305160;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25864
	ctx.r10.s64 = r11.s64 + 25864;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82305164
	goto loc_82305164;
loc_82305160:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82305164:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,359
	ctx.r8.s64 = 359;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823051b8
	if (cr6.eq) goto loc_823051B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25928
	ctx.r10.s64 = r11.s64 + 25928;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823051bc
	goto loc_823051BC;
loc_823051B8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823051BC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31496
	ctx.r4.s64 = r11.s64 + 31496;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,360
	ctx.r8.s64 = 360;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82305214
	if (cr6.eq) goto loc_82305214;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,25988
	ctx.r10.s64 = r11.s64 + 25988;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82305218
	goto loc_82305218;
loc_82305214:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82305218:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31500
	ctx.r4.s64 = r11.s64 + 31500;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,361
	ctx.r8.s64 = 361;
	// li r3,4
	ctx.r3.s64 = 4;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305270
	if (cr6.eq) goto loc_82305270;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,26000
	ctx.r10.s64 = r11.s64 + 26000;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82305274
	goto loc_82305274;
loc_82305270:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82305274:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22236);
	// addi r4,r11,31492
	ctx.r4.s64 = r11.s64 + 31492;
	// bl 0x826d7f40
	sub_826D7F40(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,31780
	ctx.r4.s64 = ctx.r10.s64 + 31780;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// bl 0x8230f880
	sub_8230F880(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r9,31768
	ctx.r4.s64 = ctx.r9.s64 + 31768;
	// bl 0x8230f948
	sub_8230F948(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r8,31752
	ctx.r4.s64 = ctx.r8.s64 + 31752;
	// bl 0x8230fa10
	sub_8230FA10(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r7,31736
	ctx.r4.s64 = ctx.r7.s64 + 31736;
	// bl 0x8230fad8
	sub_8230FAD8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r6,31712
	ctx.r4.s64 = ctx.r6.s64 + 31712;
	// bl 0x8230fad8
	sub_8230FAD8(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r5,31692
	ctx.r4.s64 = ctx.r5.s64 + 31692;
	// bl 0x8230fba0
	sub_8230FBA0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r4,31676
	ctx.r4.s64 = ctx.r4.s64 + 31676;
	// bl 0x8230fc68
	sub_8230FC68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r11,31668
	ctx.r4.s64 = r11.s64 + 31668;
	// bl 0x8230fd30
	sub_8230FD30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r10,31656
	ctx.r4.s64 = ctx.r10.s64 + 31656;
	// bl 0x8230fdf8
	sub_8230FDF8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r9,31636
	ctx.r4.s64 = ctx.r9.s64 + 31636;
	// bl 0x8230fec0
	sub_8230FEC0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r8,31620
	ctx.r4.s64 = ctx.r8.s64 + 31620;
	// bl 0x8230ff88
	sub_8230FF88(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r7,31604
	ctx.r4.s64 = ctx.r7.s64 + 31604;
	// bl 0x82310050
	sub_82310050(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r6,31588
	ctx.r4.s64 = ctx.r6.s64 + 31588;
	// bl 0x82307118
	sub_82307118(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r5,31580
	ctx.r4.s64 = ctx.r5.s64 + 31580;
	// bl 0x823071d8
	sub_823071D8(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22240);
	// addi r4,r4,31564
	ctx.r4.s64 = ctx.r4.s64 + 31564;
	// bl 0x82310118
	sub_82310118(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823101e0
	sub_823101E0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310270
	sub_82310270(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310300
	sub_82310300(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310390
	sub_82310390(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310420
	sub_82310420(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823104b0
	sub_823104B0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310540
	sub_82310540(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823105d0
	sub_823105D0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310660
	sub_82310660(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823106f0
	sub_823106F0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310780
	sub_82310780(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310810
	sub_82310810(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823108a0
	sub_823108A0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310930
	sub_82310930(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823109c0
	sub_823109C0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310a50
	sub_82310A50(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310ae0
	sub_82310AE0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310b70
	sub_82310B70(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310c00
	sub_82310C00(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310c90
	sub_82310C90(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310d20
	sub_82310D20(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310db0
	sub_82310DB0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310e40
	sub_82310E40(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310ed0
	sub_82310ED0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310f60
	sub_82310F60(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82310ff0
	sub_82310FF0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311080
	sub_82311080(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311110
	sub_82311110(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823111a0
	sub_823111A0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311230
	sub_82311230(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823112c0
	sub_823112C0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311350
	sub_82311350(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823113e0
	sub_823113E0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311470
	sub_82311470(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311500
	sub_82311500(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311590
	sub_82311590(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311620
	sub_82311620(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823116b0
	sub_823116B0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311740
	sub_82311740(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823117d0
	sub_823117D0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311860
	sub_82311860(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823118f0
	sub_823118F0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311980
	sub_82311980(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311a10
	sub_82311A10(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311aa0
	sub_82311AA0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311b30
	sub_82311B30(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311bc0
	sub_82311BC0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311c50
	sub_82311C50(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311ce0
	sub_82311CE0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311d70
	sub_82311D70(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311e00
	sub_82311E00(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311e90
	sub_82311E90(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311f20
	sub_82311F20(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82311fb0
	sub_82311FB0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312040
	sub_82312040(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823120d0
	sub_823120D0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312160
	sub_82312160(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823121f0
	sub_823121F0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312280
	sub_82312280(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312310
	sub_82312310(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823123a0
	sub_823123A0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312430
	sub_82312430(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823124c0
	sub_823124C0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312550
	sub_82312550(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823125e0
	sub_823125E0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312670
	sub_82312670(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312700
	sub_82312700(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312790
	sub_82312790(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312820
	sub_82312820(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823128b0
	sub_823128B0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312940
	sub_82312940(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823129d0
	sub_823129D0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312a60
	sub_82312A60(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312af0
	sub_82312AF0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312b80
	sub_82312B80(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312c10
	sub_82312C10(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312ca0
	sub_82312CA0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312d30
	sub_82312D30(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312dc0
	sub_82312DC0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312e50
	sub_82312E50(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312ee0
	sub_82312EE0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82312f70
	sub_82312F70(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313000
	sub_82313000(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313090
	sub_82313090(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313120
	sub_82313120(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823131b0
	sub_823131B0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313240
	sub_82313240(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823132d0
	sub_823132D0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313360
	sub_82313360(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823133f0
	sub_823133F0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313480
	sub_82313480(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313510
	sub_82313510(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823135a0
	sub_823135A0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313630
	sub_82313630(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823136c0
	sub_823136C0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313750
	sub_82313750(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823137e0
	sub_823137E0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313870
	sub_82313870(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313900
	sub_82313900(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313990
	sub_82313990(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313a20
	sub_82313A20(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313ab0
	sub_82313AB0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313b40
	sub_82313B40(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313bd0
	sub_82313BD0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313c60
	sub_82313C60(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313cf0
	sub_82313CF0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313d80
	sub_82313D80(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313e10
	sub_82313E10(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313ea0
	sub_82313EA0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313f30
	sub_82313F30(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82313fc0
	sub_82313FC0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314050
	sub_82314050(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823140e0
	sub_823140E0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314170
	sub_82314170(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314200
	sub_82314200(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314290
	sub_82314290(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314320
	sub_82314320(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823143b0
	sub_823143B0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314440
	sub_82314440(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823144d0
	sub_823144D0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314560
	sub_82314560(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823145f0
	sub_823145F0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314680
	sub_82314680(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314710
	sub_82314710(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x823147a0
	sub_823147A0(ctx, base);
	// lwz r3,22244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22244);
	// bl 0x82314830
	sub_82314830(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32596
	ctx.r4.s64 = r11.s64 + 32596;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// addi r5,r10,32584
	ctx.r5.s64 = ctx.r10.s64 + 32584;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r4,18432(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 18432);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r22,28
	ctx.r3.s64 = r22.s64 + 28;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r26.u32);
	// li r8,99
	ctx.r8.s64 = 99;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// addi r5,r9,32564
	ctx.r5.s64 = ctx.r9.s64 + 32564;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r4,18432(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 18432);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r22,36
	ctx.r3.s64 = r22.s64 + 36;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// bl 0x8274a9f8
	sub_8274A9F8(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,21636(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21636);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,536
	ctx.r8.s64 = 536;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230589c
	if (cr6.eq) goto loc_8230589C;
	// bl 0x82417d68
	sub_82417D68(ctx, base);
loc_8230589C:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32548
	ctx.r3.s64 = r11.s64 + 32548;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,21644(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21644);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r25,30
	r25.s64 = 30;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r8,542
	ctx.r8.s64 = 542;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305930
	if (cr6.eq) goto loc_82305930;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826f5880
	sub_826F5880(ctx, base);
loc_82305930:
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r11,18432(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 18432);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r27,44(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230597c
	if (cr6.eq) goto loc_8230597C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r31.u8);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r9,r10,30844
	ctx.r9.s64 = ctx.r10.s64 + 30844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8230597C:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,32528
	r27.s64 = r11.s64 + 32528;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lwz r11,21644(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21644);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// li r26,10
	r26.s64 = 10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82305ad4
	if (cr6.eq) goto loc_82305AD4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// lwz r11,21644(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21644);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r31.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32520
	ctx.r3.s64 = r11.s64 + 32520;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x822cb4c8
	sub_822CB4C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r27,0(r10)
	r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r9,36864
	ctx.r7.u64 = ctx.r9.u64 | 36864;
	// addi r3,r8,32504
	ctx.r3.s64 = ctx.r8.s64 + 32504;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822cb458
	sub_822CB458(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r23,0(r6)
	r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r5,32484
	ctx.r3.s64 = ctx.r5.s64 + 32484;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822cb458
	sub_822CB458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,22216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22216);
	// bl 0x826db158
	sub_826DB158(ctx, base);
loc_82305AD4:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,564
	ctx.r8.s64 = 564;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305b24
	if (cr6.eq) goto loc_82305B24;
	// bl 0x826f4618
	sub_826F4618(ctx, base);
loc_82305B24:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318ae8
	sub_82318AE8(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318b70
	sub_82318B70(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318bf8
	sub_82318BF8(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318c80
	sub_82318C80(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318d08
	sub_82318D08(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318d90
	sub_82318D90(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318e18
	sub_82318E18(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318ea0
	sub_82318EA0(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318f28
	sub_82318F28(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82318fb0
	sub_82318FB0(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319038
	sub_82319038(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823190c0
	sub_823190C0(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319148
	sub_82319148(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823191d0
	sub_823191D0(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319258
	sub_82319258(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823192e0
	sub_823192E0(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319368
	sub_82319368(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823193f0
	sub_823193F0(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319478
	sub_82319478(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319500
	sub_82319500(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319588
	sub_82319588(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319610
	sub_82319610(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319698
	sub_82319698(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319720
	sub_82319720(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x8231b0c8
	sub_8231B0C8(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823197a8
	sub_823197A8(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319830
	sub_82319830(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823198b8
	sub_823198B8(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319940
	sub_82319940(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x823199c8
	sub_823199C8(ctx, base);
	// lwz r3,22252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22252);
	// bl 0x82319a50
	sub_82319A50(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// li r8,602
	ctx.r8.s64 = 602;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305c9c
	if (cr6.eq) goto loc_82305C9C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,22268(r28)
	PPC_STORE_U32(r28.u32 + 22268, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r10,r11,32048
	ctx.r10.s64 = r11.s64 + 32048;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r3,r27,20
	ctx.r3.s64 = r27.s64 + 20;
	// bl 0x826dad38
	sub_826DAD38(ctx, base);
loc_82305C9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,22268(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230dfb8
	sub_8230DFB8(ctx, base);
	// lis r11,-32207
	r11.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r11,-8144
	ctx.r5.s64 = r11.s64 + -8144;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,22268(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230e0b0
	sub_8230E0B0(ctx, base);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r10,-7896
	ctx.r5.s64 = ctx.r10.s64 + -7896;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,22268(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230e1a8
	sub_8230E1A8(ctx, base);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r9,-7648
	ctx.r5.s64 = ctx.r9.s64 + -7648;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,22268(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230e2a0
	sub_8230E2A0(ctx, base);
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r8,-7400
	ctx.r5.s64 = ctx.r8.s64 + -7400;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,22268(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230e3a0
	sub_8230E3A0(ctx, base);
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r7,-7144
	ctx.r5.s64 = ctx.r7.s64 + -7144;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,22268(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230e4a0
	sub_8230E4A0(ctx, base);
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r6,-6888
	ctx.r5.s64 = ctx.r6.s64 + -6888;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,22268(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 22268);
	// bl 0x8230e598
	sub_8230E598(ctx, base);
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r5,-6640
	ctx.r5.s64 = ctx.r5.s64 + -6640;
	// bl 0x8243e060
	sub_8243E060(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,613
	ctx.r8.s64 = 613;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305dc0
	if (cr6.eq) goto loc_82305DC0;
	// bl 0x825a20a8
	sub_825A20A8(ctx, base);
loc_82305DC0:
	// lis r11,-32207
	r11.s64 = -2110717952;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r9,r11,-8664
	ctx.r9.s64 = r11.s64 + -8664;
	// addi r8,r10,20288
	ctx.r8.s64 = ctx.r10.s64 + 20288;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r5,-8664
	ctx.r3.s64 = ctx.r5.s64 + -8664;
	// and r11,r4,r8
	r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,23216
	ctx.r4.s64 = ctx.r10.s64 + 23216;
	// lwz r3,22272(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22272);
	// bl 0x825a2050
	sub_825A2050(ctx, base);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r3,22272(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22272);
	// addi r7,r9,-8536
	ctx.r7.s64 = ctx.r9.s64 + -8536;
	// addi r6,r8,20288
	ctx.r6.s64 = ctx.r8.s64 + 20288;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// lis r11,-32207
	r11.s64 = -2110717952;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,-8536
	ctx.r9.s64 = r11.s64 + -8536;
	// and r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ctx.r6.u64;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r7,23212
	ctx.r4.s64 = ctx.r7.s64 + 23212;
	// bl 0x825a2050
	sub_825A2050(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,619
	ctx.r8.s64 = 619;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305e8c
	if (cr6.eq) goto loc_82305E8C;
	// bl 0x826fe570
	sub_826FE570(ctx, base);
loc_82305E8C:
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r28,29
	r28.s64 = 29;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,624
	ctx.r8.s64 = 624;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305ee0
	if (cr6.eq) goto loc_82305EE0;
	// bl 0x825845f8
	sub_825845F8(ctx, base);
loc_82305EE0:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,625
	ctx.r8.s64 = 625;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305f18
	if (cr6.eq) goto loc_82305F18;
	// bl 0x82584fd8
	sub_82584FD8(ctx, base);
loc_82305F18:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,626
	ctx.r8.s64 = 626;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,20
	ctx.r3.s64 = 20;
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
	// beq cr6,0x82305f50
	if (cr6.eq) goto loc_82305F50;
	// bl 0x82584c68
	sub_82584C68(ctx, base);
loc_82305F50:
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,630
	ctx.r8.s64 = 630;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82305f94
	if (cr6.eq) goto loc_82305F94;
	// bl 0x824316d0
	sub_824316D0(ctx, base);
loc_82305F94:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r26,17
	r26.s64 = 17;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r8,634
	ctx.r8.s64 = 634;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
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
	// beq cr6,0x82305fdc
	if (cr6.eq) goto loc_82305FDC;
	// bl 0x82730010
	sub_82730010(ctx, base);
loc_82305FDC:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,639
	ctx.r8.s64 = 639;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,52
	ctx.r3.s64 = 52;
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
	// beq cr6,0x8230602c
	if (cr6.eq) goto loc_8230602C;
	// bl 0x8241a0d0
	sub_8241A0D0(ctx, base);
loc_8230602C:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,644
	ctx.r8.s64 = 644;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,156
	ctx.r3.s64 = 156;
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
	// beq cr6,0x82306080
	if (cr6.eq) goto loc_82306080;
	// bl 0x82570ea8
	sub_82570EA8(ctx, base);
loc_82306080:
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32468
	ctx.r4.s64 = r11.s64 + 32468;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r10,32452
	ctx.r4.s64 = ctx.r10.s64 + 32452;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,682
	ctx.r8.s64 = 682;
	// li r3,16
	ctx.r3.s64 = 16;
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
	// beq cr6,0x823060e4
	if (cr6.eq) goto loc_823060E4;
	// bl 0x8230ed50
	sub_8230ED50(ctx, base);
loc_823060E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32428
	ctx.r4.s64 = r11.s64 + 32428;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r8,688
	ctx.r8.s64 = 688;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82306130
	if (cr6.eq) goto loc_82306130;
	// bl 0x82417920
	sub_82417920(ctx, base);
	// b 0x82306134
	goto loc_82306134;
loc_82306130:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82306134:
	// stw r3,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32384
	ctx.r4.s64 = r11.s64 + 32384;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// mr r11,r20
	r11.u64 = r20.u64;
	// stb r20,9124(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9124, r20.u8);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r9,32344
	ctx.r4.s64 = ctx.r9.s64 + 32344;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,704
	ctx.r8.s64 = 704;
	// li r3,168
	ctx.r3.s64 = 168;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823061e4
	if (cr6.eq) goto loc_823061E4;
	// bl 0x825c5198
	sub_825C5198(ctx, base);
	// b 0x823061e8
	goto loc_823061E8;
loc_823061E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823061E8:
	// stw r3,12(r22)
	PPC_STORE_U32(r22.u32 + 12, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32304
	ctx.r4.s64 = r11.s64 + 32304;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// li r8,711
	ctx.r8.s64 = 711;
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230624c
	if (cr6.eq) goto loc_8230624C;
	// bl 0x8238a080
	sub_8238A080(ctx, base);
loc_8230624C:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,22308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22308);
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32264
	ctx.r4.s64 = r11.s64 + 32264;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da648
	sub_826DA648(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r27,7
	r27.s64 = 7;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,727
	ctx.r8.s64 = 727;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,44
	ctx.r3.s64 = 44;
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
	// beq cr6,0x823062ec
	if (cr6.eq) goto loc_823062EC;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823a8448
	sub_823A8448(ctx, base);
loc_823062EC:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r8,728
	ctx.r8.s64 = 728;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82306328
	if (cr6.eq) goto loc_82306328;
	// bl 0x8259bc68
	sub_8259BC68(ctx, base);
	// b 0x8230632c
	goto loc_8230632C;
loc_82306328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8230632C:
	// stw r3,16(r22)
	PPC_STORE_U32(r22.u32 + 16, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da6a8
	sub_826DA6A8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32224
	ctx.r4.s64 = r11.s64 + 32224;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,736
	ctx.r8.s64 = 736;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230639c
	if (cr6.eq) goto loc_8230639C;
	// bl 0x82579fe0
	sub_82579FE0(ctx, base);
loc_8230639C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32188
	ctx.r4.s64 = r11.s64 + 32188;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,742
	ctx.r8.s64 = 742;
	// li r3,320
	ctx.r3.s64 = 320;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
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
	// beq cr6,0x823063f4
	if (cr6.eq) goto loc_823063F4;
	// bl 0x82514bf0
	sub_82514BF0(ctx, base);
	// b 0x823063f8
	goto loc_823063F8;
loc_823063F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823063F8:
	// stw r3,24(r22)
	PPC_STORE_U32(r22.u32 + 24, ctx.r3.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32152
	ctx.r4.s64 = r11.s64 + 32152;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// lis r27,-31934
	r27.s64 = -2092826624;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,21640(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 21640);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lis r26,-31933
	r26.s64 = -2092761088;
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1450
	sub_825D1450(ctx, base);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// addi r4,r10,-4512
	ctx.r4.s64 = ctx.r10.s64 + -4512;
	// bl 0x825d2990
	sub_825D2990(ctx, base);
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1490
	sub_825D1490(ctx, base);
	// lwz r11,21640(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 21640);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r11,22220(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22220);
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
loc_82306468:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r20,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(r20.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82306468
	if (!cr0.eq) goto loc_82306468;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82605348
	sub_82605348(ctx, base);
	// lwz r3,22308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 22308);
	// bl 0x8238a4e8
	sub_8238A4E8(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r5,32128
	ctx.r4.s64 = ctx.r5.s64 + 32128;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8273d6d8
	sub_8273D6D8(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r4,32108
	ctx.r4.s64 = ctx.r4.s64 + 32108;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32072
	ctx.r4.s64 = r11.s64 + 32072;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// li r8,774
	ctx.r8.s64 = 774;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82306510
	if (cr6.eq) goto loc_82306510;
	// bl 0x823213c8
	sub_823213C8(ctx, base);
	// b 0x82306514
	goto loc_82306514;
loc_82306510:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82306514:
	// stw r3,20(r22)
	PPC_STORE_U32(r22.u32 + 20, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x826d0388
	sub_826D0388(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,22228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,22288(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 22288);
	// addi r4,r11,32056
	ctx.r4.s64 = r11.s64 + 32056;
	// bl 0x82420e50
	sub_82420E50(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
}

__attribute__((alias("__imp__sub_82306544"))) PPC_WEAK_FUNC(sub_82306544);
PPC_FUNC_IMPL(__imp__sub_82306544) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_82306548"))) PPC_WEAK_FUNC(sub_82306548);
PPC_FUNC_IMPL(__imp__sub_82306548) {
	PPC_FUNC_PROLOGUE();
	// b 0x823188e8
	sub_823188E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306548"))) PPC_WEAK_FUNC(sub_82306548);
PPC_FUNC_IMPL(__imp__sub_82306548) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8230654C"))) PPC_WEAK_FUNC(sub_8230654C);
PPC_FUNC_IMPL(__imp__sub_8230654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306550"))) PPC_WEAK_FUNC(sub_82306550);
PPC_FUNC_IMPL(__imp__sub_82306550) {
	PPC_FUNC_PROLOGUE();
	// b 0x823189e8
	sub_823189E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306550"))) PPC_WEAK_FUNC(sub_82306550);
PPC_FUNC_IMPL(__imp__sub_82306550) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82306554"))) PPC_WEAK_FUNC(sub_82306554);
PPC_FUNC_IMPL(__imp__sub_82306554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306558"))) PPC_WEAK_FUNC(sub_82306558);
PPC_FUNC_IMPL(__imp__sub_82306558) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,25168
	ctx.r9.s64 = r11.s64 + 25168;
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
	// stw r11,22268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22268, r11.u32);
	// beq cr6,0x82306598
	if (cr6.eq) goto loc_82306598;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82306598:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823065A8"))) PPC_WEAK_FUNC(sub_823065A8);
PPC_FUNC_IMPL(__imp__sub_823065A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823065AC"))) PPC_WEAK_FUNC(sub_823065AC);
PPC_FUNC_IMPL(__imp__sub_823065AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823065B0"))) PPC_WEAK_FUNC(sub_823065B0);
PPC_FUNC_IMPL(__imp__sub_823065B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,25176
	ctx.r9.s64 = r11.s64 + 25176;
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
	// stw r11,22300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22300, r11.u32);
	// beq cr6,0x823065f0
	if (cr6.eq) goto loc_823065F0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823065F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82306600"))) PPC_WEAK_FUNC(sub_82306600);
PPC_FUNC_IMPL(__imp__sub_82306600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306604"))) PPC_WEAK_FUNC(sub_82306604);
PPC_FUNC_IMPL(__imp__sub_82306604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306608"))) PPC_WEAK_FUNC(sub_82306608);
PPC_FUNC_IMPL(__imp__sub_82306608) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25232
	ctx.r9.s64 = r11.s64 + 25232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8230663c
	if (cr6.eq) goto loc_8230663C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8230663C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8230664C"))) PPC_WEAK_FUNC(sub_8230664C);
PPC_FUNC_IMPL(__imp__sub_8230664C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306650"))) PPC_WEAK_FUNC(sub_82306650);
PPC_FUNC_IMPL(__imp__sub_82306650) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,25284
	ctx.r9.s64 = r11.s64 + 25284;
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
	// stw r11,22220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22220, r11.u32);
	// beq cr6,0x82306690
	if (cr6.eq) goto loc_82306690;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82306690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823066A0"))) PPC_WEAK_FUNC(sub_823066A0);
PPC_FUNC_IMPL(__imp__sub_823066A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823066A4"))) PPC_WEAK_FUNC(sub_823066A4);
PPC_FUNC_IMPL(__imp__sub_823066A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823066A8"))) PPC_WEAK_FUNC(sub_823066A8);
PPC_FUNC_IMPL(__imp__sub_823066A8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25152
	ctx.r9.s64 = r11.s64 + 25152;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823066dc
	if (cr6.eq) goto loc_823066DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823066DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823066EC"))) PPC_WEAK_FUNC(sub_823066EC);
PPC_FUNC_IMPL(__imp__sub_823066EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823066F0"))) PPC_WEAK_FUNC(sub_823066F0);
PPC_FUNC_IMPL(__imp__sub_823066F0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25304
	ctx.r9.s64 = r11.s64 + 25304;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82306724
	if (cr6.eq) goto loc_82306724;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82306724:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82306734"))) PPC_WEAK_FUNC(sub_82306734);
PPC_FUNC_IMPL(__imp__sub_82306734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306738"))) PPC_WEAK_FUNC(sub_82306738);
PPC_FUNC_IMPL(__imp__sub_82306738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17940
	ctx.r3.s64 = ctx.r10.s64 + -17940;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230674C"))) PPC_WEAK_FUNC(sub_8230674C);
PPC_FUNC_IMPL(__imp__sub_8230674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306750"))) PPC_WEAK_FUNC(sub_82306750);
PPC_FUNC_IMPL(__imp__sub_82306750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17648
	ctx.r3.s64 = ctx.r10.s64 + -17648;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306764"))) PPC_WEAK_FUNC(sub_82306764);
PPC_FUNC_IMPL(__imp__sub_82306764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306768"))) PPC_WEAK_FUNC(sub_82306768);
PPC_FUNC_IMPL(__imp__sub_82306768) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8272f5e8
	sub_8272F5E8(ctx, base);
	// bl 0x8239fd98
	sub_8239FD98(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d7d60
	sub_826D7D60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823067C4"))) PPC_WEAK_FUNC(sub_823067C4);
PPC_FUNC_IMPL(__imp__sub_823067C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823067C8"))) PPC_WEAK_FUNC(sub_823067C8);
PPC_FUNC_IMPL(__imp__sub_823067C8) {
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
	// lwz r31,84(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82306804
	if (cr6.eq) goto loc_82306804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e920
	sub_8239E920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
loc_82306804:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d7d78
	sub_826D7D78(ctx, base);
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

__attribute__((alias("__imp__sub_82306820"))) PPC_WEAK_FUNC(sub_82306820);
PPC_FUNC_IMPL(__imp__sub_82306820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306824"))) PPC_WEAK_FUNC(sub_82306824);
PPC_FUNC_IMPL(__imp__sub_82306824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306828"))) PPC_WEAK_FUNC(sub_82306828);
PPC_FUNC_IMPL(__imp__sub_82306828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17400
	ctx.r3.s64 = ctx.r10.s64 + -17400;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230683C"))) PPC_WEAK_FUNC(sub_8230683C);
PPC_FUNC_IMPL(__imp__sub_8230683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306840"))) PPC_WEAK_FUNC(sub_82306840);
PPC_FUNC_IMPL(__imp__sub_82306840) {
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
	// bl 0x826d80e0
	sub_826D80E0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82306878
	if (cr6.eq) goto loc_82306878;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82306878:
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

__attribute__((alias("__imp__sub_8230688C"))) PPC_WEAK_FUNC(sub_8230688C);
PPC_FUNC_IMPL(__imp__sub_8230688C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306890"))) PPC_WEAK_FUNC(sub_82306890);
PPC_FUNC_IMPL(__imp__sub_82306890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16868
	ctx.r3.s64 = ctx.r10.s64 + -16868;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823068A4"))) PPC_WEAK_FUNC(sub_823068A4);
PPC_FUNC_IMPL(__imp__sub_823068A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823068A8"))) PPC_WEAK_FUNC(sub_823068A8);
PPC_FUNC_IMPL(__imp__sub_823068A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16624
	ctx.r3.s64 = ctx.r10.s64 + -16624;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823068BC"))) PPC_WEAK_FUNC(sub_823068BC);
PPC_FUNC_IMPL(__imp__sub_823068BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823068C0"))) PPC_WEAK_FUNC(sub_823068C0);
PPC_FUNC_IMPL(__imp__sub_823068C0) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r9,9448
	ctx.r4.s64 = ctx.r9.s64 + 9448;
	// lwz r3,21632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21632);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8272fee0
	sub_8272FEE0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d7d60
	sub_826D7D60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8230690C"))) PPC_WEAK_FUNC(sub_8230690C);
PPC_FUNC_IMPL(__imp__sub_8230690C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306910"))) PPC_WEAK_FUNC(sub_82306910);
PPC_FUNC_IMPL(__imp__sub_82306910) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21632);
	// bl 0x8272fe48
	sub_8272FE48(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// bl 0x826d7d78
	sub_826D7D78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82306954"))) PPC_WEAK_FUNC(sub_82306954);
PPC_FUNC_IMPL(__imp__sub_82306954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306958"))) PPC_WEAK_FUNC(sub_82306958);
PPC_FUNC_IMPL(__imp__sub_82306958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16372
	ctx.r3.s64 = ctx.r10.s64 + -16372;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230696C"))) PPC_WEAK_FUNC(sub_8230696C);
PPC_FUNC_IMPL(__imp__sub_8230696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306970"))) PPC_WEAK_FUNC(sub_82306970);
PPC_FUNC_IMPL(__imp__sub_82306970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16164
	ctx.r3.s64 = ctx.r10.s64 + -16164;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306984"))) PPC_WEAK_FUNC(sub_82306984);
PPC_FUNC_IMPL(__imp__sub_82306984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306988"))) PPC_WEAK_FUNC(sub_82306988);
PPC_FUNC_IMPL(__imp__sub_82306988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-15976
	ctx.r3.s64 = ctx.r10.s64 + -15976;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230699C"))) PPC_WEAK_FUNC(sub_8230699C);
PPC_FUNC_IMPL(__imp__sub_8230699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823069A0"))) PPC_WEAK_FUNC(sub_823069A0);
PPC_FUNC_IMPL(__imp__sub_823069A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-15784
	ctx.r3.s64 = ctx.r10.s64 + -15784;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823069B4"))) PPC_WEAK_FUNC(sub_823069B4);
PPC_FUNC_IMPL(__imp__sub_823069B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823069B8"))) PPC_WEAK_FUNC(sub_823069B8);
PPC_FUNC_IMPL(__imp__sub_823069B8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82306a10
	if (cr6.eq) goto loc_82306A10;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82306a08
	if (cr6.eq) goto loc_82306A08;
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
loc_82306A08:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82306A10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d7da8
	sub_826D7DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82306A28"))) PPC_WEAK_FUNC(sub_82306A28);
PPC_FUNC_IMPL(__imp__sub_82306A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306A2C"))) PPC_WEAK_FUNC(sub_82306A2C);
PPC_FUNC_IMPL(__imp__sub_82306A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306A30"))) PPC_WEAK_FUNC(sub_82306A30);
PPC_FUNC_IMPL(__imp__sub_82306A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-15588
	ctx.r3.s64 = ctx.r10.s64 + -15588;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306A44"))) PPC_WEAK_FUNC(sub_82306A44);
PPC_FUNC_IMPL(__imp__sub_82306A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306A48"))) PPC_WEAK_FUNC(sub_82306A48);
PPC_FUNC_IMPL(__imp__sub_82306A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82306A68"))) PPC_WEAK_FUNC(sub_82306A68);
PPC_FUNC_IMPL(__imp__sub_82306A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306A6C"))) PPC_WEAK_FUNC(sub_82306A6C);
PPC_FUNC_IMPL(__imp__sub_82306A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306A70"))) PPC_WEAK_FUNC(sub_82306A70);
PPC_FUNC_IMPL(__imp__sub_82306A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-15356
	ctx.r3.s64 = ctx.r10.s64 + -15356;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306A84"))) PPC_WEAK_FUNC(sub_82306A84);
PPC_FUNC_IMPL(__imp__sub_82306A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306A88"))) PPC_WEAK_FUNC(sub_82306A88);
PPC_FUNC_IMPL(__imp__sub_82306A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-15020
	ctx.r3.s64 = ctx.r10.s64 + -15020;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306A9C"))) PPC_WEAK_FUNC(sub_82306A9C);
PPC_FUNC_IMPL(__imp__sub_82306A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306AA0"))) PPC_WEAK_FUNC(sub_82306AA0);
PPC_FUNC_IMPL(__imp__sub_82306AA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,92
	ctx.r3.s64 = 92;
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
	// beq cr6,0x82306b08
	if (cr6.eq) goto loc_82306B08;
	// bl 0x826d88f8
	sub_826D88F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82306B08:
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

__attribute__((alias("__imp__sub_82306B1C"))) PPC_WEAK_FUNC(sub_82306B1C);
PPC_FUNC_IMPL(__imp__sub_82306B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306B20"))) PPC_WEAK_FUNC(sub_82306B20);
PPC_FUNC_IMPL(__imp__sub_82306B20) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306b94
	if (cr6.eq) goto loc_82306B94;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25468
	ctx.r10.s64 = r11.s64 + 25468;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306b98
	goto loc_82306B98;
loc_82306B94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306B98:
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

__attribute__((alias("__imp__sub_82306BAC"))) PPC_WEAK_FUNC(sub_82306BAC);
PPC_FUNC_IMPL(__imp__sub_82306BAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306BB0"))) PPC_WEAK_FUNC(sub_82306BB0);
PPC_FUNC_IMPL(__imp__sub_82306BB0) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306c24
	if (cr6.eq) goto loc_82306C24;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25528
	ctx.r10.s64 = r11.s64 + 25528;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306c28
	goto loc_82306C28;
loc_82306C24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306C28:
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

__attribute__((alias("__imp__sub_82306C3C"))) PPC_WEAK_FUNC(sub_82306C3C);
PPC_FUNC_IMPL(__imp__sub_82306C3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306C40"))) PPC_WEAK_FUNC(sub_82306C40);
PPC_FUNC_IMPL(__imp__sub_82306C40) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306cb4
	if (cr6.eq) goto loc_82306CB4;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25588
	ctx.r10.s64 = r11.s64 + 25588;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306cb8
	goto loc_82306CB8;
loc_82306CB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306CB8:
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

__attribute__((alias("__imp__sub_82306CCC"))) PPC_WEAK_FUNC(sub_82306CCC);
PPC_FUNC_IMPL(__imp__sub_82306CCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306CD0"))) PPC_WEAK_FUNC(sub_82306CD0);
PPC_FUNC_IMPL(__imp__sub_82306CD0) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306d44
	if (cr6.eq) goto loc_82306D44;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25648
	ctx.r10.s64 = r11.s64 + 25648;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306d48
	goto loc_82306D48;
loc_82306D44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306D48:
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

__attribute__((alias("__imp__sub_82306D5C"))) PPC_WEAK_FUNC(sub_82306D5C);
PPC_FUNC_IMPL(__imp__sub_82306D5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306D60"))) PPC_WEAK_FUNC(sub_82306D60);
PPC_FUNC_IMPL(__imp__sub_82306D60) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,92
	ctx.r3.s64 = 92;
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
	// beq cr6,0x82306dd4
	if (cr6.eq) goto loc_82306DD4;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25708
	ctx.r10.s64 = r11.s64 + 25708;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306dd8
	goto loc_82306DD8;
loc_82306DD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306DD8:
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

__attribute__((alias("__imp__sub_82306DEC"))) PPC_WEAK_FUNC(sub_82306DEC);
PPC_FUNC_IMPL(__imp__sub_82306DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306DF0"))) PPC_WEAK_FUNC(sub_82306DF0);
PPC_FUNC_IMPL(__imp__sub_82306DF0) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306e64
	if (cr6.eq) goto loc_82306E64;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25768
	ctx.r10.s64 = r11.s64 + 25768;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306e68
	goto loc_82306E68;
loc_82306E64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306E68:
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

__attribute__((alias("__imp__sub_82306E7C"))) PPC_WEAK_FUNC(sub_82306E7C);
PPC_FUNC_IMPL(__imp__sub_82306E7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306E80"))) PPC_WEAK_FUNC(sub_82306E80);
PPC_FUNC_IMPL(__imp__sub_82306E80) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306ef4
	if (cr6.eq) goto loc_82306EF4;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25876
	ctx.r10.s64 = r11.s64 + 25876;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306ef8
	goto loc_82306EF8;
loc_82306EF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306EF8:
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

__attribute__((alias("__imp__sub_82306F0C"))) PPC_WEAK_FUNC(sub_82306F0C);
PPC_FUNC_IMPL(__imp__sub_82306F0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306F10"))) PPC_WEAK_FUNC(sub_82306F10);
PPC_FUNC_IMPL(__imp__sub_82306F10) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// beq cr6,0x82306f84
	if (cr6.eq) goto loc_82306F84;
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,25940
	ctx.r10.s64 = r11.s64 + 25940;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82306f88
	goto loc_82306F88;
loc_82306F84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306F88:
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

__attribute__((alias("__imp__sub_82306F9C"))) PPC_WEAK_FUNC(sub_82306F9C);
PPC_FUNC_IMPL(__imp__sub_82306F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306FA0"))) PPC_WEAK_FUNC(sub_82306FA0);
PPC_FUNC_IMPL(__imp__sub_82306FA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,108
	ctx.r3.s64 = 108;
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
	// beq cr6,0x82307008
	if (cr6.eq) goto loc_82307008;
	// bl 0x8257d840
	sub_8257D840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82307008:
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

__attribute__((alias("__imp__sub_8230701C"))) PPC_WEAK_FUNC(sub_8230701C);
PPC_FUNC_IMPL(__imp__sub_8230701C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307020"))) PPC_WEAK_FUNC(sub_82307020);
PPC_FUNC_IMPL(__imp__sub_82307020) {
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
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r6,r8,4776
	ctx.r6.s64 = ctx.r8.s64 + 4776;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82307088"))) PPC_WEAK_FUNC(sub_82307088);
PPC_FUNC_IMPL(__imp__sub_82307088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230708C"))) PPC_WEAK_FUNC(sub_8230708C);
PPC_FUNC_IMPL(__imp__sub_8230708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82307090"))) PPC_WEAK_FUNC(sub_82307090);
PPC_FUNC_IMPL(__imp__sub_82307090) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,179
	ctx.r8.s64 = 179;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307100
	if (cr6.eq) goto loc_82307100;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,25316
	ctx.r9.s64 = r11.s64 + 25316;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82307100:
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d7d90
	sub_826D7D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307110"))) PPC_WEAK_FUNC(sub_82307110);
PPC_FUNC_IMPL(__imp__sub_82307110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307114"))) PPC_WEAK_FUNC(sub_82307114);
PPC_FUNC_IMPL(__imp__sub_82307114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82307118"))) PPC_WEAK_FUNC(sub_82307118);
PPC_FUNC_IMPL(__imp__sub_82307118) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14776
	ctx.r3.s64 = ctx.r10.s64 + -14776;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r31,0
	r31.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r7,r9,26008
	ctx.r7.s64 = ctx.r9.s64 + 26008;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307194
	if (cr6.eq) goto loc_82307194;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823d4950
	sub_823D4950(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82307194:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d0e88
	sub_826D0E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d0e88
	sub_826D0E88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_823071D0"))) PPC_WEAK_FUNC(sub_823071D0);
PPC_FUNC_IMPL(__imp__sub_823071D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823071D4"))) PPC_WEAK_FUNC(sub_823071D4);
PPC_FUNC_IMPL(__imp__sub_823071D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823071D8"))) PPC_WEAK_FUNC(sub_823071D8);
PPC_FUNC_IMPL(__imp__sub_823071D8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14732
	ctx.r3.s64 = ctx.r10.s64 + -14732;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r31,0
	r31.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r7,r9,26008
	ctx.r7.s64 = ctx.r9.s64 + 26008;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307254
	if (cr6.eq) goto loc_82307254;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239d0c8
	sub_8239D0C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82307254:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d0e88
	sub_826D0E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d0e88
	sub_826D0E88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82307290"))) PPC_WEAK_FUNC(sub_82307290);
PPC_FUNC_IMPL(__imp__sub_82307290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307294"))) PPC_WEAK_FUNC(sub_82307294);
PPC_FUNC_IMPL(__imp__sub_82307294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82307298"))) PPC_WEAK_FUNC(sub_82307298);
PPC_FUNC_IMPL(__imp__sub_82307298) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14672
	ctx.r3.s64 = ctx.r10.s64 + -14672;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307330
	if (cr6.eq) goto loc_82307330;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307330:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307334"))) PPC_WEAK_FUNC(sub_82307334);
PPC_FUNC_IMPL(__imp__sub_82307334) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307338"))) PPC_WEAK_FUNC(sub_82307338);
PPC_FUNC_IMPL(__imp__sub_82307338) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14576
	ctx.r3.s64 = ctx.r10.s64 + -14576;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823073d0
	if (cr6.eq) goto loc_823073D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823073D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823073D4"))) PPC_WEAK_FUNC(sub_823073D4);
PPC_FUNC_IMPL(__imp__sub_823073D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823073D8"))) PPC_WEAK_FUNC(sub_823073D8);
PPC_FUNC_IMPL(__imp__sub_823073D8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14488
	ctx.r3.s64 = ctx.r10.s64 + -14488;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307470
	if (cr6.eq) goto loc_82307470;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307470:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307474"))) PPC_WEAK_FUNC(sub_82307474);
PPC_FUNC_IMPL(__imp__sub_82307474) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307478"))) PPC_WEAK_FUNC(sub_82307478);
PPC_FUNC_IMPL(__imp__sub_82307478) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14392
	ctx.r3.s64 = ctx.r10.s64 + -14392;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307510
	if (cr6.eq) goto loc_82307510;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307510:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307514"))) PPC_WEAK_FUNC(sub_82307514);
PPC_FUNC_IMPL(__imp__sub_82307514) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307518"))) PPC_WEAK_FUNC(sub_82307518);
PPC_FUNC_IMPL(__imp__sub_82307518) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14320
	ctx.r3.s64 = ctx.r10.s64 + -14320;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823075b0
	if (cr6.eq) goto loc_823075B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823075B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823075B4"))) PPC_WEAK_FUNC(sub_823075B4);
PPC_FUNC_IMPL(__imp__sub_823075B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823075B8"))) PPC_WEAK_FUNC(sub_823075B8);
PPC_FUNC_IMPL(__imp__sub_823075B8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14248
	ctx.r3.s64 = ctx.r10.s64 + -14248;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307650
	if (cr6.eq) goto loc_82307650;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307650:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307654"))) PPC_WEAK_FUNC(sub_82307654);
PPC_FUNC_IMPL(__imp__sub_82307654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307658"))) PPC_WEAK_FUNC(sub_82307658);
PPC_FUNC_IMPL(__imp__sub_82307658) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14168
	ctx.r3.s64 = ctx.r10.s64 + -14168;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823076f0
	if (cr6.eq) goto loc_823076F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823076F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823076F4"))) PPC_WEAK_FUNC(sub_823076F4);
PPC_FUNC_IMPL(__imp__sub_823076F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823076F8"))) PPC_WEAK_FUNC(sub_823076F8);
PPC_FUNC_IMPL(__imp__sub_823076F8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14104
	ctx.r3.s64 = ctx.r10.s64 + -14104;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307790
	if (cr6.eq) goto loc_82307790;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307790:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307794"))) PPC_WEAK_FUNC(sub_82307794);
PPC_FUNC_IMPL(__imp__sub_82307794) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307798"))) PPC_WEAK_FUNC(sub_82307798);
PPC_FUNC_IMPL(__imp__sub_82307798) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14024
	ctx.r3.s64 = ctx.r10.s64 + -14024;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307830
	if (cr6.eq) goto loc_82307830;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307830:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307834"))) PPC_WEAK_FUNC(sub_82307834);
PPC_FUNC_IMPL(__imp__sub_82307834) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307838"))) PPC_WEAK_FUNC(sub_82307838);
PPC_FUNC_IMPL(__imp__sub_82307838) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-13936
	ctx.r3.s64 = ctx.r10.s64 + -13936;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823078d0
	if (cr6.eq) goto loc_823078D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823078D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823078D4"))) PPC_WEAK_FUNC(sub_823078D4);
PPC_FUNC_IMPL(__imp__sub_823078D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823078D8"))) PPC_WEAK_FUNC(sub_823078D8);
PPC_FUNC_IMPL(__imp__sub_823078D8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-13848
	ctx.r3.s64 = ctx.r10.s64 + -13848;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307970
	if (cr6.eq) goto loc_82307970;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307970:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307974"))) PPC_WEAK_FUNC(sub_82307974);
PPC_FUNC_IMPL(__imp__sub_82307974) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307978"))) PPC_WEAK_FUNC(sub_82307978);
PPC_FUNC_IMPL(__imp__sub_82307978) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14776
	ctx.r3.s64 = ctx.r10.s64 + -14776;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307a10
	if (cr6.eq) goto loc_82307A10;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307A14"))) PPC_WEAK_FUNC(sub_82307A14);
PPC_FUNC_IMPL(__imp__sub_82307A14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307A18"))) PPC_WEAK_FUNC(sub_82307A18);
PPC_FUNC_IMPL(__imp__sub_82307A18) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-14732
	ctx.r3.s64 = ctx.r10.s64 + -14732;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307ab0
	if (cr6.eq) goto loc_82307AB0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307AB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307AB4"))) PPC_WEAK_FUNC(sub_82307AB4);
PPC_FUNC_IMPL(__imp__sub_82307AB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307AB8"))) PPC_WEAK_FUNC(sub_82307AB8);
PPC_FUNC_IMPL(__imp__sub_82307AB8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-13768
	ctx.r3.s64 = ctx.r10.s64 + -13768;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826d0a48
	sub_826D0A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d0cc0
	sub_826D0CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82307b50
	if (cr6.eq) goto loc_82307B50;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82307B50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82307B54"))) PPC_WEAK_FUNC(sub_82307B54);
PPC_FUNC_IMPL(__imp__sub_82307B54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82307B58"))) PPC_WEAK_FUNC(sub_82307B58);
PPC_FUNC_IMPL(__imp__sub_82307B58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82307B5C"))) PPC_WEAK_FUNC(sub_82307B5C);
PPC_FUNC_IMPL(__imp__sub_82307B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307B60"))) PPC_WEAK_FUNC(sub_82307B60);
PPC_FUNC_IMPL(__imp__sub_82307B60) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,29296
	ctx.r9.s64 = r11.s64 + 29296;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82307b94
	if (cr6.eq) goto loc_82307B94;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307B94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82307BA4"))) PPC_WEAK_FUNC(sub_82307BA4);
PPC_FUNC_IMPL(__imp__sub_82307BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307BA8"))) PPC_WEAK_FUNC(sub_82307BA8);
PPC_FUNC_IMPL(__imp__sub_82307BA8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,29352
	ctx.r9.s64 = r11.s64 + 29352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82307bdc
	if (cr6.eq) goto loc_82307BDC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307BDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82307BEC"))) PPC_WEAK_FUNC(sub_82307BEC);
PPC_FUNC_IMPL(__imp__sub_82307BEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307BF0"))) PPC_WEAK_FUNC(sub_82307BF0);
PPC_FUNC_IMPL(__imp__sub_82307BF0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,29408
	ctx.r9.s64 = r11.s64 + 29408;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82307c24
	if (cr6.eq) goto loc_82307C24;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82307C34"))) PPC_WEAK_FUNC(sub_82307C34);
PPC_FUNC_IMPL(__imp__sub_82307C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307C38"))) PPC_WEAK_FUNC(sub_82307C38);
PPC_FUNC_IMPL(__imp__sub_82307C38) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,29504
	ctx.r9.s64 = r11.s64 + 29504;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82307c6c
	if (cr6.eq) goto loc_82307C6C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307C6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82307C7C"))) PPC_WEAK_FUNC(sub_82307C7C);
PPC_FUNC_IMPL(__imp__sub_82307C7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307C80"))) PPC_WEAK_FUNC(sub_82307C80);
PPC_FUNC_IMPL(__imp__sub_82307C80) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,29624
	ctx.r9.s64 = r11.s64 + 29624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82307cb4
	if (cr6.eq) goto loc_82307CB4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307CB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82307CC4"))) PPC_WEAK_FUNC(sub_82307CC4);
PPC_FUNC_IMPL(__imp__sub_82307CC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307CC8"))) PPC_WEAK_FUNC(sub_82307CC8);
PPC_FUNC_IMPL(__imp__sub_82307CC8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,29664
	ctx.r9.s64 = r11.s64 + 29664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82307cfc
	if (cr6.eq) goto loc_82307CFC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307CFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82307D0C"))) PPC_WEAK_FUNC(sub_82307D0C);
PPC_FUNC_IMPL(__imp__sub_82307D0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307D10"))) PPC_WEAK_FUNC(sub_82307D10);
PPC_FUNC_IMPL(__imp__sub_82307D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,272
	ctx.r3.s64 = 272;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307d74
	if (cr6.eq) goto loc_82307D74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82348238
	sub_82348238(ctx, base);
	// b 0x82307d78
	goto loc_82307D78;
loc_82307D74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307D78:
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

__attribute__((alias("__imp__sub_82307D8C"))) PPC_WEAK_FUNC(sub_82307D8C);
PPC_FUNC_IMPL(__imp__sub_82307D8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307D90"))) PPC_WEAK_FUNC(sub_82307D90);
PPC_FUNC_IMPL(__imp__sub_82307D90) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-676
	ctx.r3.s64 = ctx.r10.s64 + -676;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82307DD4"))) PPC_WEAK_FUNC(sub_82307DD4);
PPC_FUNC_IMPL(__imp__sub_82307DD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307DD8"))) PPC_WEAK_FUNC(sub_82307DD8);
PPC_FUNC_IMPL(__imp__sub_82307DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307e3c
	if (cr6.eq) goto loc_82307E3C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82348898
	sub_82348898(ctx, base);
	// b 0x82307e40
	goto loc_82307E40;
loc_82307E3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307E40:
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

__attribute__((alias("__imp__sub_82307E54"))) PPC_WEAK_FUNC(sub_82307E54);
PPC_FUNC_IMPL(__imp__sub_82307E54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307E58"))) PPC_WEAK_FUNC(sub_82307E58);
PPC_FUNC_IMPL(__imp__sub_82307E58) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-636
	ctx.r3.s64 = ctx.r10.s64 + -636;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82307E9C"))) PPC_WEAK_FUNC(sub_82307E9C);
PPC_FUNC_IMPL(__imp__sub_82307E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307EA0"))) PPC_WEAK_FUNC(sub_82307EA0);
PPC_FUNC_IMPL(__imp__sub_82307EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,440
	ctx.r3.s64 = 440;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307f04
	if (cr6.eq) goto loc_82307F04;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82349478
	sub_82349478(ctx, base);
	// b 0x82307f08
	goto loc_82307F08;
loc_82307F04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307F08:
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

__attribute__((alias("__imp__sub_82307F1C"))) PPC_WEAK_FUNC(sub_82307F1C);
PPC_FUNC_IMPL(__imp__sub_82307F1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307F20"))) PPC_WEAK_FUNC(sub_82307F20);
PPC_FUNC_IMPL(__imp__sub_82307F20) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-596
	ctx.r3.s64 = ctx.r10.s64 + -596;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82307F64"))) PPC_WEAK_FUNC(sub_82307F64);
PPC_FUNC_IMPL(__imp__sub_82307F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307F68"))) PPC_WEAK_FUNC(sub_82307F68);
PPC_FUNC_IMPL(__imp__sub_82307F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82307fcc
	if (cr6.eq) goto loc_82307FCC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234ba40
	sub_8234BA40(ctx, base);
	// b 0x82307fd0
	goto loc_82307FD0;
loc_82307FCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82307FD0:
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

__attribute__((alias("__imp__sub_82307FE4"))) PPC_WEAK_FUNC(sub_82307FE4);
PPC_FUNC_IMPL(__imp__sub_82307FE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307FE8"))) PPC_WEAK_FUNC(sub_82307FE8);
PPC_FUNC_IMPL(__imp__sub_82307FE8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-556
	ctx.r3.s64 = ctx.r10.s64 + -556;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8230802C"))) PPC_WEAK_FUNC(sub_8230802C);
PPC_FUNC_IMPL(__imp__sub_8230802C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308030"))) PPC_WEAK_FUNC(sub_82308030);
PPC_FUNC_IMPL(__imp__sub_82308030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,712
	ctx.r3.s64 = 712;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82308094
	if (cr6.eq) goto loc_82308094;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823429d8
	sub_823429D8(ctx, base);
	// b 0x82308098
	goto loc_82308098;
loc_82308094:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308098:
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

__attribute__((alias("__imp__sub_823080AC"))) PPC_WEAK_FUNC(sub_823080AC);
PPC_FUNC_IMPL(__imp__sub_823080AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823080B0"))) PPC_WEAK_FUNC(sub_823080B0);
PPC_FUNC_IMPL(__imp__sub_823080B0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-512
	ctx.r3.s64 = ctx.r10.s64 + -512;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823080F4"))) PPC_WEAK_FUNC(sub_823080F4);
PPC_FUNC_IMPL(__imp__sub_823080F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823080F8"))) PPC_WEAK_FUNC(sub_823080F8);
PPC_FUNC_IMPL(__imp__sub_823080F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,920
	ctx.r3.s64 = 920;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230815c
	if (cr6.eq) goto loc_8230815C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82344f40
	sub_82344F40(ctx, base);
	// b 0x82308160
	goto loc_82308160;
loc_8230815C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308160:
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

__attribute__((alias("__imp__sub_82308174"))) PPC_WEAK_FUNC(sub_82308174);
PPC_FUNC_IMPL(__imp__sub_82308174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308178"))) PPC_WEAK_FUNC(sub_82308178);
PPC_FUNC_IMPL(__imp__sub_82308178) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-472
	ctx.r3.s64 = ctx.r10.s64 + -472;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823081BC"))) PPC_WEAK_FUNC(sub_823081BC);
PPC_FUNC_IMPL(__imp__sub_823081BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823081C0"))) PPC_WEAK_FUNC(sub_823081C0);
PPC_FUNC_IMPL(__imp__sub_823081C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,260
	ctx.r3.s64 = 260;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82308224
	if (cr6.eq) goto loc_82308224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82368c10
	sub_82368C10(ctx, base);
	// b 0x82308228
	goto loc_82308228;
loc_82308224:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308228:
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

__attribute__((alias("__imp__sub_8230823C"))) PPC_WEAK_FUNC(sub_8230823C);
PPC_FUNC_IMPL(__imp__sub_8230823C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308240"))) PPC_WEAK_FUNC(sub_82308240);
PPC_FUNC_IMPL(__imp__sub_82308240) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-432
	ctx.r3.s64 = ctx.r10.s64 + -432;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82308284"))) PPC_WEAK_FUNC(sub_82308284);
PPC_FUNC_IMPL(__imp__sub_82308284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308288"))) PPC_WEAK_FUNC(sub_82308288);
PPC_FUNC_IMPL(__imp__sub_82308288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,260
	ctx.r3.s64 = 260;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823082ec
	if (cr6.eq) goto loc_823082EC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82369130
	sub_82369130(ctx, base);
	// b 0x823082f0
	goto loc_823082F0;
loc_823082EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823082F0:
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

__attribute__((alias("__imp__sub_82308304"))) PPC_WEAK_FUNC(sub_82308304);
PPC_FUNC_IMPL(__imp__sub_82308304) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308308"))) PPC_WEAK_FUNC(sub_82308308);
PPC_FUNC_IMPL(__imp__sub_82308308) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-388
	ctx.r3.s64 = ctx.r10.s64 + -388;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8230834C"))) PPC_WEAK_FUNC(sub_8230834C);
PPC_FUNC_IMPL(__imp__sub_8230834C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308350"))) PPC_WEAK_FUNC(sub_82308350);
PPC_FUNC_IMPL(__imp__sub_82308350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,380
	ctx.r3.s64 = 380;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823083b4
	if (cr6.eq) goto loc_823083B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234e680
	sub_8234E680(ctx, base);
	// b 0x823083b8
	goto loc_823083B8;
loc_823083B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823083B8:
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

__attribute__((alias("__imp__sub_823083CC"))) PPC_WEAK_FUNC(sub_823083CC);
PPC_FUNC_IMPL(__imp__sub_823083CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823083D0"))) PPC_WEAK_FUNC(sub_823083D0);
PPC_FUNC_IMPL(__imp__sub_823083D0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-344
	ctx.r3.s64 = ctx.r10.s64 + -344;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82308414"))) PPC_WEAK_FUNC(sub_82308414);
PPC_FUNC_IMPL(__imp__sub_82308414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308418"))) PPC_WEAK_FUNC(sub_82308418);
PPC_FUNC_IMPL(__imp__sub_82308418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230847c
	if (cr6.eq) goto loc_8230847C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234ed10
	sub_8234ED10(ctx, base);
	// b 0x82308480
	goto loc_82308480;
loc_8230847C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308480:
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

__attribute__((alias("__imp__sub_82308494"))) PPC_WEAK_FUNC(sub_82308494);
PPC_FUNC_IMPL(__imp__sub_82308494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308498"))) PPC_WEAK_FUNC(sub_82308498);
PPC_FUNC_IMPL(__imp__sub_82308498) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-300
	ctx.r3.s64 = ctx.r10.s64 + -300;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823084DC"))) PPC_WEAK_FUNC(sub_823084DC);
PPC_FUNC_IMPL(__imp__sub_823084DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823084E0"))) PPC_WEAK_FUNC(sub_823084E0);
PPC_FUNC_IMPL(__imp__sub_823084E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,444
	ctx.r3.s64 = 444;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82308544
	if (cr6.eq) goto loc_82308544;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8236d288
	sub_8236D288(ctx, base);
	// b 0x82308548
	goto loc_82308548;
loc_82308544:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308548:
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

__attribute__((alias("__imp__sub_8230855C"))) PPC_WEAK_FUNC(sub_8230855C);
PPC_FUNC_IMPL(__imp__sub_8230855C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308560"))) PPC_WEAK_FUNC(sub_82308560);
PPC_FUNC_IMPL(__imp__sub_82308560) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-256
	ctx.r3.s64 = ctx.r10.s64 + -256;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823085A4"))) PPC_WEAK_FUNC(sub_823085A4);
PPC_FUNC_IMPL(__imp__sub_823085A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823085A8"))) PPC_WEAK_FUNC(sub_823085A8);
PPC_FUNC_IMPL(__imp__sub_823085A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,432
	ctx.r3.s64 = 432;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230860c
	if (cr6.eq) goto loc_8230860C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8236d5f8
	sub_8236D5F8(ctx, base);
	// b 0x82308610
	goto loc_82308610;
loc_8230860C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308610:
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

__attribute__((alias("__imp__sub_82308624"))) PPC_WEAK_FUNC(sub_82308624);
PPC_FUNC_IMPL(__imp__sub_82308624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308628"))) PPC_WEAK_FUNC(sub_82308628);
PPC_FUNC_IMPL(__imp__sub_82308628) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-208
	ctx.r3.s64 = ctx.r10.s64 + -208;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8230866C"))) PPC_WEAK_FUNC(sub_8230866C);
PPC_FUNC_IMPL(__imp__sub_8230866C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308670"))) PPC_WEAK_FUNC(sub_82308670);
PPC_FUNC_IMPL(__imp__sub_82308670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,12580
	ctx.r3.s64 = 12580;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823086d4
	if (cr6.eq) goto loc_823086D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234fae8
	sub_8234FAE8(ctx, base);
	// b 0x823086d8
	goto loc_823086D8;
loc_823086D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823086D8:
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

__attribute__((alias("__imp__sub_823086EC"))) PPC_WEAK_FUNC(sub_823086EC);
PPC_FUNC_IMPL(__imp__sub_823086EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823086F0"))) PPC_WEAK_FUNC(sub_823086F0);
PPC_FUNC_IMPL(__imp__sub_823086F0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-160
	ctx.r3.s64 = ctx.r10.s64 + -160;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82308734"))) PPC_WEAK_FUNC(sub_82308734);
PPC_FUNC_IMPL(__imp__sub_82308734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308738"))) PPC_WEAK_FUNC(sub_82308738);
PPC_FUNC_IMPL(__imp__sub_82308738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230879c
	if (cr6.eq) goto loc_8230879C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823501d0
	sub_823501D0(ctx, base);
	// b 0x823087a0
	goto loc_823087A0;
loc_8230879C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823087A0:
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

__attribute__((alias("__imp__sub_823087B4"))) PPC_WEAK_FUNC(sub_823087B4);
PPC_FUNC_IMPL(__imp__sub_823087B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823087B8"))) PPC_WEAK_FUNC(sub_823087B8);
PPC_FUNC_IMPL(__imp__sub_823087B8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-120
	ctx.r3.s64 = ctx.r10.s64 + -120;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823087FC"))) PPC_WEAK_FUNC(sub_823087FC);
PPC_FUNC_IMPL(__imp__sub_823087FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308800"))) PPC_WEAK_FUNC(sub_82308800);
PPC_FUNC_IMPL(__imp__sub_82308800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,2796
	ctx.r3.s64 = 2796;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82308864
	if (cr6.eq) goto loc_82308864;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82386510
	sub_82386510(ctx, base);
	// b 0x82308868
	goto loc_82308868;
loc_82308864:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308868:
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

__attribute__((alias("__imp__sub_8230887C"))) PPC_WEAK_FUNC(sub_8230887C);
PPC_FUNC_IMPL(__imp__sub_8230887C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82308880"))) PPC_WEAK_FUNC(sub_82308880);
PPC_FUNC_IMPL(__imp__sub_82308880) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-80
	ctx.r3.s64 = ctx.r10.s64 + -80;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823088C4"))) PPC_WEAK_FUNC(sub_823088C4);
PPC_FUNC_IMPL(__imp__sub_823088C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823088C8"))) PPC_WEAK_FUNC(sub_823088C8);
PPC_FUNC_IMPL(__imp__sub_823088C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,29696
	ctx.r7.s64 = ctx.r10.s64 + 29696;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,91
	ctx.r8.s64 = 91;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230892c
	if (cr6.eq) goto loc_8230892C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823876e0
	sub_823876E0(ctx, base);
	// b 0x82308930
	goto loc_82308930;
loc_8230892C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82308930:
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

__attribute__((alias("__imp__sub_82308944"))) PPC_WEAK_FUNC(sub_82308944);
PPC_FUNC_IMPL(__imp__sub_82308944) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

