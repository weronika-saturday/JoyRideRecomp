#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82505E2C"))) PPC_WEAK_FUNC(sub_82505E2C);
PPC_FUNC_IMPL(__imp__sub_82505E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82505E30"))) PPC_WEAK_FUNC(sub_82505E30);
PPC_FUNC_IMPL(__imp__sub_82505E30) {
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
	// bl 0x825028b0
	sub_825028B0(ctx, base);
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
	// bl 0x82504c90
	sub_82504C90(ctx, base);
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
	// beq cr6,0x82505eb0
	if (cr6.eq) goto loc_82505EB0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82505eac
	if (cr6.eq) goto loc_82505EAC;
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
loc_82505EAC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82505EB0:
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
	// bl 0x82503260
	sub_82503260(ctx, base);
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
	// beq cr6,0x82505f04
	if (cr6.eq) goto loc_82505F04;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82505f00
	if (cr6.eq) goto loc_82505F00;
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
loc_82505F00:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82505F04:
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

__attribute__((alias("__imp__sub_82505F30"))) PPC_WEAK_FUNC(sub_82505F30);
PPC_FUNC_IMPL(__imp__sub_82505F30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82505F34"))) PPC_WEAK_FUNC(sub_82505F34);
PPC_FUNC_IMPL(__imp__sub_82505F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82505F38"))) PPC_WEAK_FUNC(sub_82505F38);
PPC_FUNC_IMPL(__imp__sub_82505F38) {
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
	// bl 0x82504d10
	sub_82504D10(ctx, base);
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
	// beq cr6,0x82505fe0
	if (cr6.eq) goto loc_82505FE0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82505fdc
	if (cr6.eq) goto loc_82505FDC;
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
loc_82505FDC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82505FE0:
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
	// bl 0x825032e0
	sub_825032E0(ctx, base);
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
	// beq cr6,0x82506034
	if (cr6.eq) goto loc_82506034;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506030
	if (cr6.eq) goto loc_82506030;
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
loc_82506030:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82506034:
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

__attribute__((alias("__imp__sub_82506060"))) PPC_WEAK_FUNC(sub_82506060);
PPC_FUNC_IMPL(__imp__sub_82506060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506064"))) PPC_WEAK_FUNC(sub_82506064);
PPC_FUNC_IMPL(__imp__sub_82506064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506068"))) PPC_WEAK_FUNC(sub_82506068);
PPC_FUNC_IMPL(__imp__sub_82506068) {
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
	// bl 0x824de128
	sub_824DE128(ctx, base);
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
	// bl 0x82504e90
	sub_82504E90(ctx, base);
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
	// beq cr6,0x825060e8
	if (cr6.eq) goto loc_825060E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825060e4
	if (cr6.eq) goto loc_825060E4;
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
loc_825060E4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_825060E8:
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
	// bl 0x82503460
	sub_82503460(ctx, base);
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
	// beq cr6,0x8250613c
	if (cr6.eq) goto loc_8250613C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506138
	if (cr6.eq) goto loc_82506138;
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
loc_82506138:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8250613C:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,23376
	ctx.r10.s64 = r11.s64 + 23376;
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

__attribute__((alias("__imp__sub_82506168"))) PPC_WEAK_FUNC(sub_82506168);
PPC_FUNC_IMPL(__imp__sub_82506168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250616C"))) PPC_WEAK_FUNC(sub_8250616C);
PPC_FUNC_IMPL(__imp__sub_8250616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506170"))) PPC_WEAK_FUNC(sub_82506170);
PPC_FUNC_IMPL(__imp__sub_82506170) {
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
	// bl 0x82504f10
	sub_82504F10(ctx, base);
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
	// beq cr6,0x82506218
	if (cr6.eq) goto loc_82506218;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506214
	if (cr6.eq) goto loc_82506214;
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
loc_82506214:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82506218:
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
	// bl 0x825034e0
	sub_825034E0(ctx, base);
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
	// beq cr6,0x8250626c
	if (cr6.eq) goto loc_8250626C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506268
	if (cr6.eq) goto loc_82506268;
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
loc_82506268:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_8250626C:
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

__attribute__((alias("__imp__sub_82506298"))) PPC_WEAK_FUNC(sub_82506298);
PPC_FUNC_IMPL(__imp__sub_82506298) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250629C"))) PPC_WEAK_FUNC(sub_8250629C);
PPC_FUNC_IMPL(__imp__sub_8250629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825062A0"))) PPC_WEAK_FUNC(sub_825062A0);
PPC_FUNC_IMPL(__imp__sub_825062A0) {
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
	// bl 0x825028b0
	sub_825028B0(ctx, base);
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
	// bl 0x82504f90
	sub_82504F90(ctx, base);
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
	// beq cr6,0x82506320
	if (cr6.eq) goto loc_82506320;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250631c
	if (cr6.eq) goto loc_8250631C;
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
loc_8250631C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506320:
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
	// bl 0x82503560
	sub_82503560(ctx, base);
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
	// beq cr6,0x82506374
	if (cr6.eq) goto loc_82506374;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506370
	if (cr6.eq) goto loc_82506370;
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
loc_82506370:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82506374:
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

__attribute__((alias("__imp__sub_825063A0"))) PPC_WEAK_FUNC(sub_825063A0);
PPC_FUNC_IMPL(__imp__sub_825063A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825063A4"))) PPC_WEAK_FUNC(sub_825063A4);
PPC_FUNC_IMPL(__imp__sub_825063A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825063A8"))) PPC_WEAK_FUNC(sub_825063A8);
PPC_FUNC_IMPL(__imp__sub_825063A8) {
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
	// bl 0x825028b0
	sub_825028B0(ctx, base);
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
	// bl 0x82505010
	sub_82505010(ctx, base);
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
	// beq cr6,0x82506428
	if (cr6.eq) goto loc_82506428;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506424
	if (cr6.eq) goto loc_82506424;
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
loc_82506424:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506428:
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
	// bl 0x82503660
	sub_82503660(ctx, base);
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
	// beq cr6,0x8250647c
	if (cr6.eq) goto loc_8250647C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506478
	if (cr6.eq) goto loc_82506478;
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
loc_82506478:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8250647C:
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

__attribute__((alias("__imp__sub_825064A8"))) PPC_WEAK_FUNC(sub_825064A8);
PPC_FUNC_IMPL(__imp__sub_825064A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825064AC"))) PPC_WEAK_FUNC(sub_825064AC);
PPC_FUNC_IMPL(__imp__sub_825064AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825064B0"))) PPC_WEAK_FUNC(sub_825064B0);
PPC_FUNC_IMPL(__imp__sub_825064B0) {
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
	// bl 0x825028b0
	sub_825028B0(ctx, base);
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
	// bl 0x82505090
	sub_82505090(ctx, base);
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
	// beq cr6,0x82506530
	if (cr6.eq) goto loc_82506530;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250652c
	if (cr6.eq) goto loc_8250652C;
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
loc_8250652C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506530:
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
	// bl 0x825036e0
	sub_825036E0(ctx, base);
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
	// beq cr6,0x82506584
	if (cr6.eq) goto loc_82506584;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506580
	if (cr6.eq) goto loc_82506580;
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
loc_82506580:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82506584:
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

__attribute__((alias("__imp__sub_825065B0"))) PPC_WEAK_FUNC(sub_825065B0);
PPC_FUNC_IMPL(__imp__sub_825065B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825065B4"))) PPC_WEAK_FUNC(sub_825065B4);
PPC_FUNC_IMPL(__imp__sub_825065B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825065B8"))) PPC_WEAK_FUNC(sub_825065B8);
PPC_FUNC_IMPL(__imp__sub_825065B8) {
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
	// bl 0x825028b0
	sub_825028B0(ctx, base);
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
	// bl 0x82505110
	sub_82505110(ctx, base);
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
	// beq cr6,0x82506638
	if (cr6.eq) goto loc_82506638;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506634
	if (cr6.eq) goto loc_82506634;
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
loc_82506634:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506638:
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
	// bl 0x82503760
	sub_82503760(ctx, base);
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
	// beq cr6,0x8250668c
	if (cr6.eq) goto loc_8250668C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506688
	if (cr6.eq) goto loc_82506688;
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
loc_82506688:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8250668C:
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

__attribute__((alias("__imp__sub_825066B8"))) PPC_WEAK_FUNC(sub_825066B8);
PPC_FUNC_IMPL(__imp__sub_825066B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825066BC"))) PPC_WEAK_FUNC(sub_825066BC);
PPC_FUNC_IMPL(__imp__sub_825066BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825066C0"))) PPC_WEAK_FUNC(sub_825066C0);
PPC_FUNC_IMPL(__imp__sub_825066C0) {
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
	// bl 0x82505210
	sub_82505210(ctx, base);
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
	// beq cr6,0x82506768
	if (cr6.eq) goto loc_82506768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506764
	if (cr6.eq) goto loc_82506764;
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
loc_82506764:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82506768:
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
	// bl 0x82503860
	sub_82503860(ctx, base);
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
	// beq cr6,0x825067bc
	if (cr6.eq) goto loc_825067BC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825067b8
	if (cr6.eq) goto loc_825067B8;
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
loc_825067B8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_825067BC:
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

__attribute__((alias("__imp__sub_825067E8"))) PPC_WEAK_FUNC(sub_825067E8);
PPC_FUNC_IMPL(__imp__sub_825067E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825067EC"))) PPC_WEAK_FUNC(sub_825067EC);
PPC_FUNC_IMPL(__imp__sub_825067EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825067F0"))) PPC_WEAK_FUNC(sub_825067F0);
PPC_FUNC_IMPL(__imp__sub_825067F0) {
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
	// bl 0x82505290
	sub_82505290(ctx, base);
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
	// beq cr6,0x82506898
	if (cr6.eq) goto loc_82506898;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506894
	if (cr6.eq) goto loc_82506894;
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
loc_82506894:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82506898:
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
	// bl 0x82503960
	sub_82503960(ctx, base);
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
	// beq cr6,0x825068ec
	if (cr6.eq) goto loc_825068EC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825068e8
	if (cr6.eq) goto loc_825068E8;
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
loc_825068E8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_825068EC:
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

__attribute__((alias("__imp__sub_82506918"))) PPC_WEAK_FUNC(sub_82506918);
PPC_FUNC_IMPL(__imp__sub_82506918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250691C"))) PPC_WEAK_FUNC(sub_8250691C);
PPC_FUNC_IMPL(__imp__sub_8250691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506920"))) PPC_WEAK_FUNC(sub_82506920);
PPC_FUNC_IMPL(__imp__sub_82506920) {
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
	// bl 0x82505310
	sub_82505310(ctx, base);
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
	// beq cr6,0x825069c8
	if (cr6.eq) goto loc_825069C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825069c4
	if (cr6.eq) goto loc_825069C4;
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
loc_825069C4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_825069C8:
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
	// bl 0x825039e0
	sub_825039E0(ctx, base);
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
	// beq cr6,0x82506a1c
	if (cr6.eq) goto loc_82506A1C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506a18
	if (cr6.eq) goto loc_82506A18;
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
loc_82506A18:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82506A1C:
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

__attribute__((alias("__imp__sub_82506A48"))) PPC_WEAK_FUNC(sub_82506A48);
PPC_FUNC_IMPL(__imp__sub_82506A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506A4C"))) PPC_WEAK_FUNC(sub_82506A4C);
PPC_FUNC_IMPL(__imp__sub_82506A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506A50"))) PPC_WEAK_FUNC(sub_82506A50);
PPC_FUNC_IMPL(__imp__sub_82506A50) {
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
	// bl 0x82505390
	sub_82505390(ctx, base);
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
	// beq cr6,0x82506af8
	if (cr6.eq) goto loc_82506AF8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506af4
	if (cr6.eq) goto loc_82506AF4;
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
loc_82506AF4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82506AF8:
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
	// bl 0x82503a60
	sub_82503A60(ctx, base);
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
	// beq cr6,0x82506b4c
	if (cr6.eq) goto loc_82506B4C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506b48
	if (cr6.eq) goto loc_82506B48;
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
loc_82506B48:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82506B4C:
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

__attribute__((alias("__imp__sub_82506B78"))) PPC_WEAK_FUNC(sub_82506B78);
PPC_FUNC_IMPL(__imp__sub_82506B78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506B7C"))) PPC_WEAK_FUNC(sub_82506B7C);
PPC_FUNC_IMPL(__imp__sub_82506B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506B80"))) PPC_WEAK_FUNC(sub_82506B80);
PPC_FUNC_IMPL(__imp__sub_82506B80) {
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
	// bl 0x82505410
	sub_82505410(ctx, base);
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
	// beq cr6,0x82506c00
	if (cr6.eq) goto loc_82506C00;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506bfc
	if (cr6.eq) goto loc_82506BFC;
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
loc_82506BFC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506C00:
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
	// bl 0x82503ae0
	sub_82503AE0(ctx, base);
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
	// beq cr6,0x82506c54
	if (cr6.eq) goto loc_82506C54;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506c50
	if (cr6.eq) goto loc_82506C50;
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
loc_82506C50:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82506C54:
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

__attribute__((alias("__imp__sub_82506C80"))) PPC_WEAK_FUNC(sub_82506C80);
PPC_FUNC_IMPL(__imp__sub_82506C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506C84"))) PPC_WEAK_FUNC(sub_82506C84);
PPC_FUNC_IMPL(__imp__sub_82506C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506C88"))) PPC_WEAK_FUNC(sub_82506C88);
PPC_FUNC_IMPL(__imp__sub_82506C88) {
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
	// bl 0x82502940
	sub_82502940(ctx, base);
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
	// bl 0x825041e0
	sub_825041E0(ctx, base);
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
	// beq cr6,0x82506d08
	if (cr6.eq) goto loc_82506D08;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506d04
	if (cr6.eq) goto loc_82506D04;
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
loc_82506D04:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506D08:
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
	// bl 0x82504260
	sub_82504260(ctx, base);
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
	// beq cr6,0x82506d5c
	if (cr6.eq) goto loc_82506D5C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506d58
	if (cr6.eq) goto loc_82506D58;
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
loc_82506D58:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82506D5C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19680
	ctx.r10.s64 = r11.s64 + -19680;
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

__attribute__((alias("__imp__sub_82506D88"))) PPC_WEAK_FUNC(sub_82506D88);
PPC_FUNC_IMPL(__imp__sub_82506D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506D8C"))) PPC_WEAK_FUNC(sub_82506D8C);
PPC_FUNC_IMPL(__imp__sub_82506D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506D90"))) PPC_WEAK_FUNC(sub_82506D90);
PPC_FUNC_IMPL(__imp__sub_82506D90) {
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
	// bl 0x82502940
	sub_82502940(ctx, base);
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
	// bl 0x825042e0
	sub_825042E0(ctx, base);
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
	// beq cr6,0x82506e10
	if (cr6.eq) goto loc_82506E10;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506e0c
	if (cr6.eq) goto loc_82506E0C;
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
loc_82506E0C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506E10:
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
	// bl 0x82504360
	sub_82504360(ctx, base);
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
	// beq cr6,0x82506e64
	if (cr6.eq) goto loc_82506E64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506e60
	if (cr6.eq) goto loc_82506E60;
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
loc_82506E60:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82506E64:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19680
	ctx.r10.s64 = r11.s64 + -19680;
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

__attribute__((alias("__imp__sub_82506E90"))) PPC_WEAK_FUNC(sub_82506E90);
PPC_FUNC_IMPL(__imp__sub_82506E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506E94"))) PPC_WEAK_FUNC(sub_82506E94);
PPC_FUNC_IMPL(__imp__sub_82506E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506E98"))) PPC_WEAK_FUNC(sub_82506E98);
PPC_FUNC_IMPL(__imp__sub_82506E98) {
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
	// bl 0x825029d0
	sub_825029D0(ctx, base);
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
	// bl 0x825043e0
	sub_825043E0(ctx, base);
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
	// beq cr6,0x82506f18
	if (cr6.eq) goto loc_82506F18;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506f14
	if (cr6.eq) goto loc_82506F14;
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
loc_82506F14:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82506F18:
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
	// bl 0x82504460
	sub_82504460(ctx, base);
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
	// beq cr6,0x82506f6c
	if (cr6.eq) goto loc_82506F6C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82506f68
	if (cr6.eq) goto loc_82506F68;
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
loc_82506F68:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82506F6C:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,23392
	ctx.r10.s64 = r11.s64 + 23392;
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

__attribute__((alias("__imp__sub_82506F98"))) PPC_WEAK_FUNC(sub_82506F98);
PPC_FUNC_IMPL(__imp__sub_82506F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82506F9C"))) PPC_WEAK_FUNC(sub_82506F9C);
PPC_FUNC_IMPL(__imp__sub_82506F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506FA0"))) PPC_WEAK_FUNC(sub_82506FA0);
PPC_FUNC_IMPL(__imp__sub_82506FA0) {
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
	// bl 0x82502940
	sub_82502940(ctx, base);
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
	// bl 0x825044e0
	sub_825044E0(ctx, base);
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
	// beq cr6,0x82507020
	if (cr6.eq) goto loc_82507020;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250701c
	if (cr6.eq) goto loc_8250701C;
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
loc_8250701C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507020:
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
	// bl 0x82504560
	sub_82504560(ctx, base);
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
	// beq cr6,0x82507074
	if (cr6.eq) goto loc_82507074;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507070
	if (cr6.eq) goto loc_82507070;
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
loc_82507070:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82507074:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19680
	ctx.r10.s64 = r11.s64 + -19680;
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

__attribute__((alias("__imp__sub_825070A0"))) PPC_WEAK_FUNC(sub_825070A0);
PPC_FUNC_IMPL(__imp__sub_825070A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825070A4"))) PPC_WEAK_FUNC(sub_825070A4);
PPC_FUNC_IMPL(__imp__sub_825070A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825070A8"))) PPC_WEAK_FUNC(sub_825070A8);
PPC_FUNC_IMPL(__imp__sub_825070A8) {
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
	// bl 0x82502940
	sub_82502940(ctx, base);
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
	// bl 0x825045e0
	sub_825045E0(ctx, base);
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
	// beq cr6,0x82507128
	if (cr6.eq) goto loc_82507128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507124
	if (cr6.eq) goto loc_82507124;
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
loc_82507124:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507128:
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
	// bl 0x82504660
	sub_82504660(ctx, base);
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
	// beq cr6,0x8250717c
	if (cr6.eq) goto loc_8250717C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507178
	if (cr6.eq) goto loc_82507178;
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
loc_82507178:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8250717C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19680
	ctx.r10.s64 = r11.s64 + -19680;
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

__attribute__((alias("__imp__sub_825071A8"))) PPC_WEAK_FUNC(sub_825071A8);
PPC_FUNC_IMPL(__imp__sub_825071A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825071AC"))) PPC_WEAK_FUNC(sub_825071AC);
PPC_FUNC_IMPL(__imp__sub_825071AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825071B0"))) PPC_WEAK_FUNC(sub_825071B0);
PPC_FUNC_IMPL(__imp__sub_825071B0) {
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
	// bl 0x82505490
	sub_82505490(ctx, base);
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
	// beq cr6,0x82507230
	if (cr6.eq) goto loc_82507230;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250722c
	if (cr6.eq) goto loc_8250722C;
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
loc_8250722C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507230:
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
	// bl 0x82503b60
	sub_82503B60(ctx, base);
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
	// beq cr6,0x82507284
	if (cr6.eq) goto loc_82507284;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507280
	if (cr6.eq) goto loc_82507280;
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
loc_82507280:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82507284:
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

__attribute__((alias("__imp__sub_825072B0"))) PPC_WEAK_FUNC(sub_825072B0);
PPC_FUNC_IMPL(__imp__sub_825072B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825072B4"))) PPC_WEAK_FUNC(sub_825072B4);
PPC_FUNC_IMPL(__imp__sub_825072B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825072B8"))) PPC_WEAK_FUNC(sub_825072B8);
PPC_FUNC_IMPL(__imp__sub_825072B8) {
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
	// bl 0x82502940
	sub_82502940(ctx, base);
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
	// bl 0x825047e0
	sub_825047E0(ctx, base);
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
	// beq cr6,0x82507338
	if (cr6.eq) goto loc_82507338;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507334
	if (cr6.eq) goto loc_82507334;
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
loc_82507334:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507338:
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
	// bl 0x82504860
	sub_82504860(ctx, base);
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
	// beq cr6,0x8250738c
	if (cr6.eq) goto loc_8250738C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507388
	if (cr6.eq) goto loc_82507388;
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
loc_82507388:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8250738C:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19680
	ctx.r10.s64 = r11.s64 + -19680;
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

__attribute__((alias("__imp__sub_825073B8"))) PPC_WEAK_FUNC(sub_825073B8);
PPC_FUNC_IMPL(__imp__sub_825073B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825073BC"))) PPC_WEAK_FUNC(sub_825073BC);
PPC_FUNC_IMPL(__imp__sub_825073BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825073C0"))) PPC_WEAK_FUNC(sub_825073C0);
PPC_FUNC_IMPL(__imp__sub_825073C0) {
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
	// bl 0x824de128
	sub_824DE128(ctx, base);
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
	// bl 0x82505510
	sub_82505510(ctx, base);
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
	// beq cr6,0x82507440
	if (cr6.eq) goto loc_82507440;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250743c
	if (cr6.eq) goto loc_8250743C;
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
loc_8250743C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507440:
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
	// bl 0x82503be0
	sub_82503BE0(ctx, base);
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
	// beq cr6,0x82507494
	if (cr6.eq) goto loc_82507494;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507490
	if (cr6.eq) goto loc_82507490;
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
loc_82507490:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82507494:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,23376
	ctx.r10.s64 = r11.s64 + 23376;
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

__attribute__((alias("__imp__sub_825074C0"))) PPC_WEAK_FUNC(sub_825074C0);
PPC_FUNC_IMPL(__imp__sub_825074C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825074C4"))) PPC_WEAK_FUNC(sub_825074C4);
PPC_FUNC_IMPL(__imp__sub_825074C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825074C8"))) PPC_WEAK_FUNC(sub_825074C8);
PPC_FUNC_IMPL(__imp__sub_825074C8) {
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
	// bl 0x82505590
	sub_82505590(ctx, base);
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
	// beq cr6,0x82507570
	if (cr6.eq) goto loc_82507570;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250756c
	if (cr6.eq) goto loc_8250756C;
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
loc_8250756C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82507570:
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
	// bl 0x82503c60
	sub_82503C60(ctx, base);
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
	// beq cr6,0x825075c4
	if (cr6.eq) goto loc_825075C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825075c0
	if (cr6.eq) goto loc_825075C0;
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
loc_825075C0:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_825075C4:
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

__attribute__((alias("__imp__sub_825075F0"))) PPC_WEAK_FUNC(sub_825075F0);
PPC_FUNC_IMPL(__imp__sub_825075F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825075F4"))) PPC_WEAK_FUNC(sub_825075F4);
PPC_FUNC_IMPL(__imp__sub_825075F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825075F8"))) PPC_WEAK_FUNC(sub_825075F8);
PPC_FUNC_IMPL(__imp__sub_825075F8) {
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
	// bl 0x82505610
	sub_82505610(ctx, base);
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
	// beq cr6,0x82507678
	if (cr6.eq) goto loc_82507678;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507674
	if (cr6.eq) goto loc_82507674;
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
loc_82507674:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507678:
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
	// bl 0x82503ce0
	sub_82503CE0(ctx, base);
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
	// beq cr6,0x825076cc
	if (cr6.eq) goto loc_825076CC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825076c8
	if (cr6.eq) goto loc_825076C8;
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
loc_825076C8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_825076CC:
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

__attribute__((alias("__imp__sub_825076F8"))) PPC_WEAK_FUNC(sub_825076F8);
PPC_FUNC_IMPL(__imp__sub_825076F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825076FC"))) PPC_WEAK_FUNC(sub_825076FC);
PPC_FUNC_IMPL(__imp__sub_825076FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507700"))) PPC_WEAK_FUNC(sub_82507700);
PPC_FUNC_IMPL(__imp__sub_82507700) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82505b70
	sub_82505B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507710"))) PPC_WEAK_FUNC(sub_82507710);
PPC_FUNC_IMPL(__imp__sub_82507710) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82505c38
	sub_82505C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507720"))) PPC_WEAK_FUNC(sub_82507720);
PPC_FUNC_IMPL(__imp__sub_82507720) {
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
	// bl 0x82504d90
	sub_82504D90(ctx, base);
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
	// beq cr6,0x825077a0
	if (cr6.eq) goto loc_825077A0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250779c
	if (cr6.eq) goto loc_8250779C;
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
loc_8250779C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_825077A0:
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
	// bl 0x82503360
	sub_82503360(ctx, base);
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
	// beq cr6,0x825077f4
	if (cr6.eq) goto loc_825077F4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825077f0
	if (cr6.eq) goto loc_825077F0;
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
loc_825077F0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_825077F4:
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

__attribute__((alias("__imp__sub_82507820"))) PPC_WEAK_FUNC(sub_82507820);
PPC_FUNC_IMPL(__imp__sub_82507820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82507824"))) PPC_WEAK_FUNC(sub_82507824);
PPC_FUNC_IMPL(__imp__sub_82507824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507828"))) PPC_WEAK_FUNC(sub_82507828);
PPC_FUNC_IMPL(__imp__sub_82507828) {
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
	// bl 0x82504e10
	sub_82504E10(ctx, base);
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
	// beq cr6,0x825078a8
	if (cr6.eq) goto loc_825078A8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825078a4
	if (cr6.eq) goto loc_825078A4;
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
loc_825078A4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_825078A8:
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
	// bl 0x825033e0
	sub_825033E0(ctx, base);
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
	// beq cr6,0x825078fc
	if (cr6.eq) goto loc_825078FC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825078f8
	if (cr6.eq) goto loc_825078F8;
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
loc_825078F8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_825078FC:
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

__attribute__((alias("__imp__sub_82507928"))) PPC_WEAK_FUNC(sub_82507928);
PPC_FUNC_IMPL(__imp__sub_82507928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250792C"))) PPC_WEAK_FUNC(sub_8250792C);
PPC_FUNC_IMPL(__imp__sub_8250792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507930"))) PPC_WEAK_FUNC(sub_82507930);
PPC_FUNC_IMPL(__imp__sub_82507930) {
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
	// bl 0x82505190
	sub_82505190(ctx, base);
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
	// beq cr6,0x825079b0
	if (cr6.eq) goto loc_825079B0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825079ac
	if (cr6.eq) goto loc_825079AC;
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
loc_825079AC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_825079B0:
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
	// bl 0x825037e0
	sub_825037E0(ctx, base);
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
	// beq cr6,0x82507a04
	if (cr6.eq) goto loc_82507A04;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507a00
	if (cr6.eq) goto loc_82507A00;
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
loc_82507A00:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82507A04:
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

__attribute__((alias("__imp__sub_82507A30"))) PPC_WEAK_FUNC(sub_82507A30);
PPC_FUNC_IMPL(__imp__sub_82507A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82507A34"))) PPC_WEAK_FUNC(sub_82507A34);
PPC_FUNC_IMPL(__imp__sub_82507A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507A38"))) PPC_WEAK_FUNC(sub_82507A38);
PPC_FUNC_IMPL(__imp__sub_82507A38) {
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
	// bl 0x82502a60
	sub_82502A60(ctx, base);
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
	// bl 0x825046e0
	sub_825046E0(ctx, base);
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
	// beq cr6,0x82507ab8
	if (cr6.eq) goto loc_82507AB8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507ab4
	if (cr6.eq) goto loc_82507AB4;
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
loc_82507AB4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82507AB8:
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
	// bl 0x82504760
	sub_82504760(ctx, base);
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
	// beq cr6,0x82507b0c
	if (cr6.eq) goto loc_82507B0C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82507b08
	if (cr6.eq) goto loc_82507B08;
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
loc_82507B08:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82507B0C:
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

__attribute__((alias("__imp__sub_82507B38"))) PPC_WEAK_FUNC(sub_82507B38);
PPC_FUNC_IMPL(__imp__sub_82507B38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82507B3C"))) PPC_WEAK_FUNC(sub_82507B3C);
PPC_FUNC_IMPL(__imp__sub_82507B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507B40"))) PPC_WEAK_FUNC(sub_82507B40);
PPC_FUNC_IMPL(__imp__sub_82507B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15004
	ctx.r4.s64 = r11.s64 + 15004;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// bl 0x82501b40
	sub_82501B40(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32176
	ctx.r7.s64 = -2108686336;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-13168
	ctx.r6.s64 = ctx.r7.s64 + -13168;
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
	// addi r4,r10,14992
	ctx.r4.s64 = ctx.r10.s64 + 14992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32176
	ctx.r7.s64 = -2108686336;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-13176
	ctx.r10.s64 = ctx.r7.s64 + -13176;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14976
	ctx.r4.s64 = ctx.r9.s64 + 14976;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32211
	ctx.r6.s64 = -2110980096;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,9632
	ctx.r10.s64 = ctx.r6.s64 + 9632;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14960
	ctx.r4.s64 = ctx.r9.s64 + 14960;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505f38
	sub_82505F38(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32176
	ctx.r6.s64 = -2108686336;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r6,-13144
	ctx.r4.s64 = ctx.r6.s64 + -13144;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r30,r5,14928
	r30.s64 = ctx.r5.s64 + 14928;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,30080
	ctx.r5.s64 = ctx.r8.s64 + 30080;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507720
	sub_82507720(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,32544
	ctx.r8.s64 = ctx.r10.s64 + 32544;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,14892
	ctx.r4.s64 = ctx.r7.s64 + 14892;
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
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r4,-31720
	ctx.r10.s64 = ctx.r4.s64 + -31720;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14880
	ctx.r4.s64 = ctx.r9.s64 + 14880;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-31560
	r11.s64 = ctx.r6.s64 + -31560;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,14860
	ctx.r4.s64 = ctx.r5.s64 + 14860;
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
	// bl 0x82507828
	sub_82507828(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-31192
	ctx.r10.s64 = ctx.r7.s64 + -31192;
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
	// addi r4,r9,14832
	ctx.r4.s64 = ctx.r9.s64 + 14832;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507828
	sub_82507828(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,30992
	ctx.r10.s64 = ctx.r6.s64 + 30992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14808
	ctx.r4.s64 = ctx.r9.s64 + 14808;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,31312
	ctx.r10.s64 = ctx.r6.s64 + 31312;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14788
	ctx.r4.s64 = ctx.r9.s64 + 14788;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,31528
	r11.s64 = ctx.r6.s64 + 31528;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,14768
	ctx.r4.s64 = ctx.r5.s64 + 14768;
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
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r7,29504
	ctx.r10.s64 = ctx.r7.s64 + 29504;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14752
	ctx.r4.s64 = ctx.r9.s64 + 14752;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,28112
	ctx.r10.s64 = ctx.r6.s64 + 28112;
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
	// addi r4,r9,14736
	ctx.r4.s64 = ctx.r9.s64 + 14736;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506068
	sub_82506068(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r6,15352
	ctx.r4.s64 = ctx.r6.s64 + 15352;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r30,r5,14720
	r30.s64 = ctx.r5.s64 + 14720;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506170
	sub_82506170(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32176
	ctx.r8.s64 = -2108686336;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r6,r8,-13136
	ctx.r6.s64 = ctx.r8.s64 + -13136;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r7,8804
	ctx.r4.s64 = ctx.r7.s64 + 8804;
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
	// bl 0x82505f38
	sub_82505F38(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r7,r8,15496
	ctx.r7.s64 = ctx.r8.s64 + 15496;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r28,r11,14708
	r28.s64 = r11.s64 + 14708;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r5,r7,15520
	ctx.r5.s64 = ctx.r7.s64 + 15520;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r26,r6,14696
	r26.s64 = ctx.r6.s64 + 14696;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,15544
	ctx.r5.s64 = ctx.r8.s64 + 15544;
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
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,15632
	ctx.r8.s64 = ctx.r10.s64 + 15632;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r5,15752
	ctx.r10.s64 = ctx.r5.s64 + 15752;
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
	// addi r4,r9,14688
	ctx.r4.s64 = ctx.r9.s64 + 14688;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825062a0
	sub_825062A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,15880
	ctx.r10.s64 = ctx.r6.s64 + 15880;
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
	// addi r4,r9,14680
	ctx.r4.s64 = ctx.r9.s64 + 14680;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,15064
	ctx.r10.s64 = ctx.r6.s64 + 15064;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14664
	ctx.r4.s64 = ctx.r9.s64 + 14664;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505e30
	sub_82505E30(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r6,15904
	ctx.r9.s64 = ctx.r6.s64 + 15904;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r26,r11,14648
	r26.s64 = r11.s64 + 14648;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505690
	sub_82505690(ctx, base);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r6,16296
	ctx.r5.s64 = ctx.r6.s64 + 16296;
	// addi r25,r11,14636
	r25.s64 = r11.s64 + 14636;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825063a8
	sub_825063A8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r7,16552
	ctx.r6.s64 = ctx.r7.s64 + 16552;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r24,r11,14620
	r24.s64 = r11.s64 + 14620;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825062a0
	sub_825062A0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r7,16680
	ctx.r6.s64 = ctx.r7.s64 + 16680;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r23,r11,14592
	r23.s64 = r11.s64 + 14592;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825063a8
	sub_825063A8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,25528
	r11.s64 = ctx.r5.s64 + 25528;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r6,14568
	ctx.r4.s64 = ctx.r6.s64 + 14568;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825064b0
	sub_825064B0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r7,r8,25360
	ctx.r7.s64 = ctx.r8.s64 + 25360;
	// addi r22,r11,14552
	r22.s64 = r11.s64 + 14552;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825064b0
	sub_825064B0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r7,16808
	ctx.r6.s64 = ctx.r7.s64 + 16808;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r21,r11,14536
	r21.s64 = r11.s64 + 14536;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825062a0
	sub_825062A0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,16936
	ctx.r10.s64 = ctx.r7.s64 + 16936;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14516
	ctx.r4.s64 = ctx.r9.s64 + 14516;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,16952
	r11.s64 = ctx.r6.s64 + 16952;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,14496
	ctx.r4.s64 = ctx.r5.s64 + 14496;
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
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,27384
	ctx.r10.s64 = ctx.r7.s64 + 27384;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14468
	ctx.r4.s64 = ctx.r9.s64 + 14468;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507828
	sub_82507828(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25640
	ctx.r10.s64 = ctx.r6.s64 + 25640;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14440
	ctx.r4.s64 = ctx.r9.s64 + 14440;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825065b8
	sub_825065B8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,27488
	ctx.r10.s64 = ctx.r6.s64 + 27488;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14408
	ctx.r4.s64 = ctx.r9.s64 + 14408;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507828
	sub_82507828(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,25704
	r11.s64 = ctx.r6.s64 + 25704;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,14376
	ctx.r4.s64 = ctx.r5.s64 + 14376;
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
	// bl 0x825065b8
	sub_825065B8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,27592
	ctx.r10.s64 = ctx.r7.s64 + 27592;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14344
	ctx.r4.s64 = ctx.r9.s64 + 14344;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507828
	sub_82507828(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25768
	ctx.r10.s64 = ctx.r6.s64 + 25768;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14312
	ctx.r4.s64 = ctx.r9.s64 + 14312;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825065b8
	sub_825065B8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,27696
	ctx.r10.s64 = ctx.r6.s64 + 27696;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14292
	ctx.r4.s64 = ctx.r9.s64 + 14292;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507930
	sub_82507930(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,25832
	r11.s64 = ctx.r6.s64 + 25832;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,14272
	ctx.r4.s64 = ctx.r5.s64 + 14272;
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
	// bl 0x825063a8
	sub_825063A8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,15928
	ctx.r10.s64 = ctx.r7.s64 + 15928;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14248
	ctx.r4.s64 = ctx.r9.s64 + 14248;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825066c0
	sub_825066C0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,19536
	ctx.r10.s64 = ctx.r6.s64 + 19536;
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
	// addi r4,r9,14236
	ctx.r4.s64 = ctx.r9.s64 + 14236;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825066c0
	sub_825066C0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,20520
	ctx.r10.s64 = ctx.r6.s64 + 20520;
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
	// addi r4,r9,14216
	ctx.r4.s64 = ctx.r9.s64 + 14216;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,17600
	ctx.r10.s64 = ctx.r6.s64 + 17600;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14204
	ctx.r4.s64 = ctx.r9.s64 + 14204;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825066c0
	sub_825066C0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,26520
	ctx.r10.s64 = ctx.r6.s64 + 26520;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14180
	ctx.r4.s64 = ctx.r9.s64 + 14180;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,17456
	ctx.r10.s64 = ctx.r6.s64 + 17456;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,14164
	ctx.r4.s64 = ctx.r9.s64 + 14164;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,17480
	ctx.r10.s64 = ctx.r6.s64 + 17480;
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
	// addi r4,r9,14148
	ctx.r4.s64 = ctx.r9.s64 + 14148;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,17528
	r11.s64 = ctx.r5.s64 + 17528;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r4,14128
	ctx.r4.s64 = ctx.r4.s64 + 14128;
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
	// bl 0x825057c0
	sub_825057C0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,17504
	ctx.r5.s64 = ctx.r8.s64 + 17504;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,14116
	ctx.r4.s64 = ctx.r4.s64 + 14116;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,15352
	ctx.r7.s64 = ctx.r9.s64 + 15352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506170
	sub_82506170(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r4,-32169
	ctx.r4.s64 = -2108227584;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r10,r4,18408
	ctx.r10.s64 = ctx.r4.s64 + 18408;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,14092
	ctx.r4.s64 = ctx.r9.s64 + 14092;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r11,r5,18440
	r11.s64 = ctx.r5.s64 + 18440;
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
	// addi r4,r4,14068
	ctx.r4.s64 = ctx.r4.s64 + 14068;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505d00
	sub_82505D00(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,18280
	ctx.r5.s64 = ctx.r8.s64 + 18280;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r4,14048
	ctx.r4.s64 = ctx.r4.s64 + 14048;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825066c0
	sub_825066C0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,18344
	ctx.r7.s64 = ctx.r9.s64 + 18344;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,14032
	ctx.r4.s64 = ctx.r5.s64 + 14032;
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
	// bl 0x825066c0
	sub_825066C0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,18448
	ctx.r8.s64 = ctx.r10.s64 + 18448;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,14000
	ctx.r4.s64 = ctx.r7.s64 + 14000;
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
	// bl 0x825057c0
	sub_825057C0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,18496
	ctx.r8.s64 = ctx.r10.s64 + 18496;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r9,13976
	ctx.r4.s64 = ctx.r9.s64 + 13976;
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
	// bl 0x825057c0
	sub_825057C0(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r5,16424
	ctx.r10.s64 = ctx.r5.s64 + 16424;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,13952
	ctx.r4.s64 = ctx.r9.s64 + 13952;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825063a8
	sub_825063A8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25888
	ctx.r10.s64 = ctx.r6.s64 + 25888;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13936
	ctx.r4.s64 = ctx.r9.s64 + 13936;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825062a0
	sub_825062A0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,25944
	ctx.r10.s64 = ctx.r6.s64 + 25944;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,13920
	ctx.r4.s64 = ctx.r9.s64 + 13920;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507720
	sub_82507720(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r18,r3,1
	r18.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,13916
	ctx.r4.s64 = ctx.r8.s64 + 13916;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82502d60
	sub_82502D60(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82508b14
	if (cr6.eq) goto loc_82508B14;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_82508B14:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508b30
	if (cr6.eq) goto loc_82508B30;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x82508b30
	if (cr6.eq) goto loc_82508B30;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_82508B30:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,13896
	ctx.r4.s64 = r11.s64 + 13896;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82501bb8
	sub_82501BB8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,7040
	ctx.r10.s64 = ctx.r7.s64 + 7040;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825067f0
	sub_825067F0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,5248
	ctx.r10.s64 = ctx.r7.s64 + 5248;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13880
	ctx.r4.s64 = ctx.r9.s64 + 13880;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506920
	sub_82506920(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,5256
	ctx.r10.s64 = ctx.r6.s64 + 5256;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13868
	ctx.r4.s64 = ctx.r9.s64 + 13868;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825067f0
	sub_825067F0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,5320
	r11.s64 = ctx.r6.s64 + 5320;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,13840
	ctx.r4.s64 = ctx.r5.s64 + 13840;
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
	// bl 0x82506a50
	sub_82506A50(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,5496
	ctx.r10.s64 = ctx.r7.s64 + 5496;
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
	// addi r4,r9,13820
	ctx.r4.s64 = ctx.r9.s64 + 13820;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825067f0
	sub_825067F0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,5544
	ctx.r10.s64 = ctx.r6.s64 + 5544;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13788
	ctx.r4.s64 = ctx.r9.s64 + 13788;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506b80
	sub_82506B80(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,6808
	ctx.r10.s64 = ctx.r6.s64 + 6808;
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
	// addi r4,r9,13768
	ctx.r4.s64 = ctx.r9.s64 + 13768;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825067f0
	sub_825067F0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,5488
	ctx.r10.s64 = ctx.r6.s64 + 5488;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13740
	ctx.r4.s64 = ctx.r9.s64 + 13740;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825067f0
	sub_825067F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r28,36(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r19,r3,1
	r19.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,7920
	ctx.r4.s64 = ctx.r8.s64 + 7920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82502df0
	sub_82502DF0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82508e10
	if (cr6.eq) goto loc_82508E10;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_82508E10:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508e2c
	if (cr6.eq) goto loc_82508E2C;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x82508e2c
	if (cr6.eq) goto loc_82508E2C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_82508E2C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,13720
	ctx.r4.s64 = r11.s64 + 13720;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x82501c30
	sub_82501C30(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-1416
	ctx.r10.s64 = ctx.r7.s64 + -1416;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825058f0
	sub_825058F0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-1576
	ctx.r10.s64 = ctx.r7.s64 + -1576;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13708
	ctx.r4.s64 = ctx.r9.s64 + 13708;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82505a20
	sub_82505A20(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-1512
	ctx.r10.s64 = ctx.r6.s64 + -1512;
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
	// addi r4,r9,13684
	ctx.r4.s64 = ctx.r9.s64 + 13684;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506c88
	sub_82506C88(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r6,-1488
	r11.s64 = ctx.r6.s64 + -1488;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r5,13672
	ctx.r4.s64 = ctx.r5.s64 + 13672;
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
	// bl 0x82506c88
	sub_82506C88(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-1464
	ctx.r10.s64 = ctx.r7.s64 + -1464;
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
	// addi r4,r9,13656
	ctx.r4.s64 = ctx.r9.s64 + 13656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506c88
	sub_82506C88(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-1440
	ctx.r10.s64 = ctx.r6.s64 + -1440;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13640
	ctx.r4.s64 = ctx.r9.s64 + 13640;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506c88
	sub_82506C88(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-800
	ctx.r10.s64 = ctx.r6.s64 + -800;
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
	// addi r4,r9,13624
	ctx.r4.s64 = ctx.r9.s64 + 13624;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-728
	ctx.r10.s64 = ctx.r6.s64 + -728;
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
	// addi r4,r9,13604
	ctx.r4.s64 = ctx.r9.s64 + 13604;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506e98
	sub_82506E98(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r10,r6,-592
	ctx.r10.s64 = ctx.r6.s64 + -592;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
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
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-560
	ctx.r10.s64 = ctx.r7.s64 + -560;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
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
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-528
	ctx.r10.s64 = ctx.r7.s64 + -528;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// bl 0x82506fa0
	sub_82506FA0(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-496
	r11.s64 = ctx.r6.s64 + -496;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,13572
	ctx.r4.s64 = ctx.r5.s64 + 13572;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506fa0
	sub_82506FA0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-376
	ctx.r5.s64 = ctx.r8.s64 + -376;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
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
	// bl 0x825070a8
	sub_825070A8(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,1040
	ctx.r8.s64 = ctx.r10.s64 + 1040;
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
	// addi r4,r7,13556
	ctx.r4.s64 = ctx.r7.s64 + 13556;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506fa0
	sub_82506FA0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// lis r4,-32169
	ctx.r4.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r4,-344
	ctx.r10.s64 = ctx.r4.s64 + -344;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13536
	ctx.r4.s64 = ctx.r9.s64 + 13536;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82507a38
	sub_82507A38(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-128
	ctx.r10.s64 = ctx.r6.s64 + -128;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13516
	ctx.r4.s64 = ctx.r9.s64 + 13516;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r6,-48
	ctx.r10.s64 = ctx.r6.s64 + -48;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,13500
	ctx.r4.s64 = ctx.r9.s64 + 13500;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,1248
	ctx.r10.s64 = ctx.r6.s64 + 1248;
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
	// addi r4,r9,13488
	ctx.r4.s64 = ctx.r9.s64 + 13488;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,160
	ctx.r10.s64 = ctx.r6.s64 + 160;
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
	// addi r4,r9,13476
	ctx.r4.s64 = ctx.r9.s64 + 13476;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82506d90
	sub_82506D90(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,1304
	ctx.r10.s64 = ctx.r6.s64 + 1304;
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
	// addi r4,r9,13464
	ctx.r4.s64 = ctx.r9.s64 + 13464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825071b0
	sub_825071B0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,232
	ctx.r10.s64 = ctx.r6.s64 + 232;
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
	// addi r4,r9,13452
	ctx.r4.s64 = ctx.r9.s64 + 13452;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825072b8
	sub_825072B8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r10,r6,1792
	ctx.r10.s64 = ctx.r6.s64 + 1792;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13436
	ctx.r4.s64 = ctx.r9.s64 + 13436;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825073c0
	sub_825073C0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,296
	ctx.r10.s64 = ctx.r6.s64 + 296;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// bl 0x825070a8
	sub_825070A8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,392
	ctx.r10.s64 = ctx.r7.s64 + 392;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13416
	ctx.r4.s64 = ctx.r9.s64 + 13416;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825074c8
	sub_825074C8(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-1408
	ctx.r5.s64 = ctx.r8.s64 + -1408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r10,13396
	ctx.r4.s64 = ctx.r10.s64 + 13396;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825074c8
	sub_825074C8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-1400
	ctx.r10.s64 = ctx.r7.s64 + -1400;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,13380
	ctx.r4.s64 = ctx.r9.s64 + 13380;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825075f8
	sub_825075F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
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
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,13372
	ctx.r4.s64 = ctx.r8.s64 + 13372;
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82502e80
	sub_82502E80(ctx, base);
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
	// beq cr6,0x82509574
	if (cr6.eq) goto loc_82509574;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_82509574:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509590
	if (cr6.eq) goto loc_82509590;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x82509590
	if (cr6.eq) goto loc_82509590;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_82509590:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_82509594"))) PPC_WEAK_FUNC(sub_82509594);
PPC_FUNC_IMPL(__imp__sub_82509594) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_82509598"))) PPC_WEAK_FUNC(sub_82509598);
PPC_FUNC_IMPL(__imp__sub_82509598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// neg r11,r3
	r11.s64 = -ctx.r3.s64;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// andc r9,r11,r3
	ctx.r9.u64 = r11.u64 & ~ctx.r3.u64;
	// rlwinm r11,r9,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stb r11,-24080(r10)
	PPC_STORE_U8(ctx.r10.u32 + -24080, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825095B0"))) PPC_WEAK_FUNC(sub_825095B0);
PPC_FUNC_IMPL(__imp__sub_825095B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825095B4"))) PPC_WEAK_FUNC(sub_825095B4);
PPC_FUNC_IMPL(__imp__sub_825095B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825095B8"))) PPC_WEAK_FUNC(sub_825095B8);
PPC_FUNC_IMPL(__imp__sub_825095B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825095BC"))) PPC_WEAK_FUNC(sub_825095BC);
PPC_FUNC_IMPL(__imp__sub_825095BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825095C0"))) PPC_WEAK_FUNC(sub_825095C0);
PPC_FUNC_IMPL(__imp__sub_825095C0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825095fc
	if (cr6.eq) goto loc_825095FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825095fc
	if (cr6.eq) goto loc_825095FC;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,29820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825095fc
	if (cr6.eq) goto loc_825095FC;
	// bl 0x8239a7c8
	sub_8239A7C8(ctx, base);
loc_825095FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82509608"))) PPC_WEAK_FUNC(sub_82509608);
PPC_FUNC_IMPL(__imp__sub_82509608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250960C"))) PPC_WEAK_FUNC(sub_8250960C);
PPC_FUNC_IMPL(__imp__sub_8250960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509610"))) PPC_WEAK_FUNC(sub_82509610);
PPC_FUNC_IMPL(__imp__sub_82509610) {
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
	// li r29,15
	r29.s64 = 15;
	// li r30,15
	r30.s64 = 15;
	// li r28,79
	r28.s64 = 79;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82509634
	if (!cr6.eq) goto loc_82509634;
	// li r29,64
	r29.s64 = 64;
loc_82509634:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82509640
	if (!cr6.eq) goto loc_82509640;
	// li r30,64
	r30.s64 = 64;
loc_82509640:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8250964c
	if (!cr6.eq) goto loc_8250964C;
	// li r28,78
	r28.s64 = 78;
loc_8250964C:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250969c
	if (cr6.eq) goto loc_8250969C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250969c
	if (cr6.eq) goto loc_8250969C;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82509684
	if (cr6.eq) goto loc_82509684;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509688
	if (!cr6.eq) goto loc_82509688;
loc_82509684:
	// li r11,0
	r11.s64 = 0;
loc_82509688:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823939a8
	sub_823939A8(ctx, base);
loc_8250969C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825096A0"))) PPC_WEAK_FUNC(sub_825096A0);
PPC_FUNC_IMPL(__imp__sub_825096A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825096A4"))) PPC_WEAK_FUNC(sub_825096A4);
PPC_FUNC_IMPL(__imp__sub_825096A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825096A8"))) PPC_WEAK_FUNC(sub_825096A8);
PPC_FUNC_IMPL(__imp__sub_825096A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825096B0"))) PPC_WEAK_FUNC(sub_825096B0);
PPC_FUNC_IMPL(__imp__sub_825096B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825096f0
	if (cr6.eq) goto loc_825096F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825096f4
	if (!cr6.eq) goto loc_825096F4;
loc_825096F0:
	// li r11,0
	r11.s64 = 0;
loc_825096F4:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509730
	if (cr6.eq) goto loc_82509730;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f30,20(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,15092
	ctx.r9.s64 = ctx.r10.s64 + 15092;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82509730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82509748"))) PPC_WEAK_FUNC(sub_82509748);
PPC_FUNC_IMPL(__imp__sub_82509748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250974C"))) PPC_WEAK_FUNC(sub_8250974C);
PPC_FUNC_IMPL(__imp__sub_8250974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509750"))) PPC_WEAK_FUNC(sub_82509750);
PPC_FUNC_IMPL(__imp__sub_82509750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250977C"))) PPC_WEAK_FUNC(sub_8250977C);
PPC_FUNC_IMPL(__imp__sub_8250977C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509780"))) PPC_WEAK_FUNC(sub_82509780);
PPC_FUNC_IMPL(__imp__sub_82509780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x825097bc
	if (cr6.eq) goto loc_825097BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825097BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825097E4"))) PPC_WEAK_FUNC(sub_825097E4);
PPC_FUNC_IMPL(__imp__sub_825097E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825097E8"))) PPC_WEAK_FUNC(sub_825097E8);
PPC_FUNC_IMPL(__imp__sub_825097E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82509824
	if (cr6.eq) goto loc_82509824;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82509824:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250984C"))) PPC_WEAK_FUNC(sub_8250984C);
PPC_FUNC_IMPL(__imp__sub_8250984C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509850"))) PPC_WEAK_FUNC(sub_82509850);
PPC_FUNC_IMPL(__imp__sub_82509850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8250988c
	if (cr6.eq) goto loc_8250988C;
loc_82509874:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250988C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82509874
	if (!cr6.eq) goto loc_82509874;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825098C8"))) PPC_WEAK_FUNC(sub_825098C8);
PPC_FUNC_IMPL(__imp__sub_825098C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825098CC"))) PPC_WEAK_FUNC(sub_825098CC);
PPC_FUNC_IMPL(__imp__sub_825098CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825098D0"))) PPC_WEAK_FUNC(sub_825098D0);
PPC_FUNC_IMPL(__imp__sub_825098D0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
}

__attribute__((alias("__imp__sub_825098DC"))) PPC_WEAK_FUNC(sub_825098DC);
PPC_FUNC_IMPL(__imp__sub_825098DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250ab00
	sub_8250AB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825098E0"))) PPC_WEAK_FUNC(sub_825098E0);
PPC_FUNC_IMPL(__imp__sub_825098E0) {
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
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825099a0
	if (cr6.eq) goto loc_825099A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825099a0
	if (cr6.eq) goto loc_825099A0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825099a0
	if (cr6.lt) goto loc_825099A0;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bge cr6,0x825099a0
	if (!cr6.lt) goto loc_825099A0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,21020(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21020);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82509950
	if (cr6.eq) goto loc_82509950;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509954
	if (!cr6.eq) goto loc_82509954;
loc_82509950:
	// li r11,0
	r11.s64 = 0;
loc_82509954:
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
	// beq cr6,0x825099a0
	if (cr6.eq) goto loc_825099A0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825099a0
	if (!cr6.eq) goto loc_825099A0;
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
loc_825099A0:
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

__attribute__((alias("__imp__sub_825099B4"))) PPC_WEAK_FUNC(sub_825099B4);
PPC_FUNC_IMPL(__imp__sub_825099B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825099B8"))) PPC_WEAK_FUNC(sub_825099B8);
PPC_FUNC_IMPL(__imp__sub_825099B8) {
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
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82509a94
	if (cr6.eq) goto loc_82509A94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509a94
	if (cr6.eq) goto loc_82509A94;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bge cr6,0x82509a94
	if (!cr6.lt) goto loc_82509A94;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82509a94
	if (cr6.lt) goto loc_82509A94;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-29040
	r11.s64 = r11.s64 + -29040;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,21024(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21024);
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// beq cr6,0x82509a44
	if (cr6.eq) goto loc_82509A44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509a48
	if (!cr6.eq) goto loc_82509A48;
loc_82509A44:
	// li r11,0
	r11.s64 = 0;
loc_82509A48:
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
	// beq cr6,0x82509a94
	if (cr6.eq) goto loc_82509A94;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82509a94
	if (!cr6.eq) goto loc_82509A94;
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
loc_82509A94:
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

__attribute__((alias("__imp__sub_82509AA8"))) PPC_WEAK_FUNC(sub_82509AA8);
PPC_FUNC_IMPL(__imp__sub_82509AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509AAC"))) PPC_WEAK_FUNC(sub_82509AAC);
PPC_FUNC_IMPL(__imp__sub_82509AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509AB0"))) PPC_WEAK_FUNC(sub_82509AB0);
PPC_FUNC_IMPL(__imp__sub_82509AB0) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82509b60
	if (cr6.eq) goto loc_82509B60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509b60
	if (cr6.eq) goto loc_82509B60;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,21016(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21016);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82509b10
	if (cr6.eq) goto loc_82509B10;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509b14
	if (!cr6.eq) goto loc_82509B14;
loc_82509B10:
	// li r11,0
	r11.s64 = 0;
loc_82509B14:
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
	// beq cr6,0x82509b60
	if (cr6.eq) goto loc_82509B60;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82509b60
	if (!cr6.eq) goto loc_82509B60;
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
loc_82509B60:
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

__attribute__((alias("__imp__sub_82509B74"))) PPC_WEAK_FUNC(sub_82509B74);
PPC_FUNC_IMPL(__imp__sub_82509B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509B78"))) PPC_WEAK_FUNC(sub_82509B78);
PPC_FUNC_IMPL(__imp__sub_82509B78) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82509c28
	if (cr6.eq) goto loc_82509C28;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509c28
	if (cr6.eq) goto loc_82509C28;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,21424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21424);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82509bd8
	if (cr6.eq) goto loc_82509BD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509bdc
	if (!cr6.eq) goto loc_82509BDC;
loc_82509BD8:
	// li r11,0
	r11.s64 = 0;
loc_82509BDC:
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
	// beq cr6,0x82509c28
	if (cr6.eq) goto loc_82509C28;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82509c28
	if (!cr6.eq) goto loc_82509C28;
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
loc_82509C28:
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

__attribute__((alias("__imp__sub_82509C3C"))) PPC_WEAK_FUNC(sub_82509C3C);
PPC_FUNC_IMPL(__imp__sub_82509C3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509C40"))) PPC_WEAK_FUNC(sub_82509C40);
PPC_FUNC_IMPL(__imp__sub_82509C40) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82509cf0
	if (cr6.eq) goto loc_82509CF0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509cf0
	if (cr6.eq) goto loc_82509CF0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,21416(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21416);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82509ca0
	if (cr6.eq) goto loc_82509CA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509ca4
	if (!cr6.eq) goto loc_82509CA4;
loc_82509CA0:
	// li r11,0
	r11.s64 = 0;
loc_82509CA4:
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
	// beq cr6,0x82509cf0
	if (cr6.eq) goto loc_82509CF0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82509cf0
	if (!cr6.eq) goto loc_82509CF0;
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
loc_82509CF0:
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

__attribute__((alias("__imp__sub_82509D04"))) PPC_WEAK_FUNC(sub_82509D04);
PPC_FUNC_IMPL(__imp__sub_82509D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509D08"))) PPC_WEAK_FUNC(sub_82509D08);
PPC_FUNC_IMPL(__imp__sub_82509D08) {
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
	// beq cr6,0x82509db0
	if (cr6.eq) goto loc_82509DB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509db0
	if (cr6.eq) goto loc_82509DB0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,21412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21412);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82509d60
	if (cr6.eq) goto loc_82509D60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509d64
	if (!cr6.eq) goto loc_82509D64;
loc_82509D60:
	// li r11,0
	r11.s64 = 0;
loc_82509D64:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509db0
	if (cr6.eq) goto loc_82509DB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82509db0
	if (!cr6.eq) goto loc_82509DB0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82509DB0:
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

__attribute__((alias("__imp__sub_82509DC4"))) PPC_WEAK_FUNC(sub_82509DC4);
PPC_FUNC_IMPL(__imp__sub_82509DC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509DC8"))) PPC_WEAK_FUNC(sub_82509DC8);
PPC_FUNC_IMPL(__imp__sub_82509DC8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,23508(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 23508);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82509e08
	if (cr6.eq) goto loc_82509E08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82509e0c
	if (!cr6.eq) goto loc_82509E0C;
loc_82509E08:
	// li r11,0
	r11.s64 = 0;
loc_82509E0C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509e58
	if (cr6.eq) goto loc_82509E58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82509e58
	if (!cr6.eq) goto loc_82509E58;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82509E58:
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

__attribute__((alias("__imp__sub_82509E6C"))) PPC_WEAK_FUNC(sub_82509E6C);
PPC_FUNC_IMPL(__imp__sub_82509E6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509E70"))) PPC_WEAK_FUNC(sub_82509E70);
PPC_FUNC_IMPL(__imp__sub_82509E70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r31,30236(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82509f08
	if (cr6.eq) goto loc_82509F08;
	// li r11,0
	r11.s64 = 0;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,-29648(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29648);
	// lwz r4,18432(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509f00
	if (cr6.eq) goto loc_82509F00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509f00
	if (cr6.eq) goto loc_82509F00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82717a90
	sub_82717A90(ctx, base);
loc_82509F00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_82509F08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82509F18"))) PPC_WEAK_FUNC(sub_82509F18);
PPC_FUNC_IMPL(__imp__sub_82509F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509F1C"))) PPC_WEAK_FUNC(sub_82509F1C);
PPC_FUNC_IMPL(__imp__sub_82509F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509F20"))) PPC_WEAK_FUNC(sub_82509F20);
PPC_FUNC_IMPL(__imp__sub_82509F20) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,-29640(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29640);
	// lwz r4,18432(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509fb4
	if (cr6.eq) goto loc_82509FB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509fb4
	if (cr6.eq) goto loc_82509FB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509fb4
	if (cr6.eq) goto loc_82509FB4;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,29820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// bl 0x8239b5a0
	sub_8239B5A0(ctx, base);
loc_82509FB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82509FC8"))) PPC_WEAK_FUNC(sub_82509FC8);
PPC_FUNC_IMPL(__imp__sub_82509FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509FCC"))) PPC_WEAK_FUNC(sub_82509FCC);
PPC_FUNC_IMPL(__imp__sub_82509FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509FD0"))) PPC_WEAK_FUNC(sub_82509FD0);
PPC_FUNC_IMPL(__imp__sub_82509FD0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r29,30244(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 30244);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8250a0dc
	if (cr6.eq) goto loc_8250A0DC;
	// li r11,0
	r11.s64 = 0;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,-29636(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29636);
	// lwz r4,18432(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a0d4
	if (cr6.eq) goto loc_8250A0D4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b28b8
	sub_822B28B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a0d4
	if (cr6.eq) goto loc_8250A0D4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r11,15100
	r31.s64 = r11.s64 + 15100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
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
	// beq cr6,0x8250a0d4
	if (cr6.eq) goto loc_8250A0D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// bl 0x82396240
	sub_82396240(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d60f8
	sub_823D60F8(ctx, base);
loc_8250A0D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_8250A0DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8250A0E0"))) PPC_WEAK_FUNC(sub_8250A0E0);
PPC_FUNC_IMPL(__imp__sub_8250A0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250A0E4"))) PPC_WEAK_FUNC(sub_8250A0E4);
PPC_FUNC_IMPL(__imp__sub_8250A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A0E8"))) PPC_WEAK_FUNC(sub_8250A0E8);
PPC_FUNC_IMPL(__imp__sub_8250A0E8) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250a118
	if (cr6.eq) goto loc_8250A118;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250a11c
	if (!cr6.eq) goto loc_8250A11C;
loc_8250A118:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8250A11C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r16,r11,15384
	r16.s64 = r11.s64 + 15384;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a188
	if (cr6.eq) goto loc_8250A188;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A188:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a1a4
	if (cr6.eq) goto loc_8250A1A4;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a1a4
	if (cr6.eq) goto loc_8250A1A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A1A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r17,r11,15368
	r17.s64 = r11.s64 + 15368;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a208
	if (cr6.eq) goto loc_8250A208;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A208:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a224
	if (cr6.eq) goto loc_8250A224;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a224
	if (cr6.eq) goto loc_8250A224;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A224:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r18,r11,15352
	r18.s64 = r11.s64 + 15352;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a288
	if (cr6.eq) goto loc_8250A288;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A288:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a2a4
	if (cr6.eq) goto loc_8250A2A4;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a2a4
	if (cr6.eq) goto loc_8250A2A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A2A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r19,r11,15336
	r19.s64 = r11.s64 + 15336;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a308
	if (cr6.eq) goto loc_8250A308;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A308:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a324
	if (cr6.eq) goto loc_8250A324;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a324
	if (cr6.eq) goto loc_8250A324;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A324:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r20,r11,15316
	r20.s64 = r11.s64 + 15316;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a388
	if (cr6.eq) goto loc_8250A388;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A388:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a3a4
	if (cr6.eq) goto loc_8250A3A4;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a3a4
	if (cr6.eq) goto loc_8250A3A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A3A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r21,r11,15292
	r21.s64 = r11.s64 + 15292;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a408
	if (cr6.eq) goto loc_8250A408;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A408:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a424
	if (cr6.eq) goto loc_8250A424;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a424
	if (cr6.eq) goto loc_8250A424;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A424:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r22,r11,15272
	r22.s64 = r11.s64 + 15272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a488
	if (cr6.eq) goto loc_8250A488;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A488:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a4a4
	if (cr6.eq) goto loc_8250A4A4;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a4a4
	if (cr6.eq) goto loc_8250A4A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A4A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r23,r11,15252
	r23.s64 = r11.s64 + 15252;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a508
	if (cr6.eq) goto loc_8250A508;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A508:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a524
	if (cr6.eq) goto loc_8250A524;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a524
	if (cr6.eq) goto loc_8250A524;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A524:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r24,r11,15228
	r24.s64 = r11.s64 + 15228;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a588
	if (cr6.eq) goto loc_8250A588;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A588:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a5a4
	if (cr6.eq) goto loc_8250A5A4;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a5a4
	if (cr6.eq) goto loc_8250A5A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A5A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r25,r11,15204
	r25.s64 = r11.s64 + 15204;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a608
	if (cr6.eq) goto loc_8250A608;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A608:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a624
	if (cr6.eq) goto loc_8250A624;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a624
	if (cr6.eq) goto loc_8250A624;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A624:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r26,r11,15180
	r26.s64 = r11.s64 + 15180;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a688
	if (cr6.eq) goto loc_8250A688;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A688:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a6a4
	if (cr6.eq) goto loc_8250A6A4;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a6a4
	if (cr6.eq) goto loc_8250A6A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A6A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r27,r11,15156
	r27.s64 = r11.s64 + 15156;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a708
	if (cr6.eq) goto loc_8250A708;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A708:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a724
	if (cr6.eq) goto loc_8250A724;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a724
	if (cr6.eq) goto loc_8250A724;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A724:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r15,0(r3)
	r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r28,r11,15140
	r28.s64 = r11.s64 + 15140;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a788
	if (cr6.eq) goto loc_8250A788;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A788:
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a7a4
	if (cr6.eq) goto loc_8250A7A4;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a7a4
	if (cr6.eq) goto loc_8250A7A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A7A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r15,0(r3)
	r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r29,r11,15124
	r29.s64 = r11.s64 + 15124;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a808
	if (cr6.eq) goto loc_8250A808;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A808:
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a824
	if (cr6.eq) goto loc_8250A824;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a824
	if (cr6.eq) goto loc_8250A824;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A824:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r15,0(r3)
	r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r30,r11,15108
	r30.s64 = r11.s64 + 15108;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b148
	sub_8250B148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a888
	if (cr6.eq) goto loc_8250A888;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250A888:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250a8a4
	if (cr6.eq) goto loc_8250A8A4;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8250a8a4
	if (cr6.eq) goto loc_8250A8A4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8250A8A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-27216
	ctx.r5.s64 = r11.s64 + -27216;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x8250ae30
	sub_8250AE30(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r10,-27240
	ctx.r5.s64 = ctx.r10.s64 + -27240;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x8232cad0
	sub_8232CAD0(ctx, base);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r9,-27120
	ctx.r5.s64 = ctx.r9.s64 + -27120;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x8250ad88
	sub_8250AD88(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r8,-26960
	ctx.r5.s64 = ctx.r8.s64 + -26960;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8250ace0
	sub_8250ACE0(ctx, base);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r7,-25144
	ctx.r5.s64 = ctx.r7.s64 + -25144;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8250ac38
	sub_8250AC38(ctx, base);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r6,-25336
	ctx.r5.s64 = ctx.r6.s64 + -25336;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8250ab90
	sub_8250AB90(ctx, base);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r5,-25536
	ctx.r5.s64 = ctx.r5.s64 + -25536;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8232cad0
	sub_8232CAD0(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r11,-25736
	ctx.r5.s64 = r11.s64 + -25736;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8232cad0
	sub_8232CAD0(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r5,r10,-25936
	ctx.r5.s64 = ctx.r10.s64 + -25936;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8232cad0
	sub_8232CAD0(ctx, base);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r5,r9,-26184
	ctx.r5.s64 = ctx.r9.s64 + -26184;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8232cad0
	sub_8232CAD0(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r5,r8,-26400
	ctx.r5.s64 = ctx.r8.s64 + -26400;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8232cad0
	sub_8232CAD0(ctx, base);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r5,r7,-24624
	ctx.r5.s64 = ctx.r7.s64 + -24624;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x8250ab90
	sub_8250AB90(ctx, base);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r5,r6,-27200
	ctx.r5.s64 = ctx.r6.s64 + -27200;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x8250ab90
	sub_8250AB90(ctx, base);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r5,r5,-24800
	ctx.r5.s64 = ctx.r5.s64 + -24800;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x8250ab90
	sub_8250AB90(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r5,r11,-24976
	ctx.r5.s64 = r11.s64 + -24976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250ab90
	sub_8250AB90(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1c18
	sub_826A1C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
}

__attribute__((alias("__imp__sub_8250AAAC"))) PPC_WEAK_FUNC(sub_8250AAAC);
PPC_FUNC_IMPL(__imp__sub_8250AAAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_8250AAB0"))) PPC_WEAK_FUNC(sub_8250AAB0);
PPC_FUNC_IMPL(__imp__sub_8250AAB0) {
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
	// bl 0x826a1b90
	sub_826A1B90(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250aae8
	if (cr6.eq) goto loc_8250AAE8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250AAE8:
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

__attribute__((alias("__imp__sub_8250AAFC"))) PPC_WEAK_FUNC(sub_8250AAFC);
PPC_FUNC_IMPL(__imp__sub_8250AAFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250AB00"))) PPC_WEAK_FUNC(sub_8250AB00);
PPC_FUNC_IMPL(__imp__sub_8250AB00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8250ab30
	if (cr6.eq) goto loc_8250AB30;
loc_8250AB28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8250ab74
	goto loc_8250AB74;
loc_8250AB30:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8250ab28
	if (!cr6.eq) goto loc_8250AB28;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8250ab28
	if (!cr6.eq) goto loc_8250AB28;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8250AB74:
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

__attribute__((alias("__imp__sub_8250AB88"))) PPC_WEAK_FUNC(sub_8250AB88);
PPC_FUNC_IMPL(__imp__sub_8250AB88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250AB8C"))) PPC_WEAK_FUNC(sub_8250AB8C);
PPC_FUNC_IMPL(__imp__sub_8250AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250AB90"))) PPC_WEAK_FUNC(sub_8250AB90);
PPC_FUNC_IMPL(__imp__sub_8250AB90) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-27952
	ctx.r7.s64 = ctx.r10.s64 + -27952;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,304
	ctx.r8.s64 = 304;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ac08
	if (cr6.eq) goto loc_8250AC08;
	// bl 0x826a1b78
	sub_826A1B78(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r10,r11,15032
	ctx.r10.s64 = r11.s64 + 15032;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8250AC08:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1e68
	sub_826A1E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8250AC34"))) PPC_WEAK_FUNC(sub_8250AC34);
PPC_FUNC_IMPL(__imp__sub_8250AC34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250AC38"))) PPC_WEAK_FUNC(sub_8250AC38);
PPC_FUNC_IMPL(__imp__sub_8250AC38) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-27952
	ctx.r7.s64 = ctx.r10.s64 + -27952;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,304
	ctx.r8.s64 = 304;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250acb0
	if (cr6.eq) goto loc_8250ACB0;
	// bl 0x826a1b78
	sub_826A1B78(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r10,r11,15044
	ctx.r10.s64 = r11.s64 + 15044;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8250ACB0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1e68
	sub_826A1E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8250ACDC"))) PPC_WEAK_FUNC(sub_8250ACDC);
PPC_FUNC_IMPL(__imp__sub_8250ACDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250ACE0"))) PPC_WEAK_FUNC(sub_8250ACE0);
PPC_FUNC_IMPL(__imp__sub_8250ACE0) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-27952
	ctx.r7.s64 = ctx.r10.s64 + -27952;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,304
	ctx.r8.s64 = 304;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ad58
	if (cr6.eq) goto loc_8250AD58;
	// bl 0x826a1b78
	sub_826A1B78(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r10,r11,15056
	ctx.r10.s64 = r11.s64 + 15056;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8250AD58:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1e68
	sub_826A1E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8250AD84"))) PPC_WEAK_FUNC(sub_8250AD84);
PPC_FUNC_IMPL(__imp__sub_8250AD84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250AD88"))) PPC_WEAK_FUNC(sub_8250AD88);
PPC_FUNC_IMPL(__imp__sub_8250AD88) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-27952
	ctx.r7.s64 = ctx.r10.s64 + -27952;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,304
	ctx.r8.s64 = 304;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ae00
	if (cr6.eq) goto loc_8250AE00;
	// bl 0x826a1b78
	sub_826A1B78(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r10,r11,15068
	ctx.r10.s64 = r11.s64 + 15068;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8250AE00:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1e68
	sub_826A1E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8250AE2C"))) PPC_WEAK_FUNC(sub_8250AE2C);
PPC_FUNC_IMPL(__imp__sub_8250AE2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250AE30"))) PPC_WEAK_FUNC(sub_8250AE30);
PPC_FUNC_IMPL(__imp__sub_8250AE30) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-27952
	ctx.r7.s64 = ctx.r10.s64 + -27952;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,304
	ctx.r8.s64 = 304;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250aea8
	if (cr6.eq) goto loc_8250AEA8;
	// bl 0x826a1b78
	sub_826A1B78(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r10,r11,15080
	ctx.r10.s64 = r11.s64 + 15080;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8250AEA8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1e68
	sub_826A1E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8250AED4"))) PPC_WEAK_FUNC(sub_8250AED4);
PPC_FUNC_IMPL(__imp__sub_8250AED4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250AED8"))) PPC_WEAK_FUNC(sub_8250AED8);
PPC_FUNC_IMPL(__imp__sub_8250AED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8250AF5C"))) PPC_WEAK_FUNC(sub_8250AF5C);
PPC_FUNC_IMPL(__imp__sub_8250AF5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250AF60"))) PPC_WEAK_FUNC(sub_8250AF60);
PPC_FUNC_IMPL(__imp__sub_8250AF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8250AFDC"))) PPC_WEAK_FUNC(sub_8250AFDC);
PPC_FUNC_IMPL(__imp__sub_8250AFDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250AFE0"))) PPC_WEAK_FUNC(sub_8250AFE0);
PPC_FUNC_IMPL(__imp__sub_8250AFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8250B080"))) PPC_WEAK_FUNC(sub_8250B080);
PPC_FUNC_IMPL(__imp__sub_8250B080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250B084"))) PPC_WEAK_FUNC(sub_8250B084);
PPC_FUNC_IMPL(__imp__sub_8250B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B088"))) PPC_WEAK_FUNC(sub_8250B088);
PPC_FUNC_IMPL(__imp__sub_8250B088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r28,r8,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r7,r3,-1
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r27,r6,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8250B144"))) PPC_WEAK_FUNC(sub_8250B144);
PPC_FUNC_IMPL(__imp__sub_8250B144) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8250B148"))) PPC_WEAK_FUNC(sub_8250B148);
PPC_FUNC_IMPL(__imp__sub_8250B148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250B1BC"))) PPC_WEAK_FUNC(sub_8250B1BC);
PPC_FUNC_IMPL(__imp__sub_8250B1BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250B1C0"))) PPC_WEAK_FUNC(sub_8250B1C0);
PPC_FUNC_IMPL(__imp__sub_8250B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// subf r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - r29.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8250B1F4"))) PPC_WEAK_FUNC(sub_8250B1F4);
PPC_FUNC_IMPL(__imp__sub_8250B1F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250B1F8"))) PPC_WEAK_FUNC(sub_8250B1F8);
PPC_FUNC_IMPL(__imp__sub_8250B1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8250aed8
	sub_8250AED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B20C"))) PPC_WEAK_FUNC(sub_8250B20C);
PPC_FUNC_IMPL(__imp__sub_8250B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B210"))) PPC_WEAK_FUNC(sub_8250B210);
PPC_FUNC_IMPL(__imp__sub_8250B210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8250b24c
	if (cr6.eq) goto loc_8250B24C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250B24C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250B274"))) PPC_WEAK_FUNC(sub_8250B274);
PPC_FUNC_IMPL(__imp__sub_8250B274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250B278"))) PPC_WEAK_FUNC(sub_8250B278);
PPC_FUNC_IMPL(__imp__sub_8250B278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8250af60
	sub_8250AF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B28C"))) PPC_WEAK_FUNC(sub_8250B28C);
PPC_FUNC_IMPL(__imp__sub_8250B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B290"))) PPC_WEAK_FUNC(sub_8250B290);
PPC_FUNC_IMPL(__imp__sub_8250B290) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8250B290"))) PPC_WEAK_FUNC(sub_8250B290);
PPC_FUNC_IMPL(__imp__sub_8250B290) {
	PPC_FUNC_PROLOGUE();
	// b 0x82509850
	sub_82509850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B294"))) PPC_WEAK_FUNC(sub_8250B294);
PPC_FUNC_IMPL(__imp__sub_8250B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B298"))) PPC_WEAK_FUNC(sub_8250B298);
PPC_FUNC_IMPL(__imp__sub_8250B298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8250afe0
	sub_8250AFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B2AC"))) PPC_WEAK_FUNC(sub_8250B2AC);
PPC_FUNC_IMPL(__imp__sub_8250B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B2B0"))) PPC_WEAK_FUNC(sub_8250B2B0);
PPC_FUNC_IMPL(__imp__sub_8250B2B0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
}

__attribute__((alias("__imp__sub_8250B2BC"))) PPC_WEAK_FUNC(sub_8250B2BC);
PPC_FUNC_IMPL(__imp__sub_8250B2BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250ab00
	sub_8250AB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B2C0"))) PPC_WEAK_FUNC(sub_8250B2C0);
PPC_FUNC_IMPL(__imp__sub_8250B2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8250b088
	sub_8250B088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B2D4"))) PPC_WEAK_FUNC(sub_8250B2D4);
PPC_FUNC_IMPL(__imp__sub_8250B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B2D8"))) PPC_WEAK_FUNC(sub_8250B2D8);
PPC_FUNC_IMPL(__imp__sub_8250B2D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,16768
	r29.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250B350"))) PPC_WEAK_FUNC(sub_8250B350);
PPC_FUNC_IMPL(__imp__sub_8250B350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250B354"))) PPC_WEAK_FUNC(sub_8250B354);
PPC_FUNC_IMPL(__imp__sub_8250B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B358"))) PPC_WEAK_FUNC(sub_8250B358);
PPC_FUNC_IMPL(__imp__sub_8250B358) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,-13340
	r29.s64 = ctx.r9.s64 + -13340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250B3D0"))) PPC_WEAK_FUNC(sub_8250B3D0);
PPC_FUNC_IMPL(__imp__sub_8250B3D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250B3D4"))) PPC_WEAK_FUNC(sub_8250B3D4);
PPC_FUNC_IMPL(__imp__sub_8250B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B3D8"))) PPC_WEAK_FUNC(sub_8250B3D8);
PPC_FUNC_IMPL(__imp__sub_8250B3D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,16768
	r29.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250B460"))) PPC_WEAK_FUNC(sub_8250B460);
PPC_FUNC_IMPL(__imp__sub_8250B460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250B464"))) PPC_WEAK_FUNC(sub_8250B464);
PPC_FUNC_IMPL(__imp__sub_8250B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B468"))) PPC_WEAK_FUNC(sub_8250B468);
PPC_FUNC_IMPL(__imp__sub_8250B468) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r7,16780
	r29.s64 = ctx.r7.s64 + 16780;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250B508"))) PPC_WEAK_FUNC(sub_8250B508);
PPC_FUNC_IMPL(__imp__sub_8250B508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250B50C"))) PPC_WEAK_FUNC(sub_8250B50C);
PPC_FUNC_IMPL(__imp__sub_8250B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B510"))) PPC_WEAK_FUNC(sub_8250B510);
PPC_FUNC_IMPL(__imp__sub_8250B510) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-13340
	ctx.r5.s64 = ctx.r8.s64 + -13340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a96a0
	sub_826A96A0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9cc8
	sub_822E9CC8(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8250b588
	if (cr6.lt) goto loc_8250B588;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250B588:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,19268
	ctx.r4.s64 = ctx.r9.s64 + 19268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_8250B5DC"))) PPC_WEAK_FUNC(sub_8250B5DC);
PPC_FUNC_IMPL(__imp__sub_8250B5DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250B5E0"))) PPC_WEAK_FUNC(sub_8250B5E0);
PPC_FUNC_IMPL(__imp__sub_8250B5E0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8250B5EC"))) PPC_WEAK_FUNC(sub_8250B5EC);
PPC_FUNC_IMPL(__imp__sub_8250B5EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250b510
	sub_8250B510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B5F0"))) PPC_WEAK_FUNC(sub_8250B5F0);
PPC_FUNC_IMPL(__imp__sub_8250B5F0) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e0500
	sub_822E0500(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9cc8
	sub_822E9CC8(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8250b674
	if (cr6.lt) goto loc_8250B674;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250B674:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300128
	sub_82300128(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300128
	sub_82300128(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300128
	sub_82300128(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,19268
	ctx.r4.s64 = r11.s64 + 19268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8250B6D0"))) PPC_WEAK_FUNC(sub_8250B6D0);
PPC_FUNC_IMPL(__imp__sub_8250B6D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250B6D4"))) PPC_WEAK_FUNC(sub_8250B6D4);
PPC_FUNC_IMPL(__imp__sub_8250B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B6D8"))) PPC_WEAK_FUNC(sub_8250B6D8);
PPC_FUNC_IMPL(__imp__sub_8250B6D8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8250b5f0
	sub_8250B5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B6E8"))) PPC_WEAK_FUNC(sub_8250B6E8);
PPC_FUNC_IMPL(__imp__sub_8250B6E8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,31576
	ctx.r8.s64 = ctx.r9.s64 + 31576;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8232cb78
	sub_8232CB78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250b788
	if (cr6.eq) goto loc_8250B788;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250b784
	if (cr6.eq) goto loc_8250B784;
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
loc_8250B784:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
loc_8250B788:
	// lis r11,-32175
	r11.s64 = -2108620800;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r11,-20032
	ctx.r9.s64 = r11.s64 + -20032;
	// addi r8,r10,4376
	ctx.r8.s64 = ctx.r10.s64 + 4376;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acda8
	sub_826ACDA8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x826ac350
	sub_826AC350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250b83c
	if (cr6.eq) goto loc_8250B83C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b83c
	if (cr6.eq) goto loc_8250B83C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// cmplwi cr6,r3,4919
	cr6.compare<uint32_t>(ctx.r3.u32, 4919, xer);
	// bne cr6,0x8250b830
	if (!cr6.eq) goto loc_8250B830;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b830
	if (cr6.eq) goto loc_8250B830;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250B830:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250B83C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8250b8f0
	if (!cr6.eq) goto loc_8250B8F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b888
	if (cr6.eq) goto loc_8250B888;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
loc_8250B888:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// li r4,4919
	ctx.r4.s64 = 4919;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd50
	sub_826ACD50(ctx, base);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-20072
	ctx.r4.s64 = ctx.r10.s64 + -20072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acc50
	sub_826ACC50(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
loc_8250B8F0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ab570
	sub_826AB570(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b90c
	if (cr6.eq) goto loc_8250B90C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250B90C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// beq cr6,0x8250b944
	if (cr6.eq) goto loc_8250B944;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250b944
	if (cr6.eq) goto loc_8250B944;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250B944:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8250B948"))) PPC_WEAK_FUNC(sub_8250B948);
PPC_FUNC_IMPL(__imp__sub_8250B948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250B94C"))) PPC_WEAK_FUNC(sub_8250B94C);
PPC_FUNC_IMPL(__imp__sub_8250B94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B950"))) PPC_WEAK_FUNC(sub_8250B950);
PPC_FUNC_IMPL(__imp__sub_8250B950) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8250b2d8
	sub_8250B2D8(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-19952
	ctx.r10.s64 = r11.s64 + -19952;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232cb78
	sub_8232CB78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250b9d0
	if (cr6.eq) goto loc_8250B9D0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250b9cc
	if (cr6.eq) goto loc_8250B9CC;
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
loc_8250B9CC:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_8250B9D0:
	// lis r11,-32175
	r11.s64 = -2108620800;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-19976
	ctx.r9.s64 = r11.s64 + -19976;
	// addi r8,r10,30464
	ctx.r8.s64 = ctx.r10.s64 + 30464;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acda8
	sub_826ACDA8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x826ac350
	sub_826AC350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250ba84
	if (cr6.eq) goto loc_8250BA84;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ba84
	if (cr6.eq) goto loc_8250BA84;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// cmplwi cr6,r3,4919
	cr6.compare<uint32_t>(ctx.r3.u32, 4919, xer);
	// bne cr6,0x8250ba78
	if (!cr6.eq) goto loc_8250BA78;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ba78
	if (cr6.eq) goto loc_8250BA78;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250BA78:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250BA84:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8250bb38
	if (!cr6.eq) goto loc_8250BB38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bad0
	if (cr6.eq) goto loc_8250BAD0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
loc_8250BAD0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// li r4,4919
	ctx.r4.s64 = 4919;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd50
	sub_826ACD50(ctx, base);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-20072
	ctx.r4.s64 = ctx.r10.s64 + -20072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acc50
	sub_826ACC50(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
loc_8250BB38:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ab570
	sub_826AB570(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bb54
	if (cr6.eq) goto loc_8250BB54;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250BB54:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r28.u32);
	// beq cr6,0x8250bb8c
	if (cr6.eq) goto loc_8250BB8C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250bb8c
	if (cr6.eq) goto loc_8250BB8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250BB8C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8250BB90"))) PPC_WEAK_FUNC(sub_8250BB90);
PPC_FUNC_IMPL(__imp__sub_8250BB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250BB94"))) PPC_WEAK_FUNC(sub_8250BB94);
PPC_FUNC_IMPL(__imp__sub_8250BB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250BB98"))) PPC_WEAK_FUNC(sub_8250BB98);
PPC_FUNC_IMPL(__imp__sub_8250BB98) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8250b358
	sub_8250B358(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-19952
	ctx.r10.s64 = r11.s64 + -19952;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232cb78
	sub_8232CB78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250bc18
	if (cr6.eq) goto loc_8250BC18;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250bc14
	if (cr6.eq) goto loc_8250BC14;
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
loc_8250BC14:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_8250BC18:
	// lis r11,-32175
	r11.s64 = -2108620800;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r11,-19848
	ctx.r9.s64 = r11.s64 + -19848;
	// addi r8,r10,-18976
	ctx.r8.s64 = ctx.r10.s64 + -18976;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acda8
	sub_826ACDA8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x826ac350
	sub_826AC350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250bccc
	if (cr6.eq) goto loc_8250BCCC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bccc
	if (cr6.eq) goto loc_8250BCCC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// cmplwi cr6,r3,4919
	cr6.compare<uint32_t>(ctx.r3.u32, 4919, xer);
	// bne cr6,0x8250bcc0
	if (!cr6.eq) goto loc_8250BCC0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bcc0
	if (cr6.eq) goto loc_8250BCC0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250BCC0:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250BCCC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8250bd80
	if (!cr6.eq) goto loc_8250BD80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bd18
	if (cr6.eq) goto loc_8250BD18;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
loc_8250BD18:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// li r4,4919
	ctx.r4.s64 = 4919;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd50
	sub_826ACD50(ctx, base);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-20072
	ctx.r4.s64 = ctx.r10.s64 + -20072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acc50
	sub_826ACC50(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
loc_8250BD80:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ab570
	sub_826AB570(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bd9c
	if (cr6.eq) goto loc_8250BD9C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250BD9C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r28.u32);
	// beq cr6,0x8250bdd4
	if (cr6.eq) goto loc_8250BDD4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250bdd4
	if (cr6.eq) goto loc_8250BDD4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250BDD4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8250BDD8"))) PPC_WEAK_FUNC(sub_8250BDD8);
PPC_FUNC_IMPL(__imp__sub_8250BDD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250BDDC"))) PPC_WEAK_FUNC(sub_8250BDDC);
PPC_FUNC_IMPL(__imp__sub_8250BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250BDE0"))) PPC_WEAK_FUNC(sub_8250BDE0);
PPC_FUNC_IMPL(__imp__sub_8250BDE0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8250b3d8
	sub_8250B3D8(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-19824
	ctx.r10.s64 = r11.s64 + -19824;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232cb78
	sub_8232CB78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250be60
	if (cr6.eq) goto loc_8250BE60;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250be5c
	if (cr6.eq) goto loc_8250BE5C;
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
loc_8250BE5C:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_8250BE60:
	// lis r11,-32175
	r11.s64 = -2108620800;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r9,r11,-19816
	ctx.r9.s64 = r11.s64 + -19816;
	// addi r8,r10,9352
	ctx.r8.s64 = ctx.r10.s64 + 9352;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acda8
	sub_826ACDA8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x826ac350
	sub_826AC350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250bf14
	if (cr6.eq) goto loc_8250BF14;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bf14
	if (cr6.eq) goto loc_8250BF14;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// cmplwi cr6,r3,4919
	cr6.compare<uint32_t>(ctx.r3.u32, 4919, xer);
	// bne cr6,0x8250bf08
	if (!cr6.eq) goto loc_8250BF08;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bf08
	if (cr6.eq) goto loc_8250BF08;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250BF08:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250BF14:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8250bfc8
	if (!cr6.eq) goto loc_8250BFC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bf60
	if (cr6.eq) goto loc_8250BF60;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
loc_8250BF60:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// li r4,4919
	ctx.r4.s64 = 4919;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd50
	sub_826ACD50(ctx, base);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-20072
	ctx.r4.s64 = ctx.r10.s64 + -20072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acc50
	sub_826ACC50(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
loc_8250BFC8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ab570
	sub_826AB570(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250bfe4
	if (cr6.eq) goto loc_8250BFE4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250BFE4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r28.u32);
	// beq cr6,0x8250c01c
	if (cr6.eq) goto loc_8250C01C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c01c
	if (cr6.eq) goto loc_8250C01C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250C01C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8250C020"))) PPC_WEAK_FUNC(sub_8250C020);
PPC_FUNC_IMPL(__imp__sub_8250C020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250C024"))) PPC_WEAK_FUNC(sub_8250C024);
PPC_FUNC_IMPL(__imp__sub_8250C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C028"))) PPC_WEAK_FUNC(sub_8250C028);
PPC_FUNC_IMPL(__imp__sub_8250C028) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8250b468
	sub_8250B468(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-19792
	ctx.r10.s64 = r11.s64 + -19792;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232cb78
	sub_8232CB78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c0a8
	if (cr6.eq) goto loc_8250C0A8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c0a4
	if (cr6.eq) goto loc_8250C0A4;
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
loc_8250C0A4:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_8250C0A8:
	// lis r11,-32175
	r11.s64 = -2108620800;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r11,-19776
	ctx.r9.s64 = r11.s64 + -19776;
	// addi r8,r10,-18728
	ctx.r8.s64 = ctx.r10.s64 + -18728;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acda8
	sub_826ACDA8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x826ac350
	sub_826AC350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250c15c
	if (cr6.eq) goto loc_8250C15C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c15c
	if (cr6.eq) goto loc_8250C15C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// cmplwi cr6,r3,4919
	cr6.compare<uint32_t>(ctx.r3.u32, 4919, xer);
	// bne cr6,0x8250c150
	if (!cr6.eq) goto loc_8250C150;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adb40
	sub_826ADB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c150
	if (cr6.eq) goto loc_8250C150;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250C150:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8250C15C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8250c210
	if (!cr6.eq) goto loc_8250C210;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c1a8
	if (cr6.eq) goto loc_8250C1A8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
loc_8250C1A8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a32d0
	sub_826A32D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// li r4,4919
	ctx.r4.s64 = 4919;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd50
	sub_826ACD50(ctx, base);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-20072
	ctx.r4.s64 = ctx.r10.s64 + -20072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acc50
	sub_826ACC50(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
loc_8250C210:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ab570
	sub_826AB570(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c22c
	if (cr6.eq) goto loc_8250C22C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8250C22C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r28.u32);
	// beq cr6,0x8250c264
	if (cr6.eq) goto loc_8250C264;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c264
	if (cr6.eq) goto loc_8250C264;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250C264:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8250C268"))) PPC_WEAK_FUNC(sub_8250C268);
PPC_FUNC_IMPL(__imp__sub_8250C268) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250C26C"))) PPC_WEAK_FUNC(sub_8250C26C);
PPC_FUNC_IMPL(__imp__sub_8250C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C270"))) PPC_WEAK_FUNC(sub_8250C270);
PPC_FUNC_IMPL(__imp__sub_8250C270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
}

__attribute__((alias("__imp__sub_8250C284"))) PPC_WEAK_FUNC(sub_8250C284);
PPC_FUNC_IMPL(__imp__sub_8250C284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C288"))) PPC_WEAK_FUNC(sub_8250C288);
PPC_FUNC_IMPL(__imp__sub_8250C288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C28C"))) PPC_WEAK_FUNC(sub_8250C28C);
PPC_FUNC_IMPL(__imp__sub_8250C28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C290"))) PPC_WEAK_FUNC(sub_8250C290);
PPC_FUNC_IMPL(__imp__sub_8250C290) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8250C294"))) PPC_WEAK_FUNC(sub_8250C294);
PPC_FUNC_IMPL(__imp__sub_8250C294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C298"))) PPC_WEAK_FUNC(sub_8250C298);
PPC_FUNC_IMPL(__imp__sub_8250C298) {
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
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c2e4
	if (cr6.eq) goto loc_8250C2E4;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8250c2dc
	if (!cr6.eq) goto loc_8250C2DC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8250c2fc
	goto loc_8250C2FC;
loc_8250C2DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250c304
	if (!cr6.eq) goto loc_8250C304;
loc_8250C2E4:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c304
	if (cr6.eq) goto loc_8250C304;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8250C2FC:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250C304:
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
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

__attribute__((alias("__imp__sub_8250C31C"))) PPC_WEAK_FUNC(sub_8250C31C);
PPC_FUNC_IMPL(__imp__sub_8250C31C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C320"))) PPC_WEAK_FUNC(sub_8250C320);
PPC_FUNC_IMPL(__imp__sub_8250C320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c510
	if (cr6.eq) goto loc_8250C510;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f29,4028(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4028);
	f29.f64 = double(temp.f32);
	// lfs f30,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f30.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lis r25,-31970
	r25.s64 = -2095185920;
	// addi r24,r11,15992
	r24.s64 = r11.s64 + 15992;
	// addi r27,r10,16352
	r27.s64 = ctx.r10.s64 + 16352;
	// addi r26,r9,16328
	r26.s64 = ctx.r9.s64 + 16328;
	// addi r23,r8,16312
	r23.s64 = ctx.r8.s64 + 16312;
loc_8250C394:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82419320
	sub_82419320(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x824191b8
	sub_824191B8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8250c3c8
	if (cr6.gt) goto loc_8250C3C8;
	// li r11,0
	r11.s64 = 0;
loc_8250C3C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c3f8
	if (cr6.eq) goto loc_8250C3F8;
	// lwz r3,-14756(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250c3ec
	if (cr6.eq) goto loc_8250C3EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250c3f0
	if (!cr6.eq) goto loc_8250C3F0;
loc_8250C3EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250C3F0:
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82423020
	sub_82423020(ctx, base);
loc_8250C3F8:
	// li r29,20
	r29.s64 = 20;
	// addi r31,r24,12
	r31.s64 = r24.s64 + 12;
loc_8250C400:
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8250c468
	if (cr6.lt) goto loc_8250C468;
	// bne cr6,0x8250c4f8
	if (!cr6.eq) goto loc_8250C4F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r22,-8(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82419320
	sub_82419320(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x824191b8
	sub_824191B8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x8250c4f8
	if (cr6.eq) goto loc_8250C4F8;
	// fmuls f0,f31,f29
	f0.f64 = double(float(f31.f64 * f29.f64));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x8250c4f8
	goto loc_8250C4F8;
loc_8250C468:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r22,-8(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82419320
	sub_82419320(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x824191b8
	sub_824191B8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8250c4a0
	if (cr6.gt) goto loc_8250C4A0;
	// li r11,0
	r11.s64 = 0;
loc_8250C4A0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c4f8
	if (cr6.eq) goto loc_8250C4F8;
	// lwz r3,-14756(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250c4c8
	if (cr6.eq) goto loc_8250C4C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250c4cc
	if (!cr6.eq) goto loc_8250C4CC;
loc_8250C4C8:
	// li r11,0
	r11.s64 = 0;
loc_8250C4CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8250ea80
	sub_8250EA80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250c4f8
	if (!cr6.eq) goto loc_8250C4F8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8250C4F8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8250c400
	if (!cr0.eq) goto loc_8250C400;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8250c394
	if (cr6.lt) goto loc_8250C394;
loc_8250C510:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_8250C520"))) PPC_WEAK_FUNC(sub_8250C520);
PPC_FUNC_IMPL(__imp__sub_8250C520) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8250C524"))) PPC_WEAK_FUNC(sub_8250C524);
PPC_FUNC_IMPL(__imp__sub_8250C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C528"))) PPC_WEAK_FUNC(sub_8250C528);
PPC_FUNC_IMPL(__imp__sub_8250C528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8250c560
	if (cr6.eq) goto loc_8250C560;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
loc_8250C540:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8250c560
	if (!cr0.eq) goto loc_8250C560;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8250c540
	if (!cr6.eq) goto loc_8250C540;
loc_8250C560:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8250c570
	if (!cr6.lt) goto loc_8250C570;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8250C570:
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8250C578"))) PPC_WEAK_FUNC(sub_8250C578);
PPC_FUNC_IMPL(__imp__sub_8250C578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C57C"))) PPC_WEAK_FUNC(sub_8250C57C);
PPC_FUNC_IMPL(__imp__sub_8250C57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C580"))) PPC_WEAK_FUNC(sub_8250C580);
PPC_FUNC_IMPL(__imp__sub_8250C580) {
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
	// addi r9,r11,16408
	ctx.r9.s64 = r11.s64 + 16408;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8250c5b4
	if (cr6.eq) goto loc_8250C5B4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250C5B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250C5C4"))) PPC_WEAK_FUNC(sub_8250C5C4);
PPC_FUNC_IMPL(__imp__sub_8250C5C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C5C8"))) PPC_WEAK_FUNC(sub_8250C5C8);
PPC_FUNC_IMPL(__imp__sub_8250C5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C5D8"))) PPC_WEAK_FUNC(sub_8250C5D8);
PPC_FUNC_IMPL(__imp__sub_8250C5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C5E8"))) PPC_WEAK_FUNC(sub_8250C5E8);
PPC_FUNC_IMPL(__imp__sub_8250C5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C5F8"))) PPC_WEAK_FUNC(sub_8250C5F8);
PPC_FUNC_IMPL(__imp__sub_8250C5F8) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,126
	cr6.compare<int32_t>(r11.s32, 126, xer);
	// bne cr6,0x8250c62c
	if (!cr6.eq) goto loc_8250C62C;
loc_8250C624:
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// b 0x8250c670
	goto loc_8250C670;
loc_8250C62C:
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// beq cr6,0x8250c624
	if (cr6.eq) goto loc_8250C624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c66c
	if (cr6.eq) goto loc_8250C66C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r30,116
	r31.s64 = r30.s64 + 116;
	// addi r5,r11,16416
	ctx.r5.s64 = r11.s64 + 16416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_8250C66C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250C670:
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

__attribute__((alias("__imp__sub_8250C684"))) PPC_WEAK_FUNC(sub_8250C684);
PPC_FUNC_IMPL(__imp__sub_8250C684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C688"))) PPC_WEAK_FUNC(sub_8250C688);
PPC_FUNC_IMPL(__imp__sub_8250C688) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// bl 0x82419e80
	sub_82419E80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c6cc
	if (cr6.eq) goto loc_8250C6CC;
	// addi r31,r30,116
	r31.s64 = r30.s64 + 116;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_8250C6CC:
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

__attribute__((alias("__imp__sub_8250C6E4"))) PPC_WEAK_FUNC(sub_8250C6E4);
PPC_FUNC_IMPL(__imp__sub_8250C6E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C6E8"))) PPC_WEAK_FUNC(sub_8250C6E8);
PPC_FUNC_IMPL(__imp__sub_8250C6E8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// bl 0x82419d98
	sub_82419D98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c73c
	if (cr6.eq) goto loc_8250C73C;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250C73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250C750"))) PPC_WEAK_FUNC(sub_8250C750);
PPC_FUNC_IMPL(__imp__sub_8250C750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C754"))) PPC_WEAK_FUNC(sub_8250C754);
PPC_FUNC_IMPL(__imp__sub_8250C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C758"))) PPC_WEAK_FUNC(sub_8250C758);
PPC_FUNC_IMPL(__imp__sub_8250C758) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(r11.u32, 126, xer);
	// beq cr6,0x8250c7ac
	if (cr6.eq) goto loc_8250C7AC;
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,16416
	ctx.r5.s64 = r11.s64 + 16416;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250C7AC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250C7C0"))) PPC_WEAK_FUNC(sub_8250C7C0);
PPC_FUNC_IMPL(__imp__sub_8250C7C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C7C4"))) PPC_WEAK_FUNC(sub_8250C7C4);
PPC_FUNC_IMPL(__imp__sub_8250C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C7C8"))) PPC_WEAK_FUNC(sub_8250C7C8);
PPC_FUNC_IMPL(__imp__sub_8250C7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,35
	cr6.compare<int32_t>(ctx.r10.s32, 35, xer);
	// bne cr6,0x8250c800
	if (!cr6.eq) goto loc_8250C800;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,16448(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16448);
	// fmul f31,f31,f0
	f31.f64 = f31.f64 * f0.f64;
loc_8250C800:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// addi r4,r11,16436
	ctx.r4.s64 = r11.s64 + 16436;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,16424
	ctx.r5.s64 = ctx.r10.s64 + 16424;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8250C850"))) PPC_WEAK_FUNC(sub_8250C850);
PPC_FUNC_IMPL(__imp__sub_8250C850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C854"))) PPC_WEAK_FUNC(sub_8250C854);
PPC_FUNC_IMPL(__imp__sub_8250C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C858"))) PPC_WEAK_FUNC(sub_8250C858);
PPC_FUNC_IMPL(__imp__sub_8250C858) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,16468
	ctx.r10.s64 = ctx.r10.s64 + 16468;
loc_8250C87C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8250c8a0
	if (cr6.eq) goto loc_8250C8A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8250c87c
	if (cr6.eq) goto loc_8250C87C;
loc_8250C8A0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8250c904
	if (!cr6.eq) goto loc_8250C904;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,35
	cr6.compare<int32_t>(ctx.r10.s32, 35, xer);
	// bne cr6,0x8250c8d0
	if (!cr6.eq) goto loc_8250C8D0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,16464(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16464);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8250c8d8
	goto loc_8250C8D8;
loc_8250C8D0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-31496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	ctx.f13.f64 = double(temp.f32);
loc_8250C8D8:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// addi r5,r11,16456
	ctx.r5.s64 = r11.s64 + 16456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250C904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250C914"))) PPC_WEAK_FUNC(sub_8250C914);
PPC_FUNC_IMPL(__imp__sub_8250C914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C918"))) PPC_WEAK_FUNC(sub_8250C918);
PPC_FUNC_IMPL(__imp__sub_8250C918) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,13435
	ctx.r5.s64 = r11.s64 + 13435;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250c980
	if (cr6.eq) goto loc_8250C980;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r5,r11,16504
	ctx.r5.s64 = r11.s64 + 16504;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_8250C980:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250ca1c
	if (cr6.eq) goto loc_8250CA1C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,4194
	ctx.r8.s64 = 274857984;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,10922
	ctx.r7.s64 = 715784192;
	// lis r6,-30584
	ctx.r6.s64 = -2004353024;
	// li r23,1000
	r23.s64 = 1000;
	// li r25,60
	r25.s64 = 60;
	// li r19,24
	r19.s64 = 24;
	// ori r20,r8,19923
	r20.u64 = ctx.r8.u64 | 19923;
	// ori r21,r7,43691
	r21.u64 = ctx.r7.u64 | 43691;
	// ori r24,r6,34953
	r24.u64 = ctx.r6.u64 | 34953;
	// addi r18,r11,16492
	r18.s64 = r11.s64 + 16492;
	// addi r22,r10,16480
	r22.s64 = ctx.r10.s64 + 16480;
	// addi r29,r9,18280
	r29.s64 = ctx.r9.s64 + 18280;
loc_8250C9C8:
	// lbz r11,0(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 0);
	// cmplwi cr6,r11,104
	cr6.compare<uint32_t>(r11.u32, 104, xer);
	// bgt cr6,0x8250caec
	if (cr6.gt) goto loc_8250CAEC;
	// beq cr6,0x8250ca84
	if (cr6.eq) goto loc_8250CA84;
	// cmplwi cr6,r11,77
	cr6.compare<uint32_t>(r11.u32, 77, xer);
	// beq cr6,0x8250ca28
	if (cr6.eq) goto loc_8250CA28;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bne cr6,0x8250ca10
	if (!cr6.eq) goto loc_8250CA10;
	// divw r11,r27,r23
	r11.s32 = r27.s32 / r23.s32;
	// divw r10,r11,r25
	ctx.r10.s32 = r11.s32 / r25.s32;
	// divw r9,r10,r25
	ctx.r9.s32 = ctx.r10.s32 / r25.s32;
	// divw r7,r9,r19
	ctx.r7.s32 = ctx.r9.s32 / r19.s32;
loc_8250C9F8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_8250CA0C:
	// li r31,1
	r31.s64 = 1;
loc_8250CA10:
	// lbzu r11,1(r17)
	ea = 1 + r17.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r17.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250c9c8
	if (!cr6.eq) goto loc_8250C9C8;
loc_8250CA1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e943c
	return;
loc_8250CA28:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250ca7c
	if (cr6.eq) goto loc_8250CA7C;
	// mulhw r11,r27,r20
	r11.s64 = (int64_t(r27.s32) * int64_t(r20.s32)) >> 32;
	// lwz r8,108(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addi r10,r26,88
	ctx.r10.s64 = r26.s64 + 88;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// mulli r6,r7,1000
	ctx.r6.s64 = ctx.r7.s64 * 1000;
	// subf r8,r6,r27
	ctx.r8.s64 = r27.s64 - ctx.r6.s64;
	// blt cr6,0x8250ca60
	if (cr6.lt) goto loc_8250CA60;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8250CA60:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// b 0x8250ca0c
	goto loc_8250CA0C;
loc_8250CA7C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// b 0x8250c9f8
	goto loc_8250C9F8;
loc_8250CA84:
	// divw r11,r27,r23
	r11.s32 = r27.s32 / r23.s32;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// divw r9,r11,r25
	ctx.r9.s32 = r11.s32 / r25.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// divw r7,r9,r25
	ctx.r7.s32 = ctx.r9.s32 / r25.s32;
	// beq cr6,0x8250c9f8
	if (cr6.eq) goto loc_8250C9F8;
	// mulhw r11,r7,r21
	r11.s64 = (int64_t(ctx.r7.s32) * int64_t(r21.s32)) >> 32;
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r5,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r5.s64;
	// blt cr6,0x8250cad0
	if (cr6.lt) goto loc_8250CAD0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8250CAD0:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// b 0x8250ca0c
	goto loc_8250CA0C;
loc_8250CAEC:
	// cmplwi cr6,r11,109
	cr6.compare<uint32_t>(r11.u32, 109, xer);
	// beq cr6,0x8250cb58
	if (cr6.eq) goto loc_8250CB58;
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x8250ca10
	if (!cr6.eq) goto loc_8250CA10;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// divw r7,r27,r23
	ctx.r7.s32 = r27.s32 / r23.s32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250c9f8
	if (cr6.eq) goto loc_8250C9F8;
	// mulhw r11,r7,r24
	r11.s64 = (int64_t(ctx.r7.s32) * int64_t(r24.s32)) >> 32;
	// lwz r9,80(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// srawi r11,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	r11.s64 = ctx.r8.s32 >> 5;
	// addi r10,r26,60
	ctx.r10.s64 = r26.s64 + 60;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// mulli r5,r6,60
	ctx.r5.s64 = ctx.r6.s64 * 60;
	// subf r8,r5,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r5.s64;
	// blt cr6,0x8250cb3c
	if (cr6.lt) goto loc_8250CB3C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8250CB3C:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// b 0x8250ca0c
	goto loc_8250CA0C;
loc_8250CB58:
	// divw r11,r27,r23
	r11.s32 = r27.s32 / r23.s32;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// divw r7,r11,r25
	ctx.r7.s32 = r11.s32 / r25.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250c9f8
	if (cr6.eq) goto loc_8250C9F8;
	// mulhw r11,r7,r24
	r11.s64 = (int64_t(ctx.r7.s32) * int64_t(r24.s32)) >> 32;
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// srawi r11,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	r11.s64 = ctx.r8.s32 >> 5;
	// addi r10,r26,32
	ctx.r10.s64 = r26.s64 + 32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// mulli r5,r6,60
	ctx.r5.s64 = ctx.r6.s64 * 60;
	// subf r8,r5,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r5.s64;
	// blt cr6,0x8250cb9c
	if (cr6.lt) goto loc_8250CB9C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8250CB9C:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
}

__attribute__((alias("__imp__sub_8250CBB4"))) PPC_WEAK_FUNC(sub_8250CBB4);
PPC_FUNC_IMPL(__imp__sub_8250CBB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250ca0c
	// ERROR 8250CA0C
	return;
}

__attribute__((alias("__imp__sub_8250CBB8"))) PPC_WEAK_FUNC(sub_8250CBB8);
PPC_FUNC_IMPL(__imp__sub_8250CBB8) {
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
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(r11.u32, 126, xer);
	// bne cr6,0x8250cbd8
	if (!cr6.eq) goto loc_8250CBD8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8250CBD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250CBE4"))) PPC_WEAK_FUNC(sub_8250CBE4);
PPC_FUNC_IMPL(__imp__sub_8250CBE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250CBE8"))) PPC_WEAK_FUNC(sub_8250CBE8);
PPC_FUNC_IMPL(__imp__sub_8250CBE8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// bl 0x82419d98
	sub_82419D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250cc30
	if (cr6.eq) goto loc_8250CC30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250CC30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250CC44"))) PPC_WEAK_FUNC(sub_8250CC44);
PPC_FUNC_IMPL(__imp__sub_8250CC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

