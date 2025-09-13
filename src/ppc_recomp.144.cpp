#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825565CC"))) PPC_WEAK_FUNC(sub_825565CC);
PPC_FUNC_IMPL(__imp__sub_825565CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825565D0"))) PPC_WEAK_FUNC(sub_825565D0);
PPC_FUNC_IMPL(__imp__sub_825565D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825565E4"))) PPC_WEAK_FUNC(sub_825565E4);
PPC_FUNC_IMPL(__imp__sub_825565E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825565E8"))) PPC_WEAK_FUNC(sub_825565E8);
PPC_FUNC_IMPL(__imp__sub_825565E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x8255b030
	sub_8255B030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825565F0"))) PPC_WEAK_FUNC(sub_825565F0);
PPC_FUNC_IMPL(__imp__sub_825565F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825565F4"))) PPC_WEAK_FUNC(sub_825565F4);
PPC_FUNC_IMPL(__imp__sub_825565F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825565F8"))) PPC_WEAK_FUNC(sub_825565F8);
PPC_FUNC_IMPL(__imp__sub_825565F8) {
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
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,23424
	ctx.r3.s64 = ctx.r3.s64 + 23424;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,23428(r31)
	PPC_STORE_U32(r31.u32 + 23428, r11.u32);
	// stw r11,23468(r31)
	PPC_STORE_U32(r31.u32 + 23468, r11.u32);
	// stw r11,23508(r31)
	PPC_STORE_U32(r31.u32 + 23508, r11.u32);
	// stw r11,23548(r31)
	PPC_STORE_U32(r31.u32 + 23548, r11.u32);
	// stw r11,23588(r31)
	PPC_STORE_U32(r31.u32 + 23588, r11.u32);
	// stw r11,23628(r31)
	PPC_STORE_U32(r31.u32 + 23628, r11.u32);
	// stw r11,23668(r31)
	PPC_STORE_U32(r31.u32 + 23668, r11.u32);
	// stw r11,23708(r31)
	PPC_STORE_U32(r31.u32 + 23708, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82556650"))) PPC_WEAK_FUNC(sub_82556650);
PPC_FUNC_IMPL(__imp__sub_82556650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556654"))) PPC_WEAK_FUNC(sub_82556654);
PPC_FUNC_IMPL(__imp__sub_82556654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556658"))) PPC_WEAK_FUNC(sub_82556658);
PPC_FUNC_IMPL(__imp__sub_82556658) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8400
	ctx.r3.s64 = ctx.r3.s64 + 8400;
}

__attribute__((alias("__imp__sub_8255665C"))) PPC_WEAK_FUNC(sub_8255665C);
PPC_FUNC_IMPL(__imp__sub_8255665C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255b7c0
	sub_8255B7C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556660"))) PPC_WEAK_FUNC(sub_82556660);
PPC_FUNC_IMPL(__imp__sub_82556660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556664"))) PPC_WEAK_FUNC(sub_82556664);
PPC_FUNC_IMPL(__imp__sub_82556664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556668"))) PPC_WEAK_FUNC(sub_82556668);
PPC_FUNC_IMPL(__imp__sub_82556668) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,23764(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23764);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556670"))) PPC_WEAK_FUNC(sub_82556670);
PPC_FUNC_IMPL(__imp__sub_82556670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,23784
	ctx.r3.s64 = r11.s64 + 23784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556680"))) PPC_WEAK_FUNC(sub_82556680);
PPC_FUNC_IMPL(__imp__sub_82556680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,23764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23764);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x825566b0
	if (!cr6.gt) goto loc_825566B0;
	// addi r10,r3,23768
	ctx.r10.s64 = ctx.r3.s64 + 23768;
loc_82556694:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r4
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, xer);
	// beq cr6,0x825566b8
	if (cr6.eq) goto loc_825566B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82556694
	if (cr6.lt) goto loc_82556694;
loc_825566B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825566B8:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,23784
	ctx.r3.s64 = r11.s64 + 23784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825566C8"))) PPC_WEAK_FUNC(sub_825566C8);
PPC_FUNC_IMPL(__imp__sub_825566C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,743
	r11.s64 = ctx.r4.s64 + 743;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// ldx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825566D8"))) PPC_WEAK_FUNC(sub_825566D8);
PPC_FUNC_IMPL(__imp__sub_825566D8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r28,23764(r31)
	PPC_STORE_U32(r31.u32 + 23764, r28.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825567f8
	if (!cr6.gt) goto loc_825567F8;
loc_82556720:
	// lwz r11,23764(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23764);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x825567f8
	if (!cr6.lt) goto loc_825567F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825567ec
	if (!cr6.gt) goto loc_825567EC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,23764(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23764);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r5,r11,23784
	ctx.r5.s64 = r11.s64 + 23784;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,23764(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23764);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r11,743
	ctx.r6.s64 = r11.s64 + 743;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// stdx r3,r5,r31
	PPC_STORE_U64(ctx.r5.u32 + r31.u32, ctx.r3.u64);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,23764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 23764);
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// std r3,23768(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23768, ctx.r3.u64);
	// lwz r11,23764(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23764);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// ld r3,23768(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 23768);
	// stdx r3,r5,r8
	PPC_STORE_U64(ctx.r5.u32 + ctx.r8.u32, ctx.r3.u64);
	// stw r4,23764(r31)
	PPC_STORE_U32(r31.u32 + 23764, ctx.r4.u32);
loc_825567EC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82556720
	if (cr6.lt) goto loc_82556720;
loc_825567F8:
	// lwz r10,23752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 23752);
	// addi r30,r31,23744
	r30.s64 = r31.s64 + 23744;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82556818
	if (cr6.lt) goto loc_82556818;
	// bne cr6,0x8255681c
	if (!cr6.eq) goto loc_8255681C;
	// li r11,1
	r11.s64 = 1;
	// b 0x8255681c
	goto loc_8255681C;
loc_82556818:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8255681C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lwz r6,23764(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 23764);
	// lwz r4,23756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 23756);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x8255ad60
	sub_8255AD60(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82556864
	if (cr6.lt) goto loc_82556864;
	// bne cr6,0x82556868
	if (!cr6.eq) goto loc_82556868;
	// li r11,1
	r11.s64 = 1;
	// b 0x82556868
	goto loc_82556868;
loc_82556864:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82556868:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82559ed0
	sub_82559ED0(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r28,23760(r31)
	PPC_STORE_U32(r31.u32 + 23760, r28.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82556898"))) PPC_WEAK_FUNC(sub_82556898);
PPC_FUNC_IMPL(__imp__sub_82556898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255689C"))) PPC_WEAK_FUNC(sub_8255689C);
PPC_FUNC_IMPL(__imp__sub_8255689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825568A0"))) PPC_WEAK_FUNC(sub_825568A0);
PPC_FUNC_IMPL(__imp__sub_825568A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,23760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23760, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825568AC"))) PPC_WEAK_FUNC(sub_825568AC);
PPC_FUNC_IMPL(__imp__sub_825568AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825568B0"))) PPC_WEAK_FUNC(sub_825568B0);
PPC_FUNC_IMPL(__imp__sub_825568B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r6,23760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23760, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825568CC"))) PPC_WEAK_FUNC(sub_825568CC);
PPC_FUNC_IMPL(__imp__sub_825568CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825568D0"))) PPC_WEAK_FUNC(sub_825568D0);
PPC_FUNC_IMPL(__imp__sub_825568D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825568E4"))) PPC_WEAK_FUNC(sub_825568E4);
PPC_FUNC_IMPL(__imp__sub_825568E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825568E8"))) PPC_WEAK_FUNC(sub_825568E8);
PPC_FUNC_IMPL(__imp__sub_825568E8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,21636(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82556950
	if (cr6.eq) goto loc_82556950;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82556954
	if (cr6.eq) goto loc_82556954;
loc_82556950:
	// li r11,0
	r11.s64 = 0;
loc_82556954:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8255696C"))) PPC_WEAK_FUNC(sub_8255696C);
PPC_FUNC_IMPL(__imp__sub_8255696C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556970"))) PPC_WEAK_FUNC(sub_82556970);
PPC_FUNC_IMPL(__imp__sub_82556970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister f0{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f0,f12
	f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556998
	if (!cr6.eq) goto loc_82556998;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x825569a8
	if (cr6.lt) goto loc_825569A8;
loc_82556990:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82556998:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556990
	if (!cr6.eq) goto loc_82556990;
loc_825569A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825569B0"))) PPC_WEAK_FUNC(sub_825569B0);
PPC_FUNC_IMPL(__imp__sub_825569B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e941c
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82556a70
	if (!cr6.gt) goto loc_82556A70;
	// addi r30,r9,12
	r30.s64 = ctx.r9.s64 + 12;
loc_825569CC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556a08
	if (cr6.eq) goto loc_82556A08;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_825569DC:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r29,0(r6)
	r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// subf r4,r29,r4
	ctx.r4.s64 = ctx.r4.s64 - r29.s64;
	// beq cr6,0x82556a00
	if (cr6.eq) goto loc_82556A00;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x825569dc
	if (cr6.eq) goto loc_825569DC;
loc_82556A00:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82556a1c
	if (cr6.eq) goto loc_82556A1C;
loc_82556A08:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x825569cc
	if (cr6.lt) goto loc_825569CC;
	// b 0x828e946c
	return;
loc_82556A1C:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556a74
	if (!cr6.eq) goto loc_82556A74;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x82556a84
	if (cr6.lt) goto loc_82556A84;
loc_82556A4C:
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82556a6c
	if (cr6.eq) goto loc_82556A6C;
	// stfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
loc_82556A6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82556A70:
	// b 0x828e946c
	return;
loc_82556A74:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556a4c
	if (!cr6.eq) goto loc_82556A4C;
loc_82556A84:
	// li r9,1
	ctx.r9.s64 = 1;
}

__attribute__((alias("__imp__sub_82556A88"))) PPC_WEAK_FUNC(sub_82556A88);
PPC_FUNC_IMPL(__imp__sub_82556A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82556a50
	// ERROR 82556A50
	return;
}

__attribute__((alias("__imp__sub_82556A8C"))) PPC_WEAK_FUNC(sub_82556A8C);
PPC_FUNC_IMPL(__imp__sub_82556A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556A90"))) PPC_WEAK_FUNC(sub_82556A90);
PPC_FUNC_IMPL(__imp__sub_82556A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82556c30
	if (cr6.lt) goto loc_82556C30;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
loc_82556AC4:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556cb0
	if (!cr6.eq) goto loc_82556CB0;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82556cc0
	if (cr6.lt) goto loc_82556CC0;
loc_82556B00:
	// li r11,0
	r11.s64 = 0;
loc_82556B04:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556b18
	if (cr6.eq) goto loc_82556B18;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82556B18:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556cc8
	if (!cr6.eq) goto loc_82556CC8;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82556cd8
	if (cr6.lt) goto loc_82556CD8;
loc_82556B54:
	// li r11,0
	r11.s64 = 0;
loc_82556B58:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556b70
	if (cr6.eq) goto loc_82556B70;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_82556B70:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556ce0
	if (!cr6.eq) goto loc_82556CE0;
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82556cf0
	if (cr6.lt) goto loc_82556CF0;
loc_82556BAC:
	// li r11,0
	r11.s64 = 0;
loc_82556BB0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556bc8
	if (cr6.eq) goto loc_82556BC8;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_82556BC8:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556cf8
	if (!cr6.eq) goto loc_82556CF8;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82556d08
	if (cr6.lt) goto loc_82556D08;
loc_82556C04:
	// li r11,0
	r11.s64 = 0;
loc_82556C08:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556c20
	if (cr6.eq) goto loc_82556C20;
	// addi r11,r9,3
	r11.s64 = ctx.r9.s64 + 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_82556C20:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82556ac4
	if (cr6.lt) goto loc_82556AC4;
loc_82556C30:
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82556C4C:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556d10
	if (!cr6.eq) goto loc_82556D10;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// blt cr6,0x82556d20
	if (cr6.lt) goto loc_82556D20;
loc_82556C88:
	// li r11,0
	r11.s64 = 0;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556ca0
	if (cr6.eq) goto loc_82556CA0;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82556CA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82556c4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82556C4C;
	// blr 
	return;
loc_82556CB0:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556b00
	if (!cr6.eq) goto loc_82556B00;
loc_82556CC0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556b04
	goto loc_82556B04;
loc_82556CC8:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556b54
	if (!cr6.eq) goto loc_82556B54;
loc_82556CD8:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556b58
	goto loc_82556B58;
loc_82556CE0:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556bac
	if (!cr6.eq) goto loc_82556BAC;
loc_82556CF0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556bb0
	goto loc_82556BB0;
loc_82556CF8:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556c04
	if (!cr6.eq) goto loc_82556C04;
loc_82556D08:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556c08
	goto loc_82556C08;
loc_82556D10:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556c88
	if (!cr6.eq) goto loc_82556C88;
loc_82556D20:
	// li r11,1
	r11.s64 = 1;
}

__attribute__((alias("__imp__sub_82556D24"))) PPC_WEAK_FUNC(sub_82556D24);
PPC_FUNC_IMPL(__imp__sub_82556D24) {
	PPC_FUNC_PROLOGUE();
	// b 0x82556c8c
	// ERROR 82556C8C
	return;
}

__attribute__((alias("__imp__sub_82556D28"))) PPC_WEAK_FUNC(sub_82556D28);
PPC_FUNC_IMPL(__imp__sub_82556D28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f0,f12
	f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556d50
	if (!cr6.eq) goto loc_82556D50;
	// fcmpu cr6,f3,f2
	cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// bgt cr6,0x82556d60
	if (cr6.gt) goto loc_82556D60;
loc_82556D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82556D50:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556d48
	if (!cr6.eq) goto loc_82556D48;
loc_82556D60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556D68"))) PPC_WEAK_FUNC(sub_82556D68);
PPC_FUNC_IMPL(__imp__sub_82556D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82556e50
	if (!cr6.gt) goto loc_82556E50;
	// addi r31,r8,12
	r31.s64 = ctx.r8.s64 + 12;
loc_82556D84:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556dc0
	if (cr6.eq) goto loc_82556DC0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82556D94:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r30,0(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf r6,r30,r6
	ctx.r6.s64 = ctx.r6.s64 - r30.s64;
	// beq cr6,0x82556db8
	if (cr6.eq) goto loc_82556DB8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82556d94
	if (cr6.eq) goto loc_82556D94;
loc_82556DB8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82556ddc
	if (cr6.eq) goto loc_82556DDC;
loc_82556DC0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// blt cr6,0x82556d84
	if (cr6.lt) goto loc_82556D84;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82556DDC:
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82556e5c
	if (!cr6.eq) goto loc_82556E5C;
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x82556e6c
	if (cr6.gt) goto loc_82556E6C;
loc_82556E1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82556e4c
	if (cr6.eq) goto loc_82556E4C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// li r12,8
	r12.s64 = 8;
	// stfiwx f0,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, f0.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_82556E4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82556E50:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82556E5C:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556e1c
	if (!cr6.eq) goto loc_82556E1C;
loc_82556E6C:
	// li r10,1
	ctx.r10.s64 = 1;
}

__attribute__((alias("__imp__sub_82556E70"))) PPC_WEAK_FUNC(sub_82556E70);
PPC_FUNC_IMPL(__imp__sub_82556E70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82556e20
	// ERROR 82556E20
	return;
}

__attribute__((alias("__imp__sub_82556E74"))) PPC_WEAK_FUNC(sub_82556E74);
PPC_FUNC_IMPL(__imp__sub_82556E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556E78"))) PPC_WEAK_FUNC(sub_82556E78);
PPC_FUNC_IMPL(__imp__sub_82556E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82557098
	if (cr6.lt) goto loc_82557098;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r6,40
	ctx.r10.s64 = ctx.r6.s64 + 40;
loc_82556EAC:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,-16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// std r4,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r4.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r11.u64);
	// lfd f11,-56(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fsubs f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsubs f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f8
	f0.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557138
	if (!cr6.eq) goto loc_82557138;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82557148
	if (cr6.gt) goto loc_82557148;
loc_82556F08:
	// li r11,0
	r11.s64 = 0;
loc_82556F0C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556f20
	if (cr6.eq) goto loc_82556F20;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82556F20:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// std r4,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r4.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r11.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsubs f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f0,f9
	f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557150
	if (!cr6.eq) goto loc_82557150;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82557160
	if (cr6.gt) goto loc_82557160;
loc_82556F7C:
	// li r11,0
	r11.s64 = 0;
loc_82556F80:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82556f98
	if (cr6.eq) goto loc_82556F98;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_82556F98:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// std r4,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r4.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r11.u64);
	// fsubs f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfd f11,-24(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fabs f0,f8
	f0.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557168
	if (!cr6.eq) goto loc_82557168;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82557178
	if (cr6.gt) goto loc_82557178;
loc_82556FF4:
	// li r11,0
	r11.s64 = 0;
loc_82556FF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557010
	if (cr6.eq) goto loc_82557010;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_82557010:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsubs f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f0,f9
	f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557180
	if (!cr6.eq) goto loc_82557180;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82557190
	if (cr6.gt) goto loc_82557190;
loc_8255706C:
	// li r11,0
	r11.s64 = 0;
loc_82557070:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557088
	if (cr6.eq) goto loc_82557088;
	// addi r11,r9,3
	r11.s64 = ctx.r9.s64 + 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_82557088:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82556eac
	if (cr6.lt) goto loc_82556EAC;
loc_82557098:
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_825570B4:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// add r4,r11,r6
	ctx.r4.u64 = r11.u64 + ctx.r6.u64;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// extsw r8,r11
	ctx.r8.s64 = r11.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fsubs f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fsubs f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f8
	f0.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557198
	if (!cr6.eq) goto loc_82557198;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x825571a8
	if (cr6.gt) goto loc_825571A8;
loc_82557110:
	// li r11,0
	r11.s64 = 0;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557128
	if (cr6.eq) goto loc_82557128;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82557128:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x825570b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825570B4;
	// blr 
	return;
loc_82557138:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556f08
	if (!cr6.eq) goto loc_82556F08;
loc_82557148:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556f0c
	goto loc_82556F0C;
loc_82557150:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556f7c
	if (!cr6.eq) goto loc_82556F7C;
loc_82557160:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556f80
	goto loc_82556F80;
loc_82557168:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82556ff4
	if (!cr6.eq) goto loc_82556FF4;
loc_82557178:
	// li r11,1
	r11.s64 = 1;
	// b 0x82556ff8
	goto loc_82556FF8;
loc_82557180:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x8255706c
	if (!cr6.eq) goto loc_8255706C;
loc_82557190:
	// li r11,1
	r11.s64 = 1;
	// b 0x82557070
	goto loc_82557070;
loc_82557198:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82557110
	if (!cr6.eq) goto loc_82557110;
loc_825571A8:
	// li r11,1
	r11.s64 = 1;
}

__attribute__((alias("__imp__sub_825571AC"))) PPC_WEAK_FUNC(sub_825571AC);
PPC_FUNC_IMPL(__imp__sub_825571AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82557114
	// ERROR 82557114
	return;
}

__attribute__((alias("__imp__sub_825571B0"))) PPC_WEAK_FUNC(sub_825571B0);
PPC_FUNC_IMPL(__imp__sub_825571B0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825564b8
	sub_825564B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825571F8"))) PPC_WEAK_FUNC(sub_825571F8);
PPC_FUNC_IMPL(__imp__sub_825571F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825571FC"))) PPC_WEAK_FUNC(sub_825571FC);
PPC_FUNC_IMPL(__imp__sub_825571FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557200"))) PPC_WEAK_FUNC(sub_82557200);
PPC_FUNC_IMPL(__imp__sub_82557200) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,21636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825564b8
	sub_825564B8(ctx, base);
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

__attribute__((alias("__imp__sub_8255726C"))) PPC_WEAK_FUNC(sub_8255726C);
PPC_FUNC_IMPL(__imp__sub_8255726C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557270"))) PPC_WEAK_FUNC(sub_82557270);
PPC_FUNC_IMPL(__imp__sub_82557270) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x825572c4
	if (!cr6.lt) goto loc_825572C4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825572c8
	goto loc_825572C8;
loc_825572C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825572C8:
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

__attribute__((alias("__imp__sub_825572DC"))) PPC_WEAK_FUNC(sub_825572DC);
PPC_FUNC_IMPL(__imp__sub_825572DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825572E0"))) PPC_WEAK_FUNC(sub_825572E0);
PPC_FUNC_IMPL(__imp__sub_825572E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x82557338
	if (!cr6.lt) goto loc_82557338;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82557338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255733C"))) PPC_WEAK_FUNC(sub_8255733C);
PPC_FUNC_IMPL(__imp__sub_8255733C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82557340"))) PPC_WEAK_FUNC(sub_82557340);
PPC_FUNC_IMPL(__imp__sub_82557340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82557368
	if (!cr6.eq) goto loc_82557368;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-26288
	ctx.r5.s64 = r11.s64 + -26288;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
loc_82557368:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8255738c
	if (!cr6.eq) goto loc_8255738C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-26288
	ctx.r5.s64 = r11.s64 + -26288;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
loc_8255738C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// stw r11,23760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23760, r11.u32);
}

__attribute__((alias("__imp__sub_8255739C"))) PPC_WEAK_FUNC(sub_8255739C);
PPC_FUNC_IMPL(__imp__sub_8255739C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825573A0"))) PPC_WEAK_FUNC(sub_825573A0);
PPC_FUNC_IMPL(__imp__sub_825573A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eaaf4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8400
	r27.s64 = ctx.r3.s64 + 8400;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// li r21,0
	r21.s64 = 0;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r23,r21
	r23.u64 = r21.u64;
	// bl 0x8255b508
	sub_8255B508(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r20,1
	r20.s64 = 1;
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f27,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f27.f64 = double(temp.f32);
	// ble cr6,0x8255753c
	if (!cr6.gt) goto loc_8255753C;
	// addi r30,r26,-4
	r30.s64 = r26.s64 + -4;
loc_82557400:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255b560
	sub_8255B560(ctx, base);
	// neg r28,r3
	r28.s64 = -ctx.r3.s64;
	// extsw r11,r28
	r11.s64 = r28.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// ble cr6,0x82557530
	if (!cr6.gt) goto loc_82557530;
	// fcmpu cr6,f31,f28
	cr6.compare(f31.f64, f28.f64);
	// bge cr6,0x82557530
	if (!cr6.lt) goto loc_82557530;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255b580
	sub_8255B580(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82556d68
	sub_82556D68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82557530
	if (!cr6.eq) goto loc_82557530;
	// cmpw cr6,r23,r22
	cr6.compare<int32_t>(r23.s32, r22.s32, xer);
	// blt cr6,0x8255751c
	if (cr6.lt) goto loc_8255751C;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82556e78
	sub_82556E78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557530
	if (cr6.eq) goto loc_82557530;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557504
	if (!cr6.eq) goto loc_82557504;
	// fcmpu cr6,f31,f12
	cr6.compare(f31.f64, ctx.f12.f64);
	// bgt cr6,0x82557514
	if (cr6.gt) goto loc_82557514;
loc_825574E0:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_825574E4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557530
	if (cr6.eq) goto loc_82557530;
	// stfs f27,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// b 0x82557530
	goto loc_82557530;
loc_82557504:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x825574e0
	if (!cr6.eq) goto loc_825574E0;
loc_82557514:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x825574e4
	goto loc_825574E4;
loc_8255751C:
	// stfs f27,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r21,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r21.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stwu r31,16(r30)
	ea = 16 + r30.u32;
	PPC_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
loc_82557530:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// blt cr6,0x82557400
	if (cr6.lt) goto loc_82557400;
loc_8255753C:
	// addi r27,r24,12
	r27.s64 = r24.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559c80
	sub_82559C80(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825576a0
	if (!cr6.gt) goto loc_825576A0;
	// rlwinm r11,r23,4,0,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_82557564:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559d90
	sub_82559D90(ctx, base);
	// neg r29,r3
	r29.s64 = -ctx.r3.s64;
	// extsw r11,r29
	r11.s64 = r29.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// ble cr6,0x82557694
	if (!cr6.gt) goto loc_82557694;
	// fcmpu cr6,f31,f28
	cr6.compare(f31.f64, f28.f64);
	// bge cr6,0x82557694
	if (!cr6.lt) goto loc_82557694;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559da8
	sub_82559DA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82556d68
	sub_82556D68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82557694
	if (!cr6.eq) goto loc_82557694;
	// cmpw cr6,r23,r22
	cr6.compare<int32_t>(r23.s32, r22.s32, xer);
	// blt cr6,0x82557680
	if (cr6.lt) goto loc_82557680;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82556e78
	sub_82556E78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557694
	if (cr6.eq) goto loc_82557694;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557668
	if (!cr6.eq) goto loc_82557668;
	// fcmpu cr6,f31,f12
	cr6.compare(f31.f64, ctx.f12.f64);
	// bgt cr6,0x82557678
	if (cr6.gt) goto loc_82557678;
loc_82557644:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82557648:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557694
	if (cr6.eq) goto loc_82557694;
	// stfs f27,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// b 0x82557694
	goto loc_82557694;
loc_82557668:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82557644
	if (!cr6.eq) goto loc_82557644;
loc_82557678:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x82557648
	goto loc_82557648;
loc_82557680:
	// stfs f27,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r20,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r20.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stwu r31,16(r30)
	ea = 16 + r30.u32;
	PPC_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
loc_82557694:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// blt cr6,0x82557564
	if (cr6.lt) goto loc_82557564;
loc_825576A0:
	// lwz r10,23764(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 23764);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x825577e4
	if (!cr6.gt) goto loc_825577E4;
	// rlwinm r11,r23,4,0,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r24,23784
	r31.s64 = r24.s64 + 23784;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// li r28,4
	r28.s64 = 4;
loc_825576C4:
	// ld r11,-8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + -8);
	// extsw r29,r11
	r29.s64 = r11.s32;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f2,f29
	cr6.compare(ctx.f2.f64, f29.f64);
	// ble cr6,0x825577d8
	if (!cr6.gt) goto loc_825577D8;
	// fcmpu cr6,f2,f28
	cr6.compare(ctx.f2.f64, f28.f64);
	// bge cr6,0x825577d8
	if (!cr6.lt) goto loc_825577D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82556d68
	sub_82556D68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825577d8
	if (!cr6.eq) goto loc_825577D8;
	// cmpw cr6,r23,r22
	cr6.compare<int32_t>(r23.s32, r22.s32, xer);
	// blt cr6,0x825577c4
	if (cr6.lt) goto loc_825577C4;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82556e78
	sub_82556E78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825577d8
	if (cr6.eq) goto loc_825577D8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f2,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f2.f64 - f30.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x825577ac
	if (!cr6.eq) goto loc_825577AC;
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x825577bc
	if (cr6.gt) goto loc_825577BC;
loc_82557788:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8255778C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825577d8
	if (cr6.eq) goto loc_825577D8;
	// stfs f27,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// b 0x825577d8
	goto loc_825577D8;
loc_825577AC:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82557788
	if (!cr6.eq) goto loc_82557788;
loc_825577BC:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x8255778c
	goto loc_8255778C;
loc_825577C4:
	// stfs f27,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stwu r31,16(r30)
	ea = 16 + r30.u32;
	PPC_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
loc_825577D8:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bne 0x825576c4
	if (!cr0.eq) goto loc_825576C4;
loc_825577E4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_825577F4"))) PPC_WEAK_FUNC(sub_825577F4);
PPC_FUNC_IMPL(__imp__sub_825577F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825577F8"))) PPC_WEAK_FUNC(sub_825577F8);
PPC_FUNC_IMPL(__imp__sub_825577F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eaaf4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8400
	r28.s64 = ctx.r3.s64 + 8400;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r19,0
	r19.s64 = 0;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// bl 0x8255b508
	sub_8255B508(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r18,1
	r18.s64 = 1;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82557984
	if (!cr6.gt) goto loc_82557984;
	// addi r27,r24,-4
	r27.s64 = r24.s64 + -4;
loc_82557854:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255b5a0
	sub_8255B5A0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	cr6.compare(ctx.f1.f64, f28.f64);
	// ble cr6,0x82557978
	if (!cr6.gt) goto loc_82557978;
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, f27.f64);
	// bge cr6,0x82557978
	if (!cr6.lt) goto loc_82557978;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255b560
	sub_8255B560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255b580
	sub_8255B580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825569b0
	sub_825569B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82557978
	if (!cr6.eq) goto loc_82557978;
	// cmpw cr6,r20,r21
	cr6.compare<int32_t>(r20.s32, r21.s32, xer);
	// blt cr6,0x82557964
	if (cr6.lt) goto loc_82557964;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82556a90
	sub_82556A90(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557978
	if (cr6.eq) goto loc_82557978;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8255794c
	if (!cr6.eq) goto loc_8255794C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255795c
	if (cr6.lt) goto loc_8255795C;
loc_82557928:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_8255792C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557978
	if (cr6.eq) goto loc_82557978;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// b 0x82557978
	goto loc_82557978;
loc_8255794C:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82557928
	if (!cr6.eq) goto loc_82557928;
loc_8255795C:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x8255792c
	goto loc_8255792C;
loc_82557964:
	// stfs f31,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// stw r31,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r31.u32);
	// stw r19,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r19.u32);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// stwu r30,16(r27)
	ea = 16 + r27.u32;
	PPC_STORE_U32(ea, r30.u32);
	r27.u32 = ea;
loc_82557978:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// blt cr6,0x82557854
	if (cr6.lt) goto loc_82557854;
loc_82557984:
	// addi r27,r25,12
	r27.s64 = r25.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559c80
	sub_82559C80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82557adc
	if (!cr6.gt) goto loc_82557ADC;
	// rlwinm r11,r20,4,0,27
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// addi r28,r11,-4
	r28.s64 = r11.s64 + -4;
loc_825579AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559c88
	sub_82559C88(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	cr6.compare(ctx.f1.f64, f28.f64);
	// ble cr6,0x82557ad0
	if (!cr6.gt) goto loc_82557AD0;
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, f27.f64);
	// bge cr6,0x82557ad0
	if (!cr6.lt) goto loc_82557AD0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559d90
	sub_82559D90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559da8
	sub_82559DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825569b0
	sub_825569B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82557ad0
	if (!cr6.eq) goto loc_82557AD0;
	// cmpw cr6,r20,r21
	cr6.compare<int32_t>(r20.s32, r21.s32, xer);
	// blt cr6,0x82557abc
	if (cr6.lt) goto loc_82557ABC;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82556a90
	sub_82556A90(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557ad0
	if (cr6.eq) goto loc_82557AD0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557aa4
	if (!cr6.eq) goto loc_82557AA4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82557ab4
	if (cr6.lt) goto loc_82557AB4;
loc_82557A80:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_82557A84:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557ad0
	if (cr6.eq) goto loc_82557AD0;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// b 0x82557ad0
	goto loc_82557AD0;
loc_82557AA4:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82557a80
	if (!cr6.eq) goto loc_82557A80;
loc_82557AB4:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x82557a84
	goto loc_82557A84;
loc_82557ABC:
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// stw r18,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r18.u32);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// stwu r30,16(r28)
	ea = 16 + r28.u32;
	PPC_STORE_U32(ea, r30.u32);
	r28.u32 = ea;
loc_82557AD0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// blt cr6,0x825579ac
	if (cr6.lt) goto loc_825579AC;
loc_82557ADC:
	// addi r27,r25,40
	r27.s64 = r25.s64 + 40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255a608
	sub_8255A608(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82557c8c
	if (!cr6.gt) goto loc_82557C8C;
	// rlwinm r11,r20,4,0,27
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,4
	r26.s64 = 4;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// addi r28,r11,-4
	r28.s64 = r11.s64 + -4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r23,r11,-26264
	r23.s64 = r11.s64 + -26264;
loc_82557B10:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255a610
	sub_8255A610(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	cr6.compare(ctx.f1.f64, f28.f64);
	// ble cr6,0x82557c80
	if (!cr6.gt) goto loc_82557C80;
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, f27.f64);
	// bge cr6,0x82557c80
	if (!cr6.lt) goto loc_82557C80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255a718
	sub_8255A718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255a730
	sub_8255A730(ctx, base);
	// lwz r9,23764(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 23764);
	// mr r11,r19
	r11.u64 = r19.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82557b9c
	if (!cr6.gt) goto loc_82557B9C;
	// addi r10,r25,23768
	ctx.r10.s64 = r25.s64 + 23768;
loc_82557B64:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r3
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, xer);
	// beq cr6,0x82557b84
	if (cr6.eq) goto loc_82557B84;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82557b64
	if (cr6.lt) goto loc_82557B64;
	// b 0x82557b9c
	goto loc_82557B9C;
loc_82557B84:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r11,r11,23784
	r11.s64 = r11.s64 + 23784;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r11
	r31.u64 = r11.u64;
	// bne cr6,0x82557ba0
	if (!cr6.eq) goto loc_82557BA0;
loc_82557B9C:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82557BA0:
	// li r10,4
	ctx.r10.s64 = 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825569b0
	sub_825569B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82557c80
	if (!cr6.eq) goto loc_82557C80;
	// cmpw cr6,r20,r21
	cr6.compare<int32_t>(r20.s32, r21.s32, xer);
	// blt cr6,0x82557c6c
	if (cr6.lt) goto loc_82557C6C;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82556a90
	sub_82556A90(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557c80
	if (cr6.eq) goto loc_82557C80;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82557c54
	if (!cr6.eq) goto loc_82557C54;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82557c64
	if (cr6.lt) goto loc_82557C64;
loc_82557C30:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_82557C34:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557c80
	if (cr6.eq) goto loc_82557C80;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// b 0x82557c80
	goto loc_82557C80;
loc_82557C54:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x82557c30
	if (!cr6.eq) goto loc_82557C30;
loc_82557C64:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x82557c34
	goto loc_82557C34;
loc_82557C6C:
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r30.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// stwu r31,16(r28)
	ea = 16 + r28.u32;
	PPC_STORE_U32(ea, r31.u32);
	r28.u32 = ea;
loc_82557C80:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(r29.s32, r22.s32, xer);
	// blt cr6,0x82557b10
	if (cr6.lt) goto loc_82557B10;
loc_82557C8C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_82557C9C"))) PPC_WEAK_FUNC(sub_82557C9C);
PPC_FUNC_IMPL(__imp__sub_82557C9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_82557CA0"))) PPC_WEAK_FUNC(sub_82557CA0);
PPC_FUNC_IMPL(__imp__sub_82557CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// ori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 | 1;
	// addi r9,r11,-31420
	ctx.r9.s64 = r11.s64 + -31420;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557CB8:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557cb8
	if (!cr6.eq) goto loc_82557CB8;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23016
	ctx.r9.s64 = ctx.r10.s64 + 23016;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557CEC:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557cec
	if (!cr6.eq) goto loc_82557CEC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22996
	ctx.r9.s64 = ctx.r10.s64 + 22996;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557D20:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557d20
	if (!cr6.eq) goto loc_82557D20;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r3,-1
	ctx.r3.s64 = -65536;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
}

__attribute__((alias("__imp__sub_82557D4C"))) PPC_WEAK_FUNC(sub_82557D4C);
PPC_FUNC_IMPL(__imp__sub_82557D4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557D50"))) PPC_WEAK_FUNC(sub_82557D50);
PPC_FUNC_IMPL(__imp__sub_82557D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,14820
	ctx.r9.s64 = r11.s64 + 14820;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557D64:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557d64
	if (!cr6.eq) goto loc_82557D64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82557e24
	if (cr6.eq) goto loc_82557E24;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23036
	ctx.r9.s64 = ctx.r10.s64 + 23036;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557D98:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557d98
	if (!cr6.eq) goto loc_82557D98;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82557e24
	if (cr6.eq) goto loc_82557E24;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-31420
	ctx.r9.s64 = ctx.r10.s64 + -31420;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557DCC:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557dcc
	if (!cr6.eq) goto loc_82557DCC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82557e24
	if (cr6.eq) goto loc_82557E24;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23016
	ctx.r9.s64 = ctx.r10.s64 + 23016;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557E00:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557e00
	if (!cr6.eq) goto loc_82557E00;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82557e2c
	if (!cr6.eq) goto loc_82557E2C;
loc_82557E24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82557E2C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22888
	ctx.r9.s64 = ctx.r10.s64 + 22888;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557E3C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557e3c
	if (!cr6.eq) goto loc_82557E3C;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82557e68
	if (!cr6.eq) goto loc_82557E68;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82557E68:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22904
	ctx.r9.s64 = ctx.r10.s64 + 22904;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557E78:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557e78
	if (!cr6.eq) goto loc_82557E78;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82557f04
	if (cr6.eq) goto loc_82557F04;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22996
	ctx.r9.s64 = ctx.r10.s64 + 22996;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557EAC:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557eac
	if (!cr6.eq) goto loc_82557EAC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82557f04
	if (cr6.eq) goto loc_82557F04;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22876
	ctx.r9.s64 = ctx.r10.s64 + 22876;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557EE0:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557ee0
	if (!cr6.eq) goto loc_82557EE0;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82557f0c
	if (!cr6.eq) goto loc_82557F0C;
loc_82557F04:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82557F0C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22984
	ctx.r9.s64 = ctx.r10.s64 + 22984;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557F1C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557f1c
	if (!cr6.eq) goto loc_82557F1C;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,22920
	r11.s64 = r11.s64 + 22920;
loc_82557F48:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82557f48
	if (!cr6.eq) goto loc_82557F48;
}

__attribute__((alias("__imp__sub_82557F54"))) PPC_WEAK_FUNC(sub_82557F54);
PPC_FUNC_IMPL(__imp__sub_82557F54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557F58"))) PPC_WEAK_FUNC(sub_82557F58);
PPC_FUNC_IMPL(__imp__sub_82557F58) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r5,23748(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 23748);
	// li r11,5381
	r11.s64 = 5381;
	// addi r31,r10,23036
	r31.s64 = ctx.r10.s64 + 23036;
	// li r10,71
	ctx.r10.s64 = 71;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82557F9C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557f9c
	if (!cr6.eq) goto loc_82557F9C;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x8255827c
	if (cr6.eq) goto loc_8255827C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23016
	ctx.r9.s64 = ctx.r10.s64 + 23016;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82557FD0:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82557fd0
	if (!cr6.eq) goto loc_82557FD0;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x8255827c
	if (cr6.eq) goto loc_8255827C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r6,r10,14820
	ctx.r6.s64 = ctx.r10.s64 + 14820;
	// li r10,71
	ctx.r10.s64 = 71;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82558008:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558008
	if (!cr6.eq) goto loc_82558008;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82558204
	if (cr6.eq) goto loc_82558204;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-31420
	ctx.r9.s64 = ctx.r10.s64 + -31420;
	// li r10,71
	ctx.r10.s64 = 71;
loc_8255803C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255803c
	if (!cr6.eq) goto loc_8255803C;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82558204
	if (cr6.eq) goto loc_82558204;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r6,r10,22888
	ctx.r6.s64 = ctx.r10.s64 + 22888;
	// li r10,71
	ctx.r10.s64 = 71;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82558074:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558074
	if (!cr6.eq) goto loc_82558074;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,5381
	r11.s64 = 5381;
	// bne cr6,0x825580d0
	if (!cr6.eq) goto loc_825580D0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r10,71
	ctx.r10.s64 = 71;
loc_825580A4:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825580a4
	if (!cr6.eq) goto loc_825580A4;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x825582f4
	goto loc_825582F4;
loc_825580D0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,22904
	ctx.r6.s64 = ctx.r10.s64 + 22904;
	// li r10,71
	ctx.r10.s64 = 71;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_825580E0:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825580e0
	if (!cr6.eq) goto loc_825580E0;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,5381
	r11.s64 = 5381;
	// bne cr6,0x8255813c
	if (!cr6.eq) goto loc_8255813C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82558110:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558110
	if (!cr6.eq) goto loc_82558110;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x825582f4
	goto loc_825582F4;
loc_8255813C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r10,22996
	ctx.r9.s64 = ctx.r10.s64 + 22996;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82558148:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558148
	if (!cr6.eq) goto loc_82558148;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,5381
	r11.s64 = 5381;
	// bne cr6,0x825581a4
	if (!cr6.eq) goto loc_825581A4;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82558178:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558178
	if (!cr6.eq) goto loc_82558178;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x825582f4
	goto loc_825582F4;
loc_825581A4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r10,22984
	ctx.r9.s64 = ctx.r10.s64 + 22984;
	// li r10,71
	ctx.r10.s64 = 71;
loc_825581B0:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825581b0
	if (!cr6.eq) goto loc_825581B0;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82558300
	if (cr6.eq) goto loc_82558300;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22920
	ctx.r9.s64 = ctx.r10.s64 + 22920;
	// li r10,71
	ctx.r10.s64 = 71;
loc_825581E4:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825581e4
	if (!cr6.eq) goto loc_825581E4;
	// b 0x82558300
	goto loc_82558300;
loc_82558204:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82558210:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558210
	if (!cr6.eq) goto loc_82558210;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82558250:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558250
	if (!cr6.eq) goto loc_82558250;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x825582f4
	goto loc_825582F4;
loc_8255827C:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,71
	ctx.r10.s64 = 71;
loc_82558288:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82558288
	if (!cr6.eq) goto loc_82558288;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,14820
	ctx.r9.s64 = ctx.r10.s64 + 14820;
	// li r10,71
	ctx.r10.s64 = 71;
loc_825582CC:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825582cc
	if (!cr6.eq) goto loc_825582CC;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_825582F4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
loc_82558300:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82558328"))) PPC_WEAK_FUNC(sub_82558328);
PPC_FUNC_IMPL(__imp__sub_82558328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255832C"))) PPC_WEAK_FUNC(sub_8255832C);
PPC_FUNC_IMPL(__imp__sub_8255832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558330"))) PPC_WEAK_FUNC(sub_82558330);
PPC_FUNC_IMPL(__imp__sub_82558330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r11,r4,-1000
	r11.s64 = ctx.r4.s64 + -1000;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divw. r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x825583c0
	if (cr0.gt) goto loc_825583C0;
	// addi r31,r4,-100
	r31.s64 = ctx.r4.s64 + -100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825568e8
	sub_825568E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82558380
	if (!cr6.eq) goto loc_82558380;
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
loc_82558380:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255839c
	if (cr6.eq) goto loc_8255839C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825583a0
	if (!cr6.eq) goto loc_825583A0;
loc_8255839C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825583A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574028
	sub_82574028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825583C0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825583D4"))) PPC_WEAK_FUNC(sub_825583D4);
PPC_FUNC_IMPL(__imp__sub_825583D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825583D8"))) PPC_WEAK_FUNC(sub_825583D8);
PPC_FUNC_IMPL(__imp__sub_825583D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// blt cr6,0x8255879c
	if (cr6.lt) goto loc_8255879C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x8255879c
	if (!cr6.lt) goto loc_8255879C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r7,-26220
	ctx.r4.s64 = ctx.r7.s64 + -26220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26228
	ctx.r4.s64 = r11.s64 + -26228;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r8,-26236
	ctx.r5.s64 = ctx.r8.s64 + -26236;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r7,-32716
	ctx.r4.s64 = ctx.r7.s64 + -32716;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-26248
	ctx.r4.s64 = ctx.r6.s64 + -26248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// lwz r11,21404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21404);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82558784
	if (cr6.gt) goto loc_82558784;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82558624
	if (cr6.eq) goto loc_82558624;
	// bdz 0x82558534
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82558534;
	// bdz 0x825585ac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825585AC;
	// bdz 0x82558698
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82558698;
	// b 0x8255870c
	goto loc_8255870C;
loc_82558534:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558570
	if (cr6.eq) goto loc_82558570;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558574
	if (!cr6.eq) goto loc_82558574;
loc_82558570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558574:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,17300
	ctx.r7.s64 = r11.s64 + 17300;
	// rotlwi r6,r31,0
	ctx.r6.u64 = __builtin_rotateleft32(r31.u32, 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r10,32756
	ctx.r4.s64 = ctx.r10.s64 + 32756;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// b 0x82558784
	goto loc_82558784;
loc_825585AC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825585e8
	if (cr6.eq) goto loc_825585E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825585ec
	if (!cr6.eq) goto loc_825585EC;
loc_825585E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825585EC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,17300
	ctx.r7.s64 = r11.s64 + 17300;
	// rotlwi r6,r31,0
	ctx.r6.u64 = __builtin_rotateleft32(r31.u32, 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r10,32756
	ctx.r4.s64 = ctx.r10.s64 + 32756;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// b 0x82558784
	goto loc_82558784;
loc_82558624:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// addi r5,r9,13432
	ctx.r5.s64 = ctx.r9.s64 + 13432;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558670
	if (cr6.eq) goto loc_82558670;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558674
	if (!cr6.eq) goto loc_82558674;
loc_82558670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558674:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32756
	ctx.r4.s64 = r11.s64 + 32756;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// b 0x82558784
	goto loc_82558784;
loc_82558698:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,13432
	ctx.r5.s64 = ctx.r9.s64 + 13432;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825586e4
	if (cr6.eq) goto loc_825586E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825586e8
	if (!cr6.eq) goto loc_825586E8;
loc_825586E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825586E8:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32756
	ctx.r4.s64 = r11.s64 + 32756;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// b 0x82558784
	goto loc_82558784;
loc_8255870C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r8,32756
	ctx.r4.s64 = ctx.r8.s64 + 32756;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-26256
	ctx.r4.s64 = ctx.r9.s64 + -26256;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
loc_82558784:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
loc_8255879C:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825587B8"))) PPC_WEAK_FUNC(sub_825587B8);
PPC_FUNC_IMPL(__imp__sub_825587B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825587BC"))) PPC_WEAK_FUNC(sub_825587BC);
PPC_FUNC_IMPL(__imp__sub_825587BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825587C0"))) PPC_WEAK_FUNC(sub_825587C0);
PPC_FUNC_IMPL(__imp__sub_825587C0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x82558814
	if (!cr6.lt) goto loc_82558814;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82558818
	goto loc_82558818;
loc_82558814:
	// li r30,0
	r30.s64 = 0;
loc_82558818:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x82558850
	if (!cr6.lt) goto loc_82558850;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82558854
	goto loc_82558854;
loc_82558850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558854:
	// cmpd cr6,r30,r3
	cr6.compare<int64_t>(r30.s64, ctx.r3.s64, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82558864
	if (cr6.gt) goto loc_82558864;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82558868"))) PPC_WEAK_FUNC(sub_82558868);
PPC_FUNC_IMPL(__imp__sub_82558868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255886C"))) PPC_WEAK_FUNC(sub_8255886C);
PPC_FUNC_IMPL(__imp__sub_8255886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558870"))) PPC_WEAK_FUNC(sub_82558870);
PPC_FUNC_IMPL(__imp__sub_82558870) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825564b8
	sub_825564B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825588dc
	if (!cr6.lt) goto loc_825588DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825588DC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825587c0
	sub_825587C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825588EC"))) PPC_WEAK_FUNC(sub_825588EC);
PPC_FUNC_IMPL(__imp__sub_825588EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825588F0"))) PPC_WEAK_FUNC(sub_825588F0);
PPC_FUNC_IMPL(__imp__sub_825588F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,23744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 23744);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r7,-27652
	ctx.r4.s64 = ctx.r7.s64 + -27652;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r5,r8,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addic r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	// subfe r5,r11,r5
	temp.u8 = (~r11.u32 + ctx.r5.u32 < ~r11.u32) | (~r11.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~r11.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// lwz r8,23744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 23744);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
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

__attribute__((alias("__imp__sub_82558998"))) PPC_WEAK_FUNC(sub_82558998);
PPC_FUNC_IMPL(__imp__sub_82558998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255899C"))) PPC_WEAK_FUNC(sub_8255899C);
PPC_FUNC_IMPL(__imp__sub_8255899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825589A0"))) PPC_WEAK_FUNC(sub_825589A0);
PPC_FUNC_IMPL(__imp__sub_825589A0) {
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
	// lwz r11,21404(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21404);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82558a54
	if (cr6.eq) goto loc_82558A54;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82558a08
	if (cr6.eq) goto loc_82558A08;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82558a9c
	if (!cr6.eq) goto loc_82558A9C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,-26200
	ctx.r5.s64 = ctx.r9.s64 + -26200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// b 0x82558a9c
	goto loc_82558A9C;
loc_82558A08:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-26208
	ctx.r5.s64 = ctx.r8.s64 + -26208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// b 0x82558a9c
	goto loc_82558A9C;
loc_82558A54:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-26208
	ctx.r5.s64 = ctx.r8.s64 + -26208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_82558A9C:
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

__attribute__((alias("__imp__sub_82558AB0"))) PPC_WEAK_FUNC(sub_82558AB0);
PPC_FUNC_IMPL(__imp__sub_82558AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558AB4"))) PPC_WEAK_FUNC(sub_82558AB4);
PPC_FUNC_IMPL(__imp__sub_82558AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558AB8"))) PPC_WEAK_FUNC(sub_82558AB8);
PPC_FUNC_IMPL(__imp__sub_82558AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-31962
	ctx.r5.s64 = -2094661632;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,24192(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24192);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// bl 0x82557ca0
	sub_82557CA0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r9,61
	ctx.r9.s64 = 61;
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,21404(r6)
	PPC_STORE_U32(ctx.r6.u32 + 21404, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82558B28"))) PPC_WEAK_FUNC(sub_82558B28);
PPC_FUNC_IMPL(__imp__sub_82558B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558B2C"))) PPC_WEAK_FUNC(sub_82558B2C);
PPC_FUNC_IMPL(__imp__sub_82558B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558B30"))) PPC_WEAK_FUNC(sub_82558B30);
PPC_FUNC_IMPL(__imp__sub_82558B30) {
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
	// li r11,2
	r11.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,23760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23760, r11.u32);
	// bl 0x82558ab8
	sub_82558AB8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
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

__attribute__((alias("__imp__sub_82558B74"))) PPC_WEAK_FUNC(sub_82558B74);
PPC_FUNC_IMPL(__imp__sub_82558B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558B78"))) PPC_WEAK_FUNC(sub_82558B78);
PPC_FUNC_IMPL(__imp__sub_82558B78) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82558c14
	if (cr6.eq) goto loc_82558C14;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,247(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// addi r11,r30,586
	r11.s64 = r30.s64 + 586;
	// add r7,r30,r10
	ctx.r7.u64 = r30.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r10,r29
	r11.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,23424(r11)
	PPC_STORE_U32(r11.u32 + 23424, r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,23432(r11)
	PPC_STORE_U32(r11.u32 + 23432, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,23436(r11)
	PPC_STORE_U32(r11.u32 + 23436, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwx r9,r5,r29
	PPC_STORE_U32(ctx.r5.u32 + r29.u32, ctx.r9.u32);
	// stw r4,23428(r11)
	PPC_STORE_U32(r11.u32 + 23428, ctx.r4.u32);
	// stb r8,23452(r11)
	PPC_STORE_U8(r11.u32 + 23452, ctx.r8.u8);
	// stw r27,23456(r11)
	PPC_STORE_U32(r11.u32 + 23456, r27.u32);
	// stw r26,23460(r11)
	PPC_STORE_U32(r11.u32 + 23460, r26.u32);
	// stw r25,23448(r11)
	PPC_STORE_U32(r11.u32 + 23448, r25.u32);
	// stw r24,23444(r11)
	PPC_STORE_U32(r11.u32 + 23444, r24.u32);
loc_82558C14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82558C18"))) PPC_WEAK_FUNC(sub_82558C18);
PPC_FUNC_IMPL(__imp__sub_82558C18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82558C1C"))) PPC_WEAK_FUNC(sub_82558C1C);
PPC_FUNC_IMPL(__imp__sub_82558C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558C20"))) PPC_WEAK_FUNC(sub_82558C20);
PPC_FUNC_IMPL(__imp__sub_82558C20) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82558c9c
	if (cr6.eq) goto loc_82558C9C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,586
	r11.s64 = r31.s64 + 586;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r10,r29
	r11.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r28,23424(r11)
	PPC_STORE_U32(r11.u32 + 23424, r28.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r5,23432(r11)
	PPC_STORE_U32(r11.u32 + 23432, ctx.r5.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r4,23436(r11)
	PPC_STORE_U32(r11.u32 + 23436, ctx.r4.u32);
	// stwx r7,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r7.u32);
	// stw r6,23428(r11)
	PPC_STORE_U32(r11.u32 + 23428, ctx.r6.u32);
	// stw r27,23452(r11)
	PPC_STORE_U32(r11.u32 + 23452, r27.u32);
loc_82558C9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82558CA0"))) PPC_WEAK_FUNC(sub_82558CA0);
PPC_FUNC_IMPL(__imp__sub_82558CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82558CA4"))) PPC_WEAK_FUNC(sub_82558CA4);
PPC_FUNC_IMPL(__imp__sub_82558CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558CA8"))) PPC_WEAK_FUNC(sub_82558CA8);
PPC_FUNC_IMPL(__imp__sub_82558CA8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82558d24
	if (cr6.eq) goto loc_82558D24;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,586
	r11.s64 = r31.s64 + 586;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r10,r29
	r11.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r28,23424(r11)
	PPC_STORE_U32(r11.u32 + 23424, r28.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r5,23432(r11)
	PPC_STORE_U32(r11.u32 + 23432, ctx.r5.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r4,23436(r11)
	PPC_STORE_U32(r11.u32 + 23436, ctx.r4.u32);
	// stwx r7,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r7.u32);
	// stw r6,23428(r11)
	PPC_STORE_U32(r11.u32 + 23428, ctx.r6.u32);
	// stw r27,23452(r11)
	PPC_STORE_U32(r11.u32 + 23452, r27.u32);
loc_82558D24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82558D28"))) PPC_WEAK_FUNC(sub_82558D28);
PPC_FUNC_IMPL(__imp__sub_82558D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82558D2C"))) PPC_WEAK_FUNC(sub_82558D2C);
PPC_FUNC_IMPL(__imp__sub_82558D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558D30"))) PPC_WEAK_FUNC(sub_82558D30);
PPC_FUNC_IMPL(__imp__sub_82558D30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r24,-31970
	r24.s64 = -2095185920;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82558d68
	if (cr6.eq) goto loc_82558D68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558d6c
	if (!cr6.eq) goto loc_82558D6C;
loc_82558D68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558D6C:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82573bf8
	sub_82573BF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82558ef8
	if (!cr6.eq) goto loc_82558EF8;
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558d94
	if (cr6.eq) goto loc_82558D94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558d98
	if (!cr6.eq) goto loc_82558D98;
loc_82558D94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558D98:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82558ef8
	if (!cr6.eq) goto loc_82558EF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r29,-1
	r29.s64 = -1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// addi r28,r11,-4
	r28.s64 = r11.s64 + -4;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// addi r30,r25,23424
	r30.s64 = r25.s64 + 23424;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r29.u32);
loc_82558DD8:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bge cr6,0x82558e24
	if (!cr6.lt) goto loc_82558E24;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82558e14
	if (cr6.eq) goto loc_82558E14;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r31,r11,-100
	r31.s64 = r11.s64 + -100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825568e8
	sub_825568E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e14
	if (cr6.eq) goto loc_82558E14;
	// stwu r31,4(r28)
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, r31.u32);
	r28.u32 = ea;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82558E14:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(r27.u32, 8, xer);
	// blt cr6,0x82558dd8
	if (cr6.lt) goto loc_82558DD8;
loc_82558E24:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82558ef8
	if (!cr6.gt) goto loc_82558EF8;
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558e4c
	if (!cr6.eq) goto loc_82558E4C;
loc_82558E48:
	// li r11,0
	r11.s64 = 0;
loc_82558E4C:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558e78
	if (cr6.eq) goto loc_82558E78;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558e7c
	if (!cr6.eq) goto loc_82558E7C;
loc_82558E78:
	// li r11,0
	r11.s64 = 0;
loc_82558E7C:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// ble cr6,0x82558ed0
	if (!cr6.gt) goto loc_82558ED0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_82558E9C:
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558eb8
	if (cr6.eq) goto loc_82558EB8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558ebc
	if (!cr6.eq) goto loc_82558EBC;
loc_82558EB8:
	// li r11,0
	r11.s64 = 0;
loc_82558EBC:
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573b90
	sub_82573B90(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82558e9c
	if (!cr0.eq) goto loc_82558E9C;
loc_82558ED0:
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558ee8
	if (cr6.eq) goto loc_82558EE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558eec
	if (!cr6.eq) goto loc_82558EEC;
loc_82558EE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558EEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574988
	sub_82574988(ctx, base);
loc_82558EF8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82558F04"))) PPC_WEAK_FUNC(sub_82558F04);
PPC_FUNC_IMPL(__imp__sub_82558F04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82558F08"))) PPC_WEAK_FUNC(sub_82558F08);
PPC_FUNC_IMPL(__imp__sub_82558F08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82558f40
	if (cr6.eq) goto loc_82558F40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82558f44
	if (!cr6.eq) goto loc_82558F44;
loc_82558F40:
	// li r11,0
	r11.s64 = 0;
loc_82558F44:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r9,-26152
	ctx.r5.s64 = ctx.r9.s64 + -26152;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,-1
	r31.s64 = -1;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82558ffc
	if (!cr6.eq) goto loc_82558FFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82558ffc
	if (!cr6.eq) goto loc_82558FFC;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x82558fd0
	if (cr6.lt) goto loc_82558FD0;
	// bne cr6,0x82558ffc
	if (!cr6.eq) goto loc_82558FFC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-26176
	ctx.r5.s64 = r11.s64 + -26176;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x82558ff8
	goto loc_82558FF8;
loc_82558FD0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-26192
	ctx.r5.s64 = r11.s64 + -26192;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82558FF8:
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82558FFC:
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82559014"))) PPC_WEAK_FUNC(sub_82559014);
PPC_FUNC_IMPL(__imp__sub_82559014) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82559018"))) PPC_WEAK_FUNC(sub_82559018);
PPC_FUNC_IMPL(__imp__sub_82559018) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,-26608
	ctx.r10.s64 = r11.s64 + -26608;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8255a0c8
	sub_8255A0C8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8255a9a8
	sub_8255A9A8(ctx, base);
	// addi r3,r31,8400
	ctx.r3.s64 = r31.s64 + 8400;
	// bl 0x8255b8c0
	sub_8255B8C0(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,23744(r31)
	PPC_STORE_U32(r31.u32 + 23744, ctx.r9.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// li r5,320
	ctx.r5.s64 = 320;
	// stw r30,23752(r31)
	PPC_STORE_U32(r31.u32 + 23752, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,23424
	ctx.r3.s64 = r31.s64 + 23424;
	// stw r8,23748(r31)
	PPC_STORE_U32(r31.u32 + 23748, ctx.r8.u32);
	// stw r30,23756(r31)
	PPC_STORE_U32(r31.u32 + 23756, r30.u32);
	// stw r30,23760(r31)
	PPC_STORE_U32(r31.u32 + 23760, r30.u32);
	// stw r30,23764(r31)
	PPC_STORE_U32(r31.u32 + 23764, r30.u32);
	// stw r30,23928(r31)
	PPC_STORE_U32(r31.u32 + 23928, r30.u32);
	// stw r30,23932(r31)
	PPC_STORE_U32(r31.u32 + 23932, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r30,23428(r31)
	PPC_STORE_U32(r31.u32 + 23428, r30.u32);
	// stw r30,23468(r31)
	PPC_STORE_U32(r31.u32 + 23468, r30.u32);
	// stw r30,23508(r31)
	PPC_STORE_U32(r31.u32 + 23508, r30.u32);
	// stw r30,23548(r31)
	PPC_STORE_U32(r31.u32 + 23548, r30.u32);
	// stw r30,23588(r31)
	PPC_STORE_U32(r31.u32 + 23588, r30.u32);
	// stw r30,23628(r31)
	PPC_STORE_U32(r31.u32 + 23628, r30.u32);
	// stw r30,23668(r31)
	PPC_STORE_U32(r31.u32 + 23668, r30.u32);
	// stw r30,23708(r31)
	PPC_STORE_U32(r31.u32 + 23708, r30.u32);
	// bl 0x8273eb60
	sub_8273EB60(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r5,-26052
	ctx.r7.s64 = ctx.r5.s64 + -26052;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r8,228
	ctx.r8.s64 = 228;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r3,512
	ctx.r3.s64 = 512;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r3,-31970
	ctx.r3.s64 = -2095185920;
	// lwz r3,-14756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82559138
	if (cr6.eq) goto loc_82559138;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82559138
	if (cr6.eq) goto loc_82559138;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82559138:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f5a38
	sub_824F5A38(ctx, base);
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

__attribute__((alias("__imp__sub_82559160"))) PPC_WEAK_FUNC(sub_82559160);
PPC_FUNC_IMPL(__imp__sub_82559160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559164"))) PPC_WEAK_FUNC(sub_82559164);
PPC_FUNC_IMPL(__imp__sub_82559164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559168"))) PPC_WEAK_FUNC(sub_82559168);
PPC_FUNC_IMPL(__imp__sub_82559168) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// bl 0x82557d50
	sub_82557D50(ctx, base);
	// stw r5,23748(r31)
	PPC_STORE_U32(r31.u32 + 23748, ctx.r5.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,23744(r31)
	PPC_STORE_U32(r31.u32 + 23744, r30.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// stw r6,23752(r31)
	PPC_STORE_U32(r31.u32 + 23752, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82558f08
	sub_82558F08(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x825591c4
	if (!cr6.eq) goto loc_825591C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_825591C4:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x82559230
	if (cr6.lt) goto loc_82559230;
	// beq cr6,0x82559204
	if (cr6.eq) goto loc_82559204;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bge cr6,0x8255926c
	if (!cr6.lt) goto loc_8255926C;
	// addi r11,r3,2000
	r11.s64 = ctx.r3.s64 + 2000;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,21404(r31)
	PPC_STORE_U32(r31.u32 + 21404, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// b 0x82559264
	goto loc_82559264;
loc_82559204:
	// li r11,2
	r11.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r3,2000
	ctx.r9.s64 = ctx.r3.s64 + 2000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,21404(r31)
	PPC_STORE_U32(r31.u32 + 21404, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8255925c
	goto loc_8255925C;
loc_82559230:
	// li r11,2
	r11.s64 = 2;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r3,2000
	ctx.r8.s64 = ctx.r3.s64 + 2000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,21404(r31)
	PPC_STORE_U32(r31.u32 + 21404, ctx.r10.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8255925C:
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82559264:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255926C:
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82559278"))) PPC_WEAK_FUNC(sub_82559278);
PPC_FUNC_IMPL(__imp__sub_82559278) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255927C"))) PPC_WEAK_FUNC(sub_8255927C);
PPC_FUNC_IMPL(__imp__sub_8255927C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559280"))) PPC_WEAK_FUNC(sub_82559280);
PPC_FUNC_IMPL(__imp__sub_82559280) {
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
	// lwz r4,23748(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23748);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82558ab8
	sub_82558AB8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_825592D4"))) PPC_WEAK_FUNC(sub_825592D4);
PPC_FUNC_IMPL(__imp__sub_825592D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825592D8"))) PPC_WEAK_FUNC(sub_825592D8);
PPC_FUNC_IMPL(__imp__sub_825592D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825592ec
	if (!cr6.eq) goto loc_825592EC;
	// lwz r4,23748(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23748);
	// b 0x82558ab8
	sub_82558AB8(ctx, base);
	return;
loc_825592EC:
	// lwz r6,23752(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23752);
	// lwz r5,23748(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23748);
	// lwz r4,23744(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23744);
}

__attribute__((alias("__imp__sub_825592F8"))) PPC_WEAK_FUNC(sub_825592F8);
PPC_FUNC_IMPL(__imp__sub_825592F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82559168
	sub_82559168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825592FC"))) PPC_WEAK_FUNC(sub_825592FC);
PPC_FUNC_IMPL(__imp__sub_825592FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559300"))) PPC_WEAK_FUNC(sub_82559300);
PPC_FUNC_IMPL(__imp__sub_82559300) {
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
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82559344
	if (!cr6.eq) goto loc_82559344;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-25988
	ctx.r5.s64 = r11.s64 + -25988;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x8255937c
	goto loc_8255937C;
loc_82559344:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8255936c
	if (!cr6.eq) goto loc_8255936C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-25988
	ctx.r5.s64 = r11.s64 + -25988;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x8255937c
	goto loc_8255937C;
loc_8255936C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8255937c
	if (!cr6.eq) goto loc_8255937C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825566d8
	sub_825566D8(ctx, base);
loc_8255937C:
	// lwz r11,23928(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23928);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255939c
	if (!cr6.eq) goto loc_8255939C;
	// lwz r11,23932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x825593a0
	if (cr6.eq) goto loc_825593A0;
loc_8255939C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825593A0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825593c4
	if (!cr6.eq) goto loc_825593C4;
	// lwz r11,23932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23932);
	// lwz r3,23928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 23928);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,23928(r31)
	PPC_STORE_U32(r31.u32 + 23928, r30.u32);
	// stw r30,23932(r31)
	PPC_STORE_U32(r31.u32 + 23932, r30.u32);
loc_825593C4:
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

__attribute__((alias("__imp__sub_825593D8"))) PPC_WEAK_FUNC(sub_825593D8);
PPC_FUNC_IMPL(__imp__sub_825593D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825593DC"))) PPC_WEAK_FUNC(sub_825593DC);
PPC_FUNC_IMPL(__imp__sub_825593DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825593E0"))) PPC_WEAK_FUNC(sub_825593E0);
PPC_FUNC_IMPL(__imp__sub_825593E0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,23756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23756, ctx.r4.u32);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r10,23760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23760, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x82559168
	sub_82559168(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,23756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 23756);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,23932(r31)
	PPC_STORE_U32(r31.u32 + 23932, ctx.r7.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r6,23928(r31)
	PPC_STORE_U32(r31.u32 + 23928, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82559458"))) PPC_WEAK_FUNC(sub_82559458);
PPC_FUNC_IMPL(__imp__sub_82559458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255945C"))) PPC_WEAK_FUNC(sub_8255945C);
PPC_FUNC_IMPL(__imp__sub_8255945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559460"))) PPC_WEAK_FUNC(sub_82559460);
PPC_FUNC_IMPL(__imp__sub_82559460) {
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
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r26,23456(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 23456);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8255968c
	if (!cr6.gt) goto loc_8255968C;
	// lwz r8,23436(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 23436);
	// addi r10,r4,586
	ctx.r10.s64 = ctx.r4.s64 + 586;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,23432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 23432);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,23424(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 23424);
	// lbz r29,23452(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 23452);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r28,23460(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 23460);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r27,23444(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 23444);
	// lwz r25,23448(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 23448);
	// lwzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// bl 0x82558f08
	sub_82558F08(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255968c
	if (cr6.eq) goto loc_8255968C;
	// mulli r11,r30,216
	r11.s64 = r30.s64 * 216;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// extsw r7,r26
	ctx.r7.s64 = r26.s32;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// ori r9,r10,10
	ctx.r9.u64 = ctx.r10.u64 | 10;
	// std r7,21448(r11)
	PPC_STORE_U64(r11.u32 + 21448, ctx.r7.u64);
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
	// ori r6,r6,13
	ctx.r6.u64 = ctx.r6.u64 | 13;
	// stw r9,21408(r11)
	PPC_STORE_U32(r11.u32 + 21408, ctx.r9.u32);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// stw r9,21480(r11)
	PPC_STORE_U32(r11.u32 + 21480, ctx.r9.u32);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// std r7,21424(r11)
	PPC_STORE_U64(r11.u32 + 21424, ctx.r7.u64);
	// lis r26,4096
	r26.s64 = 268435456;
	// stw r6,21432(r11)
	PPC_STORE_U32(r11.u32 + 21432, ctx.r6.u32);
	// ori r5,r5,14
	ctx.r5.u64 = ctx.r5.u64 | 14;
	// stw r27,21568(r11)
	PPC_STORE_U32(r11.u32 + 21568, r27.u32);
	// extsw r9,r28
	ctx.r9.s64 = r28.s32;
	// stw r25,21592(r11)
	PPC_STORE_U32(r11.u32 + 21592, r25.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r5,21456(r11)
	PPC_STORE_U32(r11.u32 + 21456, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r9,21472(r11)
	PPC_STORE_U64(r11.u32 + 21472, ctx.r9.u64);
	// ori r7,r4,32778
	ctx.r7.u64 = ctx.r4.u64 | 32778;
	// stb r8,21416(r11)
	PPC_STORE_U8(r11.u32 + 21416, ctx.r8.u8);
	// ori r6,r26,32779
	ctx.r6.u64 = r26.u64 | 32779;
	// stb r8,21440(r11)
	PPC_STORE_U8(r11.u32 + 21440, ctx.r8.u8);
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// stb r8,21464(r11)
	PPC_STORE_U8(r11.u32 + 21464, ctx.r8.u8);
	// addi r5,r11,21408
	ctx.r5.s64 = r11.s64 + 21408;
	// stb r8,21488(r11)
	PPC_STORE_U8(r11.u32 + 21488, ctx.r8.u8);
	// addi r4,r11,21480
	ctx.r4.s64 = r11.s64 + 21480;
	// std r10,21496(r11)
	PPC_STORE_U64(r11.u32 + 21496, ctx.r10.u64);
	// addi r26,r11,21552
	r26.s64 = r11.s64 + 21552;
	// stw r7,21552(r11)
	PPC_STORE_U32(r11.u32 + 21552, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,21560(r11)
	PPC_STORE_U8(r11.u32 + 21560, ctx.r10.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r6,21576(r11)
	PPC_STORE_U32(r11.u32 + 21576, ctx.r6.u32);
	// stb r10,21584(r11)
	PPC_STORE_U8(r11.u32 + 21584, ctx.r10.u8);
	// beq cr6,0x825595ec
	if (cr6.eq) goto loc_825595EC;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,2000
	ctx.r3.s64 = ctx.r3.s64 + 2000;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// li r25,3
	r25.s64 = 3;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r7,r11,1928
	ctx.r7.s64 = r11.s64 + 1928;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,1928
	ctx.r6.s64 = ctx.r9.s64 + 1928;
	// rlwinm r27,r9,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r28,r7,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r6,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// rlwinm r29,r7,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r10,23140(r11)
	PPC_STORE_U32(r11.u32 + 23140, ctx.r10.u32);
	// stwx r10,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r10.u32);
	// stw r4,23144(r11)
	PPC_STORE_U32(r11.u32 + 23144, ctx.r4.u32);
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r3.u32);
	// stw r25,23140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23140, r25.u32);
	// stw r5,23144(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23144, ctx.r5.u32);
loc_825595EC:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,1928
	ctx.r10.s64 = r11.s64 + 1928;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stwx r5,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r5.u32);
	// stw r8,23140(r11)
	PPC_STORE_U32(r11.u32 + 23140, ctx.r8.u32);
	// stw r26,23144(r11)
	PPC_STORE_U32(r11.u32 + 23144, r26.u32);
	// bl 0x82558330
	sub_82558330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// ble cr6,0x8255968c
	if (!cr6.gt) goto loc_8255968C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82559664
	if (cr6.eq) goto loc_82559664;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82559668
	if (!cr6.eq) goto loc_82559668;
loc_82559664:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82559668:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r6,r11,23136
	ctx.r6.s64 = r11.s64 + 23136;
	// bl 0x82574248
	sub_82574248(ctx, base);
loc_8255968C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82559690"))) PPC_WEAK_FUNC(sub_82559690);
PPC_FUNC_IMPL(__imp__sub_82559690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82559694"))) PPC_WEAK_FUNC(sub_82559694);
PPC_FUNC_IMPL(__imp__sub_82559694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559698"))) PPC_WEAK_FUNC(sub_82559698);
PPC_FUNC_IMPL(__imp__sub_82559698) {
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
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,23436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 23436);
	// lwz r26,23452(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 23452);
	// lwz r25,23424(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 23424);
	// lwz r4,23432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 23432);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x82559808
	if (!cr6.gt) goto loc_82559808;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82558f08
	sub_82558F08(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82559808
	if (cr6.eq) goto loc_82559808;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r30,216
	r11.s64 = r30.s64 * 216;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,1928
	ctx.r6.s64 = ctx.r10.s64 + 1928;
	// rlwinm r29,r10,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,1928
	ctx.r5.s64 = ctx.r9.s64 + 1928;
	// rlwinm r27,r9,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r6,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// ori r7,r8,10
	ctx.r7.u64 = ctx.r8.u64 | 10;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,21408(r11)
	PPC_STORE_U32(r11.u32 + 21408, ctx.r7.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// stw r7,21480(r11)
	PPC_STORE_U32(r11.u32 + 21480, ctx.r7.u32);
	// extsw r28,r26
	r28.s64 = r26.s32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r27,8192
	r27.s64 = 536870912;
	// std r28,21448(r11)
	PPC_STORE_U64(r11.u32 + 21448, r28.u64);
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r7,r28
	ctx.r7.s64 = -r28.s64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r7,21424(r11)
	PPC_STORE_U64(r11.u32 + 21424, ctx.r7.u64);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stb r8,21416(r11)
	PPC_STORE_U8(r11.u32 + 21416, ctx.r8.u8);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,21496(r11)
	PPC_STORE_U64(r11.u32 + 21496, ctx.r4.u64);
	// ori r29,r27,14
	r29.u64 = r27.u64 | 14;
	// stb r8,21440(r11)
	PPC_STORE_U8(r11.u32 + 21440, ctx.r8.u8);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stb r8,21488(r11)
	PPC_STORE_U8(r11.u32 + 21488, ctx.r8.u8);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,21432(r11)
	PPC_STORE_U32(r11.u32 + 21432, r29.u32);
	// addi r7,r11,21480
	ctx.r7.s64 = r11.s64 + 21480;
	// stw r4,23140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23140, ctx.r4.u32);
	// addi r29,r3,2000
	r29.s64 = ctx.r3.s64 + 2000;
	// stwx r4,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r4.u32);
	// addi r11,r11,21408
	r11.s64 = r11.s64 + 21408;
	// stw r7,23144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23144, ctx.r7.u32);
	// stw r8,23140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23140, ctx.r8.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r11,23144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23144, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r29,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + r31.u32, r29.u32);
	// bl 0x82558330
	sub_82558330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// ble cr6,0x82559808
	if (!cr6.gt) goto loc_82559808;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825597e0
	if (cr6.eq) goto loc_825597E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825597e4
	if (!cr6.eq) goto loc_825597E4;
loc_825597E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825597E4:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r6,r11,23136
	ctx.r6.s64 = r11.s64 + 23136;
	// bl 0x82574248
	sub_82574248(ctx, base);
loc_82559808:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8255980C"))) PPC_WEAK_FUNC(sub_8255980C);
PPC_FUNC_IMPL(__imp__sub_8255980C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82559810"))) PPC_WEAK_FUNC(sub_82559810);
PPC_FUNC_IMPL(__imp__sub_82559810) {
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
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,23436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 23436);
	// lwz r4,23432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 23432);
	// lwz r26,23424(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 23424);
	// lwz r25,23452(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 23452);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82558f08
	sub_82558F08(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82559960
	if (cr6.eq) goto loc_82559960;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r30,216
	r11.s64 = r30.s64 * 216;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,1928
	ctx.r6.s64 = ctx.r10.s64 + 1928;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,1928
	ctx.r5.s64 = ctx.r9.s64 + 1928;
	// rlwinm r28,r9,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r29,r6,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r7,r8,10
	ctx.r7.u64 = ctx.r8.u64 | 10;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// stw r7,21408(r11)
	PPC_STORE_U32(r11.u32 + 21408, ctx.r7.u32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// stw r7,21480(r11)
	PPC_STORE_U32(r11.u32 + 21480, ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r7,r25
	ctx.r7.s64 = r25.s32;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,21424(r11)
	PPC_STORE_U64(r11.u32 + 21424, ctx.r7.u64);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// std r8,21496(r11)
	PPC_STORE_U64(r11.u32 + 21496, ctx.r8.u64);
	// li r27,2
	r27.s64 = 2;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,21416(r11)
	PPC_STORE_U8(r11.u32 + 21416, r27.u8);
	// stb r27,21488(r11)
	PPC_STORE_U8(r11.u32 + 21488, r27.u8);
	// addi r7,r11,21480
	ctx.r7.s64 = r11.s64 + 21480;
	// addi r5,r3,2000
	ctx.r5.s64 = ctx.r3.s64 + 2000;
	// stwx r8,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + r31.u32, ctx.r8.u32);
	// addi r11,r11,21408
	r11.s64 = r11.s64 + 21408;
	// stw r8,23140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23140, ctx.r8.u32);
	// stw r7,23144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23144, ctx.r7.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r8,23140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23140, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,23144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23144, r11.u32);
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r5.u32);
	// bl 0x82558330
	sub_82558330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// ble cr6,0x82559960
	if (!cr6.gt) goto loc_82559960;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82559938
	if (cr6.eq) goto loc_82559938;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255993c
	if (!cr6.eq) goto loc_8255993C;
loc_82559938:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255993C:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r6,r11,23136
	ctx.r6.s64 = r11.s64 + 23136;
	// bl 0x82574248
	sub_82574248(ctx, base);
loc_82559960:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82559964"))) PPC_WEAK_FUNC(sub_82559964);
PPC_FUNC_IMPL(__imp__sub_82559964) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82559968"))) PPC_WEAK_FUNC(sub_82559968);
PPC_FUNC_IMPL(__imp__sub_82559968) {
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
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82559994
	if (!cr6.eq) goto loc_82559994;
	// lwz r4,23748(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23748);
	// bl 0x82558ab8
	sub_82558AB8(ctx, base);
	// b 0x825599a4
	goto loc_825599A4;
loc_82559994:
	// lwz r6,23752(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 23752);
	// lwz r5,23748(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 23748);
	// lwz r4,23744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 23744);
	// bl 0x82559168
	sub_82559168(ctx, base);
loc_825599A4:
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
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,76(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
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

__attribute__((alias("__imp__sub_825599FC"))) PPC_WEAK_FUNC(sub_825599FC);
PPC_FUNC_IMPL(__imp__sub_825599FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559A00"))) PPC_WEAK_FUNC(sub_82559A00);
PPC_FUNC_IMPL(__imp__sub_82559A00) {
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
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82559a30
	if (!cr6.eq) goto loc_82559A30;
	// lwz r4,23748(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23748);
	// bl 0x82558ab8
	sub_82558AB8(ctx, base);
	// b 0x82559a40
	goto loc_82559A40;
loc_82559A30:
	// lwz r6,23752(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 23752);
	// lwz r5,23748(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 23748);
	// lwz r4,23744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 23744);
	// bl 0x82559168
	sub_82559168(ctx, base);
loc_82559A40:
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,21636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82559AB4"))) PPC_WEAK_FUNC(sub_82559AB4);
PPC_FUNC_IMPL(__imp__sub_82559AB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559AB8"))) PPC_WEAK_FUNC(sub_82559AB8);
PPC_FUNC_IMPL(__imp__sub_82559AB8) {
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
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82559ae8
	if (!cr6.eq) goto loc_82559AE8;
	// lwz r4,23748(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23748);
	// bl 0x82558ab8
	sub_82558AB8(ctx, base);
	// b 0x82559af8
	goto loc_82559AF8;
loc_82559AE8:
	// lwz r6,23752(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 23752);
	// lwz r5,23748(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 23748);
	// lwz r4,23744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 23744);
	// bl 0x82559168
	sub_82559168(ctx, base);
loc_82559AF8:
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,21636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82559B74"))) PPC_WEAK_FUNC(sub_82559B74);
PPC_FUNC_IMPL(__imp__sub_82559B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559B78"))) PPC_WEAK_FUNC(sub_82559B78);
PPC_FUNC_IMPL(__imp__sub_82559B78) {
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
	// addi r27,r3,23428
	r27.s64 = ctx.r3.s64 + 23428;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82559B98:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82559bd4
	if (cr6.eq) goto loc_82559BD4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82559bc4
	if (cr6.eq) goto loc_82559BC4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82559be0
	if (!cr6.eq) goto loc_82559BE0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82559810
	sub_82559810(ctx, base);
	// b 0x82559be0
	goto loc_82559BE0;
loc_82559BC4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82559698
	sub_82559698(ctx, base);
	// b 0x82559be0
	goto loc_82559BE0;
loc_82559BD4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82559460
	sub_82559460(ctx, base);
loc_82559BE0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x82559b98
	if (cr6.lt) goto loc_82559B98;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,23424
	ctx.r3.s64 = r31.s64 + 23424;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// stw r28,23468(r31)
	PPC_STORE_U32(r31.u32 + 23468, r28.u32);
	// stw r28,23508(r31)
	PPC_STORE_U32(r31.u32 + 23508, r28.u32);
	// stw r28,23548(r31)
	PPC_STORE_U32(r31.u32 + 23548, r28.u32);
	// stw r28,23588(r31)
	PPC_STORE_U32(r31.u32 + 23588, r28.u32);
	// stw r28,23628(r31)
	PPC_STORE_U32(r31.u32 + 23628, r28.u32);
	// stw r28,23668(r31)
	PPC_STORE_U32(r31.u32 + 23668, r28.u32);
	// stw r28,23708(r31)
	PPC_STORE_U32(r31.u32 + 23708, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82559C24"))) PPC_WEAK_FUNC(sub_82559C24);
PPC_FUNC_IMPL(__imp__sub_82559C24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82559C28"))) PPC_WEAK_FUNC(sub_82559C28);
PPC_FUNC_IMPL(__imp__sub_82559C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C2C"))) PPC_WEAK_FUNC(sub_82559C2C);
PPC_FUNC_IMPL(__imp__sub_82559C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559C30"))) PPC_WEAK_FUNC(sub_82559C30);
PPC_FUNC_IMPL(__imp__sub_82559C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C34"))) PPC_WEAK_FUNC(sub_82559C34);
PPC_FUNC_IMPL(__imp__sub_82559C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559C38"))) PPC_WEAK_FUNC(sub_82559C38);
PPC_FUNC_IMPL(__imp__sub_82559C38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C3C"))) PPC_WEAK_FUNC(sub_82559C3C);
PPC_FUNC_IMPL(__imp__sub_82559C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559C40"))) PPC_WEAK_FUNC(sub_82559C40);
PPC_FUNC_IMPL(__imp__sub_82559C40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x82559c54
	if (cr6.eq) goto loc_82559C54;
	// li r11,0
	r11.s64 = 0;
loc_82559C54:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C5C"))) PPC_WEAK_FUNC(sub_82559C5C);
PPC_FUNC_IMPL(__imp__sub_82559C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559C60"))) PPC_WEAK_FUNC(sub_82559C60);
PPC_FUNC_IMPL(__imp__sub_82559C60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82559c74
	if (cr6.lt) goto loc_82559C74;
	// li r11,0
	r11.s64 = 0;
loc_82559C74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C7C"))) PPC_WEAK_FUNC(sub_82559C7C);
PPC_FUNC_IMPL(__imp__sub_82559C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559C80"))) PPC_WEAK_FUNC(sub_82559C80);
PPC_FUNC_IMPL(__imp__sub_82559C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_82559C84"))) PPC_WEAK_FUNC(sub_82559C84);
PPC_FUNC_IMPL(__imp__sub_82559C84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559C88"))) PPC_WEAK_FUNC(sub_82559C88);
PPC_FUNC_IMPL(__imp__sub_82559C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r4,824
	ctx.r10.s64 = ctx.r4.s64 * 824;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x82559d20
	if (!cr6.lt) goto loc_82559D20;
loc_82559CB8:
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r8,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r8.s64 = r11.s32 >> 3;
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x82559ce4
	if (cr6.eq) goto loc_82559CE4;
	// li r11,0
	r11.s64 = 0;
loc_82559CE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82559d38
	if (!cr6.eq) goto loc_82559D38;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82559d00
	if (cr6.lt) goto loc_82559D00;
	// li r11,0
	r11.s64 = 0;
loc_82559D00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82559d14
	if (cr6.eq) goto loc_82559D14;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82559d18
	goto loc_82559D18;
loc_82559D14:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
loc_82559D18:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82559cb8
	if (cr6.lt) goto loc_82559CB8;
loc_82559D20:
	// li r11,0
	r11.s64 = 0;
loc_82559D24:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82559d44
	if (cr6.eq) goto loc_82559D44;
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82559D38:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x82559d24
	goto loc_82559D24;
loc_82559D44:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82559d58
	if (!cr6.eq) goto loc_82559D58;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82559D58:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82559d88
	if (!cr6.gt) goto loc_82559D88;
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmadds f1,f7,f8,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f13.f64));
	// blr 
	return;
loc_82559D88:
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
}

__attribute__((alias("__imp__sub_82559D8C"))) PPC_WEAK_FUNC(sub_82559D8C);
PPC_FUNC_IMPL(__imp__sub_82559D8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559D90"))) PPC_WEAK_FUNC(sub_82559D90);
PPC_FUNC_IMPL(__imp__sub_82559D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r4,824
	ctx.r10.s64 = ctx.r4.s64 * 824;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
}

__attribute__((alias("__imp__sub_82559DA0"))) PPC_WEAK_FUNC(sub_82559DA0);
PPC_FUNC_IMPL(__imp__sub_82559DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559DA4"))) PPC_WEAK_FUNC(sub_82559DA4);
PPC_FUNC_IMPL(__imp__sub_82559DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559DA8"))) PPC_WEAK_FUNC(sub_82559DA8);
PPC_FUNC_IMPL(__imp__sub_82559DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r4,824
	ctx.r10.s64 = ctx.r4.s64 * 824;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_82559DB4"))) PPC_WEAK_FUNC(sub_82559DB4);
PPC_FUNC_IMPL(__imp__sub_82559DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559DB8"))) PPC_WEAK_FUNC(sub_82559DB8);
PPC_FUNC_IMPL(__imp__sub_82559DB8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82559df8
	if (cr6.eq) goto loc_82559DF8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82559dfc
	if (!cr6.eq) goto loc_82559DFC;
loc_82559DF8:
	// li r11,0
	r11.s64 = 0;
loc_82559DFC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r9,-25944
	ctx.r5.s64 = ctx.r9.s64 + -25944;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne cr6,0x82559ea8
	if (!cr6.eq) goto loc_82559EA8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82559e74
	if (cr6.lt) goto loc_82559E74;
	// bne cr6,0x82559ea0
	if (!cr6.eq) goto loc_82559EA0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-26176
	ctx.r5.s64 = r11.s64 + -26176;
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
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x82559e9c
	goto loc_82559E9C;
loc_82559E74:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-26192
	ctx.r5.s64 = r11.s64 + -26192;
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
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82559E9C:
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82559EA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_82559EA8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82559eb8
	if (cr6.lt) goto loc_82559EB8;
	// li r29,1
	r29.s64 = 1;
loc_82559EB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82559EC8"))) PPC_WEAK_FUNC(sub_82559EC8);
PPC_FUNC_IMPL(__imp__sub_82559EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82559ECC"))) PPC_WEAK_FUNC(sub_82559ECC);
PPC_FUNC_IMPL(__imp__sub_82559ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559ED0"))) PPC_WEAK_FUNC(sub_82559ED0);
PPC_FUNC_IMPL(__imp__sub_82559ED0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82559db8
	sub_82559DB8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82559f38
	if (cr6.eq) goto loc_82559F38;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82559f1c
	if (!cr6.gt) goto loc_82559F1C;
loc_82559F04:
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
	// bgt cr6,0x82559f04
	if (cr6.gt) goto loc_82559F04;
loc_82559F1C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82554300
	sub_82554300(ctx, base);
loc_82559F38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82559F48"))) PPC_WEAK_FUNC(sub_82559F48);
PPC_FUNC_IMPL(__imp__sub_82559F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559F4C"))) PPC_WEAK_FUNC(sub_82559F4C);
PPC_FUNC_IMPL(__imp__sub_82559F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559F50"))) PPC_WEAK_FUNC(sub_82559F50);
PPC_FUNC_IMPL(__imp__sub_82559F50) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 920, ctx.r10.u32);
	// blt cr6,0x8255a0b4
	if (cr6.lt) goto loc_8255A0B4;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x8255a0b4
	if (!cr6.lt) goto loc_8255A0B4;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// beq cr6,0x8255a0b4
	if (cr6.eq) goto loc_8255A0B4;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r8,236(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r30,56(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// bl 0x82559db8
	sub_82559DB8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8255a0b4
	if (cr6.eq) goto loc_8255A0B4;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82553998
	sub_82553998(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a04c
	if (cr6.eq) goto loc_8255A04C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82553998
	sub_82553998(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a0b4
	if (cr6.eq) goto loc_8255A0B4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825541f0
	sub_825541F0(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, r27.s32, xer);
	// ble cr6,0x8255a0b4
	if (!cr6.gt) goto loc_8255A0B4;
loc_8255A04C:
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_8255A068:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	temp.f32 = float(f0.f64);
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x8255a068
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255A068;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255a0a4
	if (cr6.eq) goto loc_8255A0A4;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// li r5,804
	ctx.r5.s64 = 804;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8255A0A4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82554e80
	sub_82554E80(ctx, base);
loc_8255A0B4:
	// lwz r3,920(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
}

__attribute__((alias("__imp__sub_8255A0C0"))) PPC_WEAK_FUNC(sub_8255A0C0);
PPC_FUNC_IMPL(__imp__sub_8255A0C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8255A0C4"))) PPC_WEAK_FUNC(sub_8255A0C4);
PPC_FUNC_IMPL(__imp__sub_8255A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A0C8"))) PPC_WEAK_FUNC(sub_8255A0C8);
PPC_FUNC_IMPL(__imp__sub_8255A0C8) {
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
	// addi r9,r10,-25844
	ctx.r9.s64 = ctx.r10.s64 + -25844;
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

__attribute__((alias("__imp__sub_8255A120"))) PPC_WEAK_FUNC(sub_8255A120);
PPC_FUNC_IMPL(__imp__sub_8255A120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A124"))) PPC_WEAK_FUNC(sub_8255A124);
PPC_FUNC_IMPL(__imp__sub_8255A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A128"))) PPC_WEAK_FUNC(sub_8255A128);
PPC_FUNC_IMPL(__imp__sub_8255A128) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8255A128"))) PPC_WEAK_FUNC(sub_8255A128);
PPC_FUNC_IMPL(__imp__sub_8255A128) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255a360
	sub_8255A360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A12C"))) PPC_WEAK_FUNC(sub_8255A12C);
PPC_FUNC_IMPL(__imp__sub_8255A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A130"))) PPC_WEAK_FUNC(sub_8255A130);
PPC_FUNC_IMPL(__imp__sub_8255A130) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255a448
	sub_8255A448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A130"))) PPC_WEAK_FUNC(sub_8255A130);
PPC_FUNC_IMPL(__imp__sub_8255A130) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8255A134"))) PPC_WEAK_FUNC(sub_8255A134);
PPC_FUNC_IMPL(__imp__sub_8255A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A138"))) PPC_WEAK_FUNC(sub_8255A138);
PPC_FUNC_IMPL(__imp__sub_8255A138) {
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
	// mulli r3,r10,824
	ctx.r3.s64 = ctx.r10.s64 * 824;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255A19C"))) PPC_WEAK_FUNC(sub_8255A19C);
PPC_FUNC_IMPL(__imp__sub_8255A19C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A1A0"))) PPC_WEAK_FUNC(sub_8255A1A0);
PPC_FUNC_IMPL(__imp__sub_8255A1A0) {
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
	// ble cr6,0x8255a1d8
	if (!cr6.gt) goto loc_8255A1D8;
loc_8255A1C0:
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
	// bgt cr6,0x8255a1c0
	if (cr6.gt) goto loc_8255A1C0;
loc_8255A1D8:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8255a1fc
	if (!cr6.gt) goto loc_8255A1FC;
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
loc_8255A1FC:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,824
	ctx.r10.s64 = ctx.r10.s64 * 824;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8255a284
	if (cr6.eq) goto loc_8255A284;
loc_8255A218:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255a240
	if (!cr6.gt) goto loc_8255A240;
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
loc_8255A240:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r11,824
	ctx.r10.s64 = r11.s64 * 824;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x8255a268
	if (cr0.eq) goto loc_8255A268;
	// li r5,824
	ctx.r5.s64 = 824;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8255A268:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,824
	r30.s64 = r30.s64 + 824;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,824
	r11.s64 = r11.s64 * 824;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255a218
	if (!cr6.eq) goto loc_8255A218;
loc_8255A284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8255A288"))) PPC_WEAK_FUNC(sub_8255A288);
PPC_FUNC_IMPL(__imp__sub_8255A288) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255A28C"))) PPC_WEAK_FUNC(sub_8255A28C);
PPC_FUNC_IMPL(__imp__sub_8255A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A290"))) PPC_WEAK_FUNC(sub_8255A290);
PPC_FUNC_IMPL(__imp__sub_8255A290) {
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
	// addi r9,r11,-25956
	ctx.r9.s64 = r11.s64 + -25956;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8255a2d4
	if (!cr6.gt) goto loc_8255A2D4;
loc_8255A2BC:
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
	// bgt cr6,0x8255a2bc
	if (cr6.gt) goto loc_8255A2BC;
loc_8255A2D4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a2ec
	if (cr6.eq) goto loc_8255A2EC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8255A2EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255A2FC"))) PPC_WEAK_FUNC(sub_8255A2FC);
PPC_FUNC_IMPL(__imp__sub_8255A2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A300"))) PPC_WEAK_FUNC(sub_8255A300);
PPC_FUNC_IMPL(__imp__sub_8255A300) {
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
	// addi r9,r10,-25844
	ctx.r9.s64 = ctx.r10.s64 + -25844;
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

__attribute__((alias("__imp__sub_8255A358"))) PPC_WEAK_FUNC(sub_8255A358);
PPC_FUNC_IMPL(__imp__sub_8255A358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A35C"))) PPC_WEAK_FUNC(sub_8255A35C);
PPC_FUNC_IMPL(__imp__sub_8255A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A360"))) PPC_WEAK_FUNC(sub_8255A360);
PPC_FUNC_IMPL(__imp__sub_8255A360) {
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
	// addi r9,r11,-25844
	ctx.r9.s64 = r11.s64 + -25844;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8255a3a4
	if (!cr6.gt) goto loc_8255A3A4;
loc_8255A38C:
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
	// bgt cr6,0x8255a38c
	if (cr6.gt) goto loc_8255A38C;
loc_8255A3A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255a448
	sub_8255A448(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-25956
	ctx.r10.s64 = r11.s64 + -25956;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8255a3e0
	if (!cr6.gt) goto loc_8255A3E0;
loc_8255A3C8:
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
	// bgt cr6,0x8255a3c8
	if (cr6.gt) goto loc_8255A3C8;
loc_8255A3E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255A3F0"))) PPC_WEAK_FUNC(sub_8255A3F0);
PPC_FUNC_IMPL(__imp__sub_8255A3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A3F4"))) PPC_WEAK_FUNC(sub_8255A3F4);
PPC_FUNC_IMPL(__imp__sub_8255A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A3F8"))) PPC_WEAK_FUNC(sub_8255A3F8);
PPC_FUNC_IMPL(__imp__sub_8255A3F8) {
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
	// bl 0x8255a360
	sub_8255A360(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a430
	if (cr6.eq) goto loc_8255A430;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8255A430:
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

__attribute__((alias("__imp__sub_8255A444"))) PPC_WEAK_FUNC(sub_8255A444);
PPC_FUNC_IMPL(__imp__sub_8255A444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A448"))) PPC_WEAK_FUNC(sub_8255A448);
PPC_FUNC_IMPL(__imp__sub_8255A448) {
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
	// beq cr6,0x8255a52c
	if (cr6.eq) goto loc_8255A52C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255a4bc
	if (!cr6.eq) goto loc_8255A4BC;
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
	// beq cr6,0x8255a52c
	if (cr6.eq) goto loc_8255A52C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8255a138
	sub_8255A138(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8255a52c
	goto loc_8255A52C;
loc_8255A4BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a300
	sub_8255A300(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8255a4e8
	if (!cr6.gt) goto loc_8255A4E8;
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
loc_8255A4E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a1a0
	sub_8255A1A0(ctx, base);
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
	// bl 0x8255a360
	sub_8255A360(ctx, base);
loc_8255A52C:
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

__attribute__((alias("__imp__sub_8255A540"))) PPC_WEAK_FUNC(sub_8255A540);
PPC_FUNC_IMPL(__imp__sub_8255A540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A544"))) PPC_WEAK_FUNC(sub_8255A544);
PPC_FUNC_IMPL(__imp__sub_8255A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A548"))) PPC_WEAK_FUNC(sub_8255A548);
PPC_FUNC_IMPL(__imp__sub_8255A548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A54C"))) PPC_WEAK_FUNC(sub_8255A54C);
PPC_FUNC_IMPL(__imp__sub_8255A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A550"))) PPC_WEAK_FUNC(sub_8255A550);
PPC_FUNC_IMPL(__imp__sub_8255A550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A554"))) PPC_WEAK_FUNC(sub_8255A554);
PPC_FUNC_IMPL(__imp__sub_8255A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A558"))) PPC_WEAK_FUNC(sub_8255A558);
PPC_FUNC_IMPL(__imp__sub_8255A558) {
	PPC_FUNC_PROLOGUE();
	// b 0x8274bdb8
	sub_8274BDB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A558"))) PPC_WEAK_FUNC(sub_8255A558);
PPC_FUNC_IMPL(__imp__sub_8255A558) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8255A55C"))) PPC_WEAK_FUNC(sub_8255A55C);
PPC_FUNC_IMPL(__imp__sub_8255A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A560"))) PPC_WEAK_FUNC(sub_8255A560);
PPC_FUNC_IMPL(__imp__sub_8255A560) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x8255a574
	if (cr6.eq) goto loc_8255A574;
	// li r11,0
	r11.s64 = 0;
loc_8255A574:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A57C"))) PPC_WEAK_FUNC(sub_8255A57C);
PPC_FUNC_IMPL(__imp__sub_8255A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A580"))) PPC_WEAK_FUNC(sub_8255A580);
PPC_FUNC_IMPL(__imp__sub_8255A580) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8255a594
	if (cr6.lt) goto loc_8255A594;
	// li r11,0
	r11.s64 = 0;
loc_8255A594:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A59C"))) PPC_WEAK_FUNC(sub_8255A59C);
PPC_FUNC_IMPL(__imp__sub_8255A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A5A0"))) PPC_WEAK_FUNC(sub_8255A5A0);
PPC_FUNC_IMPL(__imp__sub_8255A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-25832
	ctx.r3.s64 = r11.s64 + -25832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A5AC"))) PPC_WEAK_FUNC(sub_8255A5AC);
PPC_FUNC_IMPL(__imp__sub_8255A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A5B0"))) PPC_WEAK_FUNC(sub_8255A5B0);
PPC_FUNC_IMPL(__imp__sub_8255A5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A5B4"))) PPC_WEAK_FUNC(sub_8255A5B4);
PPC_FUNC_IMPL(__imp__sub_8255A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A5B8"))) PPC_WEAK_FUNC(sub_8255A5B8);
PPC_FUNC_IMPL(__imp__sub_8255A5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r6,8124
	cr6.compare<uint32_t>(ctx.r6.u32, 8124, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A5E0"))) PPC_WEAK_FUNC(sub_8255A5E0);
PPC_FUNC_IMPL(__imp__sub_8255A5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A5E4"))) PPC_WEAK_FUNC(sub_8255A5E4);
PPC_FUNC_IMPL(__imp__sub_8255A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A5E8"))) PPC_WEAK_FUNC(sub_8255A5E8);
PPC_FUNC_IMPL(__imp__sub_8255A5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A5EC"))) PPC_WEAK_FUNC(sub_8255A5EC);
PPC_FUNC_IMPL(__imp__sub_8255A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A5F0"))) PPC_WEAK_FUNC(sub_8255A5F0);
PPC_FUNC_IMPL(__imp__sub_8255A5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
}

__attribute__((alias("__imp__sub_8255A5FC"))) PPC_WEAK_FUNC(sub_8255A5FC);
PPC_FUNC_IMPL(__imp__sub_8255A5FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6798
	sub_826C6798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A600"))) PPC_WEAK_FUNC(sub_8255A600);
PPC_FUNC_IMPL(__imp__sub_8255A600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A604"))) PPC_WEAK_FUNC(sub_8255A604);
PPC_FUNC_IMPL(__imp__sub_8255A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A608"))) PPC_WEAK_FUNC(sub_8255A608);
PPC_FUNC_IMPL(__imp__sub_8255A608) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_8255A60C"))) PPC_WEAK_FUNC(sub_8255A60C);
PPC_FUNC_IMPL(__imp__sub_8255A60C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A610"))) PPC_WEAK_FUNC(sub_8255A610);
PPC_FUNC_IMPL(__imp__sub_8255A610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r10,r4,832
	ctx.r10.s64 = ctx.r4.s64 * 832;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x8255a6a8
	if (!cr6.lt) goto loc_8255A6A8;
loc_8255A640:
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r8,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r8.s64 = r11.s32 >> 3;
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x8255a66c
	if (cr6.eq) goto loc_8255A66C;
	// li r11,0
	r11.s64 = 0;
loc_8255A66C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255a6c0
	if (!cr6.eq) goto loc_8255A6C0;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8255a688
	if (cr6.lt) goto loc_8255A688;
	// li r11,0
	r11.s64 = 0;
loc_8255A688:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a69c
	if (cr6.eq) goto loc_8255A69C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8255a6a0
	goto loc_8255A6A0;
loc_8255A69C:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
loc_8255A6A0:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x8255a640
	if (cr6.lt) goto loc_8255A640;
loc_8255A6A8:
	// li r11,0
	r11.s64 = 0;
loc_8255A6AC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a6cc
	if (cr6.eq) goto loc_8255A6CC;
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8255A6C0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8255a6ac
	goto loc_8255A6AC;
loc_8255A6CC:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x8255a6e0
	if (!cr6.eq) goto loc_8255A6E0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8255A6E0:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8255a710
	if (!cr6.gt) goto loc_8255A710;
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmadds f1,f7,f8,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f13.f64));
	// blr 
	return;
loc_8255A710:
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
}

__attribute__((alias("__imp__sub_8255A714"))) PPC_WEAK_FUNC(sub_8255A714);
PPC_FUNC_IMPL(__imp__sub_8255A714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A718"))) PPC_WEAK_FUNC(sub_8255A718);
PPC_FUNC_IMPL(__imp__sub_8255A718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r10,r4,832
	ctx.r10.s64 = ctx.r4.s64 * 832;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
}

__attribute__((alias("__imp__sub_8255A728"))) PPC_WEAK_FUNC(sub_8255A728);
PPC_FUNC_IMPL(__imp__sub_8255A728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A72C"))) PPC_WEAK_FUNC(sub_8255A72C);
PPC_FUNC_IMPL(__imp__sub_8255A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A730"))) PPC_WEAK_FUNC(sub_8255A730);
PPC_FUNC_IMPL(__imp__sub_8255A730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r10,r4,832
	ctx.r10.s64 = ctx.r4.s64 * 832;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 8);
}

__attribute__((alias("__imp__sub_8255A740"))) PPC_WEAK_FUNC(sub_8255A740);
PPC_FUNC_IMPL(__imp__sub_8255A740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A744"))) PPC_WEAK_FUNC(sub_8255A744);
PPC_FUNC_IMPL(__imp__sub_8255A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A748"))) PPC_WEAK_FUNC(sub_8255A748);
PPC_FUNC_IMPL(__imp__sub_8255A748) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r31,-1
	r31.s64 = -1;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255a78c
	if (cr6.eq) goto loc_8255A78C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255a790
	if (!cr6.eq) goto loc_8255A790;
loc_8255A78C:
	// li r11,0
	r11.s64 = 0;
loc_8255A790:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r9,-25776
	ctx.r5.s64 = ctx.r9.s64 + -25776;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne cr6,0x8255a878
	if (!cr6.eq) goto loc_8255A878;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8255a808
	if (cr6.lt) goto loc_8255A808;
	// bne cr6,0x8255a834
	if (!cr6.eq) goto loc_8255A834;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-25796
	ctx.r5.s64 = r11.s64 + -25796;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x8255a830
	goto loc_8255A830;
loc_8255A808:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-25812
	ctx.r5.s64 = r11.s64 + -25812;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_8255A830:
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8255A834:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8255a878
	if (cr6.lt) goto loc_8255A878;
	// lis r11,26214
	r11.s64 = 1717960704;
	// li r10,10
	ctx.r10.s64 = 10;
	// ori r9,r11,26215
	ctx.r9.u64 = r11.u64 | 26215;
	// divw r29,r31,r10
	r29.s32 = r31.s32 / ctx.r10.s32;
	// mulhw r8,r31,r9
	ctx.r8.s64 = (int64_t(r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r11.s64 = ctx.r8.s32 >> 2;
	// li r28,1
	r28.s64 = 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r6,r31
	r31.s64 = r31.s64 - ctx.r6.s64;
loc_8255A878:
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8255A890"))) PPC_WEAK_FUNC(sub_8255A890);
PPC_FUNC_IMPL(__imp__sub_8255A890) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8255A894"))) PPC_WEAK_FUNC(sub_8255A894);
PPC_FUNC_IMPL(__imp__sub_8255A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A898"))) PPC_WEAK_FUNC(sub_8255A898);
PPC_FUNC_IMPL(__imp__sub_8255A898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8832(r1)
	ea = -8832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// sth r10,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r10.u16);
	// addi r29,r1,644
	r29.s64 = ctx.r1.s64 + 644;
	// li r30,9
	r30.s64 = 9;
	// stw r9,8764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8764, ctx.r9.u32);
loc_8255A8DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255b2c8
	sub_8255B2C8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,812
	r29.s64 = r29.s64 + 812;
	// bge 0x8255a8dc
	if (!cr0.lt) goto loc_8255A8DC;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x8255a914
	if (!cr6.eq) goto loc_8255A914;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x8255a914
	if (!cr6.eq) goto loc_8255A914;
	// cmplwi cr6,r27,8124
	cr6.compare<uint32_t>(r27.u32, 8124, xer);
	// bne cr6,0x8255a914
	if (!cr6.eq) goto loc_8255A914;
	// li r11,1
	r11.s64 = 1;
loc_8255A914:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255a928
	if (!cr6.eq) goto loc_8255A928;
	// addi r28,r1,640
	r28.s64 = ctx.r1.s64 + 640;
	// li r27,8124
	r27.s64 = 8124;
loc_8255A928:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,812
	ctx.r5.s64 = 812;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mulli r11,r11,812
	r11.s64 = r11.s64 * 812;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,876(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 876);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r31,812
	ctx.r5.s64 = r31.s64 + 812;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// stw r28,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r9,-23120
	ctx.r8.s64 = ctx.r9.s64 + -23120;
	// stw r27,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274be08
	sub_8274BE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,8764(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8764);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,8832
	ctx.r1.s64 = ctx.r1.s64 + 8832;
}

__attribute__((alias("__imp__sub_8255A9A0"))) PPC_WEAK_FUNC(sub_8255A9A0);
PPC_FUNC_IMPL(__imp__sub_8255A9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8255A9A4"))) PPC_WEAK_FUNC(sub_8255A9A4);
PPC_FUNC_IMPL(__imp__sub_8255A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A9A8"))) PPC_WEAK_FUNC(sub_8255A9A8);
PPC_FUNC_IMPL(__imp__sub_8255A9A8) {
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
	// bl 0x8274bea8
	sub_8274BEA8(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25676
	ctx.r7.s64 = ctx.r8.s64 + -25676;
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255AA20"))) PPC_WEAK_FUNC(sub_8255AA20);
PPC_FUNC_IMPL(__imp__sub_8255AA20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AA24"))) PPC_WEAK_FUNC(sub_8255AA24);
PPC_FUNC_IMPL(__imp__sub_8255AA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AA28"))) PPC_WEAK_FUNC(sub_8255AA28);
PPC_FUNC_IMPL(__imp__sub_8255AA28) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8255b3a8
	sub_8255B3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274be50
	sub_8274BE50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255AA5C"))) PPC_WEAK_FUNC(sub_8255AA5C);
PPC_FUNC_IMPL(__imp__sub_8255AA5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AA60"))) PPC_WEAK_FUNC(sub_8255AA60);
PPC_FUNC_IMPL(__imp__sub_8255AA60) {
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
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r10.u32);
	// blt cr6,0x8255abe4
	if (cr6.lt) goto loc_8255ABE4;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x8255abe4
	if (!cr6.lt) goto loc_8255ABE4;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// lwz r3,21636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21636);
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
	// beq cr6,0x8255abe4
	if (cr6.eq) goto loc_8255ABE4;
	// lwz r3,21636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21636);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255abe4
	if (!cr6.eq) goto loc_8255ABE4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8255abe4
	if (!cr6.gt) goto loc_8255ABE4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8255a748
	sub_8255A748(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255abe4
	if (cr6.eq) goto loc_8255ABE4;
	// li r5,536
	ctx.r5.s64 = 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-25576
	ctx.r5.s64 = r11.s64 + -25576;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8255b278
	sub_8255B278(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r7,r10,-25664
	ctx.r7.s64 = ctx.r10.s64 + -25664;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// li r8,264
	ctx.r8.s64 = 264;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,880
	ctx.r3.s64 = 880;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255abc0
	if (cr6.eq) goto loc_8255ABC0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// li r5,804
	ctx.r5.s64 = 804;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r30,876(r31)
	PPC_STORE_U32(r31.u32 + 876, r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,812
	ctx.r3.s64 = r31.s64 + 812;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x8255abc4
	goto loc_8255ABC4;
loc_8255ABC0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8255ABC4:
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,-22376
	ctx.r10.s64 = r11.s64 + -22376;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274bdc0
	sub_8274BDC0(ctx, base);
loc_8255ABE4:
	// lwz r3,664(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
}

__attribute__((alias("__imp__sub_8255ABF0"))) PPC_WEAK_FUNC(sub_8255ABF0);
PPC_FUNC_IMPL(__imp__sub_8255ABF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8255ABF4"))) PPC_WEAK_FUNC(sub_8255ABF4);
PPC_FUNC_IMPL(__imp__sub_8255ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ABF8"))) PPC_WEAK_FUNC(sub_8255ABF8);
PPC_FUNC_IMPL(__imp__sub_8255ABF8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8255ac30
	if (!cr6.eq) goto loc_8255AC30;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x8255ac30
	if (!cr6.eq) goto loc_8255AC30;
	// cmplwi cr6,r6,8124
	cr6.compare<uint32_t>(ctx.r6.u32, 8124, xer);
	// bne cr6,0x8255ac30
	if (!cr6.eq) goto loc_8255AC30;
	// li r11,1
	r11.s64 = 1;
loc_8255AC30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255ad44
	if (cr6.eq) goto loc_8255AD44;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255ac70
	if (!cr6.eq) goto loc_8255AC70;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255ac70
	if (!cr6.eq) goto loc_8255AC70;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8255ac74
	if (cr6.eq) goto loc_8255AC74;
loc_8255AC70:
	// li r11,0
	r11.s64 = 0;
loc_8255AC74:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255ad44
	if (cr6.eq) goto loc_8255AD44;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mulli r11,r11,812
	r11.s64 = r11.s64 * 812;
	// mulli r10,r10,832
	ctx.r10.s64 = ctx.r10.s64 * 832;
	// extsw r31,r9
	r31.s64 = ctx.r9.s32;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r27,r11,4
	r27.s64 = r11.s64 + 4;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8255acf0
	if (cr6.eq) goto loc_8255ACF0;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_8255ACB4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x8255acd0
	if (!cr6.eq) goto loc_8255ACD0;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U64(r29.u32 + 16);
	// cmpld cr6,r9,r8
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, xer);
	// beq cr6,0x8255ace0
	if (cr6.eq) goto loc_8255ACE0;
loc_8255ACD0:
	// addi r31,r31,832
	r31.s64 = r31.s64 + 832;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255acb4
	if (!cr6.eq) goto loc_8255ACB4;
	// b 0x8255acf0
	goto loc_8255ACF0;
loc_8255ACE0:
	// li r5,812
	ctx.r5.s64 = 812;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82605748
	sub_82605748(ctx, base);
loc_8255ACF0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r11,832
	r11.s64 = r11.s64 * 832;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255ad44
	if (!cr6.eq) goto loc_8255AD44;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255ad44
	if (!cr6.gt) goto loc_8255AD44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255b410
	sub_8255B410(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,812
	ctx.r5.s64 = 812;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// bl 0x82605748
	sub_82605748(ctx, base);
loc_8255AD44:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255ad54
	if (cr6.eq) goto loc_8255AD54;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8255AD54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255AD58"))) PPC_WEAK_FUNC(sub_8255AD58);
PPC_FUNC_IMPL(__imp__sub_8255AD58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8255AD5C"))) PPC_WEAK_FUNC(sub_8255AD5C);
PPC_FUNC_IMPL(__imp__sub_8255AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AD60"))) PPC_WEAK_FUNC(sub_8255AD60);
PPC_FUNC_IMPL(__imp__sub_8255AD60) {
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
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,1224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1224, ctx.r10.u32);
	// blt cr6,0x8255b01c
	if (cr6.lt) goto loc_8255B01C;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x8255b01c
	if (!cr6.lt) goto loc_8255B01C;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
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
	// beq cr6,0x8255b01c
	if (cr6.eq) goto loc_8255B01C;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
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
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255b01c
	if (!cr6.eq) goto loc_8255B01C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r18,16
	r11.s64 = r18.s64 + 16;
	// stw r10,4(r18)
	PPC_STORE_U32(r18.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,8(r18)
	PPC_STORE_U32(r18.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r8,12(r18)
	PPC_STORE_U32(r18.u32 + 12, ctx.r8.u32);
	// lwz r7,28(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x8255ae24
	if (!cr6.gt) goto loc_8255AE24;
loc_8255AE0C:
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
	// bgt cr6,0x8255ae0c
	if (cr6.gt) goto loc_8255AE0C;
loc_8255AE24:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8255a748
	sub_8255A748(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255b01c
	if (cr6.eq) goto loc_8255B01C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8255af58
	if (!cr6.gt) goto loc_8255AF58;
	// li r22,0
	r22.s64 = 0;
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,28
	r11.s64 = 28;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r21,r29
	r21.u64 = r29.u64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// li r24,1
	r24.s64 = 1;
	// ld r25,96(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r19,-1
	r19.s64 = -1;
	// addi r30,r11,-25664
	r30.s64 = r11.s64 + -25664;
	// addi r29,r10,-25576
	r29.s64 = ctx.r10.s64 + -25576;
	// ld r26,104(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_8255AE90:
	// li r5,536
	ctx.r5.s64 = 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r23.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r24.u8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, r11.u64);
	// bl 0x8255b278
	sub_8255B278(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,112
	ctx.r8.s64 = 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rldicr r6,r22,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r22.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255af18
	if (cr6.eq) goto loc_8255AF18;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r19,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r19.u32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// stw r20,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r20.u32);
	// b 0x8255af1c
	goto loc_8255AF1C;
loc_8255AF18:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_8255AF1C:
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-21512
	ctx.r10.s64 = r11.s64 + -21512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274bdc0
	sub_8274BDC0(ctx, base);
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x8255ae90
	if (!cr0.eq) goto loc_8255AE90;
	// lwz r3,1224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x828e9440
	return;
loc_8255AF58:
	// li r5,536
	ctx.r5.s64 = 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// stw r23,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, r23.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r22,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, r22.u8);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-25576
	ctx.r5.s64 = r11.s64 + -25576;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8255b278
	sub_8255B278(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r7,r10,-25664
	ctx.r7.s64 = ctx.r10.s64 + -25664;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// rldicr r6,r22,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r22.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255aff8
	if (cr6.eq) goto loc_8255AFF8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r23.u32);
	// std r22,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r22.u64);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x8255affc
	goto loc_8255AFFC;
loc_8255AFF8:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_8255AFFC:
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r10,r11,-21512
	ctx.r10.s64 = r11.s64 + -21512;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274bdc0
	sub_8274BDC0(ctx, base);
loc_8255B01C:
	// lwz r3,1224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
}

__attribute__((alias("__imp__sub_8255B028"))) PPC_WEAK_FUNC(sub_8255B028);
PPC_FUNC_IMPL(__imp__sub_8255B028) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8255B02C"))) PPC_WEAK_FUNC(sub_8255B02C);
PPC_FUNC_IMPL(__imp__sub_8255B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B030"))) PPC_WEAK_FUNC(sub_8255B030);
PPC_FUNC_IMPL(__imp__sub_8255B030) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r5,532
	ctx.r5.s64 = 532;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r10.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r9,-25532
	ctx.r7.s64 = ctx.r9.s64 + -25532;
	// stw r8,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r8.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r7,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r7.u32);
	// li r31,-1
	r31.s64 = -1;
	// addi r30,r6,-25544
	r30.s64 = ctx.r6.s64 + -25544;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// lis r5,-32170
	ctx.r5.s64 = -2108293120;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r5,-23064
	ctx.r4.s64 = ctx.r5.s64 + -23064;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274be08
	sub_8274BE08(ctx, base);
	// li r5,536
	ctx.r5.s64 = 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stw r23,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, r23.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// lis r3,-32170
	ctx.r3.s64 = -2108293120;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r11,r3,-23072
	r11.s64 = ctx.r3.s64 + -23072;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274bdc0
	sub_8274BDC0(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8255b144
	if (!cr6.gt) goto loc_8255B144;
	// mtctr r11
	ctr.u64 = r11.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,-25548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25548);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-25552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,6240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6240);
	ctx.f11.f64 = double(temp.f32);
loc_8255B130:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f11.f64;
loc_8255B134:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x8255b134
	if (cr6.lt) goto loc_8255B134;
	// bdnz 0x8255b130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255B130;
loc_8255B144:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r9,5381
	ctx.r9.s64 = 5381;
	// addi r10,r11,14820
	ctx.r10.s64 = r11.s64 + 14820;
	// li r11,71
	r11.s64 = 71;
loc_8255B154:
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8255b154
	if (!cr6.eq) goto loc_8255B154;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r8,r10,-25568
	ctx.r8.s64 = ctx.r10.s64 + -25568;
	// li r10,84
	ctx.r10.s64 = 84;
loc_8255B180:
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255b180
	if (!cr6.eq) goto loc_8255B180;
	// li r29,0
	r29.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255ad60
	sub_8255AD60(ctx, base);
	// li r11,28
	r11.s64 = 28;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r27,r11,-25576
	r27.s64 = r11.s64 + -25576;
	// ld r25,88(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r26,r10,-25664
	r26.s64 = ctx.r10.s64 + -25664;
	// ld r24,80(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8255B1F4:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r8,524
	ctx.r8.s64 = 524;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// stw r23,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r23.u32);
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// bl 0x8255b278
	sub_8255B278(ctx, base);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r10,r11,-23056
	ctx.r10.s64 = r11.s64 + -23056;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274bdc0
	sub_8274BDC0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8255b1f4
	if (cr6.lt) goto loc_8255B1F4;
	// lwz r3,1208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
}

__attribute__((alias("__imp__sub_8255B270"))) PPC_WEAK_FUNC(sub_8255B270);
PPC_FUNC_IMPL(__imp__sub_8255B270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8255B274"))) PPC_WEAK_FUNC(sub_8255B274);
PPC_FUNC_IMPL(__imp__sub_8255B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B278"))) PPC_WEAK_FUNC(sub_8255B278);
PPC_FUNC_IMPL(__imp__sub_8255B278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ed878
	sub_828ED878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255B2C4"))) PPC_WEAK_FUNC(sub_8255B2C4);
PPC_FUNC_IMPL(__imp__sub_8255B2C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B2C8"))) PPC_WEAK_FUNC(sub_8255B2C8);
PPC_FUNC_IMPL(__imp__sub_8255B2C8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_8255B310:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	temp.f32 = float(f0.f64);
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x8255b310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255B310;
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

__attribute__((alias("__imp__sub_8255B330"))) PPC_WEAK_FUNC(sub_8255B330);
PPC_FUNC_IMPL(__imp__sub_8255B330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B334"))) PPC_WEAK_FUNC(sub_8255B334);
PPC_FUNC_IMPL(__imp__sub_8255B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B338"))) PPC_WEAK_FUNC(sub_8255B338);
PPC_FUNC_IMPL(__imp__sub_8255B338) {
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
	// addi r9,r11,-25820
	ctx.r9.s64 = r11.s64 + -25820;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8255b37c
	if (!cr6.gt) goto loc_8255B37C;
loc_8255B364:
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
	// bgt cr6,0x8255b364
	if (cr6.gt) goto loc_8255B364;
loc_8255B37C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255b394
	if (cr6.eq) goto loc_8255B394;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8255B394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255B3A4"))) PPC_WEAK_FUNC(sub_8255B3A4);
PPC_FUNC_IMPL(__imp__sub_8255B3A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B3A8"))) PPC_WEAK_FUNC(sub_8255B3A8);
PPC_FUNC_IMPL(__imp__sub_8255B3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-25676
	ctx.r9.s64 = r11.s64 + -25676;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8255b3d8
	if (!cr6.gt) goto loc_8255B3D8;
loc_8255B3C0:
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
	// bgt cr6,0x8255b3c0
	if (cr6.gt) goto loc_8255B3C0;
loc_8255B3D8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-25820
	ctx.r9.s64 = r11.s64 + -25820;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8255B3F0:
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
	// bgt cr6,0x8255b3f0
	if (cr6.gt) goto loc_8255B3F0;
}

__attribute__((alias("__imp__sub_8255B408"))) PPC_WEAK_FUNC(sub_8255B408);
PPC_FUNC_IMPL(__imp__sub_8255B408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B40C"))) PPC_WEAK_FUNC(sub_8255B40C);
PPC_FUNC_IMPL(__imp__sub_8255B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B410"))) PPC_WEAK_FUNC(sub_8255B410);
PPC_FUNC_IMPL(__imp__sub_8255B410) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255b44c
	if (!cr6.gt) goto loc_8255B44C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255B44C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r9,r11,832
	ctx.r9.s64 = r11.s64 * 832;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x8255b478
	if (cr0.eq) goto loc_8255B478;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x8255b2c8
	sub_8255B2C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8255b47c
	goto loc_8255B47C;
loc_8255B478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255B47C:
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

__attribute__((alias("__imp__sub_8255B490"))) PPC_WEAK_FUNC(sub_8255B490);
PPC_FUNC_IMPL(__imp__sub_8255B490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B494"))) PPC_WEAK_FUNC(sub_8255B494);
PPC_FUNC_IMPL(__imp__sub_8255B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B498"))) PPC_WEAK_FUNC(sub_8255B498);
PPC_FUNC_IMPL(__imp__sub_8255B498) {
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
	// bl 0x8255b3a8
	sub_8255B3A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255b4d0
	if (cr6.eq) goto loc_8255B4D0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8255B4D0:
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

__attribute__((alias("__imp__sub_8255B4E4"))) PPC_WEAK_FUNC(sub_8255B4E4);
PPC_FUNC_IMPL(__imp__sub_8255B4E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B4E8"))) PPC_WEAK_FUNC(sub_8255B4E8);
PPC_FUNC_IMPL(__imp__sub_8255B4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

