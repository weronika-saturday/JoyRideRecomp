#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824F1A98"))) PPC_WEAK_FUNC(sub_824F1A98);
PPC_FUNC_IMPL(__imp__sub_824F1A98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F1A9C"))) PPC_WEAK_FUNC(sub_824F1A9C);
PPC_FUNC_IMPL(__imp__sub_824F1A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F1AA0"))) PPC_WEAK_FUNC(sub_824F1AA0);
PPC_FUNC_IMPL(__imp__sub_824F1AA0) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x824ea4a0
	sub_824EA4A0(ctx, base);
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
	// beq cr6,0x824f1b48
	if (cr6.eq) goto loc_824F1B48;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1b44
	if (cr6.eq) goto loc_824F1B44;
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
loc_824F1B44:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824F1B48:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e4a10
	sub_824E4A10(ctx, base);
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
	// beq cr6,0x824f1b9c
	if (cr6.eq) goto loc_824F1B9C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1b98
	if (cr6.eq) goto loc_824F1B98;
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
loc_824F1B98:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824F1B9C:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
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

__attribute__((alias("__imp__sub_824F1BC8"))) PPC_WEAK_FUNC(sub_824F1BC8);
PPC_FUNC_IMPL(__imp__sub_824F1BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F1BCC"))) PPC_WEAK_FUNC(sub_824F1BCC);
PPC_FUNC_IMPL(__imp__sub_824F1BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F1BD0"))) PPC_WEAK_FUNC(sub_824F1BD0);
PPC_FUNC_IMPL(__imp__sub_824F1BD0) {
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
	// bl 0x822febe0
	sub_822FEBE0(ctx, base);
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
	// bl 0x824ea520
	sub_824EA520(ctx, base);
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
	// beq cr6,0x824f1c50
	if (cr6.eq) goto loc_824F1C50;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1c4c
	if (cr6.eq) goto loc_824F1C4C;
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
loc_824F1C4C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F1C50:
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
	// bl 0x824e4a90
	sub_824E4A90(ctx, base);
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
	// beq cr6,0x824f1ca4
	if (cr6.eq) goto loc_824F1CA4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1ca0
	if (cr6.eq) goto loc_824F1CA0;
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
loc_824F1CA0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F1CA4:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5528
	ctx.r10.s64 = r11.s64 + 5528;
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

__attribute__((alias("__imp__sub_824F1CD0"))) PPC_WEAK_FUNC(sub_824F1CD0);
PPC_FUNC_IMPL(__imp__sub_824F1CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F1CD4"))) PPC_WEAK_FUNC(sub_824F1CD4);
PPC_FUNC_IMPL(__imp__sub_824F1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F1CD8"))) PPC_WEAK_FUNC(sub_824F1CD8);
PPC_FUNC_IMPL(__imp__sub_824F1CD8) {
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
	// bl 0x824dd7d8
	sub_824DD7D8(ctx, base);
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
	// bl 0x824ea6a0
	sub_824EA6A0(ctx, base);
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
	// beq cr6,0x824f1d58
	if (cr6.eq) goto loc_824F1D58;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1d54
	if (cr6.eq) goto loc_824F1D54;
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
loc_824F1D54:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F1D58:
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
	// bl 0x824e4c10
	sub_824E4C10(ctx, base);
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
	// beq cr6,0x824f1dac
	if (cr6.eq) goto loc_824F1DAC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1da8
	if (cr6.eq) goto loc_824F1DA8;
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
loc_824F1DA8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F1DAC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19664
	ctx.r10.s64 = r11.s64 + -19664;
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

__attribute__((alias("__imp__sub_824F1DD8"))) PPC_WEAK_FUNC(sub_824F1DD8);
PPC_FUNC_IMPL(__imp__sub_824F1DD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F1DDC"))) PPC_WEAK_FUNC(sub_824F1DDC);
PPC_FUNC_IMPL(__imp__sub_824F1DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F1DE0"))) PPC_WEAK_FUNC(sub_824F1DE0);
PPC_FUNC_IMPL(__imp__sub_824F1DE0) {
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
	// bl 0x824dd7d8
	sub_824DD7D8(ctx, base);
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
	// bl 0x824ea720
	sub_824EA720(ctx, base);
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
	// beq cr6,0x824f1e60
	if (cr6.eq) goto loc_824F1E60;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1e5c
	if (cr6.eq) goto loc_824F1E5C;
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
loc_824F1E5C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F1E60:
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
	// bl 0x824e4c90
	sub_824E4C90(ctx, base);
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
	// beq cr6,0x824f1eb4
	if (cr6.eq) goto loc_824F1EB4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1eb0
	if (cr6.eq) goto loc_824F1EB0;
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
loc_824F1EB0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F1EB4:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19664
	ctx.r10.s64 = r11.s64 + -19664;
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

__attribute__((alias("__imp__sub_824F1EE0"))) PPC_WEAK_FUNC(sub_824F1EE0);
PPC_FUNC_IMPL(__imp__sub_824F1EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F1EE4"))) PPC_WEAK_FUNC(sub_824F1EE4);
PPC_FUNC_IMPL(__imp__sub_824F1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F1EE8"))) PPC_WEAK_FUNC(sub_824F1EE8);
PPC_FUNC_IMPL(__imp__sub_824F1EE8) {
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
	// bl 0x822febe0
	sub_822FEBE0(ctx, base);
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
	// bl 0x824ea7a0
	sub_824EA7A0(ctx, base);
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
	// beq cr6,0x824f1f68
	if (cr6.eq) goto loc_824F1F68;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1f64
	if (cr6.eq) goto loc_824F1F64;
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
loc_824F1F64:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F1F68:
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
	// bl 0x824e4d10
	sub_824E4D10(ctx, base);
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
	// beq cr6,0x824f1fbc
	if (cr6.eq) goto loc_824F1FBC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f1fb8
	if (cr6.eq) goto loc_824F1FB8;
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
loc_824F1FB8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F1FBC:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5528
	ctx.r10.s64 = r11.s64 + 5528;
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

__attribute__((alias("__imp__sub_824F1FE8"))) PPC_WEAK_FUNC(sub_824F1FE8);
PPC_FUNC_IMPL(__imp__sub_824F1FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F1FEC"))) PPC_WEAK_FUNC(sub_824F1FEC);
PPC_FUNC_IMPL(__imp__sub_824F1FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F1FF0"))) PPC_WEAK_FUNC(sub_824F1FF0);
PPC_FUNC_IMPL(__imp__sub_824F1FF0) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x824ea820
	sub_824EA820(ctx, base);
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
	// beq cr6,0x824f2098
	if (cr6.eq) goto loc_824F2098;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2094
	if (cr6.eq) goto loc_824F2094;
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
loc_824F2094:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824F2098:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e4d90
	sub_824E4D90(ctx, base);
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
	// beq cr6,0x824f20ec
	if (cr6.eq) goto loc_824F20EC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f20e8
	if (cr6.eq) goto loc_824F20E8;
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
loc_824F20E8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824F20EC:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
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

__attribute__((alias("__imp__sub_824F2118"))) PPC_WEAK_FUNC(sub_824F2118);
PPC_FUNC_IMPL(__imp__sub_824F2118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F211C"))) PPC_WEAK_FUNC(sub_824F211C);
PPC_FUNC_IMPL(__imp__sub_824F211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2120"))) PPC_WEAK_FUNC(sub_824F2120);
PPC_FUNC_IMPL(__imp__sub_824F2120) {
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
	// bl 0x824de3a0
	sub_824DE3A0(ctx, base);
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
	// bl 0x824ea8a0
	sub_824EA8A0(ctx, base);
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
	// beq cr6,0x824f21a0
	if (cr6.eq) goto loc_824F21A0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f219c
	if (cr6.eq) goto loc_824F219C;
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
loc_824F219C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F21A0:
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
	// bl 0x824e4e10
	sub_824E4E10(ctx, base);
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
	// beq cr6,0x824f21f4
	if (cr6.eq) goto loc_824F21F4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f21f0
	if (cr6.eq) goto loc_824F21F0;
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
loc_824F21F0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F21F4:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19648
	ctx.r10.s64 = r11.s64 + -19648;
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

__attribute__((alias("__imp__sub_824F2220"))) PPC_WEAK_FUNC(sub_824F2220);
PPC_FUNC_IMPL(__imp__sub_824F2220) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2224"))) PPC_WEAK_FUNC(sub_824F2224);
PPC_FUNC_IMPL(__imp__sub_824F2224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2228"))) PPC_WEAK_FUNC(sub_824F2228);
PPC_FUNC_IMPL(__imp__sub_824F2228) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x824ea9a0
	sub_824EA9A0(ctx, base);
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
	// beq cr6,0x824f22d0
	if (cr6.eq) goto loc_824F22D0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f22cc
	if (cr6.eq) goto loc_824F22CC;
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
loc_824F22CC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824F22D0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e4f10
	sub_824E4F10(ctx, base);
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
	// beq cr6,0x824f2324
	if (cr6.eq) goto loc_824F2324;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2320
	if (cr6.eq) goto loc_824F2320;
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
loc_824F2320:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824F2324:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
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

__attribute__((alias("__imp__sub_824F2350"))) PPC_WEAK_FUNC(sub_824F2350);
PPC_FUNC_IMPL(__imp__sub_824F2350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2354"))) PPC_WEAK_FUNC(sub_824F2354);
PPC_FUNC_IMPL(__imp__sub_824F2354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2358"))) PPC_WEAK_FUNC(sub_824F2358);
PPC_FUNC_IMPL(__imp__sub_824F2358) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x824eaa20
	sub_824EAA20(ctx, base);
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
	// beq cr6,0x824f2400
	if (cr6.eq) goto loc_824F2400;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f23fc
	if (cr6.eq) goto loc_824F23FC;
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
loc_824F23FC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824F2400:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e4f90
	sub_824E4F90(ctx, base);
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
	// beq cr6,0x824f2454
	if (cr6.eq) goto loc_824F2454;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2450
	if (cr6.eq) goto loc_824F2450;
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
loc_824F2450:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824F2454:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
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

__attribute__((alias("__imp__sub_824F2480"))) PPC_WEAK_FUNC(sub_824F2480);
PPC_FUNC_IMPL(__imp__sub_824F2480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2484"))) PPC_WEAK_FUNC(sub_824F2484);
PPC_FUNC_IMPL(__imp__sub_824F2484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2488"))) PPC_WEAK_FUNC(sub_824F2488);
PPC_FUNC_IMPL(__imp__sub_824F2488) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb350
	sub_824EB350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2498"))) PPC_WEAK_FUNC(sub_824F2498);
PPC_FUNC_IMPL(__imp__sub_824F2498) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb428
	sub_824EB428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F24A8"))) PPC_WEAK_FUNC(sub_824F24A8);
PPC_FUNC_IMPL(__imp__sub_824F24A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb510
	sub_824EB510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F24B8"))) PPC_WEAK_FUNC(sub_824F24B8);
PPC_FUNC_IMPL(__imp__sub_824F24B8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb5d8
	sub_824EB5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F24C8"))) PPC_WEAK_FUNC(sub_824F24C8);
PPC_FUNC_IMPL(__imp__sub_824F24C8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb6b0
	sub_824EB6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F24D8"))) PPC_WEAK_FUNC(sub_824F24D8);
PPC_FUNC_IMPL(__imp__sub_824F24D8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb798
	sub_824EB798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F24E8"))) PPC_WEAK_FUNC(sub_824F24E8);
PPC_FUNC_IMPL(__imp__sub_824F24E8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb870
	sub_824EB870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F24F8"))) PPC_WEAK_FUNC(sub_824F24F8);
PPC_FUNC_IMPL(__imp__sub_824F24F8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eb938
	sub_824EB938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2508"))) PPC_WEAK_FUNC(sub_824F2508);
PPC_FUNC_IMPL(__imp__sub_824F2508) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eba00
	sub_824EBA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2518"))) PPC_WEAK_FUNC(sub_824F2518);
PPC_FUNC_IMPL(__imp__sub_824F2518) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ebac8
	sub_824EBAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2528"))) PPC_WEAK_FUNC(sub_824F2528);
PPC_FUNC_IMPL(__imp__sub_824F2528) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ebba0
	sub_824EBBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2538"))) PPC_WEAK_FUNC(sub_824F2538);
PPC_FUNC_IMPL(__imp__sub_824F2538) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ebc78
	sub_824EBC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2548"))) PPC_WEAK_FUNC(sub_824F2548);
PPC_FUNC_IMPL(__imp__sub_824F2548) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ebd50
	sub_824EBD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2558"))) PPC_WEAK_FUNC(sub_824F2558);
PPC_FUNC_IMPL(__imp__sub_824F2558) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ebe38
	sub_824EBE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F2568"))) PPC_WEAK_FUNC(sub_824F2568);
PPC_FUNC_IMPL(__imp__sub_824F2568) {
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
	// bl 0x824dd2f8
	sub_824DD2F8(ctx, base);
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
	// bl 0x824e53c8
	sub_824E53C8(ctx, base);
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
	// beq cr6,0x824f25e8
	if (cr6.eq) goto loc_824F25E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f25e4
	if (cr6.eq) goto loc_824F25E4;
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
loc_824F25E4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F25E8:
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
	// bl 0x824e5448
	sub_824E5448(ctx, base);
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
	// beq cr6,0x824f263c
	if (cr6.eq) goto loc_824F263C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2638
	if (cr6.eq) goto loc_824F2638;
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
loc_824F2638:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F263C:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,30480
	ctx.r10.s64 = r11.s64 + 30480;
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

__attribute__((alias("__imp__sub_824F2668"))) PPC_WEAK_FUNC(sub_824F2668);
PPC_FUNC_IMPL(__imp__sub_824F2668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F266C"))) PPC_WEAK_FUNC(sub_824F266C);
PPC_FUNC_IMPL(__imp__sub_824F266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2670"))) PPC_WEAK_FUNC(sub_824F2670);
PPC_FUNC_IMPL(__imp__sub_824F2670) {
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
	// bl 0x824dd530
	sub_824DD530(ctx, base);
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
	// bl 0x824e7120
	sub_824E7120(ctx, base);
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
	// beq cr6,0x824f26f0
	if (cr6.eq) goto loc_824F26F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f26ec
	if (cr6.eq) goto loc_824F26EC;
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
loc_824F26EC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F26F0:
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
	// bl 0x824e1290
	sub_824E1290(ctx, base);
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
	// beq cr6,0x824f2744
	if (cr6.eq) goto loc_824F2744;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2740
	if (cr6.eq) goto loc_824F2740;
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
loc_824F2740:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2744:
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

__attribute__((alias("__imp__sub_824F2770"))) PPC_WEAK_FUNC(sub_824F2770);
PPC_FUNC_IMPL(__imp__sub_824F2770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2774"))) PPC_WEAK_FUNC(sub_824F2774);
PPC_FUNC_IMPL(__imp__sub_824F2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2778"))) PPC_WEAK_FUNC(sub_824F2778);
PPC_FUNC_IMPL(__imp__sub_824F2778) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e71a0
	sub_824E71A0(ctx, base);
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
	// beq cr6,0x824f27f8
	if (cr6.eq) goto loc_824F27F8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f27f4
	if (cr6.eq) goto loc_824F27F4;
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
loc_824F27F4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F27F8:
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
	// bl 0x824e1310
	sub_824E1310(ctx, base);
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
	// beq cr6,0x824f284c
	if (cr6.eq) goto loc_824F284C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2848
	if (cr6.eq) goto loc_824F2848;
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
loc_824F2848:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F284C:
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

__attribute__((alias("__imp__sub_824F2878"))) PPC_WEAK_FUNC(sub_824F2878);
PPC_FUNC_IMPL(__imp__sub_824F2878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F287C"))) PPC_WEAK_FUNC(sub_824F287C);
PPC_FUNC_IMPL(__imp__sub_824F287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2880"))) PPC_WEAK_FUNC(sub_824F2880);
PPC_FUNC_IMPL(__imp__sub_824F2880) {
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
	// bl 0x824dd688
	sub_824DD688(ctx, base);
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
	// bl 0x824e7320
	sub_824E7320(ctx, base);
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
	// beq cr6,0x824f2900
	if (cr6.eq) goto loc_824F2900;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f28fc
	if (cr6.eq) goto loc_824F28FC;
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
loc_824F28FC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2900:
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
	// bl 0x824e1490
	sub_824E1490(ctx, base);
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
	// beq cr6,0x824f2954
	if (cr6.eq) goto loc_824F2954;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2950
	if (cr6.eq) goto loc_824F2950;
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
loc_824F2950:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2954:
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

__attribute__((alias("__imp__sub_824F2980"))) PPC_WEAK_FUNC(sub_824F2980);
PPC_FUNC_IMPL(__imp__sub_824F2980) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2984"))) PPC_WEAK_FUNC(sub_824F2984);
PPC_FUNC_IMPL(__imp__sub_824F2984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2988"))) PPC_WEAK_FUNC(sub_824F2988);
PPC_FUNC_IMPL(__imp__sub_824F2988) {
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
	// bl 0x824dd730
	sub_824DD730(ctx, base);
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
	// bl 0x824e74a0
	sub_824E74A0(ctx, base);
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
	// beq cr6,0x824f2a08
	if (cr6.eq) goto loc_824F2A08;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2a04
	if (cr6.eq) goto loc_824F2A04;
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
loc_824F2A04:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2A08:
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
	// bl 0x824e1690
	sub_824E1690(ctx, base);
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
	// beq cr6,0x824f2a5c
	if (cr6.eq) goto loc_824F2A5C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2a58
	if (cr6.eq) goto loc_824F2A58;
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
loc_824F2A58:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2A5C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9368
	ctx.r10.s64 = r11.s64 + 9368;
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

__attribute__((alias("__imp__sub_824F2A88"))) PPC_WEAK_FUNC(sub_824F2A88);
PPC_FUNC_IMPL(__imp__sub_824F2A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2A8C"))) PPC_WEAK_FUNC(sub_824F2A8C);
PPC_FUNC_IMPL(__imp__sub_824F2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2A90"))) PPC_WEAK_FUNC(sub_824F2A90);
PPC_FUNC_IMPL(__imp__sub_824F2A90) {
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
	// bl 0x824ddf40
	sub_824DDF40(ctx, base);
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
	// bl 0x824e7920
	sub_824E7920(ctx, base);
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
	// beq cr6,0x824f2b10
	if (cr6.eq) goto loc_824F2B10;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2b0c
	if (cr6.eq) goto loc_824F2B0C;
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
loc_824F2B0C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2B10:
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
	// bl 0x824e1b10
	sub_824E1B10(ctx, base);
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
	// beq cr6,0x824f2b64
	if (cr6.eq) goto loc_824F2B64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2b60
	if (cr6.eq) goto loc_824F2B60;
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
loc_824F2B60:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2B64:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9384
	ctx.r10.s64 = r11.s64 + 9384;
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

__attribute__((alias("__imp__sub_824F2B90"))) PPC_WEAK_FUNC(sub_824F2B90);
PPC_FUNC_IMPL(__imp__sub_824F2B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2B94"))) PPC_WEAK_FUNC(sub_824F2B94);
PPC_FUNC_IMPL(__imp__sub_824F2B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2B98"))) PPC_WEAK_FUNC(sub_824F2B98);
PPC_FUNC_IMPL(__imp__sub_824F2B98) {
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
	// bl 0x824dd8f8
	sub_824DD8F8(ctx, base);
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
	// bl 0x824e7b20
	sub_824E7B20(ctx, base);
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
	// beq cr6,0x824f2c18
	if (cr6.eq) goto loc_824F2C18;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2c14
	if (cr6.eq) goto loc_824F2C14;
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
loc_824F2C14:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2C18:
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
	// bl 0x824e1f90
	sub_824E1F90(ctx, base);
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
	// beq cr6,0x824f2c6c
	if (cr6.eq) goto loc_824F2C6C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2c68
	if (cr6.eq) goto loc_824F2C68;
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
loc_824F2C68:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2C6C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9416
	ctx.r10.s64 = r11.s64 + 9416;
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

__attribute__((alias("__imp__sub_824F2C98"))) PPC_WEAK_FUNC(sub_824F2C98);
PPC_FUNC_IMPL(__imp__sub_824F2C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2C9C"))) PPC_WEAK_FUNC(sub_824F2C9C);
PPC_FUNC_IMPL(__imp__sub_824F2C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2CA0"))) PPC_WEAK_FUNC(sub_824F2CA0);
PPC_FUNC_IMPL(__imp__sub_824F2CA0) {
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
	// bl 0x824ddf40
	sub_824DDF40(ctx, base);
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
	// bl 0x824e7ba0
	sub_824E7BA0(ctx, base);
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
	// beq cr6,0x824f2d20
	if (cr6.eq) goto loc_824F2D20;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2d1c
	if (cr6.eq) goto loc_824F2D1C;
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
loc_824F2D1C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2D20:
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
	// bl 0x824e2010
	sub_824E2010(ctx, base);
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
	// beq cr6,0x824f2d74
	if (cr6.eq) goto loc_824F2D74;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2d70
	if (cr6.eq) goto loc_824F2D70;
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
loc_824F2D70:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2D74:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9384
	ctx.r10.s64 = r11.s64 + 9384;
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

__attribute__((alias("__imp__sub_824F2DA0"))) PPC_WEAK_FUNC(sub_824F2DA0);
PPC_FUNC_IMPL(__imp__sub_824F2DA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2DA4"))) PPC_WEAK_FUNC(sub_824F2DA4);
PPC_FUNC_IMPL(__imp__sub_824F2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2DA8"))) PPC_WEAK_FUNC(sub_824F2DA8);
PPC_FUNC_IMPL(__imp__sub_824F2DA8) {
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
	// bl 0x824e7c20
	sub_824E7C20(ctx, base);
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
	// beq cr6,0x824f2e28
	if (cr6.eq) goto loc_824F2E28;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2e24
	if (cr6.eq) goto loc_824F2E24;
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
loc_824F2E24:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2E28:
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
	// bl 0x824e2090
	sub_824E2090(ctx, base);
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
	// beq cr6,0x824f2e7c
	if (cr6.eq) goto loc_824F2E7C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2e78
	if (cr6.eq) goto loc_824F2E78;
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
loc_824F2E78:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2E7C:
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

__attribute__((alias("__imp__sub_824F2EA8"))) PPC_WEAK_FUNC(sub_824F2EA8);
PPC_FUNC_IMPL(__imp__sub_824F2EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2EAC"))) PPC_WEAK_FUNC(sub_824F2EAC);
PPC_FUNC_IMPL(__imp__sub_824F2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2EB0"))) PPC_WEAK_FUNC(sub_824F2EB0);
PPC_FUNC_IMPL(__imp__sub_824F2EB0) {
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
	// bl 0x824dda30
	sub_824DDA30(ctx, base);
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
	// bl 0x824e7d20
	sub_824E7D20(ctx, base);
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
	// beq cr6,0x824f2f30
	if (cr6.eq) goto loc_824F2F30;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2f2c
	if (cr6.eq) goto loc_824F2F2C;
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
loc_824F2F2C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F2F30:
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
	// bl 0x824e2190
	sub_824E2190(ctx, base);
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
	// beq cr6,0x824f2f84
	if (cr6.eq) goto loc_824F2F84;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f2f80
	if (cr6.eq) goto loc_824F2F80;
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
loc_824F2F80:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F2F84:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9400
	ctx.r10.s64 = r11.s64 + 9400;
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

__attribute__((alias("__imp__sub_824F2FB0"))) PPC_WEAK_FUNC(sub_824F2FB0);
PPC_FUNC_IMPL(__imp__sub_824F2FB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F2FB4"))) PPC_WEAK_FUNC(sub_824F2FB4);
PPC_FUNC_IMPL(__imp__sub_824F2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F2FB8"))) PPC_WEAK_FUNC(sub_824F2FB8);
PPC_FUNC_IMPL(__imp__sub_824F2FB8) {
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
	// bl 0x824e7da0
	sub_824E7DA0(ctx, base);
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
	// beq cr6,0x824f3038
	if (cr6.eq) goto loc_824F3038;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3034
	if (cr6.eq) goto loc_824F3034;
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
loc_824F3034:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3038:
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
	// bl 0x824e2210
	sub_824E2210(ctx, base);
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
	// beq cr6,0x824f308c
	if (cr6.eq) goto loc_824F308C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3088
	if (cr6.eq) goto loc_824F3088;
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
loc_824F3088:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F308C:
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

__attribute__((alias("__imp__sub_824F30B8"))) PPC_WEAK_FUNC(sub_824F30B8);
PPC_FUNC_IMPL(__imp__sub_824F30B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F30BC"))) PPC_WEAK_FUNC(sub_824F30BC);
PPC_FUNC_IMPL(__imp__sub_824F30BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F30C0"))) PPC_WEAK_FUNC(sub_824F30C0);
PPC_FUNC_IMPL(__imp__sub_824F30C0) {
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
	// bl 0x824ddac8
	sub_824DDAC8(ctx, base);
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
	// bl 0x824e7fa0
	sub_824E7FA0(ctx, base);
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
	// beq cr6,0x824f3140
	if (cr6.eq) goto loc_824F3140;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f313c
	if (cr6.eq) goto loc_824F313C;
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
loc_824F313C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3140:
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
	// bl 0x824e2410
	sub_824E2410(ctx, base);
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
	// beq cr6,0x824f3194
	if (cr6.eq) goto loc_824F3194;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3190
	if (cr6.eq) goto loc_824F3190;
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
loc_824F3190:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F3194:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9416
	ctx.r10.s64 = r11.s64 + 9416;
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

__attribute__((alias("__imp__sub_824F31C0"))) PPC_WEAK_FUNC(sub_824F31C0);
PPC_FUNC_IMPL(__imp__sub_824F31C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F31C4"))) PPC_WEAK_FUNC(sub_824F31C4);
PPC_FUNC_IMPL(__imp__sub_824F31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F31C8"))) PPC_WEAK_FUNC(sub_824F31C8);
PPC_FUNC_IMPL(__imp__sub_824F31C8) {
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
	// bl 0x824ddb78
	sub_824DDB78(ctx, base);
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
	// bl 0x824e8020
	sub_824E8020(ctx, base);
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
	// beq cr6,0x824f3248
	if (cr6.eq) goto loc_824F3248;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3244
	if (cr6.eq) goto loc_824F3244;
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
loc_824F3244:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3248:
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
	// bl 0x824e2490
	sub_824E2490(ctx, base);
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
	// beq cr6,0x824f329c
	if (cr6.eq) goto loc_824F329C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3298
	if (cr6.eq) goto loc_824F3298;
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
loc_824F3298:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F329C:
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

__attribute__((alias("__imp__sub_824F32C8"))) PPC_WEAK_FUNC(sub_824F32C8);
PPC_FUNC_IMPL(__imp__sub_824F32C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F32CC"))) PPC_WEAK_FUNC(sub_824F32CC);
PPC_FUNC_IMPL(__imp__sub_824F32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F32D0"))) PPC_WEAK_FUNC(sub_824F32D0);
PPC_FUNC_IMPL(__imp__sub_824F32D0) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e8220
	sub_824E8220(ctx, base);
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
	// beq cr6,0x824f3350
	if (cr6.eq) goto loc_824F3350;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f334c
	if (cr6.eq) goto loc_824F334C;
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
loc_824F334C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3350:
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
	// bl 0x824e2690
	sub_824E2690(ctx, base);
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
	// beq cr6,0x824f33a4
	if (cr6.eq) goto loc_824F33A4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f33a0
	if (cr6.eq) goto loc_824F33A0;
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
loc_824F33A0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F33A4:
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

__attribute__((alias("__imp__sub_824F33D0"))) PPC_WEAK_FUNC(sub_824F33D0);
PPC_FUNC_IMPL(__imp__sub_824F33D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F33D4"))) PPC_WEAK_FUNC(sub_824F33D4);
PPC_FUNC_IMPL(__imp__sub_824F33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F33D8"))) PPC_WEAK_FUNC(sub_824F33D8);
PPC_FUNC_IMPL(__imp__sub_824F33D8) {
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
	// bl 0x824ddca8
	sub_824DDCA8(ctx, base);
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
	// bl 0x824e82a0
	sub_824E82A0(ctx, base);
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
	// beq cr6,0x824f3458
	if (cr6.eq) goto loc_824F3458;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3454
	if (cr6.eq) goto loc_824F3454;
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
loc_824F3454:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3458:
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
	// bl 0x824e2710
	sub_824E2710(ctx, base);
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
	// beq cr6,0x824f34ac
	if (cr6.eq) goto loc_824F34AC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f34a8
	if (cr6.eq) goto loc_824F34A8;
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
loc_824F34A8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F34AC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9432
	ctx.r10.s64 = r11.s64 + 9432;
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

__attribute__((alias("__imp__sub_824F34D8"))) PPC_WEAK_FUNC(sub_824F34D8);
PPC_FUNC_IMPL(__imp__sub_824F34D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F34DC"))) PPC_WEAK_FUNC(sub_824F34DC);
PPC_FUNC_IMPL(__imp__sub_824F34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F34E0"))) PPC_WEAK_FUNC(sub_824F34E0);
PPC_FUNC_IMPL(__imp__sub_824F34E0) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e83a0
	sub_824E83A0(ctx, base);
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
	// beq cr6,0x824f3560
	if (cr6.eq) goto loc_824F3560;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f355c
	if (cr6.eq) goto loc_824F355C;
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
loc_824F355C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3560:
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
	// bl 0x824e2810
	sub_824E2810(ctx, base);
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
	// beq cr6,0x824f35b4
	if (cr6.eq) goto loc_824F35B4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f35b0
	if (cr6.eq) goto loc_824F35B0;
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
loc_824F35B0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F35B4:
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

__attribute__((alias("__imp__sub_824F35E0"))) PPC_WEAK_FUNC(sub_824F35E0);
PPC_FUNC_IMPL(__imp__sub_824F35E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F35E4"))) PPC_WEAK_FUNC(sub_824F35E4);
PPC_FUNC_IMPL(__imp__sub_824F35E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F35E8"))) PPC_WEAK_FUNC(sub_824F35E8);
PPC_FUNC_IMPL(__imp__sub_824F35E8) {
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
	// bl 0x82502808
	sub_82502808(ctx, base);
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
	// bl 0x824e8620
	sub_824E8620(ctx, base);
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
	// beq cr6,0x824f3668
	if (cr6.eq) goto loc_824F3668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3664
	if (cr6.eq) goto loc_824F3664;
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
loc_824F3664:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3668:
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
	// bl 0x824e2a90
	sub_824E2A90(ctx, base);
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
	// beq cr6,0x824f36bc
	if (cr6.eq) goto loc_824F36BC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f36b8
	if (cr6.eq) goto loc_824F36B8;
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
loc_824F36B8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F36BC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9448
	ctx.r10.s64 = r11.s64 + 9448;
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

__attribute__((alias("__imp__sub_824F36E8"))) PPC_WEAK_FUNC(sub_824F36E8);
PPC_FUNC_IMPL(__imp__sub_824F36E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F36EC"))) PPC_WEAK_FUNC(sub_824F36EC);
PPC_FUNC_IMPL(__imp__sub_824F36EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F36F0"))) PPC_WEAK_FUNC(sub_824F36F0);
PPC_FUNC_IMPL(__imp__sub_824F36F0) {
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
	// bl 0x825640a0
	sub_825640A0(ctx, base);
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
	// bl 0x824e86a0
	sub_824E86A0(ctx, base);
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
	// beq cr6,0x824f3770
	if (cr6.eq) goto loc_824F3770;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f376c
	if (cr6.eq) goto loc_824F376C;
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
loc_824F376C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3770:
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
	// bl 0x824e2b10
	sub_824E2B10(ctx, base);
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
	// beq cr6,0x824f37c4
	if (cr6.eq) goto loc_824F37C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f37c0
	if (cr6.eq) goto loc_824F37C0;
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
loc_824F37C0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F37C4:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9464
	ctx.r10.s64 = r11.s64 + 9464;
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

__attribute__((alias("__imp__sub_824F37F0"))) PPC_WEAK_FUNC(sub_824F37F0);
PPC_FUNC_IMPL(__imp__sub_824F37F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F37F4"))) PPC_WEAK_FUNC(sub_824F37F4);
PPC_FUNC_IMPL(__imp__sub_824F37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F37F8"))) PPC_WEAK_FUNC(sub_824F37F8);
PPC_FUNC_IMPL(__imp__sub_824F37F8) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e8920
	sub_824E8920(ctx, base);
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
	// beq cr6,0x824f3878
	if (cr6.eq) goto loc_824F3878;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3874
	if (cr6.eq) goto loc_824F3874;
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
loc_824F3874:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3878:
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
	// bl 0x824e2d90
	sub_824E2D90(ctx, base);
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
	// beq cr6,0x824f38cc
	if (cr6.eq) goto loc_824F38CC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f38c8
	if (cr6.eq) goto loc_824F38C8;
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
loc_824F38C8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F38CC:
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

__attribute__((alias("__imp__sub_824F38F8"))) PPC_WEAK_FUNC(sub_824F38F8);
PPC_FUNC_IMPL(__imp__sub_824F38F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F38FC"))) PPC_WEAK_FUNC(sub_824F38FC);
PPC_FUNC_IMPL(__imp__sub_824F38FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3900"))) PPC_WEAK_FUNC(sub_824F3900);
PPC_FUNC_IMPL(__imp__sub_824F3900) {
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
	// bl 0x824dd688
	sub_824DD688(ctx, base);
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
	// bl 0x824e8a20
	sub_824E8A20(ctx, base);
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
	// beq cr6,0x824f3980
	if (cr6.eq) goto loc_824F3980;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f397c
	if (cr6.eq) goto loc_824F397C;
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
loc_824F397C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3980:
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
	// bl 0x824e2e90
	sub_824E2E90(ctx, base);
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
	// beq cr6,0x824f39d4
	if (cr6.eq) goto loc_824F39D4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f39d0
	if (cr6.eq) goto loc_824F39D0;
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
loc_824F39D0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F39D4:
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

__attribute__((alias("__imp__sub_824F3A00"))) PPC_WEAK_FUNC(sub_824F3A00);
PPC_FUNC_IMPL(__imp__sub_824F3A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F3A04"))) PPC_WEAK_FUNC(sub_824F3A04);
PPC_FUNC_IMPL(__imp__sub_824F3A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3A08"))) PPC_WEAK_FUNC(sub_824F3A08);
PPC_FUNC_IMPL(__imp__sub_824F3A08) {
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
	// bl 0x824e8ca0
	sub_824E8CA0(ctx, base);
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
	// beq cr6,0x824f3a88
	if (cr6.eq) goto loc_824F3A88;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3a84
	if (cr6.eq) goto loc_824F3A84;
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
loc_824F3A84:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3A88:
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
	// bl 0x824e3110
	sub_824E3110(ctx, base);
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
	// beq cr6,0x824f3adc
	if (cr6.eq) goto loc_824F3ADC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3ad8
	if (cr6.eq) goto loc_824F3AD8;
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
loc_824F3AD8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F3ADC:
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

__attribute__((alias("__imp__sub_824F3B08"))) PPC_WEAK_FUNC(sub_824F3B08);
PPC_FUNC_IMPL(__imp__sub_824F3B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F3B0C"))) PPC_WEAK_FUNC(sub_824F3B0C);
PPC_FUNC_IMPL(__imp__sub_824F3B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3B10"))) PPC_WEAK_FUNC(sub_824F3B10);
PPC_FUNC_IMPL(__imp__sub_824F3B10) {
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
	// bl 0x824dde80
	sub_824DDE80(ctx, base);
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
	// bl 0x824e8d20
	sub_824E8D20(ctx, base);
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
	// beq cr6,0x824f3b90
	if (cr6.eq) goto loc_824F3B90;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3b8c
	if (cr6.eq) goto loc_824F3B8C;
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
loc_824F3B8C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3B90:
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
	// bl 0x824e3190
	sub_824E3190(ctx, base);
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
	// beq cr6,0x824f3be4
	if (cr6.eq) goto loc_824F3BE4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3be0
	if (cr6.eq) goto loc_824F3BE0;
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
loc_824F3BE0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F3BE4:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9496
	ctx.r10.s64 = r11.s64 + 9496;
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

__attribute__((alias("__imp__sub_824F3C10"))) PPC_WEAK_FUNC(sub_824F3C10);
PPC_FUNC_IMPL(__imp__sub_824F3C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F3C14"))) PPC_WEAK_FUNC(sub_824F3C14);
PPC_FUNC_IMPL(__imp__sub_824F3C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3C18"))) PPC_WEAK_FUNC(sub_824F3C18);
PPC_FUNC_IMPL(__imp__sub_824F3C18) {
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
	// bl 0x824ddf40
	sub_824DDF40(ctx, base);
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
	// bl 0x824e8da0
	sub_824E8DA0(ctx, base);
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
	// beq cr6,0x824f3c98
	if (cr6.eq) goto loc_824F3C98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3c94
	if (cr6.eq) goto loc_824F3C94;
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
loc_824F3C94:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3C98:
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
	// bl 0x824e3210
	sub_824E3210(ctx, base);
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
	// beq cr6,0x824f3cec
	if (cr6.eq) goto loc_824F3CEC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3ce8
	if (cr6.eq) goto loc_824F3CE8;
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
loc_824F3CE8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F3CEC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9384
	ctx.r10.s64 = r11.s64 + 9384;
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

__attribute__((alias("__imp__sub_824F3D18"))) PPC_WEAK_FUNC(sub_824F3D18);
PPC_FUNC_IMPL(__imp__sub_824F3D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F3D1C"))) PPC_WEAK_FUNC(sub_824F3D1C);
PPC_FUNC_IMPL(__imp__sub_824F3D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3D20"))) PPC_WEAK_FUNC(sub_824F3D20);
PPC_FUNC_IMPL(__imp__sub_824F3D20) {
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
	// bl 0x824ddfc8
	sub_824DDFC8(ctx, base);
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
	// bl 0x824e8e20
	sub_824E8E20(ctx, base);
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
	// beq cr6,0x824f3da0
	if (cr6.eq) goto loc_824F3DA0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3d9c
	if (cr6.eq) goto loc_824F3D9C;
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
loc_824F3D9C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3DA0:
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
	// bl 0x824e3290
	sub_824E3290(ctx, base);
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
	// beq cr6,0x824f3df4
	if (cr6.eq) goto loc_824F3DF4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3df0
	if (cr6.eq) goto loc_824F3DF0;
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
loc_824F3DF0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F3DF4:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9512
	ctx.r10.s64 = r11.s64 + 9512;
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

__attribute__((alias("__imp__sub_824F3E20"))) PPC_WEAK_FUNC(sub_824F3E20);
PPC_FUNC_IMPL(__imp__sub_824F3E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F3E24"))) PPC_WEAK_FUNC(sub_824F3E24);
PPC_FUNC_IMPL(__imp__sub_824F3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3E28"))) PPC_WEAK_FUNC(sub_824F3E28);
PPC_FUNC_IMPL(__imp__sub_824F3E28) {
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
	// bl 0x824dda30
	sub_824DDA30(ctx, base);
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
	// bl 0x824e8ea0
	sub_824E8EA0(ctx, base);
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
	// beq cr6,0x824f3ea8
	if (cr6.eq) goto loc_824F3EA8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3ea4
	if (cr6.eq) goto loc_824F3EA4;
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
loc_824F3EA4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3EA8:
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
	// bl 0x824e3310
	sub_824E3310(ctx, base);
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
	// beq cr6,0x824f3efc
	if (cr6.eq) goto loc_824F3EFC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3ef8
	if (cr6.eq) goto loc_824F3EF8;
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
loc_824F3EF8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F3EFC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9400
	ctx.r10.s64 = r11.s64 + 9400;
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

__attribute__((alias("__imp__sub_824F3F28"))) PPC_WEAK_FUNC(sub_824F3F28);
PPC_FUNC_IMPL(__imp__sub_824F3F28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F3F2C"))) PPC_WEAK_FUNC(sub_824F3F2C);
PPC_FUNC_IMPL(__imp__sub_824F3F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F3F30"))) PPC_WEAK_FUNC(sub_824F3F30);
PPC_FUNC_IMPL(__imp__sub_824F3F30) {
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
	// bl 0x824ddf40
	sub_824DDF40(ctx, base);
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
	// bl 0x824e8fa0
	sub_824E8FA0(ctx, base);
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
	// beq cr6,0x824f3fb0
	if (cr6.eq) goto loc_824F3FB0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f3fac
	if (cr6.eq) goto loc_824F3FAC;
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
loc_824F3FAC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F3FB0:
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
	// bl 0x824e3410
	sub_824E3410(ctx, base);
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
	// beq cr6,0x824f4004
	if (cr6.eq) goto loc_824F4004;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4000
	if (cr6.eq) goto loc_824F4000;
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
loc_824F4000:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4004:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9384
	ctx.r10.s64 = r11.s64 + 9384;
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

__attribute__((alias("__imp__sub_824F4030"))) PPC_WEAK_FUNC(sub_824F4030);
PPC_FUNC_IMPL(__imp__sub_824F4030) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4034"))) PPC_WEAK_FUNC(sub_824F4034);
PPC_FUNC_IMPL(__imp__sub_824F4034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4038"))) PPC_WEAK_FUNC(sub_824F4038);
PPC_FUNC_IMPL(__imp__sub_824F4038) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e92a0
	sub_824E92A0(ctx, base);
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
	// beq cr6,0x824f40b8
	if (cr6.eq) goto loc_824F40B8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f40b4
	if (cr6.eq) goto loc_824F40B4;
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
loc_824F40B4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F40B8:
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
	// bl 0x824e3710
	sub_824E3710(ctx, base);
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
	// beq cr6,0x824f410c
	if (cr6.eq) goto loc_824F410C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4108
	if (cr6.eq) goto loc_824F4108;
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
loc_824F4108:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F410C:
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

__attribute__((alias("__imp__sub_824F4138"))) PPC_WEAK_FUNC(sub_824F4138);
PPC_FUNC_IMPL(__imp__sub_824F4138) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F413C"))) PPC_WEAK_FUNC(sub_824F413C);
PPC_FUNC_IMPL(__imp__sub_824F413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4140"))) PPC_WEAK_FUNC(sub_824F4140);
PPC_FUNC_IMPL(__imp__sub_824F4140) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e9420
	sub_824E9420(ctx, base);
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
	// beq cr6,0x824f41c0
	if (cr6.eq) goto loc_824F41C0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f41bc
	if (cr6.eq) goto loc_824F41BC;
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
loc_824F41BC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F41C0:
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
	// bl 0x824e3890
	sub_824E3890(ctx, base);
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
	// beq cr6,0x824f4214
	if (cr6.eq) goto loc_824F4214;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4210
	if (cr6.eq) goto loc_824F4210;
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
loc_824F4210:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4214:
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

__attribute__((alias("__imp__sub_824F4240"))) PPC_WEAK_FUNC(sub_824F4240);
PPC_FUNC_IMPL(__imp__sub_824F4240) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4244"))) PPC_WEAK_FUNC(sub_824F4244);
PPC_FUNC_IMPL(__imp__sub_824F4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4248"))) PPC_WEAK_FUNC(sub_824F4248);
PPC_FUNC_IMPL(__imp__sub_824F4248) {
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
	// bl 0x824de068
	sub_824DE068(ctx, base);
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
	// bl 0x824e9520
	sub_824E9520(ctx, base);
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
	// beq cr6,0x824f42c8
	if (cr6.eq) goto loc_824F42C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f42c4
	if (cr6.eq) goto loc_824F42C4;
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
loc_824F42C4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F42C8:
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
	// bl 0x824e3990
	sub_824E3990(ctx, base);
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
	// beq cr6,0x824f431c
	if (cr6.eq) goto loc_824F431C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4318
	if (cr6.eq) goto loc_824F4318;
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
loc_824F4318:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F431C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9528
	ctx.r10.s64 = r11.s64 + 9528;
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

__attribute__((alias("__imp__sub_824F4348"))) PPC_WEAK_FUNC(sub_824F4348);
PPC_FUNC_IMPL(__imp__sub_824F4348) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F434C"))) PPC_WEAK_FUNC(sub_824F434C);
PPC_FUNC_IMPL(__imp__sub_824F434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4350"))) PPC_WEAK_FUNC(sub_824F4350);
PPC_FUNC_IMPL(__imp__sub_824F4350) {
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
	// bl 0x824ddb78
	sub_824DDB78(ctx, base);
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
	// bl 0x824e95a0
	sub_824E95A0(ctx, base);
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
	// beq cr6,0x824f43d0
	if (cr6.eq) goto loc_824F43D0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f43cc
	if (cr6.eq) goto loc_824F43CC;
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
loc_824F43CC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F43D0:
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
	// bl 0x824e3a10
	sub_824E3A10(ctx, base);
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
	// beq cr6,0x824f4424
	if (cr6.eq) goto loc_824F4424;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4420
	if (cr6.eq) goto loc_824F4420;
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
loc_824F4420:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4424:
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

__attribute__((alias("__imp__sub_824F4450"))) PPC_WEAK_FUNC(sub_824F4450);
PPC_FUNC_IMPL(__imp__sub_824F4450) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4454"))) PPC_WEAK_FUNC(sub_824F4454);
PPC_FUNC_IMPL(__imp__sub_824F4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4458"))) PPC_WEAK_FUNC(sub_824F4458);
PPC_FUNC_IMPL(__imp__sub_824F4458) {
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
	// bl 0x824ddb78
	sub_824DDB78(ctx, base);
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
	// bl 0x824e9620
	sub_824E9620(ctx, base);
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
	// beq cr6,0x824f44d8
	if (cr6.eq) goto loc_824F44D8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f44d4
	if (cr6.eq) goto loc_824F44D4;
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
loc_824F44D4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F44D8:
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
	// bl 0x824e3a90
	sub_824E3A90(ctx, base);
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
	// beq cr6,0x824f452c
	if (cr6.eq) goto loc_824F452C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4528
	if (cr6.eq) goto loc_824F4528;
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
loc_824F4528:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F452C:
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

__attribute__((alias("__imp__sub_824F4558"))) PPC_WEAK_FUNC(sub_824F4558);
PPC_FUNC_IMPL(__imp__sub_824F4558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F455C"))) PPC_WEAK_FUNC(sub_824F455C);
PPC_FUNC_IMPL(__imp__sub_824F455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4560"))) PPC_WEAK_FUNC(sub_824F4560);
PPC_FUNC_IMPL(__imp__sub_824F4560) {
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
	// bl 0x824ddb78
	sub_824DDB78(ctx, base);
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
	// bl 0x824e9720
	sub_824E9720(ctx, base);
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
	// beq cr6,0x824f45e0
	if (cr6.eq) goto loc_824F45E0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f45dc
	if (cr6.eq) goto loc_824F45DC;
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
loc_824F45DC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F45E0:
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
	// bl 0x824e3b90
	sub_824E3B90(ctx, base);
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
	// beq cr6,0x824f4634
	if (cr6.eq) goto loc_824F4634;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4630
	if (cr6.eq) goto loc_824F4630;
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
loc_824F4630:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4634:
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

__attribute__((alias("__imp__sub_824F4660"))) PPC_WEAK_FUNC(sub_824F4660);
PPC_FUNC_IMPL(__imp__sub_824F4660) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4664"))) PPC_WEAK_FUNC(sub_824F4664);
PPC_FUNC_IMPL(__imp__sub_824F4664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4668"))) PPC_WEAK_FUNC(sub_824F4668);
PPC_FUNC_IMPL(__imp__sub_824F4668) {
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
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
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
	// bl 0x824e97a0
	sub_824E97A0(ctx, base);
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
	// beq cr6,0x824f46e8
	if (cr6.eq) goto loc_824F46E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f46e4
	if (cr6.eq) goto loc_824F46E4;
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
loc_824F46E4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F46E8:
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
	// bl 0x824e3c10
	sub_824E3C10(ctx, base);
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
	// beq cr6,0x824f473c
	if (cr6.eq) goto loc_824F473C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4738
	if (cr6.eq) goto loc_824F4738;
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
loc_824F4738:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F473C:
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

__attribute__((alias("__imp__sub_824F4768"))) PPC_WEAK_FUNC(sub_824F4768);
PPC_FUNC_IMPL(__imp__sub_824F4768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F476C"))) PPC_WEAK_FUNC(sub_824F476C);
PPC_FUNC_IMPL(__imp__sub_824F476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4770"))) PPC_WEAK_FUNC(sub_824F4770);
PPC_FUNC_IMPL(__imp__sub_824F4770) {
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
	// bl 0x824ddf40
	sub_824DDF40(ctx, base);
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
	// bl 0x824e9f20
	sub_824E9F20(ctx, base);
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
	// beq cr6,0x824f47f0
	if (cr6.eq) goto loc_824F47F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f47ec
	if (cr6.eq) goto loc_824F47EC;
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
loc_824F47EC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F47F0:
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
	// bl 0x824e4390
	sub_824E4390(ctx, base);
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
	// beq cr6,0x824f4844
	if (cr6.eq) goto loc_824F4844;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4840
	if (cr6.eq) goto loc_824F4840;
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
loc_824F4840:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4844:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9384
	ctx.r10.s64 = r11.s64 + 9384;
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

__attribute__((alias("__imp__sub_824F4870"))) PPC_WEAK_FUNC(sub_824F4870);
PPC_FUNC_IMPL(__imp__sub_824F4870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4874"))) PPC_WEAK_FUNC(sub_824F4874);
PPC_FUNC_IMPL(__imp__sub_824F4874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4878"))) PPC_WEAK_FUNC(sub_824F4878);
PPC_FUNC_IMPL(__imp__sub_824F4878) {
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
	// bl 0x824de248
	sub_824DE248(ctx, base);
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
	// bl 0x824ea5a0
	sub_824EA5A0(ctx, base);
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
	// beq cr6,0x824f48f8
	if (cr6.eq) goto loc_824F48F8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f48f4
	if (cr6.eq) goto loc_824F48F4;
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
loc_824F48F4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F48F8:
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
	// bl 0x824e4b10
	sub_824E4B10(ctx, base);
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
	// beq cr6,0x824f494c
	if (cr6.eq) goto loc_824F494C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4948
	if (cr6.eq) goto loc_824F4948;
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
loc_824F4948:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F494C:
	// lis r11,-32209
	r11.s64 = -2110849024;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-9624
	ctx.r10.s64 = r11.s64 + -9624;
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

__attribute__((alias("__imp__sub_824F4978"))) PPC_WEAK_FUNC(sub_824F4978);
PPC_FUNC_IMPL(__imp__sub_824F4978) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F497C"))) PPC_WEAK_FUNC(sub_824F497C);
PPC_FUNC_IMPL(__imp__sub_824F497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4980"))) PPC_WEAK_FUNC(sub_824F4980);
PPC_FUNC_IMPL(__imp__sub_824F4980) {
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
	// bl 0x824de2f0
	sub_824DE2F0(ctx, base);
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
	// bl 0x824ea620
	sub_824EA620(ctx, base);
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
	// beq cr6,0x824f4a00
	if (cr6.eq) goto loc_824F4A00;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f49fc
	if (cr6.eq) goto loc_824F49FC;
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
loc_824F49FC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F4A00:
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
	// bl 0x824e4b90
	sub_824E4B90(ctx, base);
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
	// beq cr6,0x824f4a54
	if (cr6.eq) goto loc_824F4A54;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4a50
	if (cr6.eq) goto loc_824F4A50;
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
loc_824F4A50:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4A54:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9544
	ctx.r10.s64 = r11.s64 + 9544;
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

__attribute__((alias("__imp__sub_824F4A80"))) PPC_WEAK_FUNC(sub_824F4A80);
PPC_FUNC_IMPL(__imp__sub_824F4A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4A84"))) PPC_WEAK_FUNC(sub_824F4A84);
PPC_FUNC_IMPL(__imp__sub_824F4A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4A88"))) PPC_WEAK_FUNC(sub_824F4A88);
PPC_FUNC_IMPL(__imp__sub_824F4A88) {
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
	// bl 0x824de448
	sub_824DE448(ctx, base);
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
	// bl 0x824ea920
	sub_824EA920(ctx, base);
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
	// beq cr6,0x824f4b08
	if (cr6.eq) goto loc_824F4B08;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4b04
	if (cr6.eq) goto loc_824F4B04;
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
loc_824F4B04:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F4B08:
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
	// bl 0x824e4e90
	sub_824E4E90(ctx, base);
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
	// beq cr6,0x824f4b5c
	if (cr6.eq) goto loc_824F4B5C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4b58
	if (cr6.eq) goto loc_824F4B58;
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
loc_824F4B58:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4B5C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,9560
	ctx.r10.s64 = r11.s64 + 9560;
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

__attribute__((alias("__imp__sub_824F4B88"))) PPC_WEAK_FUNC(sub_824F4B88);
PPC_FUNC_IMPL(__imp__sub_824F4B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4B8C"))) PPC_WEAK_FUNC(sub_824F4B8C);
PPC_FUNC_IMPL(__imp__sub_824F4B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4B90"))) PPC_WEAK_FUNC(sub_824F4B90);
PPC_FUNC_IMPL(__imp__sub_824F4B90) {
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
	// bl 0x824de4f0
	sub_824DE4F0(ctx, base);
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
	// bl 0x824e58c8
	sub_824E58C8(ctx, base);
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
	// beq cr6,0x824f4c10
	if (cr6.eq) goto loc_824F4C10;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4c0c
	if (cr6.eq) goto loc_824F4C0C;
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
loc_824F4C0C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_824F4C10:
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
	// bl 0x824e5948
	sub_824E5948(ctx, base);
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
	// beq cr6,0x824f4c64
	if (cr6.eq) goto loc_824F4C64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824f4c60
	if (cr6.eq) goto loc_824F4C60;
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
loc_824F4C60:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_824F4C64:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,30480
	ctx.r10.s64 = r11.s64 + 30480;
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

__attribute__((alias("__imp__sub_824F4C90"))) PPC_WEAK_FUNC(sub_824F4C90);
PPC_FUNC_IMPL(__imp__sub_824F4C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4C94"))) PPC_WEAK_FUNC(sub_824F4C94);
PPC_FUNC_IMPL(__imp__sub_824F4C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4C98"))) PPC_WEAK_FUNC(sub_824F4C98);
PPC_FUNC_IMPL(__imp__sub_824F4C98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,3912
	ctx.r4.s64 = r11.s64 + 3912;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824ccdf0
	sub_824CCDF0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,31576
	ctx.r6.s64 = ctx.r7.s64 + 31576;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,3888
	ctx.r4.s64 = ctx.r10.s64 + 3888;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ec138
	sub_824EC138(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31576
	ctx.r10.s64 = ctx.r7.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,3864
	ctx.r4.s64 = ctx.r9.s64 + 3864;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec138
	sub_824EC138(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,3852
	ctx.r4.s64 = ctx.r8.s64 + 3852;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df300
	sub_824DF300(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f4e10
	if (cr6.eq) goto loc_824F4E10;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F4E10:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f4e2c
	if (cr6.eq) goto loc_824F4E2C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f4e2c
	if (cr6.eq) goto loc_824F4E2C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F4E2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F4E30"))) PPC_WEAK_FUNC(sub_824F4E30);
PPC_FUNC_IMPL(__imp__sub_824F4E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F4E34"))) PPC_WEAK_FUNC(sub_824F4E34);
PPC_FUNC_IMPL(__imp__sub_824F4E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4E38"))) PPC_WEAK_FUNC(sub_824F4E38);
PPC_FUNC_IMPL(__imp__sub_824F4E38) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4260
	ctx.r4.s64 = r11.s64 + 4260;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824daf20
	sub_824DAF20(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,7936
	ctx.r6.s64 = ctx.r7.s64 + 7936;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,4248
	ctx.r4.s64 = ctx.r10.s64 + 4248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f0288
	sub_824F0288(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,7944
	ctx.r10.s64 = ctx.r7.s64 + 7944;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4236
	ctx.r4.s64 = ctx.r9.s64 + 4236;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f03b8
	sub_824F03B8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,7992
	ctx.r10.s64 = ctx.r6.s64 + 7992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4204
	ctx.r4.s64 = ctx.r9.s64 + 4204;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0288
	sub_824F0288(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,8008
	r11.s64 = ctx.r6.s64 + 8008;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,4176
	ctx.r4.s64 = ctx.r5.s64 + 4176;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0288
	sub_824F0288(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,8024
	ctx.r10.s64 = ctx.r7.s64 + 8024;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4156
	ctx.r4.s64 = ctx.r9.s64 + 4156;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0288
	sub_824F0288(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8040
	ctx.r10.s64 = ctx.r6.s64 + 8040;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4124
	ctx.r4.s64 = ctx.r9.s64 + 4124;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0288
	sub_824F0288(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8056
	ctx.r10.s64 = ctx.r6.s64 + 8056;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4088
	ctx.r4.s64 = ctx.r9.s64 + 4088;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0288
	sub_824F0288(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,8072
	r11.s64 = ctx.r6.s64 + 8072;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,4060
	ctx.r4.s64 = ctx.r5.s64 + 4060;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f04c0
	sub_824F04C0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,8080
	ctx.r10.s64 = ctx.r7.s64 + 8080;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4032
	ctx.r4.s64 = ctx.r9.s64 + 4032;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f05c8
	sub_824F05C8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8376
	ctx.r10.s64 = ctx.r6.s64 + 8376;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4016
	ctx.r4.s64 = ctx.r9.s64 + 4016;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f05c8
	sub_824F05C8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8184
	ctx.r10.s64 = ctx.r6.s64 + 8184;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,3988
	ctx.r4.s64 = ctx.r9.s64 + 3988;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f06d0
	sub_824F06D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,9088
	r11.s64 = ctx.r6.s64 + 9088;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,3976
	ctx.r4.s64 = ctx.r5.s64 + 3976;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f05c8
	sub_824F05C8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r10,r7,8088
	ctx.r10.s64 = ctx.r7.s64 + 8088;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,3960
	ctx.r4.s64 = ctx.r9.s64 + 3960;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f05c8
	sub_824F05C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,3940
	ctx.r4.s64 = ctx.r8.s64 + 3940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfb28
	sub_824DFB28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f5270
	if (cr6.eq) goto loc_824F5270;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F5270:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f528c
	if (cr6.eq) goto loc_824F528C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f528c
	if (cr6.eq) goto loc_824F528C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F528C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F5290"))) PPC_WEAK_FUNC(sub_824F5290);
PPC_FUNC_IMPL(__imp__sub_824F5290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F5294"))) PPC_WEAK_FUNC(sub_824F5294);
PPC_FUNC_IMPL(__imp__sub_824F5294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5298"))) PPC_WEAK_FUNC(sub_824F5298);
PPC_FUNC_IMPL(__imp__sub_824F5298) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4924
	ctx.r4.s64 = r11.s64 + 4924;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824daf98
	sub_824DAF98(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,9976
	ctx.r6.s64 = ctx.r7.s64 + 9976;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,4904
	ctx.r4.s64 = ctx.r10.s64 + 4904;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,9984
	ctx.r10.s64 = ctx.r7.s64 + 9984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4888
	ctx.r4.s64 = ctx.r9.s64 + 4888;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9992
	ctx.r10.s64 = ctx.r6.s64 + 9992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4872
	ctx.r4.s64 = ctx.r9.s64 + 4872;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,10000
	r11.s64 = ctx.r6.s64 + 10000;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,4856
	ctx.r4.s64 = ctx.r5.s64 + 4856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,10008
	ctx.r10.s64 = ctx.r7.s64 + 10008;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4840
	ctx.r4.s64 = ctx.r9.s64 + 4840;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,10016
	ctx.r10.s64 = ctx.r6.s64 + 10016;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4828
	ctx.r4.s64 = ctx.r9.s64 + 4828;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,10032
	ctx.r10.s64 = ctx.r6.s64 + 10032;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4804
	ctx.r4.s64 = ctx.r9.s64 + 4804;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0930
	sub_824F0930(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,10040
	r11.s64 = ctx.r6.s64 + 10040;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,4784
	ctx.r4.s64 = ctx.r5.s64 + 4784;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0a60
	sub_824F0A60(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,10616
	ctx.r10.s64 = ctx.r7.s64 + 10616;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4768
	ctx.r4.s64 = ctx.r9.s64 + 4768;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0a60
	sub_824F0A60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11096
	ctx.r10.s64 = ctx.r6.s64 + 11096;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4752
	ctx.r4.s64 = ctx.r9.s64 + 4752;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0a60
	sub_824F0A60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,10248
	ctx.r10.s64 = ctx.r6.s64 + 10248;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4736
	ctx.r4.s64 = ctx.r9.s64 + 4736;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0a60
	sub_824F0A60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,10432
	r11.s64 = ctx.r6.s64 + 10432;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,4724
	ctx.r4.s64 = ctx.r5.s64 + 4724;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0a60
	sub_824F0A60(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r10,r7,10056
	ctx.r10.s64 = ctx.r7.s64 + 10056;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4700
	ctx.r4.s64 = ctx.r9.s64 + 4700;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0b68
	sub_824F0B68(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11336
	ctx.r10.s64 = ctx.r6.s64 + 11336;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r9,4684
	ctx.r4.s64 = ctx.r9.s64 + 4684;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0c70
	sub_824F0C70(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,12224
	ctx.r10.s64 = ctx.r6.s64 + 12224;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4652
	ctx.r4.s64 = ctx.r9.s64 + 4652;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,12400
	ctx.r10.s64 = ctx.r6.s64 + 12400;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4624
	ctx.r4.s64 = ctx.r9.s64 + 4624;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,12576
	ctx.r10.s64 = ctx.r6.s64 + 12576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4592
	ctx.r4.s64 = ctx.r9.s64 + 4592;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,12752
	ctx.r10.s64 = ctx.r6.s64 + 12752;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4560
	ctx.r4.s64 = ctx.r9.s64 + 4560;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,12928
	ctx.r10.s64 = ctx.r6.s64 + 12928;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4528
	ctx.r4.s64 = ctx.r9.s64 + 4528;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32171
	ctx.r5.s64 = -2108358656;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,13104
	r11.s64 = ctx.r5.s64 + 13104;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,4492
	ctx.r4.s64 = ctx.r4.s64 + 4492;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,13280
	ctx.r5.s64 = ctx.r8.s64 + 13280;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r4,4460
	ctx.r4.s64 = ctx.r4.s64 + 4460;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,13456
	ctx.r7.s64 = ctx.r9.s64 + 13456;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r4,r5,4428
	ctx.r4.s64 = ctx.r5.s64 + 4428;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,13632
	ctx.r8.s64 = ctx.r10.s64 + 13632;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,4392
	ctx.r4.s64 = ctx.r7.s64 + 4392;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,13808
	ctx.r8.s64 = ctx.r10.s64 + 13808;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,4360
	ctx.r4.s64 = ctx.r9.s64 + 4360;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r5,-32171
	ctx.r5.s64 = -2108358656;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r5,13984
	ctx.r10.s64 = ctx.r5.s64 + 13984;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,4332
	ctx.r4.s64 = ctx.r9.s64 + 4332;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,14160
	ctx.r10.s64 = ctx.r6.s64 + 14160;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4300
	ctx.r4.s64 = ctx.r9.s64 + 4300;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0800
	sub_824F0800(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,4284
	ctx.r4.s64 = ctx.r8.s64 + 4284;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfbb8
	sub_824DFBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f5a10
	if (cr6.eq) goto loc_824F5A10;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F5A10:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5a2c
	if (cr6.eq) goto loc_824F5A2C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f5a2c
	if (cr6.eq) goto loc_824F5A2C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F5A2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F5A30"))) PPC_WEAK_FUNC(sub_824F5A30);
PPC_FUNC_IMPL(__imp__sub_824F5A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F5A34"))) PPC_WEAK_FUNC(sub_824F5A34);
PPC_FUNC_IMPL(__imp__sub_824F5A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5A38"))) PPC_WEAK_FUNC(sub_824F5A38);
PPC_FUNC_IMPL(__imp__sub_824F5A38) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,5632
	r28.s64 = r11.s64 + 5632;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824db010
	sub_824DB010(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,32600
	ctx.r6.s64 = ctx.r7.s64 + 32600;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,5580
	ctx.r4.s64 = ctx.r10.s64 + 5580;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,25536
	ctx.r10.s64 = ctx.r7.s64 + 25536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5548
	ctx.r4.s64 = ctx.r9.s64 + 5548;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,26832
	ctx.r10.s64 = ctx.r6.s64 + 26832;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5512
	ctx.r4.s64 = ctx.r9.s64 + 5512;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eb090
	sub_824EB090(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,26800
	ctx.r4.s64 = ctx.r6.s64 + 26800;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,5476
	ctx.r4.s64 = r11.s64 + 5476;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1210
	sub_824F1210(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,25136
	ctx.r5.s64 = ctx.r8.s64 + 25136;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,5448
	ctx.r4.s64 = ctx.r4.s64 + 5448;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-31784
	ctx.r7.s64 = ctx.r9.s64 + -31784;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,5420
	ctx.r4.s64 = ctx.r5.s64 + 5420;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1318
	sub_824F1318(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,26064
	ctx.r8.s64 = ctx.r10.s64 + 26064;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,5396
	ctx.r4.s64 = ctx.r7.s64 + 5396;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eb1c0
	sub_824EB1C0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r4,29184
	ctx.r10.s64 = ctx.r4.s64 + 29184;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r11,5364
	ctx.r4.s64 = r11.s64 + 5364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eb1c0
	sub_824EB1C0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,29104
	ctx.r10.s64 = ctx.r6.s64 + 29104;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,5332
	ctx.r4.s64 = ctx.r9.s64 + 5332;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1420
	sub_824F1420(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25104
	ctx.r10.s64 = ctx.r6.s64 + 25104;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5308
	ctx.r4.s64 = ctx.r9.s64 + 5308;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1528
	sub_824F1528(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25392
	ctx.r10.s64 = ctx.r6.s64 + 25392;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5276
	ctx.r4.s64 = ctx.r9.s64 + 5276;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,25416
	r11.s64 = ctx.r6.s64 + 25416;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,5244
	ctx.r4.s64 = ctx.r5.s64 + 5244;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r7,25440
	ctx.r10.s64 = ctx.r7.s64 + 25440;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5212
	ctx.r4.s64 = ctx.r9.s64 + 5212;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25464
	ctx.r10.s64 = ctx.r6.s64 + 25464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,5180
	ctx.r4.s64 = ctx.r9.s64 + 5180;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25488
	ctx.r10.s64 = ctx.r6.s64 + 25488;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5144
	ctx.r4.s64 = ctx.r9.s64 + 5144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,25512
	r11.s64 = ctx.r6.s64 + 25512;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,5100
	ctx.r4.s64 = ctx.r5.s64 + 5100;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,25112
	ctx.r10.s64 = ctx.r7.s64 + 25112;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,5080
	ctx.r4.s64 = ctx.r9.s64 + 5080;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1528
	sub_824F1528(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25120
	ctx.r10.s64 = ctx.r6.s64 + 25120;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5056
	ctx.r4.s64 = ctx.r9.s64 + 5056;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1528
	sub_824F1528(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-26264
	ctx.r10.s64 = ctx.r6.s64 + -26264;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5032
	ctx.r4.s64 = ctx.r9.s64 + 5032;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-26112
	ctx.r10.s64 = ctx.r6.s64 + -26112;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5012
	ctx.r4.s64 = ctx.r9.s64 + 5012;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-25928
	ctx.r10.s64 = ctx.r6.s64 + -25928;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4984
	ctx.r4.s64 = ctx.r9.s64 + 4984;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-28032
	ctx.r10.s64 = ctx.r6.s64 + -28032;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4956
	ctx.r4.s64 = ctx.r9.s64 + 4956;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f10e0
	sub_824F10E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,26088
	ctx.r10.s64 = ctx.r6.s64 + 26088;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4940
	ctx.r4.s64 = ctx.r9.s64 + 4940;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1528
	sub_824F1528(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfcf0
	sub_824DFCF0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f60f0
	if (cr6.eq) goto loc_824F60F0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F60F0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f610c
	if (cr6.eq) goto loc_824F610C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f610c
	if (cr6.eq) goto loc_824F610C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F610C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F6110"))) PPC_WEAK_FUNC(sub_824F6110);
PPC_FUNC_IMPL(__imp__sub_824F6110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824F6114"))) PPC_WEAK_FUNC(sub_824F6114);
PPC_FUNC_IMPL(__imp__sub_824F6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6118"))) PPC_WEAK_FUNC(sub_824F6118);
PPC_FUNC_IMPL(__imp__sub_824F6118) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,5776
	ctx.r4.s64 = r11.s64 + 5776;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824cd048
	sub_824CD048(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,13536
	ctx.r6.s64 = ctx.r7.s64 + 13536;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,5756
	ctx.r4.s64 = ctx.r10.s64 + 5756;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f1630
	sub_824F1630(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,13512
	ctx.r10.s64 = ctx.r7.s64 + 13512;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5748
	ctx.r4.s64 = ctx.r9.s64 + 5748;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1738
	sub_824F1738(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,13560
	ctx.r10.s64 = ctx.r6.s64 + 13560;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5740
	ctx.r4.s64 = ctx.r9.s64 + 5740;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,13584
	r11.s64 = ctx.r6.s64 + 13584;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,5732
	ctx.r4.s64 = ctx.r5.s64 + 5732;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,13608
	ctx.r10.s64 = ctx.r7.s64 + 13608;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,-26128
	ctx.r4.s64 = ctx.r9.s64 + -26128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,13632
	ctx.r10.s64 = ctx.r6.s64 + 13632;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5724
	ctx.r4.s64 = ctx.r9.s64 + 5724;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,13656
	ctx.r10.s64 = ctx.r6.s64 + 13656;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5712
	ctx.r4.s64 = ctx.r9.s64 + 5712;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,13704
	r11.s64 = ctx.r6.s64 + 13704;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,5692
	ctx.r4.s64 = ctx.r5.s64 + 5692;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,13728
	ctx.r10.s64 = ctx.r7.s64 + 13728;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,5680
	ctx.r4.s64 = ctx.r9.s64 + 5680;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,13752
	ctx.r10.s64 = ctx.r6.s64 + 13752;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5664
	ctx.r4.s64 = ctx.r9.s64 + 5664;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1868
	sub_824F1868(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,5648
	ctx.r4.s64 = ctx.r8.s64 + 5648;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfd98
	sub_824DFD98(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f6490
	if (cr6.eq) goto loc_824F6490;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F6490:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f64ac
	if (cr6.eq) goto loc_824F64AC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f64ac
	if (cr6.eq) goto loc_824F64AC;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F64AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F64B0"))) PPC_WEAK_FUNC(sub_824F64B0);
PPC_FUNC_IMPL(__imp__sub_824F64B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F64B4"))) PPC_WEAK_FUNC(sub_824F64B4);
PPC_FUNC_IMPL(__imp__sub_824F64B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F64B8"))) PPC_WEAK_FUNC(sub_824F64B8);
PPC_FUNC_IMPL(__imp__sub_824F64B8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,5820
	r29.s64 = r11.s64 + 5820;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824cd138
	sub_824CD138(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r7,31632
	ctx.r6.s64 = ctx.r7.s64 + 31632;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,5792
	ctx.r4.s64 = ctx.r9.s64 + 5792;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f2358
	sub_824F2358(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfed0
	sub_824DFED0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f65f0
	if (cr6.eq) goto loc_824F65F0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F65F0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f660c
	if (cr6.eq) goto loc_824F660C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f660c
	if (cr6.eq) goto loc_824F660C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F660C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F6610"))) PPC_WEAK_FUNC(sub_824F6610);
PPC_FUNC_IMPL(__imp__sub_824F6610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824F6614"))) PPC_WEAK_FUNC(sub_824F6614);
PPC_FUNC_IMPL(__imp__sub_824F6614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6618"))) PPC_WEAK_FUNC(sub_824F6618);
PPC_FUNC_IMPL(__imp__sub_824F6618) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,5932
	ctx.r4.s64 = r11.s64 + 5932;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824ccd78
	sub_824CCD78(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,31576
	ctx.r6.s64 = ctx.r7.s64 + 31576;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,5916
	ctx.r4.s64 = ctx.r10.s64 + 5916;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ebf00
	sub_824EBF00(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-9424
	ctx.r10.s64 = ctx.r7.s64 + -9424;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5884
	ctx.r4.s64 = ctx.r9.s64 + 5884;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec008
	sub_824EC008(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31576
	ctx.r10.s64 = ctx.r6.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,5856
	ctx.r4.s64 = ctx.r9.s64 + 5856;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2568
	sub_824F2568(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,5844
	ctx.r4.s64 = ctx.r8.s64 + 5844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df270
	sub_824DF270(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f67d0
	if (cr6.eq) goto loc_824F67D0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F67D0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f67ec
	if (cr6.eq) goto loc_824F67EC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f67ec
	if (cr6.eq) goto loc_824F67EC;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F67EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F67F0"))) PPC_WEAK_FUNC(sub_824F67F0);
PPC_FUNC_IMPL(__imp__sub_824F67F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F67F4"))) PPC_WEAK_FUNC(sub_824F67F4);
PPC_FUNC_IMPL(__imp__sub_824F67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F67F8"))) PPC_WEAK_FUNC(sub_824F67F8);
PPC_FUNC_IMPL(__imp__sub_824F67F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,7780
	ctx.r4.s64 = r11.s64 + 7780;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824daa70
	sub_824DAA70(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,7432
	ctx.r6.s64 = ctx.r7.s64 + 7432;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,7764
	ctx.r4.s64 = ctx.r10.s64 + 7764;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ec268
	sub_824EC268(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-7488
	ctx.r10.s64 = ctx.r7.s64 + -7488;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7740
	ctx.r4.s64 = ctx.r9.s64 + 7740;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,760
	ctx.r10.s64 = ctx.r6.s64 + 760;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7724
	ctx.r4.s64 = ctx.r9.s64 + 7724;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-4488
	r11.s64 = ctx.r6.s64 + -4488;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,7696
	ctx.r4.s64 = ctx.r5.s64 + 7696;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-8952
	ctx.r10.s64 = ctx.r7.s64 + -8952;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,-28272
	ctx.r4.s64 = ctx.r9.s64 + -28272;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-7400
	ctx.r10.s64 = ctx.r6.s64 + -7400;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7672
	ctx.r4.s64 = ctx.r9.s64 + 7672;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-6296
	ctx.r10.s64 = ctx.r6.s64 + -6296;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7640
	ctx.r4.s64 = ctx.r9.s64 + 7640;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec700
	sub_824EC700(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,296
	r11.s64 = ctx.r6.s64 + 296;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,7616
	ctx.r4.s64 = ctx.r5.s64 + 7616;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-9176
	ctx.r10.s64 = ctx.r7.s64 + -9176;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7608
	ctx.r4.s64 = ctx.r9.s64 + 7608;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9064
	ctx.r10.s64 = ctx.r6.s64 + -9064;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7588
	ctx.r4.s64 = ctx.r9.s64 + 7588;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9168
	ctx.r10.s64 = ctx.r6.s64 + -9168;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7572
	ctx.r4.s64 = ctx.r9.s64 + 7572;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-9160
	r11.s64 = ctx.r6.s64 + -9160;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,7552
	ctx.r4.s64 = ctx.r5.s64 + 7552;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r10,r7,11632
	ctx.r10.s64 = ctx.r7.s64 + 11632;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7532
	ctx.r4.s64 = ctx.r9.s64 + 7532;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,1808
	ctx.r10.s64 = ctx.r6.s64 + 1808;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r9,7516
	ctx.r4.s64 = ctx.r9.s64 + 7516;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-2296
	ctx.r10.s64 = ctx.r6.s64 + -2296;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7504
	ctx.r4.s64 = ctx.r9.s64 + 7504;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-1768
	ctx.r10.s64 = ctx.r6.s64 + -1768;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7492
	ctx.r4.s64 = ctx.r9.s64 + 7492;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-168
	ctx.r10.s64 = ctx.r6.s64 + -168;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7480
	ctx.r4.s64 = ctx.r9.s64 + 7480;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-864
	ctx.r10.s64 = ctx.r6.s64 + -864;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7456
	ctx.r4.s64 = ctx.r9.s64 + 7456;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-536
	ctx.r10.s64 = ctx.r6.s64 + -536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7432
	ctx.r4.s64 = ctx.r9.s64 + 7432;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,2008
	r11.s64 = ctx.r5.s64 + 2008;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,7420
	ctx.r4.s64 = ctx.r4.s64 + 7420;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,1896
	ctx.r5.s64 = ctx.r8.s64 + 1896;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r4,7396
	ctx.r4.s64 = ctx.r4.s64 + 7396;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-7152
	ctx.r7.s64 = ctx.r9.s64 + -7152;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r4,r5,7380
	ctx.r4.s64 = ctx.r5.s64 + 7380;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-7248
	ctx.r8.s64 = ctx.r10.s64 + -7248;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,7364
	ctx.r4.s64 = ctx.r7.s64 + 7364;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec808
	sub_824EC808(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-2632
	ctx.r8.s64 = ctx.r10.s64 + -2632;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,7348
	ctx.r4.s64 = ctx.r9.s64 + 7348;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r5,-2464
	ctx.r10.s64 = ctx.r5.s64 + -2464;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,7332
	ctx.r4.s64 = ctx.r9.s64 + 7332;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-4464
	ctx.r10.s64 = ctx.r6.s64 + -4464;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7316
	ctx.r4.s64 = ctx.r9.s64 + 7316;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec910
	sub_824EC910(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-4352
	ctx.r10.s64 = ctx.r6.s64 + -4352;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7292
	ctx.r4.s64 = ctx.r9.s64 + 7292;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eca18
	sub_824ECA18(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,-8088
	r11.s64 = ctx.r5.s64 + -8088;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r28,r4,7280
	r28.s64 = ctx.r4.s64 + 7280;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecb20
	sub_824ECB20(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-7856
	ctx.r5.s64 = ctx.r8.s64 + -7856;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecc28
	sub_824ECC28(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-7080
	ctx.r8.s64 = ctx.r10.s64 + -7080;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r7,7264
	ctx.r4.s64 = ctx.r7.s64 + 7264;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2670
	sub_824F2670(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r4,-7792
	ctx.r10.s64 = ctx.r4.s64 + -7792;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7248
	ctx.r4.s64 = ctx.r9.s64 + 7248;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2778
	sub_824F2778(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,-7776
	r11.s64 = ctx.r5.s64 + -7776;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,7224
	ctx.r4.s64 = ctx.r4.s64 + 7224;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec910
	sub_824EC910(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,2320
	ctx.r5.s64 = ctx.r8.s64 + 2320;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,7204
	ctx.r4.s64 = ctx.r4.s64 + 7204;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec910
	sub_824EC910(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,2464
	ctx.r7.s64 = ctx.r9.s64 + 2464;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,7184
	ctx.r4.s64 = ctx.r5.s64 + 7184;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-4240
	ctx.r8.s64 = ctx.r10.s64 + -4240;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r7,7168
	ctx.r4.s64 = ctx.r7.s64 + 7168;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecd30
	sub_824ECD30(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r4,-6728
	ctx.r10.s64 = ctx.r4.s64 + -6728;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7156
	ctx.r4.s64 = ctx.r9.s64 + 7156;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-7536
	ctx.r10.s64 = ctx.r6.s64 + -7536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7140
	ctx.r4.s64 = ctx.r9.s64 + 7140;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,-7520
	ctx.r10.s64 = ctx.r6.s64 + -7520;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,7120
	ctx.r4.s64 = ctx.r9.s64 + 7120;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9152
	ctx.r10.s64 = ctx.r6.s64 + -9152;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7108
	ctx.r4.s64 = ctx.r9.s64 + 7108;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ece38
	sub_824ECE38(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-7504
	ctx.r10.s64 = ctx.r6.s64 + -7504;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7088
	ctx.r4.s64 = ctx.r9.s64 + 7088;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ece38
	sub_824ECE38(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9376
	ctx.r10.s64 = ctx.r6.s64 + -9376;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7068
	ctx.r4.s64 = ctx.r9.s64 + 7068;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9360
	ctx.r10.s64 = ctx.r6.s64 + -9360;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7044
	ctx.r4.s64 = ctx.r9.s64 + 7044;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9216
	ctx.r10.s64 = ctx.r6.s64 + -9216;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7016
	ctx.r4.s64 = ctx.r9.s64 + 7016;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9184
	ctx.r10.s64 = ctx.r6.s64 + -9184;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6984
	ctx.r4.s64 = ctx.r9.s64 + 6984;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-2976
	ctx.r10.s64 = ctx.r6.s64 + -2976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6956
	ctx.r4.s64 = ctx.r9.s64 + 6956;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-2800
	ctx.r10.s64 = ctx.r6.s64 + -2800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6928
	ctx.r4.s64 = ctx.r9.s64 + 6928;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,4168
	ctx.r10.s64 = ctx.r6.s64 + 4168;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,6892
	ctx.r4.s64 = ctx.r9.s64 + 6892;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8912
	ctx.r10.s64 = ctx.r6.s64 + -8912;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6860
	ctx.r4.s64 = ctx.r9.s64 + 6860;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8880
	ctx.r10.s64 = ctx.r6.s64 + -8880;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6840
	ctx.r4.s64 = ctx.r9.s64 + 6840;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-7408
	ctx.r10.s64 = ctx.r6.s64 + -7408;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6820
	ctx.r4.s64 = ctx.r9.s64 + 6820;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8872
	ctx.r10.s64 = ctx.r6.s64 + -8872;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6796
	ctx.r4.s64 = ctx.r9.s64 + 6796;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8856
	ctx.r10.s64 = ctx.r6.s64 + -8856;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,6772
	ctx.r4.s64 = ctx.r9.s64 + 6772;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-7760
	ctx.r5.s64 = ctx.r8.s64 + -7760;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r10,6756
	ctx.r4.s64 = ctx.r10.s64 + 6756;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2880
	sub_824F2880(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-7656
	ctx.r10.s64 = ctx.r7.s64 + -7656;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,6736
	ctx.r4.s64 = ctx.r9.s64 + 6736;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec910
	sub_824EC910(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-5824
	ctx.r10.s64 = ctx.r6.s64 + -5824;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,6720
	ctx.r4.s64 = ctx.r9.s64 + 6720;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8872
	ctx.r10.s64 = ctx.r6.s64 + 8872;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,6696
	ctx.r4.s64 = ctx.r9.s64 + 6696;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r7,8880
	ctx.r5.s64 = ctx.r7.s64 + 8880;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r10,6672
	ctx.r4.s64 = ctx.r10.s64 + 6672;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,8888
	ctx.r10.s64 = ctx.r7.s64 + 8888;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6652
	ctx.r4.s64 = ctx.r9.s64 + 6652;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9280
	ctx.r10.s64 = ctx.r6.s64 + -9280;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6620
	ctx.r4.s64 = ctx.r9.s64 + 6620;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-9320
	ctx.r10.s64 = ctx.r6.s64 + -9320;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6596
	ctx.r4.s64 = ctx.r9.s64 + 6596;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eca18
	sub_824ECA18(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r7,-9312
	ctx.r5.s64 = ctx.r7.s64 + -9312;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r10,6568
	ctx.r4.s64 = ctx.r10.s64 + 6568;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eaaa0
	sub_824EAAA0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-8504
	ctx.r10.s64 = ctx.r7.s64 + -8504;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6544
	ctx.r4.s64 = ctx.r9.s64 + 6544;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8976
	ctx.r10.s64 = ctx.r6.s64 + 8976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6512
	ctx.r4.s64 = ctx.r9.s64 + 6512;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecf40
	sub_824ECF40(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r6,-32211
	ctx.r6.s64 = -2110980096;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9632
	ctx.r10.s64 = ctx.r6.s64 + 9632;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6484
	ctx.r4.s64 = ctx.r9.s64 + 6484;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecf40
	sub_824ECF40(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r5,r6,8984
	ctx.r5.s64 = ctx.r6.s64 + 8984;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r10,6456
	ctx.r4.s64 = ctx.r10.s64 + 6456;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecf40
	sub_824ECF40(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32147
	ctx.r7.s64 = -2106785792;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-24984
	ctx.r10.s64 = ctx.r7.s64 + -24984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6428
	ctx.r4.s64 = ctx.r9.s64 + 6428;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecf40
	sub_824ECF40(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8992
	ctx.r10.s64 = ctx.r6.s64 + 8992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6396
	ctx.r4.s64 = ctx.r9.s64 + 6396;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed070
	sub_824ED070(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9000
	ctx.r10.s64 = ctx.r6.s64 + 9000;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,6364
	ctx.r4.s64 = ctx.r9.s64 + 6364;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed070
	sub_824ED070(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r5,r6,-6656
	ctx.r5.s64 = ctx.r6.s64 + -6656;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r10,6352
	ctx.r4.s64 = ctx.r10.s64 + 6352;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,2544
	ctx.r10.s64 = ctx.r7.s64 + 2544;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6304
	ctx.r4.s64 = ctx.r9.s64 + 6304;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2988
	sub_824F2988(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,3640
	ctx.r10.s64 = ctx.r6.s64 + 3640;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6284
	ctx.r4.s64 = ctx.r9.s64 + 6284;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ece38
	sub_824ECE38(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,4016
	ctx.r10.s64 = ctx.r6.s64 + 4016;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,6260
	ctx.r4.s64 = ctx.r9.s64 + 6260;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,-8848
	ctx.r4.s64 = ctx.r6.s64 + -8848;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r11,6236
	ctx.r4.s64 = r11.s64 + 6236;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-8840
	ctx.r5.s64 = ctx.r8.s64 + -8840;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,6208
	ctx.r4.s64 = ctx.r4.s64 + 6208;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec370
	sub_824EC370(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-5696
	ctx.r7.s64 = ctx.r9.s64 + -5696;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,6184
	ctx.r4.s64 = ctx.r5.s64 + 6184;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed1a0
	sub_824ED1A0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-5624
	ctx.r8.s64 = ctx.r10.s64 + -5624;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,6156
	ctx.r4.s64 = ctx.r7.s64 + 6156;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ecf40
	sub_824ECF40(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r10,r4,-8672
	ctx.r10.s64 = ctx.r4.s64 + -8672;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6132
	ctx.r4.s64 = ctx.r9.s64 + 6132;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8664
	ctx.r10.s64 = ctx.r6.s64 + -8664;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6108
	ctx.r4.s64 = ctx.r9.s64 + 6108;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8656
	ctx.r10.s64 = ctx.r6.s64 + -8656;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,6080
	ctx.r4.s64 = ctx.r9.s64 + 6080;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-8648
	ctx.r10.s64 = ctx.r6.s64 + -8648;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,6056
	ctx.r4.s64 = ctx.r9.s64 + 6056;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r5,-8640
	ctx.r4.s64 = ctx.r5.s64 + -8640;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r11,6028
	ctx.r4.s64 = r11.s64 + 6028;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-8632
	ctx.r5.s64 = ctx.r8.s64 + -8632;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,6000
	ctx.r4.s64 = ctx.r4.s64 + 6000;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,8896
	ctx.r7.s64 = ctx.r9.s64 + 8896;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r4,r5,5984
	ctx.r4.s64 = ctx.r5.s64 + 5984;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,8936
	ctx.r8.s64 = ctx.r10.s64 + 8936;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,5968
	ctx.r4.s64 = ctx.r7.s64 + 5968;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec5d0
	sub_824EC5D0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r4,-8624
	ctx.r10.s64 = ctx.r4.s64 + -8624;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r4,r11,5944
	ctx.r4.s64 = r11.s64 + 5944;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ec4a0
	sub_824EC4A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,14000
	ctx.r4.s64 = ctx.r8.s64 + 14000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df390
	sub_824DF390(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f7e30
	if (cr6.eq) goto loc_824F7E30;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F7E30:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f7e4c
	if (cr6.eq) goto loc_824F7E4C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f7e4c
	if (cr6.eq) goto loc_824F7E4C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F7E4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F7E50"))) PPC_WEAK_FUNC(sub_824F7E50);
PPC_FUNC_IMPL(__imp__sub_824F7E50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824F7E54"))) PPC_WEAK_FUNC(sub_824F7E54);
PPC_FUNC_IMPL(__imp__sub_824F7E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7E58"))) PPC_WEAK_FUNC(sub_824F7E58);
PPC_FUNC_IMPL(__imp__sub_824F7E58) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,9684
	ctx.r4.s64 = r11.s64 + 9684;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824daae8
	sub_824DAAE8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,32240
	ctx.r6.s64 = ctx.r7.s64 + 32240;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,9656
	ctx.r4.s64 = ctx.r10.s64 + 9656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-20856
	ctx.r10.s64 = ctx.r7.s64 + -20856;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9644
	ctx.r4.s64 = ctx.r9.s64 + 9644;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,32560
	ctx.r10.s64 = ctx.r6.s64 + 32560;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9616
	ctx.r4.s64 = ctx.r9.s64 + 9616;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,32736
	r11.s64 = ctx.r6.s64 + 32736;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,9592
	ctx.r4.s64 = ctx.r5.s64 + 9592;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed400
	sub_824ED400(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,32016
	ctx.r10.s64 = ctx.r7.s64 + 32016;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,9576
	ctx.r4.s64 = ctx.r9.s64 + 9576;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-22688
	ctx.r10.s64 = ctx.r6.s64 + -22688;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9568
	ctx.r4.s64 = ctx.r9.s64 + 9568;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-26912
	ctx.r10.s64 = ctx.r6.s64 + -26912;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9556
	ctx.r4.s64 = ctx.r9.s64 + 9556;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-26624
	r11.s64 = ctx.r6.s64 + -26624;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,9532
	ctx.r4.s64 = ctx.r5.s64 + 9532;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-25688
	ctx.r10.s64 = ctx.r7.s64 + -25688;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,9508
	ctx.r4.s64 = ctx.r9.s64 + 9508;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-12952
	ctx.r10.s64 = ctx.r6.s64 + -12952;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,23296
	ctx.r4.s64 = ctx.r9.s64 + 23296;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-25136
	ctx.r10.s64 = ctx.r6.s64 + -25136;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9484
	ctx.r4.s64 = ctx.r9.s64 + 9484;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-27928
	r11.s64 = ctx.r6.s64 + -27928;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,9464
	ctx.r4.s64 = ctx.r5.s64 + 9464;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// addi r10,r7,-22456
	ctx.r10.s64 = ctx.r7.s64 + -22456;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9444
	ctx.r4.s64 = ctx.r9.s64 + 9444;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-27216
	ctx.r10.s64 = ctx.r6.s64 + -27216;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r9,9428
	ctx.r4.s64 = ctx.r9.s64 + 9428;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-24872
	ctx.r10.s64 = ctx.r6.s64 + -24872;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9416
	ctx.r4.s64 = ctx.r9.s64 + 9416;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9032
	ctx.r10.s64 = ctx.r6.s64 + 9032;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9404
	ctx.r4.s64 = ctx.r9.s64 + 9404;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-21552
	ctx.r10.s64 = ctx.r6.s64 + -21552;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9388
	ctx.r4.s64 = ctx.r9.s64 + 9388;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed870
	sub_824ED870(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-24456
	ctx.r10.s64 = ctx.r6.s64 + -24456;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9368
	ctx.r4.s64 = ctx.r9.s64 + 9368;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-16112
	ctx.r10.s64 = ctx.r6.s64 + -16112;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9356
	ctx.r4.s64 = ctx.r9.s64 + 9356;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed978
	sub_824ED978(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32174
	ctx.r5.s64 = -2108555264;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,-24216
	r11.s64 = ctx.r5.s64 + -24216;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,9340
	ctx.r4.s64 = ctx.r4.s64 + 9340;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-23976
	ctx.r5.s64 = ctx.r8.s64 + -23976;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r4,9324
	ctx.r4.s64 = ctx.r4.s64 + 9324;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-32144
	ctx.r7.s64 = ctx.r9.s64 + -32144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r4,r5,9304
	ctx.r4.s64 = ctx.r5.s64 + 9304;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-32264
	ctx.r8.s64 = ctx.r10.s64 + -32264;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,9284
	ctx.r4.s64 = ctx.r7.s64 + 9284;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-32640
	ctx.r8.s64 = ctx.r10.s64 + -32640;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,9264
	ctx.r4.s64 = ctx.r9.s64 + 9264;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r5,-32174
	ctx.r5.s64 = -2108555264;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r5,-32384
	ctx.r10.s64 = ctx.r5.s64 + -32384;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,9240
	ctx.r4.s64 = ctx.r9.s64 + 9240;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-32504
	ctx.r10.s64 = ctx.r6.s64 + -32504;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,9216
	ctx.r4.s64 = ctx.r9.s64 + 9216;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-22560
	ctx.r10.s64 = ctx.r6.s64 + -22560;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9204
	ctx.r4.s64 = ctx.r9.s64 + 9204;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,30672
	r11.s64 = ctx.r5.s64 + 30672;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,9188
	ctx.r4.s64 = ctx.r4.s64 + 9188;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-13712
	ctx.r5.s64 = ctx.r8.s64 + -13712;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,9152
	ctx.r4.s64 = ctx.r4.s64 + 9152;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,32008
	ctx.r7.s64 = ctx.r9.s64 + 32008;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r5,9120
	ctx.r4.s64 = ctx.r5.s64 + 9120;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-31784
	ctx.r8.s64 = ctx.r10.s64 + -31784;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,9100
	ctx.r4.s64 = ctx.r7.s64 + 9100;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2a90
	sub_824F2A90(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-32024
	ctx.r8.s64 = ctx.r10.s64 + -32024;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,9076
	ctx.r4.s64 = ctx.r9.s64 + 9076;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r5,-32174
	ctx.r5.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r5,-31904
	ctx.r10.s64 = ctx.r5.s64 + -31904;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9048
	ctx.r4.s64 = ctx.r9.s64 + 9048;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,30984
	ctx.r10.s64 = ctx.r6.s64 + 30984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,9028
	ctx.r4.s64 = ctx.r9.s64 + 9028;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r6,31032
	ctx.r4.s64 = ctx.r6.s64 + 31032;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r28,r5,9004
	r28.s64 = ctx.r5.s64 + 9004;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r5,r7,31048
	ctx.r5.s64 = ctx.r7.s64 + 31048;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r27,r6,8976
	r27.s64 = ctx.r6.s64 + 8976;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,31112
	ctx.r8.s64 = ctx.r10.s64 + 31112;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,8948
	ctx.r4.s64 = ctx.r7.s64 + 8948;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r4,31128
	ctx.r10.s64 = ctx.r4.s64 + 31128;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,8924
	ctx.r4.s64 = ctx.r9.s64 + 8924;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31000
	ctx.r10.s64 = ctx.r6.s64 + 31000;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8900
	ctx.r4.s64 = ctx.r9.s64 + 8900;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,31016
	r11.s64 = ctx.r5.s64 + 31016;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,8876
	ctx.r4.s64 = ctx.r4.s64 + 8876;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,31160
	ctx.r5.s64 = ctx.r8.s64 + 31160;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,8856
	ctx.r4.s64 = ctx.r4.s64 + 8856;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r7,r9,31144
	ctx.r7.s64 = ctx.r9.s64 + 31144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r4,r5,8836
	ctx.r4.s64 = ctx.r5.s64 + 8836;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,31176
	ctx.r8.s64 = ctx.r10.s64 + 31176;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r7,8816
	ctx.r4.s64 = ctx.r7.s64 + 8816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r4,31760
	ctx.r10.s64 = ctx.r4.s64 + 31760;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8804
	ctx.r4.s64 = ctx.r9.s64 + 8804;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31648
	ctx.r10.s64 = ctx.r6.s64 + 31648;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8788
	ctx.r4.s64 = ctx.r9.s64 + 8788;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edaa8
	sub_824EDAA8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31656
	ctx.r10.s64 = ctx.r6.s64 + 31656;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8768
	ctx.r4.s64 = ctx.r9.s64 + 8768;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r10,r6,31664
	ctx.r10.s64 = ctx.r6.s64 + 31664;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8744
	ctx.r4.s64 = ctx.r9.s64 + 8744;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edbb0
	sub_824EDBB0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17464
	ctx.r10.s64 = ctx.r6.s64 + -17464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8728
	ctx.r4.s64 = ctx.r9.s64 + 8728;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31192
	ctx.r10.s64 = ctx.r6.s64 + 31192;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31320
	ctx.r10.s64 = ctx.r6.s64 + 31320;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8692
	ctx.r4.s64 = ctx.r9.s64 + 8692;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31464
	ctx.r10.s64 = ctx.r6.s64 + 31464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8672
	ctx.r4.s64 = ctx.r9.s64 + 8672;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31496
	ctx.r10.s64 = ctx.r6.s64 + 31496;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8648
	ctx.r4.s64 = ctx.r9.s64 + 8648;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31528
	ctx.r10.s64 = ctx.r6.s64 + 31528;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8632
	ctx.r4.s64 = ctx.r9.s64 + 8632;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31432
	ctx.r10.s64 = ctx.r6.s64 + 31432;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8616
	ctx.r4.s64 = ctx.r9.s64 + 8616;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,31256
	ctx.r10.s64 = ctx.r6.s64 + 31256;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,8600
	ctx.r4.s64 = ctx.r9.s64 + 8600;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31288
	ctx.r10.s64 = ctx.r6.s64 + 31288;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8576
	ctx.r4.s64 = ctx.r9.s64 + 8576;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r6,31224
	ctx.r5.s64 = ctx.r6.s64 + 31224;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r10,8556
	ctx.r4.s64 = ctx.r10.s64 + 8556;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31400
	ctx.r10.s64 = ctx.r7.s64 + 31400;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8536
	ctx.r4.s64 = ctx.r9.s64 + 8536;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r10,r6,-28960
	ctx.r10.s64 = ctx.r6.s64 + -28960;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,8508
	ctx.r4.s64 = ctx.r9.s64 + 8508;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edbb0
	sub_824EDBB0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-22464
	ctx.r10.s64 = ctx.r6.s64 + -22464;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8472
	ctx.r4.s64 = ctx.r9.s64 + 8472;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edbb0
	sub_824EDBB0(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-28560
	ctx.r5.s64 = ctx.r8.s64 + -28560;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r10,8432
	ctx.r4.s64 = ctx.r10.s64 + 8432;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edbb0
	sub_824EDBB0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31592
	ctx.r10.s64 = ctx.r7.s64 + 31592;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8408
	ctx.r4.s64 = ctx.r9.s64 + 8408;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31736
	ctx.r10.s64 = ctx.r6.s64 + 31736;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8380
	ctx.r4.s64 = ctx.r9.s64 + 8380;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31744
	ctx.r10.s64 = ctx.r6.s64 + 31744;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8344
	ctx.r4.s64 = ctx.r9.s64 + 8344;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r7,31752
	ctx.r5.s64 = ctx.r7.s64 + 31752;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r10,8320
	ctx.r4.s64 = ctx.r10.s64 + 8320;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edce0
	sub_824EDCE0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31776
	ctx.r10.s64 = ctx.r7.s64 + 31776;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8292
	ctx.r4.s64 = ctx.r9.s64 + 8292;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eabd0
	sub_824EABD0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31848
	ctx.r10.s64 = ctx.r6.s64 + 31848;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8264
	ctx.r4.s64 = ctx.r9.s64 + 8264;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eabd0
	sub_824EABD0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-11536
	ctx.r10.s64 = ctx.r6.s64 + -11536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,8232
	ctx.r4.s64 = ctx.r9.s64 + 8232;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r7,-13328
	ctx.r5.s64 = ctx.r7.s64 + -13328;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r10,8196
	ctx.r4.s64 = ctx.r10.s64 + 8196;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-26336
	ctx.r10.s64 = ctx.r7.s64 + -26336;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8156
	ctx.r4.s64 = ctx.r9.s64 + 8156;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edce0
	sub_824EDCE0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-26056
	ctx.r10.s64 = ctx.r6.s64 + -26056;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8128
	ctx.r4.s64 = ctx.r9.s64 + 8128;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed508
	sub_824ED508(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,32032
	ctx.r10.s64 = ctx.r6.s64 + 32032;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,8092
	ctx.r4.s64 = ctx.r9.s64 + 8092;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed638
	sub_824ED638(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r5,r6,-25728
	ctx.r5.s64 = ctx.r6.s64 + -25728;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r10,8072
	ctx.r4.s64 = ctx.r10.s64 + 8072;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31032
	ctx.r10.s64 = ctx.r7.s64 + 31032;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31048
	ctx.r10.s64 = ctx.r7.s64 + 31048;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,31096
	ctx.r10.s64 = ctx.r7.s64 + 31096;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,8040
	ctx.r4.s64 = ctx.r9.s64 + 8040;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r6,31064
	ctx.r4.s64 = ctx.r6.s64 + 31064;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r11,8016
	ctx.r4.s64 = r11.s64 + 8016;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,31080
	ctx.r5.s64 = ctx.r8.s64 + 31080;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,7992
	ctx.r4.s64 = ctx.r4.s64 + 7992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed740
	sub_824ED740(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,32328
	ctx.r7.s64 = ctx.r9.s64 + 32328;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,7968
	ctx.r4.s64 = ctx.r5.s64 + 7968;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,30872
	ctx.r8.s64 = ctx.r10.s64 + 30872;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,7944
	ctx.r4.s64 = ctx.r7.s64 + 7944;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r10,r11,-29696
	ctx.r10.s64 = r11.s64 + -29696;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r9,7924
	ctx.r4.s64 = ctx.r9.s64 + 7924;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ead00
	sub_824EAD00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-29440
	ctx.r10.s64 = ctx.r6.s64 + -29440;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7904
	ctx.r4.s64 = ctx.r9.s64 + 7904;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edde8
	sub_824EDDE8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-21952
	ctx.r10.s64 = ctx.r6.s64 + -21952;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7888
	ctx.r4.s64 = ctx.r9.s64 + 7888;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eae30
	sub_824EAE30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9024
	ctx.r10.s64 = ctx.r6.s64 + 9024;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7876
	ctx.r4.s64 = ctx.r9.s64 + 7876;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eae30
	sub_824EAE30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,30752
	r11.s64 = ctx.r6.s64 + 30752;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,7864
	ctx.r4.s64 = ctx.r5.s64 + 7864;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ed2d0
	sub_824ED2D0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,32024
	ctx.r10.s64 = ctx.r7.s64 + 32024;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7852
	ctx.r4.s64 = ctx.r9.s64 + 7852;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eaf60
	sub_824EAF60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,30680
	ctx.r10.s64 = ctx.r6.s64 + 30680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7832
	ctx.r4.s64 = ctx.r9.s64 + 7832;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edbb0
	sub_824EDBB0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,30712
	ctx.r10.s64 = ctx.r6.s64 + 30712;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,7804
	ctx.r4.s64 = ctx.r9.s64 + 7804;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edbb0
	sub_824EDBB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,7792
	ctx.r4.s64 = ctx.r8.s64 + 7792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df420
	sub_824DF420(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f9550
	if (cr6.eq) goto loc_824F9550;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F9550:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f956c
	if (cr6.eq) goto loc_824F956C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f956c
	if (cr6.eq) goto loc_824F956C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F956C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F9570"))) PPC_WEAK_FUNC(sub_824F9570);
PPC_FUNC_IMPL(__imp__sub_824F9570) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824F9574"))) PPC_WEAK_FUNC(sub_824F9574);
PPC_FUNC_IMPL(__imp__sub_824F9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F9578"))) PPC_WEAK_FUNC(sub_824F9578);
PPC_FUNC_IMPL(__imp__sub_824F9578) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,9812
	r28.s64 = r11.s64 + 9812;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dab60
	sub_824DAB60(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-16008
	ctx.r6.s64 = ctx.r7.s64 + -16008;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,9780
	ctx.r4.s64 = ctx.r10.s64 + 9780;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f2b98
	sub_824F2B98(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17944
	ctx.r10.s64 = ctx.r7.s64 + -17944;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9748
	ctx.r4.s64 = ctx.r9.s64 + 9748;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2ca0
	sub_824F2CA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-15640
	ctx.r10.s64 = ctx.r6.s64 + -15640;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9720
	ctx.r4.s64 = ctx.r9.s64 + 9720;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2da8
	sub_824F2DA8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,-17952
	ctx.r4.s64 = ctx.r6.s64 + -17952;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,9704
	ctx.r4.s64 = r11.s64 + 9704;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824edef0
	sub_824EDEF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df4b0
	sub_824DF4B0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f9770
	if (cr6.eq) goto loc_824F9770;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F9770:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f978c
	if (cr6.eq) goto loc_824F978C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f978c
	if (cr6.eq) goto loc_824F978C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F978C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F9790"))) PPC_WEAK_FUNC(sub_824F9790);
PPC_FUNC_IMPL(__imp__sub_824F9790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824F9794"))) PPC_WEAK_FUNC(sub_824F9794);
PPC_FUNC_IMPL(__imp__sub_824F9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F9798"))) PPC_WEAK_FUNC(sub_824F9798);
PPC_FUNC_IMPL(__imp__sub_824F9798) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,9996
	r28.s64 = r11.s64 + 9996;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dabd8
	sub_824DABD8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-26544
	ctx.r6.s64 = ctx.r7.s64 + -26544;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,9972
	ctx.r4.s64 = ctx.r10.s64 + 9972;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f2eb0
	sub_824F2EB0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-23512
	ctx.r10.s64 = ctx.r7.s64 + -23512;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9944
	ctx.r4.s64 = ctx.r9.s64 + 9944;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2fb8
	sub_824F2FB8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-25256
	ctx.r10.s64 = ctx.r6.s64 + -25256;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9912
	ctx.r4.s64 = ctx.r9.s64 + 9912;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee020
	sub_824EE020(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,-25112
	ctx.r4.s64 = ctx.r6.s64 + -25112;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,9880
	ctx.r4.s64 = r11.s64 + 9880;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee128
	sub_824EE128(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-26568
	ctx.r5.s64 = ctx.r8.s64 + -26568;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,9860
	ctx.r4.s64 = ctx.r4.s64 + 9860;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee230
	sub_824EE230(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-24992
	ctx.r7.s64 = ctx.r9.s64 + -24992;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,9832
	ctx.r4.s64 = ctx.r5.s64 + 9832;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f30c0
	sub_824F30C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df540
	sub_824DF540(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f9a10
	if (cr6.eq) goto loc_824F9A10;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F9A10:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f9a2c
	if (cr6.eq) goto loc_824F9A2C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f9a2c
	if (cr6.eq) goto loc_824F9A2C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F9A2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F9A30"))) PPC_WEAK_FUNC(sub_824F9A30);
PPC_FUNC_IMPL(__imp__sub_824F9A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824F9A34"))) PPC_WEAK_FUNC(sub_824F9A34);
PPC_FUNC_IMPL(__imp__sub_824F9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F9A38"))) PPC_WEAK_FUNC(sub_824F9A38);
PPC_FUNC_IMPL(__imp__sub_824F9A38) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,10268
	r28.s64 = r11.s64 + 10268;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dac50
	sub_824DAC50(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-29704
	ctx.r6.s64 = ctx.r7.s64 + -29704;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,10248
	ctx.r4.s64 = ctx.r10.s64 + 10248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f31c8
	sub_824F31C8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-30712
	ctx.r10.s64 = ctx.r7.s64 + -30712;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10216
	ctx.r4.s64 = ctx.r9.s64 + 10216;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f31c8
	sub_824F31C8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-31760
	ctx.r10.s64 = ctx.r6.s64 + -31760;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10188
	ctx.r4.s64 = ctx.r9.s64 + 10188;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee338
	sub_824EE338(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,-31752
	ctx.r4.s64 = ctx.r6.s64 + -31752;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,10164
	ctx.r4.s64 = r11.s64 + 10164;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee338
	sub_824EE338(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-29296
	ctx.r5.s64 = ctx.r8.s64 + -29296;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,10136
	ctx.r4.s64 = ctx.r4.s64 + 10136;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee468
	sub_824EE468(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-30424
	ctx.r7.s64 = ctx.r9.s64 + -30424;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,10116
	ctx.r4.s64 = ctx.r5.s64 + 10116;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee570
	sub_824EE570(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-30272
	ctx.r8.s64 = ctx.r10.s64 + -30272;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,10092
	ctx.r4.s64 = ctx.r7.s64 + 10092;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee468
	sub_824EE468(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r4,-28888
	ctx.r10.s64 = ctx.r4.s64 + -28888;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r11,10068
	ctx.r4.s64 = r11.s64 + 10068;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee468
	sub_824EE468(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-29960
	ctx.r10.s64 = ctx.r6.s64 + -29960;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10044
	ctx.r4.s64 = ctx.r9.s64 + 10044;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f32d0
	sub_824F32D0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-28472
	ctx.r10.s64 = ctx.r6.s64 + -28472;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10020
	ctx.r4.s64 = ctx.r9.s64 + 10020;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f33d8
	sub_824F33D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df5d0
	sub_824DF5D0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824f9db0
	if (cr6.eq) goto loc_824F9DB0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824F9DB0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f9dcc
	if (cr6.eq) goto loc_824F9DCC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824f9dcc
	if (cr6.eq) goto loc_824F9DCC;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824F9DCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824F9DD0"))) PPC_WEAK_FUNC(sub_824F9DD0);
PPC_FUNC_IMPL(__imp__sub_824F9DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824F9DD4"))) PPC_WEAK_FUNC(sub_824F9DD4);
PPC_FUNC_IMPL(__imp__sub_824F9DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F9DD8"))) PPC_WEAK_FUNC(sub_824F9DD8);
PPC_FUNC_IMPL(__imp__sub_824F9DD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10460
	ctx.r4.s64 = r11.s64 + 10460;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824cce68
	sub_824CCE68(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-17976
	ctx.r6.s64 = ctx.r7.s64 + -17976;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,10440
	ctx.r4.s64 = ctx.r10.s64 + 10440;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ee678
	sub_824EE678(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17864
	ctx.r10.s64 = ctx.r7.s64 + -17864;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10424
	ctx.r4.s64 = ctx.r9.s64 + 10424;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f34e0
	sub_824F34E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17728
	ctx.r10.s64 = ctx.r6.s64 + -17728;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10408
	ctx.r4.s64 = ctx.r9.s64 + 10408;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f34e0
	sub_824F34E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-15920
	r11.s64 = ctx.r6.s64 + -15920;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,10392
	ctx.r4.s64 = ctx.r5.s64 + 10392;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f34e0
	sub_824F34E0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-15816
	ctx.r10.s64 = ctx.r7.s64 + -15816;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10376
	ctx.r4.s64 = ctx.r9.s64 + 10376;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f34e0
	sub_824F34E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-21592
	ctx.r10.s64 = ctx.r6.s64 + -21592;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10360
	ctx.r4.s64 = ctx.r9.s64 + 10360;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee7a8
	sub_824EE7A8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17456
	ctx.r10.s64 = ctx.r6.s64 + -17456;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10344
	ctx.r4.s64 = ctx.r9.s64 + 10344;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f34e0
	sub_824F34E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-20920
	r11.s64 = ctx.r6.s64 + -20920;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,10328
	ctx.r4.s64 = ctx.r5.s64 + 10328;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee8d8
	sub_824EE8D8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-16472
	ctx.r10.s64 = ctx.r7.s64 + -16472;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10312
	ctx.r4.s64 = ctx.r9.s64 + 10312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee9e0
	sub_824EE9E0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-21960
	ctx.r10.s64 = ctx.r6.s64 + -21960;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10296
	ctx.r4.s64 = ctx.r9.s64 + 10296;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ee7a8
	sub_824EE7A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,10284
	ctx.r4.s64 = ctx.r8.s64 + 10284;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df660
	sub_824DF660(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fa150
	if (cr6.eq) goto loc_824FA150;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FA150:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa16c
	if (cr6.eq) goto loc_824FA16C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fa16c
	if (cr6.eq) goto loc_824FA16C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FA16C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FA170"))) PPC_WEAK_FUNC(sub_824FA170);
PPC_FUNC_IMPL(__imp__sub_824FA170) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FA174"))) PPC_WEAK_FUNC(sub_824FA174);
PPC_FUNC_IMPL(__imp__sub_824FA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FA178"))) PPC_WEAK_FUNC(sub_824FA178);
PPC_FUNC_IMPL(__imp__sub_824FA178) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,10832
	r28.s64 = r11.s64 + 10832;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824ccee0
	sub_824CCEE0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,27048
	ctx.r6.s64 = ctx.r7.s64 + 27048;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,10816
	ctx.r4.s64 = ctx.r10.s64 + 10816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824eeae8
	sub_824EEAE8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-20920
	ctx.r10.s64 = ctx.r7.s64 + -20920;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10800
	ctx.r4.s64 = ctx.r9.s64 + 10800;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eeae8
	sub_824EEAE8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32196
	ctx.r6.s64 = -2109997056;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,21760
	ctx.r10.s64 = ctx.r6.s64 + 21760;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10776
	ctx.r4.s64 = ctx.r9.s64 + 10776;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eeae8
	sub_824EEAE8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,-20824
	ctx.r4.s64 = ctx.r6.s64 + -20824;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,10760
	ctx.r4.s64 = r11.s64 + 10760;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f35e8
	sub_824F35E8(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-20744
	ctx.r5.s64 = ctx.r8.s64 + -20744;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,10740
	ctx.r4.s64 = ctx.r4.s64 + 10740;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f36f0
	sub_824F36F0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-20904
	ctx.r7.s64 = ctx.r9.s64 + -20904;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,10712
	ctx.r4.s64 = ctx.r5.s64 + 10712;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eebf0
	sub_824EEBF0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-20968
	ctx.r8.s64 = ctx.r10.s64 + -20968;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,10696
	ctx.r4.s64 = ctx.r7.s64 + 10696;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eed20
	sub_824EED20(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r4,-32179
	ctx.r4.s64 = -2108882944;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r4,-20808
	ctx.r10.s64 = ctx.r4.s64 + -20808;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r11,10684
	ctx.r4.s64 = r11.s64 + 10684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eed20
	sub_824EED20(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-20840
	ctx.r10.s64 = ctx.r6.s64 + -20840;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10672
	ctx.r4.s64 = ctx.r9.s64 + 10672;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-20888
	ctx.r10.s64 = ctx.r6.s64 + -20888;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10656
	ctx.r4.s64 = ctx.r9.s64 + 10656;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eef58
	sub_824EEF58(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-20856
	ctx.r10.s64 = ctx.r6.s64 + -20856;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10644
	ctx.r4.s64 = ctx.r9.s64 + 10644;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f37f8
	sub_824F37F8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-20872
	r11.s64 = ctx.r6.s64 + -20872;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,10624
	ctx.r4.s64 = ctx.r5.s64 + 10624;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef060
	sub_824EF060(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r7,-20792
	ctx.r10.s64 = ctx.r7.s64 + -20792;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10604
	ctx.r4.s64 = ctx.r9.s64 + 10604;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef060
	sub_824EF060(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-20952
	ctx.r10.s64 = ctx.r6.s64 + -20952;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10584
	ctx.r4.s64 = ctx.r9.s64 + 10584;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-20776
	ctx.r10.s64 = ctx.r6.s64 + -20776;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10560
	ctx.r4.s64 = ctx.r9.s64 + 10560;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3900
	sub_824F3900(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32196
	ctx.r6.s64 = -2109997056;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,21776
	r11.s64 = ctx.r6.s64 + 21776;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,10548
	ctx.r4.s64 = ctx.r5.s64 + 10548;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eeae8
	sub_824EEAE8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-20760
	ctx.r10.s64 = ctx.r7.s64 + -20760;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10528
	ctx.r4.s64 = ctx.r9.s64 + 10528;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eebf0
	sub_824EEBF0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-20936
	ctx.r10.s64 = ctx.r6.s64 + -20936;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10504
	ctx.r4.s64 = ctx.r9.s64 + 10504;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eebf0
	sub_824EEBF0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,8736
	ctx.r10.s64 = ctx.r6.s64 + 8736;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10488
	ctx.r4.s64 = ctx.r9.s64 + 10488;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef060
	sub_824EF060(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32196
	ctx.r6.s64 = -2109997056;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,21792
	ctx.r10.s64 = ctx.r6.s64 + 21792;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10472
	ctx.r4.s64 = ctx.r9.s64 + 10472;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef190
	sub_824EF190(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df708
	sub_824DF708(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fa770
	if (cr6.eq) goto loc_824FA770;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FA770:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa78c
	if (cr6.eq) goto loc_824FA78C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fa78c
	if (cr6.eq) goto loc_824FA78C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FA78C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FA790"))) PPC_WEAK_FUNC(sub_824FA790);
PPC_FUNC_IMPL(__imp__sub_824FA790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824FA794"))) PPC_WEAK_FUNC(sub_824FA794);
PPC_FUNC_IMPL(__imp__sub_824FA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FA798"))) PPC_WEAK_FUNC(sub_824FA798);
PPC_FUNC_IMPL(__imp__sub_824FA798) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10980
	ctx.r4.s64 = r11.s64 + 10980;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824ccf58
	sub_824CCF58(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32164
	ctx.r7.s64 = -2107899904;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,28200
	ctx.r6.s64 = ctx.r7.s64 + 28200;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,10968
	ctx.r4.s64 = ctx.r10.s64 + 10968;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ef298
	sub_824EF298(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32164
	ctx.r7.s64 = -2107899904;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,26280
	ctx.r10.s64 = ctx.r7.s64 + 26280;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10948
	ctx.r4.s64 = ctx.r9.s64 + 10948;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef3a0
	sub_824EF3A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,26376
	ctx.r10.s64 = ctx.r6.s64 + 26376;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10928
	ctx.r4.s64 = ctx.r9.s64 + 10928;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef4a8
	sub_824EF4A8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,27888
	r11.s64 = ctx.r6.s64 + 27888;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,10912
	ctx.r4.s64 = ctx.r5.s64 + 10912;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef4a8
	sub_824EF4A8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32164
	ctx.r7.s64 = -2107899904;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,27536
	ctx.r10.s64 = ctx.r7.s64 + 27536;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10900
	ctx.r4.s64 = ctx.r9.s64 + 10900;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3a08
	sub_824F3A08(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,27800
	ctx.r10.s64 = ctx.r6.s64 + 27800;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10888
	ctx.r4.s64 = ctx.r9.s64 + 10888;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3a08
	sub_824F3A08(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,28096
	ctx.r10.s64 = ctx.r6.s64 + 28096;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10876
	ctx.r4.s64 = ctx.r9.s64 + 10876;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3b10
	sub_824F3B10(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,27096
	r11.s64 = ctx.r6.s64 + 27096;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,10864
	ctx.r4.s64 = ctx.r5.s64 + 10864;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3c18
	sub_824F3C18(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32164
	ctx.r7.s64 = -2107899904;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,26912
	ctx.r10.s64 = ctx.r7.s64 + 26912;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,10852
	ctx.r4.s64 = ctx.r9.s64 + 10852;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3d20
	sub_824F3D20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,10844
	ctx.r4.s64 = ctx.r8.s64 + 10844;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df7b0
	sub_824DF7B0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824faad0
	if (cr6.eq) goto loc_824FAAD0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FAAD0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824faaec
	if (cr6.eq) goto loc_824FAAEC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824faaec
	if (cr6.eq) goto loc_824FAAEC;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FAAEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FAAF0"))) PPC_WEAK_FUNC(sub_824FAAF0);
PPC_FUNC_IMPL(__imp__sub_824FAAF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FAAF4"))) PPC_WEAK_FUNC(sub_824FAAF4);
PPC_FUNC_IMPL(__imp__sub_824FAAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAAF8"))) PPC_WEAK_FUNC(sub_824FAAF8);
PPC_FUNC_IMPL(__imp__sub_824FAAF8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11144
	ctx.r4.s64 = r11.s64 + 11144;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dacc8
	sub_824DACC8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,20712
	ctx.r6.s64 = ctx.r7.s64 + 20712;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,11116
	ctx.r4.s64 = ctx.r10.s64 + 11116;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f3e28
	sub_824F3E28(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,21928
	ctx.r10.s64 = ctx.r7.s64 + 21928;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11096
	ctx.r4.s64 = ctx.r9.s64 + 11096;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef5b0
	sub_824EF5B0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,22024
	ctx.r10.s64 = ctx.r6.s64 + 22024;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11080
	ctx.r4.s64 = ctx.r9.s64 + 11080;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef5b0
	sub_824EF5B0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,22120
	r11.s64 = ctx.r6.s64 + 22120;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11056
	ctx.r4.s64 = ctx.r5.s64 + 11056;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef5b0
	sub_824EF5B0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,20888
	ctx.r10.s64 = ctx.r7.s64 + 20888;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11028
	ctx.r4.s64 = ctx.r9.s64 + 11028;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f3f30
	sub_824F3F30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,20720
	ctx.r10.s64 = ctx.r6.s64 + 20720;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11012
	ctx.r4.s64 = ctx.r9.s64 + 11012;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef6e0
	sub_824EF6E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,10996
	ctx.r4.s64 = ctx.r8.s64 + 10996;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df858
	sub_824DF858(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fad70
	if (cr6.eq) goto loc_824FAD70;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FAD70:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fad8c
	if (cr6.eq) goto loc_824FAD8C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fad8c
	if (cr6.eq) goto loc_824FAD8C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FAD8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FAD90"))) PPC_WEAK_FUNC(sub_824FAD90);
PPC_FUNC_IMPL(__imp__sub_824FAD90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FAD94"))) PPC_WEAK_FUNC(sub_824FAD94);
PPC_FUNC_IMPL(__imp__sub_824FAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAD98"))) PPC_WEAK_FUNC(sub_824FAD98);
PPC_FUNC_IMPL(__imp__sub_824FAD98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11420
	ctx.r4.s64 = r11.s64 + 11420;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dad40
	sub_824DAD40(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-27328
	ctx.r6.s64 = ctx.r7.s64 + -27328;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,11408
	ctx.r4.s64 = ctx.r10.s64 + 11408;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824ef810
	sub_824EF810(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-27656
	ctx.r10.s64 = ctx.r7.s64 + -27656;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,7420
	ctx.r4.s64 = ctx.r9.s64 + 7420;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef810
	sub_824EF810(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-28008
	ctx.r10.s64 = ctx.r6.s64 + -28008;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,9568
	ctx.r4.s64 = ctx.r9.s64 + 9568;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef918
	sub_824EF918(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-31080
	r11.s64 = ctx.r6.s64 + -31080;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11388
	ctx.r4.s64 = ctx.r5.s64 + 11388;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efa48
	sub_824EFA48(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-31040
	ctx.r10.s64 = ctx.r7.s64 + -31040;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11368
	ctx.r4.s64 = ctx.r9.s64 + 11368;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efa48
	sub_824EFA48(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9008
	ctx.r10.s64 = ctx.r6.s64 + 9008;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11352
	ctx.r4.s64 = ctx.r9.s64 + 11352;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efb50
	sub_824EFB50(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-27040
	ctx.r10.s64 = ctx.r6.s64 + -27040;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11336
	ctx.r4.s64 = ctx.r9.s64 + 11336;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4038
	sub_824F4038(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-30856
	r11.s64 = ctx.r6.s64 + -30856;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11316
	ctx.r4.s64 = ctx.r5.s64 + 11316;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef918
	sub_824EF918(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-29784
	ctx.r10.s64 = ctx.r7.s64 + -29784;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11292
	ctx.r4.s64 = ctx.r9.s64 + 11292;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef918
	sub_824EF918(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-29528
	ctx.r10.s64 = ctx.r6.s64 + -29528;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11272
	ctx.r4.s64 = ctx.r9.s64 + 11272;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef918
	sub_824EF918(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-24336
	ctx.r10.s64 = ctx.r6.s64 + -24336;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11252
	ctx.r4.s64 = ctx.r9.s64 + 11252;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efc58
	sub_824EFC58(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-28488
	r11.s64 = ctx.r6.s64 + -28488;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,11236
	ctx.r4.s64 = ctx.r5.s64 + 11236;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824ef918
	sub_824EF918(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r10,r7,-30184
	ctx.r10.s64 = ctx.r7.s64 + -30184;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11208
	ctx.r4.s64 = ctx.r9.s64 + 11208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efa48
	sub_824EFA48(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-30104
	ctx.r10.s64 = ctx.r6.s64 + -30104;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r9,11180
	ctx.r4.s64 = ctx.r9.s64 + 11180;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efa48
	sub_824EFA48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,11164
	ctx.r4.s64 = ctx.r8.s64 + 11164;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df8e8
	sub_824DF8E8(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fb210
	if (cr6.eq) goto loc_824FB210;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FB210:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb22c
	if (cr6.eq) goto loc_824FB22C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fb22c
	if (cr6.eq) goto loc_824FB22C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FB22C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FB230"))) PPC_WEAK_FUNC(sub_824FB230);
PPC_FUNC_IMPL(__imp__sub_824FB230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FB234"))) PPC_WEAK_FUNC(sub_824FB234);
PPC_FUNC_IMPL(__imp__sub_824FB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB238"))) PPC_WEAK_FUNC(sub_824FB238);
PPC_FUNC_IMPL(__imp__sub_824FB238) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11468
	ctx.r4.s64 = r11.s64 + 11468;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dadb8
	sub_824DADB8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-17064
	ctx.r6.s64 = ctx.r7.s64 + -17064;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,4904
	ctx.r4.s64 = ctx.r10.s64 + 4904;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824efd60
	sub_824EFD60(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17048
	ctx.r10.s64 = ctx.r7.s64 + -17048;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4888
	ctx.r4.s64 = ctx.r9.s64 + 4888;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efd60
	sub_824EFD60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17032
	ctx.r10.s64 = ctx.r6.s64 + -17032;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4872
	ctx.r4.s64 = ctx.r9.s64 + 4872;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efd60
	sub_824EFD60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-17016
	r11.s64 = ctx.r6.s64 + -17016;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,4856
	ctx.r4.s64 = ctx.r5.s64 + 4856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efd60
	sub_824EFD60(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17000
	ctx.r10.s64 = ctx.r7.s64 + -17000;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,4840
	ctx.r4.s64 = ctx.r9.s64 + 4840;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efd60
	sub_824EFD60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-16984
	ctx.r10.s64 = ctx.r6.s64 + -16984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4828
	ctx.r4.s64 = ctx.r9.s64 + 4828;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efd60
	sub_824EFD60(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-16952
	ctx.r10.s64 = ctx.r6.s64 + -16952;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4784
	ctx.r4.s64 = ctx.r9.s64 + 4784;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4140
	sub_824F4140(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-16936
	r11.s64 = ctx.r6.s64 + -16936;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,4768
	ctx.r4.s64 = ctx.r5.s64 + 4768;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4140
	sub_824F4140(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-16880
	ctx.r10.s64 = ctx.r7.s64 + -16880;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11452
	ctx.r4.s64 = ctx.r9.s64 + 11452;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4140
	sub_824F4140(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-16824
	ctx.r10.s64 = ctx.r6.s64 + -16824;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4752
	ctx.r4.s64 = ctx.r9.s64 + 4752;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4140
	sub_824F4140(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-16552
	ctx.r10.s64 = ctx.r6.s64 + -16552;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4736
	ctx.r4.s64 = ctx.r9.s64 + 4736;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4140
	sub_824F4140(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-16344
	r11.s64 = ctx.r6.s64 + -16344;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,4724
	ctx.r4.s64 = ctx.r5.s64 + 4724;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4140
	sub_824F4140(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r10,r7,-16136
	ctx.r10.s64 = ctx.r7.s64 + -16136;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,4684
	ctx.r4.s64 = ctx.r9.s64 + 4684;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824efe68
	sub_824EFE68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,11436
	ctx.r4.s64 = ctx.r8.s64 + 11436;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824df978
	sub_824DF978(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fb670
	if (cr6.eq) goto loc_824FB670;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FB670:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb68c
	if (cr6.eq) goto loc_824FB68C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fb68c
	if (cr6.eq) goto loc_824FB68C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FB68C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FB690"))) PPC_WEAK_FUNC(sub_824FB690);
PPC_FUNC_IMPL(__imp__sub_824FB690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FB694"))) PPC_WEAK_FUNC(sub_824FB694);
PPC_FUNC_IMPL(__imp__sub_824FB694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB698"))) PPC_WEAK_FUNC(sub_824FB698);
PPC_FUNC_IMPL(__imp__sub_824FB698) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11576
	ctx.r4.s64 = r11.s64 + 11576;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824dae30
	sub_824DAE30(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-27336
	ctx.r6.s64 = ctx.r7.s64 + -27336;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,11556
	ctx.r4.s64 = ctx.r10.s64 + 11556;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f4248
	sub_824F4248(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-27632
	ctx.r10.s64 = ctx.r7.s64 + -27632;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11532
	ctx.r4.s64 = ctx.r9.s64 + 11532;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4350
	sub_824F4350(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-27192
	ctx.r10.s64 = ctx.r6.s64 + -27192;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11508
	ctx.r4.s64 = ctx.r9.s64 + 11508;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4458
	sub_824F4458(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,11488
	ctx.r4.s64 = ctx.r8.s64 + 11488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfa08
	sub_824DFA08(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fb850
	if (cr6.eq) goto loc_824FB850;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FB850:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb86c
	if (cr6.eq) goto loc_824FB86C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fb86c
	if (cr6.eq) goto loc_824FB86C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FB86C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FB870"))) PPC_WEAK_FUNC(sub_824FB870);
PPC_FUNC_IMPL(__imp__sub_824FB870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FB874"))) PPC_WEAK_FUNC(sub_824FB874);
PPC_FUNC_IMPL(__imp__sub_824FB874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB878"))) PPC_WEAK_FUNC(sub_824FB878);
PPC_FUNC_IMPL(__imp__sub_824FB878) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11728
	ctx.r4.s64 = r11.s64 + 11728;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824daea8
	sub_824DAEA8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-18000
	ctx.r6.s64 = ctx.r7.s64 + -18000;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,11716
	ctx.r4.s64 = ctx.r10.s64 + 11716;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824eff70
	sub_824EFF70(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17984
	ctx.r10.s64 = ctx.r7.s64 + -17984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11700
	ctx.r4.s64 = ctx.r9.s64 + 11700;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4560
	sub_824F4560(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17952
	ctx.r10.s64 = ctx.r6.s64 + -17952;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11688
	ctx.r4.s64 = ctx.r9.s64 + 11688;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eff70
	sub_824EFF70(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-17936
	r11.s64 = ctx.r6.s64 + -17936;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11676
	ctx.r4.s64 = ctx.r5.s64 + 11676;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4668
	sub_824F4668(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17920
	ctx.r10.s64 = ctx.r7.s64 + -17920;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11664
	ctx.r4.s64 = ctx.r9.s64 + 11664;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4668
	sub_824F4668(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17904
	ctx.r10.s64 = ctx.r6.s64 + -17904;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11656
	ctx.r4.s64 = ctx.r9.s64 + 11656;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eff70
	sub_824EFF70(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-17768
	ctx.r10.s64 = ctx.r6.s64 + -17768;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11640
	ctx.r4.s64 = ctx.r9.s64 + 11640;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824eff70
	sub_824EFF70(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-17160
	r11.s64 = ctx.r6.s64 + -17160;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11628
	ctx.r4.s64 = ctx.r5.s64 + 11628;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0078
	sub_824F0078(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-17560
	ctx.r10.s64 = ctx.r7.s64 + -17560;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11616
	ctx.r4.s64 = ctx.r9.s64 + 11616;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0180
	sub_824F0180(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,11596
	ctx.r4.s64 = ctx.r8.s64 + 11596;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfa98
	sub_824DFA98(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fbbb0
	if (cr6.eq) goto loc_824FBBB0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FBBB0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fbbcc
	if (cr6.eq) goto loc_824FBBCC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fbbcc
	if (cr6.eq) goto loc_824FBBCC;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FBBCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FBBD0"))) PPC_WEAK_FUNC(sub_824FBBD0);
PPC_FUNC_IMPL(__imp__sub_824FBBD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FBBD4"))) PPC_WEAK_FUNC(sub_824FBBD4);
PPC_FUNC_IMPL(__imp__sub_824FBBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FBBD8"))) PPC_WEAK_FUNC(sub_824FBBD8);
PPC_FUNC_IMPL(__imp__sub_824FBBD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11868
	ctx.r4.s64 = r11.s64 + 11868;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824ccfd0
	sub_824CCFD0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-14856
	ctx.r6.s64 = ctx.r7.s64 + -14856;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,11860
	ctx.r4.s64 = ctx.r10.s64 + 11860;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f0da0
	sub_824F0DA0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-14712
	ctx.r10.s64 = ctx.r7.s64 + -14712;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11844
	ctx.r4.s64 = ctx.r9.s64 + 11844;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0da0
	sub_824F0DA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-12696
	ctx.r10.s64 = ctx.r6.s64 + -12696;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11836
	ctx.r4.s64 = ctx.r9.s64 + 11836;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0da0
	sub_824F0DA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-14392
	r11.s64 = ctx.r6.s64 + -14392;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11824
	ctx.r4.s64 = ctx.r5.s64 + 11824;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0ea8
	sub_824F0EA8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-11880
	ctx.r10.s64 = ctx.r7.s64 + -11880;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11816
	ctx.r4.s64 = ctx.r9.s64 + 11816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0da0
	sub_824F0DA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-11488
	ctx.r10.s64 = ctx.r6.s64 + -11488;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11804
	ctx.r4.s64 = ctx.r9.s64 + 11804;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0da0
	sub_824F0DA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-14248
	ctx.r10.s64 = ctx.r6.s64 + -14248;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11796
	ctx.r4.s64 = ctx.r9.s64 + 11796;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4770
	sub_824F4770(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-14504
	r11.s64 = ctx.r6.s64 + -14504;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,11780
	ctx.r4.s64 = ctx.r5.s64 + 11780;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0da0
	sub_824F0DA0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-14904
	ctx.r10.s64 = ctx.r7.s64 + -14904;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,11764
	ctx.r4.s64 = ctx.r9.s64 + 11764;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f0fb0
	sub_824F0FB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,11748
	ctx.r4.s64 = ctx.r8.s64 + 11748;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfc48
	sub_824DFC48(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fbf10
	if (cr6.eq) goto loc_824FBF10;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FBF10:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fbf2c
	if (cr6.eq) goto loc_824FBF2C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fbf2c
	if (cr6.eq) goto loc_824FBF2C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FBF2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FBF30"))) PPC_WEAK_FUNC(sub_824FBF30);
PPC_FUNC_IMPL(__imp__sub_824FBF30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824FBF34"))) PPC_WEAK_FUNC(sub_824FBF34);
PPC_FUNC_IMPL(__imp__sub_824FBF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FBF38"))) PPC_WEAK_FUNC(sub_824FBF38);
PPC_FUNC_IMPL(__imp__sub_824FBF38) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,12756
	r28.s64 = r11.s64 + 12756;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824cd0c0
	sub_824CD0C0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32028
	ctx.r7.s64 = -2098987008;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,11976
	ctx.r6.s64 = ctx.r7.s64 + 11976;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,12736
	ctx.r4.s64 = ctx.r10.s64 + 12736;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32028
	ctx.r7.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,11976
	ctx.r10.s64 = ctx.r7.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12720
	ctx.r4.s64 = ctx.r9.s64 + 12720;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1aa0
	sub_824F1AA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31576
	ctx.r10.s64 = ctx.r6.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12704
	ctx.r4.s64 = ctx.r9.s64 + 12704;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1bd0
	sub_824F1BD0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,31576
	ctx.r4.s64 = ctx.r6.s64 + 31576;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,12680
	ctx.r4.s64 = r11.s64 + 12680;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4878
	sub_824F4878(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32028
	ctx.r8.s64 = -2098987008;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,11976
	ctx.r5.s64 = ctx.r8.s64 + 11976;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,12664
	ctx.r4.s64 = ctx.r4.s64 + 12664;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4980
	sub_824F4980(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,11976
	ctx.r7.s64 = ctx.r9.s64 + 11976;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,12652
	ctx.r4.s64 = ctx.r5.s64 + 12652;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1aa0
	sub_824F1AA0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,31576
	ctx.r8.s64 = ctx.r10.s64 + 31576;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,12632
	ctx.r4.s64 = ctx.r7.s64 + 12632;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1cd8
	sub_824F1CD8(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r4,31576
	ctx.r10.s64 = ctx.r4.s64 + 31576;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r11,12612
	ctx.r4.s64 = r11.s64 + 12612;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1cd8
	sub_824F1CD8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,12600
	ctx.r4.s64 = ctx.r9.s64 + 12600;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1de0
	sub_824F1DE0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12588
	ctx.r4.s64 = ctx.r9.s64 + 12588;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1de0
	sub_824F1DE0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12572
	ctx.r4.s64 = ctx.r9.s64 + 12572;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1de0
	sub_824F1DE0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,11976
	r11.s64 = ctx.r6.s64 + 11976;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,12556
	ctx.r4.s64 = ctx.r5.s64 + 12556;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1de0
	sub_824F1DE0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32028
	ctx.r7.s64 = -2098987008;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r7,11976
	ctx.r10.s64 = ctx.r7.s64 + 11976;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12540
	ctx.r4.s64 = ctx.r9.s64 + 12540;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1aa0
	sub_824F1AA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31576
	ctx.r10.s64 = ctx.r6.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,12512
	ctx.r4.s64 = ctx.r9.s64 + 12512;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4878
	sub_824F4878(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12484
	ctx.r4.s64 = ctx.r9.s64 + 12484;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1aa0
	sub_824F1AA0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,11976
	r11.s64 = ctx.r6.s64 + 11976;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,12464
	ctx.r4.s64 = ctx.r5.s64 + 12464;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r7,-32028
	ctx.r7.s64 = -2098987008;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,11976
	ctx.r10.s64 = ctx.r7.s64 + 11976;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,12448
	ctx.r4.s64 = ctx.r9.s64 + 12448;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12428
	ctx.r4.s64 = ctx.r9.s64 + 12428;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12408
	ctx.r4.s64 = ctx.r9.s64 + 12408;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12384
	ctx.r4.s64 = ctx.r9.s64 + 12384;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,12360
	ctx.r4.s64 = ctx.r9.s64 + 12360;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31576
	ctx.r10.s64 = ctx.r6.s64 + 31576;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,12340
	ctx.r4.s64 = ctx.r9.s64 + 12340;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1bd0
	sub_824F1BD0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32028
	ctx.r6.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,11976
	ctx.r10.s64 = ctx.r6.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12320
	ctx.r4.s64 = ctx.r9.s64 + 12320;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ee8
	sub_824F1EE8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32028
	ctx.r5.s64 = -2098987008;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,11976
	r11.s64 = ctx.r5.s64 + 11976;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,12292
	ctx.r4.s64 = ctx.r4.s64 + 12292;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1998
	sub_824F1998(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,31576
	ctx.r5.s64 = ctx.r8.s64 + 31576;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,12264
	ctx.r4.s64 = ctx.r4.s64 + 12264;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,11976
	ctx.r7.s64 = ctx.r9.s64 + 11976;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r4,r5,12244
	ctx.r4.s64 = ctx.r5.s64 + 12244;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2120
	sub_824F2120(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,11976
	ctx.r8.s64 = ctx.r10.s64 + 11976;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,12224
	ctx.r4.s64 = ctx.r7.s64 + 12224;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4a88
	sub_824F4A88(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,11976
	ctx.r8.s64 = ctx.r10.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,12204
	ctx.r4.s64 = ctx.r9.s64 + 12204;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2120
	sub_824F2120(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r5,-32028
	ctx.r5.s64 = -2098987008;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r5,11976
	ctx.r10.s64 = ctx.r5.s64 + 11976;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12192
	ctx.r4.s64 = ctx.r9.s64 + 12192;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4a88
	sub_824F4A88(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r10,r6,31576
	ctx.r10.s64 = ctx.r6.s64 + 31576;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12152
	ctx.r4.s64 = ctx.r9.s64 + 12152;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31576
	ctx.r10.s64 = ctx.r6.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12112
	ctx.r4.s64 = ctx.r9.s64 + 12112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,31576
	r11.s64 = ctx.r5.s64 + 31576;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,12076
	ctx.r4.s64 = ctx.r4.s64 + 12076;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,31576
	ctx.r5.s64 = ctx.r8.s64 + 31576;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,12044
	ctx.r4.s64 = ctx.r4.s64 + 12044;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,31576
	ctx.r7.s64 = ctx.r9.s64 + 31576;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,12000
	ctx.r4.s64 = ctx.r5.s64 + 12000;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,31576
	ctx.r8.s64 = ctx.r10.s64 + 31576;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,11956
	ctx.r4.s64 = ctx.r7.s64 + 11956;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,31576
	ctx.r8.s64 = ctx.r10.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,11916
	ctx.r4.s64 = ctx.r9.s64 + 11916;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f1ff0
	sub_824F1FF0(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r5,31576
	ctx.r10.s64 = ctx.r5.s64 + 31576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,11884
	ctx.r4.s64 = ctx.r9.s64 + 11884;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f2228
	sub_824F2228(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dfe40
	sub_824DFE40(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fc970
	if (cr6.eq) goto loc_824FC970;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FC970:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fc98c
	if (cr6.eq) goto loc_824FC98C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fc98c
	if (cr6.eq) goto loc_824FC98C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FC98C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FC990"))) PPC_WEAK_FUNC(sub_824FC990);
PPC_FUNC_IMPL(__imp__sub_824FC990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824FC994"))) PPC_WEAK_FUNC(sub_824FC994);
PPC_FUNC_IMPL(__imp__sub_824FC994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC998"))) PPC_WEAK_FUNC(sub_824FC998);
PPC_FUNC_IMPL(__imp__sub_824FC998) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,12828
	r28.s64 = r11.s64 + 12828;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x824cd1b0
	sub_824CD1B0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,7712
	ctx.r6.s64 = ctx.r7.s64 + 7712;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,12804
	ctx.r4.s64 = ctx.r10.s64 + 12804;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x824f4b90
	sub_824F4B90(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,7904
	ctx.r10.s64 = ctx.r7.s64 + 7904;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,12776
	ctx.r4.s64 = ctx.r9.s64 + 12776;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4b90
	sub_824F4B90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x824dff78
	sub_824DFF78(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824fcb10
	if (cr6.eq) goto loc_824FCB10;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_824FCB10:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fcb2c
	if (cr6.eq) goto loc_824FCB2C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x824fcb2c
	if (cr6.eq) goto loc_824FCB2C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_824FCB2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824FCB30"))) PPC_WEAK_FUNC(sub_824FCB30);
PPC_FUNC_IMPL(__imp__sub_824FCB30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824FCB34"))) PPC_WEAK_FUNC(sub_824FCB34);
PPC_FUNC_IMPL(__imp__sub_824FCB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCB38"))) PPC_WEAK_FUNC(sub_824FCB38);
PPC_FUNC_IMPL(__imp__sub_824FCB38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82744a78
	sub_82744A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FCB3C"))) PPC_WEAK_FUNC(sub_824FCB3C);
PPC_FUNC_IMPL(__imp__sub_824FCB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCB40"))) PPC_WEAK_FUNC(sub_824FCB40);
PPC_FUNC_IMPL(__imp__sub_824FCB40) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824FCB40"))) PPC_WEAK_FUNC(sub_824FCB40);
PPC_FUNC_IMPL(__imp__sub_824FCB40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82744bc0
	sub_82744BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FCB44"))) PPC_WEAK_FUNC(sub_824FCB44);
PPC_FUNC_IMPL(__imp__sub_824FCB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCB48"))) PPC_WEAK_FUNC(sub_824FCB48);
PPC_FUNC_IMPL(__imp__sub_824FCB48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82744d68
	sub_82744D68(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,12848
	ctx.r9.s64 = r11.s64 + 12848;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x8272d558
	sub_8272D558(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8234f8a8
	sub_8234F8A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826fcea0
	sub_826FCEA0(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-24088(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24088);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fcbb0
	if (cr6.eq) goto loc_824FCBB0;
	// bl 0x82744a78
	sub_82744A78(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bl 0x82745188
	sub_82745188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824FCBB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824FCBC0"))) PPC_WEAK_FUNC(sub_824FCBC0);
PPC_FUNC_IMPL(__imp__sub_824FCBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCBC4"))) PPC_WEAK_FUNC(sub_824FCBC4);
PPC_FUNC_IMPL(__imp__sub_824FCBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCBC8"))) PPC_WEAK_FUNC(sub_824FCBC8);
PPC_FUNC_IMPL(__imp__sub_824FCBC8) {
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
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,12848
	ctx.r10.s64 = r11.s64 + 12848;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824fcbf8
	if (cr6.eq) goto loc_824FCBF8;
	// bl 0x82744bc0
	sub_82744BC0(ctx, base);
loc_824FCBF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82744cd8
	sub_82744CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824FCC10"))) PPC_WEAK_FUNC(sub_824FCC10);
PPC_FUNC_IMPL(__imp__sub_824FCC10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCC14"))) PPC_WEAK_FUNC(sub_824FCC14);
PPC_FUNC_IMPL(__imp__sub_824FCC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCC18"))) PPC_WEAK_FUNC(sub_824FCC18);
PPC_FUNC_IMPL(__imp__sub_824FCC18) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r11,12848
	ctx.r10.s64 = r11.s64 + 12848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824fcc50
	if (cr6.eq) goto loc_824FCC50;
	// bl 0x82744bc0
	sub_82744BC0(ctx, base);
loc_824FCC50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82744cd8
	sub_82744CD8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824fcc70
	if (cr6.eq) goto loc_824FCC70;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824FCC70:
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

__attribute__((alias("__imp__sub_824FCC84"))) PPC_WEAK_FUNC(sub_824FCC84);
PPC_FUNC_IMPL(__imp__sub_824FCC84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCC88"))) PPC_WEAK_FUNC(sub_824FCC88);
PPC_FUNC_IMPL(__imp__sub_824FCC88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_824FCC8C"))) PPC_WEAK_FUNC(sub_824FCC8C);
PPC_FUNC_IMPL(__imp__sub_824FCC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCC90"))) PPC_WEAK_FUNC(sub_824FCC90);
PPC_FUNC_IMPL(__imp__sub_824FCC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCCA4"))) PPC_WEAK_FUNC(sub_824FCCA4);
PPC_FUNC_IMPL(__imp__sub_824FCCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCCA8"))) PPC_WEAK_FUNC(sub_824FCCA8);
PPC_FUNC_IMPL(__imp__sub_824FCCA8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82577580
	sub_82577580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FCCB0"))) PPC_WEAK_FUNC(sub_824FCCB0);
PPC_FUNC_IMPL(__imp__sub_824FCCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCCB8"))) PPC_WEAK_FUNC(sub_824FCCB8);
PPC_FUNC_IMPL(__imp__sub_824FCCB8) {
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
	// bne cr6,0x824fccf0
	if (!cr6.eq) goto loc_824FCCF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fcd1c
	if (cr6.eq) goto loc_824FCD1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fcd1c
	goto loc_824FCD1C;
loc_824FCCF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fcd1c
	if (cr6.eq) goto loc_824FCD1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
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
loc_824FCD1C:
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

__attribute__((alias("__imp__sub_824FCD30"))) PPC_WEAK_FUNC(sub_824FCD30);
PPC_FUNC_IMPL(__imp__sub_824FCD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCD34"))) PPC_WEAK_FUNC(sub_824FCD34);
PPC_FUNC_IMPL(__imp__sub_824FCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCD38"))) PPC_WEAK_FUNC(sub_824FCD38);
PPC_FUNC_IMPL(__imp__sub_824FCD38) {
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
	// bne cr6,0x824fcd70
	if (!cr6.eq) goto loc_824FCD70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fcd9c
	if (cr6.eq) goto loc_824FCD9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fcd9c
	goto loc_824FCD9C;
loc_824FCD70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fcd9c
	if (cr6.eq) goto loc_824FCD9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,27936
	ctx.r4.s64 = r11.s64 + 27936;
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
loc_824FCD9C:
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

__attribute__((alias("__imp__sub_824FCDB0"))) PPC_WEAK_FUNC(sub_824FCDB0);
PPC_FUNC_IMPL(__imp__sub_824FCDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCDB4"))) PPC_WEAK_FUNC(sub_824FCDB4);
PPC_FUNC_IMPL(__imp__sub_824FCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCDB8"))) PPC_WEAK_FUNC(sub_824FCDB8);
PPC_FUNC_IMPL(__imp__sub_824FCDB8) {
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
	// bne cr6,0x824fcdf0
	if (!cr6.eq) goto loc_824FCDF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fce1c
	if (cr6.eq) goto loc_824FCE1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fce1c
	goto loc_824FCE1C;
loc_824FCDF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fce1c
	if (cr6.eq) goto loc_824FCE1C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28056
	ctx.r4.s64 = r11.s64 + 28056;
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
loc_824FCE1C:
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

__attribute__((alias("__imp__sub_824FCE30"))) PPC_WEAK_FUNC(sub_824FCE30);
PPC_FUNC_IMPL(__imp__sub_824FCE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCE34"))) PPC_WEAK_FUNC(sub_824FCE34);
PPC_FUNC_IMPL(__imp__sub_824FCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCE38"))) PPC_WEAK_FUNC(sub_824FCE38);
PPC_FUNC_IMPL(__imp__sub_824FCE38) {
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
	// bne cr6,0x824fce70
	if (!cr6.eq) goto loc_824FCE70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fce9c
	if (cr6.eq) goto loc_824FCE9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824fce9c
	goto loc_824FCE9C;
loc_824FCE70:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x824fce9c
	if (cr6.eq) goto loc_824FCE9C;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,28176
	ctx.r4.s64 = r11.s64 + 28176;
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
loc_824FCE9C:
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

__attribute__((alias("__imp__sub_824FCEB0"))) PPC_WEAK_FUNC(sub_824FCEB0);
PPC_FUNC_IMPL(__imp__sub_824FCEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

